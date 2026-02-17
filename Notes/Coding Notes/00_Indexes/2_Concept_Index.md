# 🧠 Problems by Concept

```dataview
TABLE rows.file.link AS "Problem", rows.difficulty AS "Difficulty", rows.status AS "Status"
FROM "01_Problems"
WHERE concept != null
FLATTEN concept
GROUP BY concept
```