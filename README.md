# prog-7

wsl - - install
sudo apt update -y
sudo apt install ansible -y
mkdir ansible
cd ansible
nano inventory.ini
[local]
localhost ansible_connection=local
nano playbook.yml
- name: prg-7
  hosts: localhost
  tasks:
    - name:Print Hello world
      debug:
        msg:"hello world"

ansible-playbook -i inventory playbook.yml
