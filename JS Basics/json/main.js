let jsonObj={};
function myfunction() {
    let x = document.getElementById("Customer").value;
    let y = document.getElementById("Product").value;
    let z = document.getElementById("color").value;
    let text;
    jsonObj[`${x}`]={
        "Name":x,
        "Product":y,
        "Color":z
    }
    console.log(jsonObj);
    let a=document.querySelector("#myselect");
    a.innerHTML+=`<option value=${x}>${x}</option>`;
}
document.querySelector("#myselect").addEventListener("input",(e)=>{
    if(e.target.value==="-1") return;
    document.querySelector(".Sample").innerHTML=`
    Name:${jsonObj[e.target.value]["Name"]} <br>
    Product:${jsonObj[e.target.value]["Product"]}`;
    document.querySelector(".Sample").style.backgroundColor=jsonObj[e.target.value]["Color"];
})