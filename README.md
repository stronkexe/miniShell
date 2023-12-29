## `Creating a Simple Shell, right?`
<p align="center">
  <img src="https://user-images.githubusercontent.com/94312066/176995556-8acdebda-a456-407b-a4b0-b232f8d039c5.gif" border="3" width="500px" alt="minishell" />
</p>
<br/>
<pre>
  The main goal is to build a simplified Unix shell, which is a command-line interface that allows users 
to interact with their computer by running various commands.
  <br />
  This project serves as a comprehensive introduction to system programming, Unix concepts and command-line interfaces.
It requires a good understanding of C programming, system calls, and process management. It's also an opportunity for 
us to gain practical experience in building a fundamental piece of software that is used daily by many developers and 
system administrators.

Here are some key aspects and objectives of the Minishell project:

- Basic Shell Functionality: We are tasked with creating a basic shell that can handle common shell operations like 
  executing commands, handling arguments, and managing processes. The shell should provide a prompt where users can 
  enter commands.

* Built-in Commands: Minishell typically includes the implementation of some built-in shell commands like cd, echo,
  and export. These commands should work similarly to their counterparts in popular Unix shells like Bash.

- Path Resolution: The shell should be able to locate and execute external commands (i.e., programs or scripts located 
  in the system's directories). This involves parsing the user's input to determine which command to run and finding
  its location in the system.

* Redirection and Pipes: We are often required to implement input/output redirection (<, >) and command pipelines (|)
  to allow users to manipulate input and output streams.

- Environment Variables: Minishell should support environment variables, including setting, retrieving, and modifying
  them using commands like export and unset.

* Error Handling: Proper error handling is crucial. The shell should report meaningful error messages when users enter
  invalid commands or when commands fail to execute.

- Signals and Process Management: We learn to handle signals (e.g., Ctrl+C for interrupt) and manage processes 
  (e.g., background and foreground processes).

* Quoting and Escaping: Proper handling of quotes (' and ") and escape characters (\) is essential to correctly parse
  command arguments and preserve their intended meanings.

- Memory Management: Managing memory efficiently is crucial to prevent memory leaks and crashes in the shell.

* Prompt Customization: We can add additional features to customize the shell prompt and make it more user-friendly.

- Scripting: Implementing shell scripting capabilities is an advanced feature that some Minishell projects may include
  and it allows users to create and execute shell scripts.
</pre>
