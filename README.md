# Digitale-Muellsensoren-fuer-saubere-Städte
Dies ist eine fusion aus den beiden Github Repositorys: https://github.com/Souy03/Routenplanung.git und https://github.com/Xi29kowa/clean-city-beacon-report.git

  Allgemeiner Kontext
    Dieses Repository enthält das Projekt „Digitale Müllsensoren für saubere Städte“, das im Rahmen eines Projektseminars am Lehrstuhl für Wirtschaftsinformatik 1 (WI1) der Friedrich-Alexander-Universität Erlangen-Nürnberg (FAU) entwickelt wurde.
    
  Modulübersicht
  
Routenoptimierung (HTML & Python)

      - Dateien: RoutenOptimierer.html, RouteOptimization (Original).py
      - Beschreibung: Eine interaktive Oberfläche zur Optimierung von Entleerungsrouten für Mülleimer. Es werden verschiedene Optimierungsmethoden unterstützt (z. B. genetischer Algorithmus, klassische VRP-Ansätze oder Schwarmintelligenz-Methoden).
      - Empfehlung: waste_baskets_with_hotspots.geojson in RoutenOptimierer.html hochladen Füllstände aktualisieren und Routenoptimieren
      - Verantwortlich: Souhaib Belkarim
      
  Füllstandprognose & Hotspot-Erkennung
    
      - Datei: waste_baskets_with_hotspots.geojson
      - Beschreibung: Eine erweiterte GeoJSON-Datendatei mit zusätzlichen Merkmalen (Feature Engineering). Mittels Clusteranalyse wurden darin Bereiche mit gehäuftem Abfallaufkommen (Müll-Hotspots) identifiziert
      - Empfehlung: Die Datei waste_baskets_with_hotspots.geojson kann gemeinsam mit der Routenplaner-Oberfläche RoutenOptimierer.html verwendet werden, um realitätsnahe Routenplanungen zu ermöglichen (z. B. durch Nutzung echter Standortdaten und identifizierter Hotspots).
      - Kartenvisualisierung
      - Datei: nbg_wastebaskets_with_ID_map.html
      - Beschreibung: Interaktive Leaflet-Karte, die die Standorte aller Mülleimer mit ihren eindeutigen WasteBasket-IDs zur Referenz und einfachen Zuordnung darstellt.
      - Verantwortlich: Entwicklung – Vincent Schreyer; Datenaufbereitung & Clustering – Lukas Lommer
      
  Sensorik (Arduino-Prototyp)
    
      - Datei: Arduino Code.ino
      - Beschreibung: Ein einfacher Prototyp zur Füllstandsmessung in Mülleimern, basierend auf einem ESP32-Mikrocontroller mit wasserdichtem Ultraschallsensor (JSN-SR04T) und einer LED-Anzeige. Der Sensor misst kontinuierlich den Abstand zum Abfall; bei Überschreiten eines   definierten Schwellwerts wird eine LED aktiviert. Der Prototyp ist funktionsfähig und für spätere Erweiterungen (z. B. Mobilfunk- oder Cloud-Anbindung) vorbereitet.
      - Zusätzliche Hinweise
      - Verantwortlich: Paul Städter
