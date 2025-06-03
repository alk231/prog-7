- name: Experiment 7 - Run Task on Localhost
  hosts: localhost
  connection: local
  tasks:
    - name: Print Hello
      debug:
        msg: "Hello from Ansible on Windows via WSL!"
