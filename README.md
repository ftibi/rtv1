RTv1
====

Notes
-----
- penser aux differentes specificites des materiaux assez tot
- il doit etre possible d'observer la scene depuis n'importe ou
	(il faut avoir ca en tete pour le tracer des rayons)
- apparemment je n'ai pas besoin de stocker la scene, il me suffit de connaitre
	la position/orientation du plan image, et la position des objets dans la scene

À faire
-------
- fonction de construction d'un rayon
- fonction de construction d'un objet
- fonction de test de collision entre un objet et un rayon
- le calcul de ce qu'il se passe si il y a collision va dependre de plsr choses
	- transparence ? si oui il y aura une partie refraction
	- calcul de la normale à l'impact
	- tir du rayon secondaire vers la source de lumiere

> la couleur du pixel à afficher va dependre des angles, de l'intensité lumineuse,
> de la couleur de l'objet


References
----------
[tutoriel Scratchapixel](http://www.scratchapixel.com/lessons/3d-basic-rendering/introduction-to-ray-tracing/ray-tracing-practical-example)
[Raytracing Wikipedia](https://en.wikipedia.org/wiki/Ray_tracing_(graphics))
