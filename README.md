# Followbot

Its a bot that follows!


## Editor settings:
- Project uses a default tab size of 2 spaces.
- A C++.sublime-settings file is included for sublime text users.

## Installing dependencies:
1. Ensure you have a github SSH key setup.
2. ```./configure```

## Building:
1. ```make```

## Running:
1. Note the name of your project root directory. If cloned from GIT without renaming,
   it will be $ROOT_DIR = cs403-semester-project. This is the package name.
2. Replace $ROOT_DIR with the name of your root directory.
	```rosrun $ROOT_DIR followbot```
3. Run the spencer library.
	```./launch_spencer.bash```

## Run tests:
1. ```make test```

* PeopleTracker tests will fail unless spencer is running, and a person is being tracked by spencer.

## Cleanup:
1. ```make clean```