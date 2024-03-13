// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Custom/MyShader"
{
    Properties
    {
        _Color ("Color", Color) = (1,1,1,1)
        _OutlineColor ("Outline Color", Color) = (0,0,0,1)
        _OutlineWidth ("Outline Width", Range(0, 1)) = 0.01
        _MainTex ("Albedo (RGB)", 2D) = "white" {}
        _Glossiness ("Smoothness", Range(0,1)) = 0.5
        _Metallic ("Metallic", Range(0,1)) = 0.0
    }
//    SubShader
//    {
//        Tags { "RenderType"="Opaque" }
//        LOD 200
//
//        CGPROGRAM
//        // Physically based Standard lighting model, and enable shadows on all light types
//        #pragma surface surf Standard fullforwardshadows
//
//        // Use shader model 3.0 target, to get nicer looking lighting
//        #pragma target 3.0
//
//        sampler2D _MainTex;
//
//        struct Input
//        {
//            float2 uv_MainTex;
//        };
//
//        half _Glossiness;
//        half _Metallic;
//        fixed4 _Color;
//
//        // Add instancing support for this shader. You need to check 'Enable Instancing' on materials that use the shader.
//        // See https://docs.unity3d.com/Manual/GPUInstancing.html for more information about instancing.
//        // #pragma instancing_options assumeuniformscaling
//        UNITY_INSTANCING_BUFFER_START(Props)
//            // put more per-instance properties here
//        UNITY_INSTANCING_BUFFER_END(Props)
//
//        void surf (Input IN, inout SurfaceOutputStandard o)
//        {
//            // Albedo comes from a texture tinted by color
//            fixed4 c = tex2D (_MainTex, IN.uv_MainTex) * _Color;
//            o.Albedo = c.rgb;
//            // Metallic and smoothness come from slider variables
//            o.Metallic = _Metallic;
//            o.Smoothness = _Glossiness;
//            o.Alpha = c.a;
//        }
//        ENDCG
//    }
    SubShader {
        Tags {
          "Queue" = "Transparent+110"
          "RenderType" = "Transparent"
          "DisableBatching" = "True"
        }

        Pass {
          Name "Fill"
          Cull Off
          ZTest [_ZTest]
          ZWrite Off
          Blend SrcAlpha OneMinusSrcAlpha
          ColorMask RGB

          Stencil {
            Ref 1
            Comp NotEqual
          }

          CGPROGRAM
          #include "UnityCG.cginc"

          #pragma vertex vert
          #pragma fragment frag

          struct appdata {
            float4 vertex : POSITION;
            float3 normal : NORMAL;
            float3 smoothNormal : TEXCOORD3;
            UNITY_VERTEX_INPUT_INSTANCE_ID
          };

          struct v2f {
            float4 position : SV_POSITION;
            fixed4 color : COLOR;
            UNITY_VERTEX_OUTPUT_STEREO
          };

          uniform fixed4 _OutlineColor;
          uniform float _OutlineWidth;

          v2f vert(appdata input) {
            v2f output;

            UNITY_SETUP_INSTANCE_ID(input);
            UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(output);

            float3 normal = any(input.smoothNormal) ? input.smoothNormal : input.normal;
            float3 viewPosition = UnityObjectToViewPos(input.vertex);
            float3 viewNormal = normalize(mul((float3x3)UNITY_MATRIX_IT_MV, normal));

            output.position = UnityViewToClipPos(viewPosition + viewNormal * -viewPosition.z * _OutlineWidth / 1000.0);
            output.color = _OutlineColor;

            return output;
          }

          fixed4 frag(v2f input) : SV_Target {
            return input.color;
          }
          ENDCG
        }
    }
//    FallBack "Diffuse"
//    SubShader 
//    {
//        Tags {"Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent"}
//        ZWrite Off
//        Blend SrcAlpha OneMinusSrcAlpha
//        Cull front 
//        LOD 100
//
//        Pass 
//        {
//            CGPROGRAM
//
//            #pragma vertex vert alpha
//            #pragma fragment frag alpha
//
//            #include "UnityCG.cginc"
//
//            struct appdata_t 
//            {
//                float4 vertex   : POSITION;
//                float2 texcoord : TEXCOORD0;
//            };
//
//            struct v2f 
//            {
//                float4 vertex  : SV_POSITION;
//                half2 texcoord : TEXCOORD0;
//            };
//
//            sampler2D _MainTex;
//            float4 _MainTex_ST;
//            float4 _Color;
//
//            v2f vert (appdata_t v)
//            {
//                v2f o;
//
//                o.vertex     = UnityObjectToClipPos(v.vertex);
//                v.texcoord.x = 1 - v.texcoord.x;
//                o.texcoord   = TRANSFORM_TEX(v.texcoord, _MainTex);
//
//                return o;
//            }
//
//            fixed4 frag (v2f i) : SV_Target
//            {
//                fixed4 col = tex2D(_MainTex, i.texcoord) * _Color; // multiply by _Color
//                return col;
//            }
//
//            ENDCG
//        }
//    }
}
