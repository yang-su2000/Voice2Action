# Voice2Action

- 2024-02-14 Update: Our Unity package "Voice2Action" v-0.0.1 is open for beta testing!

- 2024-03-14 Update: v-0.0.2 is up with embedding-based retrieval system implemented!

[Voice2Action Unity Package v-0.0.2](https://yang-su2000.github.io/Voice2Action/)

This package uses LLMs (Large Language Models) to analyze user instruction through action and entity extraction, and divides the execution tasks into canonical interaction subsets with error prevention from the game engine feedback. It combines an "Expand" interaction technique to create an innovative selection and manipulation mechanism for enhanced user experiences.

## Demo

- Unreal Engine Implementation for [Palatial XR](https://www.palatialxr.com/)
    - [Voice2Action](https://drive.google.com/file/d/1EwTCqu7iozDh2nMcsLoKnApDkJjJKr62/view?usp=sharing)
- Unity Engine Implementation (this package)
    - [Voice2Action v-0.0.2](https://drive.google.com/file/d/1-oX29FMBOSsyLyPjkCLYAjmq1VmbaXdR/view?usp=drive_link)
    - [Voice2Action v-0.0.1](https://drive.google.com/file/d/1vt0LqiVqYMkwFLfSo1ZvKmSYNohes_Mq/view?usp=sharing)
    - [Voice2Action v-0.0.0](https://drive.google.com/file/d/159XWeBlK_tdkoEv76xrA5s78dy4UEPfS/view?usp=sharing)

## Advantages

- Efficiency: Extremely **Low Cost**
    - Based on our testing in the "Samples/CityDemo" with 2 ** (7+3) = 1024 function call combinations (with infinite argument combinations) and 100 * 32 = 3.2k user interaction (including multi-turn due to execution failure), our OpenAI API (with gpt-3.5-turbo) total cost ~= 5 USD, which converts to 0.16 cents per interaction!
- Domain Adaptation: Highly **Customizable**
    - User can customize their actions and properties by easily inheriting our Runtime scripts, see examples in the Advanced section for more details.
    - We can also fine-tune our models based on domain-specific manipulation category requirements, stay tuned!
- Scalability: Highly **Parallelizable**
    - While the current package is a minimal implementation of the full Voice2Action framework, all property classes can do their jobs in parallel without any intervention as they belongs to different manipulation categories.
    - More importantly, by adapting Unity (Unreal, or other game engine) functional impact analysis (including controlled experiments, parameterized testing, dependency analysis and [profiling](https://docs.unity3d.com/Manual/Profiler.html)), we are able to integrate the LLMs function calling and feedback ability into Unity runtime, while maintaining the parallelizability of each scripting and rendering components, hence this package is an initial attempt as a multi-agent collaboration framework for game engine code execution.

## Paper of this Package: Voice2Action

- [Full Paper](https://arxiv.org/abs/2310.00092) at Arxiv
- [Invited Talk](https://superagi.com/agi-leap-summit/) at [SuperAGI](https://github.com/TransformerOptimus/SuperAGI) Open Source Developer Conference
    - [Slides](https://docs.google.com/presentation/d/1nB0ITNqnGCjYhDXntcIfWOXTMKZqVVJ8l_gE9LOtU_w/edit?usp=sharing)

**Abstract**

Large Language Models (LLMs) are trained and aligned to follow natural language instructions with only a handful of examples, and they are prompted as task-driven autonomous agents to adapt to various sources of execution environments. However, deploying agent LLMs in virtual reality (VR) has been challenging due to the lack of efficiency in online interactions and the complex manipulation categories in 3D environments. In this work, we propose Voice2Action, a framework that hierarchically analyzes customized voice signals and textual commands through action and entity extraction and divides the execution tasks into canonical interaction subsets in real-time with error prevention from environment feedback. Experiment results in an urban engineering VR environment with synthetic instruction data show that Voice2Action can perform more efficiently and accurately than approaches without optimizations.

## Milestones

### Screenshots

- VR Multimodal Interaction in City Planning

<img src="fig/linkedin_multimodal_xr2.jpg" width="800" height="450">

- Voice2Action Hirerachy

<img src="fig/Voice2Action_overview2.PNG" width="800" height="525">

- Voice2Action Example

<img src="fig/Voice2Action_example.PNG" width="800" height="375">

### Key Features

- **Hierarchical Analysis**
    - Advanced processing of voice signals and textual commands for precise action and entity extraction.

- **Real-Time Task Execution**
    - Rapid response to user commands, ensuring an immersive VR experience.

- **Customizable Interaction Sets**
    - Tailored to various VR scenarios, from urban planning to educational simulations.

- **Error Prevention**
    - Intelligent feedback mechanisms to minimize execution inaccuracies.

### Real-World Use Cases

- **Urban Planning and Engineering** 
    - One of the primary use cases demonstrated in the document is in urban engineering VR environments. 
    - Planners and architects can use Voice2Action to interact with a virtual model of a city, manipulating building layouts and planning urban spaces using voice commands. 
    - This can significantly enhance the efficiency and intuitiveness of urban planning processes.

- **Educational Tools and Simulations**
    - In educational settings, Voice2Action can be used to create interactive, VR-based learning environments. 
    - Students can interact with virtual laboratories, historical reconstructions, or complex scientific models using natural language, making learning more engaging and accessible.

- **Healthcare and Medical Training**
    - Voice2Action could be applied in medical training simulations, allowing medical students and professionals to practice procedures and diagnose virtual patients using voice commands. 
    - This would offer a hands-free, immersive learning experience.

- **Gaming and Interactive Entertainment**
    - In the gaming industry, Voice2Action can provide a more immersive and natural way for players to interact with the game environment, characters, and objects, using voice commands to perform actions or control the narrative.

- **Virtual Collaboration and Remote Workspaces**
    - In a remote working context, Voice2Action can be used to enhance virtual collaboration. 
    - Participants in a virtual meeting could interact with shared virtual objects, data visualizations, or models more intuitively using voice commands.

- **Accessibility Applications**
    - Voice2Action can enhance accessibility in virtual environments for individuals with mobility or dexterity limitations. 
    - By using voice commands to interact with virtual environments, it opens up new possibilities for users who might find traditional control methods challenging.

- **Interactive Art and Exhibitions**
    - Artists and exhibitors can use Voice2Action to create more engaging and interactive virtual galleries or installations. 
    - Visitors can interact with the art pieces or exhibit items through voice commands, adding a new layer of engagement.

- **Robotics and Industrial Simulations**
    - In industrial settings, Voice2Action could be used for controlling or simulating robotic processes. 
    - Engineers and technicians could issue voice commands to control virtual replicas of machinery or robots, enhancing safety and efficiency.

- **Emergency Response Training**
    - For training emergency responders, Voice2Action can create realistic, interactive scenarios where trainees must make quick decisions and interact with the environment under pressure, using voice commands.

- **Customer Service and Virtual Assistance**
    - In customer service, Voice2Action could power more advanced virtual assistants and customer service bots in VR environments, capable of understanding and executing more complex requests and tasks.

### Connect With Us

- [XR Collaboratory @ Cornell](https://xr.cornell.edu/collaboratory)
- Email (alphabetical order)
    - [en268@cornell.edu] for Grace Nho, XR Developer and Designer
    - [jx288@cornell.edu] for Jingze Xue, Game Developer and Designer
    - [ys724@cornell.edu] for Yang Su, Machine Learning Research Engineer

### Limitations and Future Work

- The current Voice2Action package only supports inference, i.e. you cannot fine-tune your model based on domain-specific action types. We plan to open source that in future versions.
- We plan to decouple the LLM feature and the Expand feature into different packages in future versions.
