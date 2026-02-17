# 🌐 Problems by Platform

```dataview
TABLE rows.file.link AS "Problem", rows.difficulty AS "Difficulty", rows.status AS "Status"
FROM "01_Problems"
WHERE platform != null
GROUP BY platform
```