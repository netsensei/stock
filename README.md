Stock "starter" module
======================

Every Drupal project has a so-called "gluecode" module. It contains all project-
specific customizations.

Issue

Generally, developers gluecode modules tend to have a "fuzzy" architecture. How
a module is build differs from developer to developer and even from project to
project. Without a common architecture, it's harder for teams of developers to
work on projects.

* A new developer has a hard time internalizing a large gluecode modules
* It's harder to maintain different project as their overal architecture differs
from project to project
* Without a frame of reference, common architectural mistakes are made time and
again.

Best practices

This starter module tries to implement a basic strategy according to a few best
practices.

* Adhere to the Drupal coding standards.
* Group common callbacks in specific include files according to function
* Keep hook implementations terse at all time.
* Group hook implementations by API (formatters, blocks,...)
* Document through comments whenever needed.
* Callback names should be selfexplanatory.
* Define dependencies whenever you rely on external API's (CTools,...)
* Keep form logic together (builder + handlers)

How to use

1. Put the starter module in sites/*/modules/custom/
2. Enable the module
3. Remove/Add code, includes,... whatever you need.
4. Adhere to best practices at all times!

Optional: you could rename the module name & hook implementations to the name
of your project (i.e. myproject_init())

Particular functionality

The module itself doesn't cover the entire Drupal & contrib API's, of course. It
just implements a few very common hooks to get you started. If you want to know
how to implement common funcionality (ie multistep forms, render blocks,...),
please refer to the the Examples project which documents API by API specific use
cases.

Author

Matthias "Netsensei" Vandermaesen
http://www.colada.be

