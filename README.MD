<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Daily Question Tracker</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 0;
            background-color: #f4f4f9;
            color: #333;
        }
        .container {
            width: 80%;
            margin: auto;
            overflow: hidden;
        }
        header {
            background: #333;
            color: #fff;
            padding: 1rem 0;
            text-align: center;
        }
        table {
            width: 100%;
            border-collapse: collapse;
            margin: 2rem 0;
        }
        table th, table td {
            padding: 0.8rem;
            text-align: left;
            border-bottom: 1px solid #ddd;
        }
        table th {
            background: #333;
            color: #fff;
        }
        table tr:nth-child(even) {
            background: #f9f9f9;
        }
        table tr:hover {
            background: #f1f1f1;
        }
        .note {
            font-style: italic;
            color: #555;
        }
        footer {
            text-align: center;
            padding: 1rem;
            background: #333;
            color: #fff;
            position: absolute;
            width: 100%;
            bottom: 0;
        }
    </style>
</head>
<body>

    <header>
        <h1>Daily Question Tracker</h1>
    </header>

    <div class="container">
        <p>Welcome to my Daily Question Tracker! This page is dedicated to keeping track of the questions I explore each day. You can see the questions and their answers in the table below.</p>

        <h2>Daily Questions</h2>
        <table>
            <thead>
                <tr>
                    <th>Date</th>
                    <th>Question</th>
                    <th>Answer</th>
                    <th>Notes</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td>2024-08-01</td>
                    <td>How does the Fibonacci sequence work?</td>
                    <td>The Fibonacci sequence is a series where each number is the sum of the two preceding ones.</td>
                    <td class="note">Useful in algorithm design</td>
                </tr>
                <tr>
                    <td>2024-08-02</td>
                    <td>What is the purpose of unit testing?</td>
                    <td>Unit testing ensures individual parts of a program work correctly.</td>
                    <td class="note">Important for debugging</td>
                </tr>
                <tr>
                    <td>2024-08-03</td>
                    <td>How do you optimize a SQL query?</td>
                    <td>Use indexing and analyze query execution plans to improve performance.</td>
                    <td class="note">Critical for large databases</td>
                </tr>
                <!-- Add more rows here -->
            </tbody>
        </table>

        <p class="note">Note: Update this table daily with new questions and answers.</p>
    </div>

    <footer>
        <p>Keep learning and stay curious!</p>
    </footer>

</body>
</html>
