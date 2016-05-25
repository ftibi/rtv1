RTv1
====

Notes
-----
- penser aux differentes specificites des materiaux assez tot
- il doit etre possible d'observer la scene depuis n'importe ou
	(il faut avoir ca en tete pour le tracer des rayons)
- apparemment je n'ai pas besoin de stocker la scene, il me suffit de connaitre
	la position/orientation du plan image, et la position des objets dans la scene
- qqpart je vais declarer in const tab de fonctions pour associer le type d'obj a une
	fonction de calcul de collision
- est-ce que la scene elle meme doit etre pixelisee ?? A priori non?
	- solution analytique ou quadratique!

À faire
-------
- Pq je segF lorsque j'augmente la position d'un objet > SIZE
	- peut etre implementer avec des long double ?
- mtn que j'ai un programme simple qui fct, il faut que je refactorise et que je reflechisse au prochaines etapes
- le calcul de ce qu'il se passe si il y a collision va dependre de plsr choses
	- transparence ? si oui il y aura une partie refraction
	- calcul de la normale à l'impact
	- tir du rayon secondaire vers la source de lumiere
- fonction de construction d'un objet(pour l'instant j'ai fais la sphere)
- fonction pour deplacer le plan
	- deplacer le plan
	- clear data
	- mettre les nvlles donnees dans data
	- reafficher l'image
- Est ce que je veux deplacer le plan, ou deplacer les objs en gardant un plan fixe? Cette solution
est p-e plus facile a implementer

> la couleur du pixel à afficher va dependre des angles, de l'intensité lumineuse,
> de la couleur de l'objet

> pour l'instant je considere la distance plan/camera constante ?


Algo test
---------
- definir un plan (??)
- pour chaque point du plan:
	- projeter un rayon et voir s'il rencontre un obstacle (fct sphere)
	- si on a rencontre un obstacle, allumer le pixel en rouge

Avant de rendre
---------------
- fonction pour free le plan image

References
----------
[tutoriel Scratchapixel](http://www.scratchapixel.com/lessons/3d-basic-rendering/introduction-to-ray-tracing/ray-tracing-practical-example)

[Raytracing Wikipedia](https://en.wikipedia.org/wiki/Ray_tracing_(graphics))

[Equation plan Wikipedia](https://fr.wikipedia.org/wiki/Plan_(math%C3%A9matiques)#D.C3.A9finition_par_un_vecteur_normal_et_un_point)
