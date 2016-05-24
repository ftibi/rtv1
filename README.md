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
 	- il y a au moins un pas de calcul, donc ca revient a avoir une resolution
	- Sinon utiliser une solution analytique ou quadratique!

À faire
-------
- fonction de construction du plan image (centre, vecteur normal, taille)
	- pour creer le plan je vais utiliser les 2 vecteurs qui partent du centre
	- il va faloir faire des arrondis mais normalement on ne perd pas de resolution
- fonction de construction d'un rayon
	- *AB* = *OB* - *OA*
- fonction de construction d'un objet
- fonction de test de collision entre un objet et un rayon
	- peut avoir plusieurs resultats, on garde le premier en venant de la cam
- le calcul de ce qu'il se passe si il y a collision va dependre de plsr choses
	- transparence ? si oui il y aura une partie refraction
	- calcul de la normale à l'impact
	- tir du rayon secondaire vers la source de lumiere

> la couleur du pixel à afficher va dependre des angles, de l'intensité lumineuse,
> de la couleur de l'objet

> pour l'instant je considere la distance plan/camera constante ?

References
----------
[tutoriel Scratchapixel](http://www.scratchapixel.com/lessons/3d-basic-rendering/introduction-to-ray-tracing/ray-tracing-practical-example)

[Raytracing Wikipedia](https://en.wikipedia.org/wiki/Ray_tracing_(graphics))

[Equation plan Wikipedia](https://fr.wikipedia.org/wiki/Plan_(math%C3%A9matiques)#D.C3.A9finition_par_un_vecteur_normal_et_un_point)
