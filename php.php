<?php
// Verifica se os dados foram enviados via POST
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Captura os valores dos sliders do HTML
    $servo1 = $_POST["servo1"];
    $servo2 = $_POST["servo2"];
    $servo3 = $_POST["servo3"];
    $servo4 = $_POST["servo4"];
    
    // Envia os valores para o Arduino via porta serial
    $porta_serial = fopen("COM11", "w"); // Troque "COM3" pela porta serial correta
    fwrite($porta_serial, "$servo1,$servo2,$servo3,$servo4");
    fclose($porta_serial);
}
?>
