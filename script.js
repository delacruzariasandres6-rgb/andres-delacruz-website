// ===== PROYECTOS (9 IMÁGENES) =====
const projects=[
{ id:1,title:"Proyecto 1",image:"img/Proyecto1.jpeg",description:"Proyecto 1",full:"Detalle" },
{ id:2,title:"Proyecto 2",image:"img/Proyecto2.jpeg",description:"Proyecto 2",full:"Detalle" },
{ id:3,title:"Proyecto 3",image:"img/Proyecto3.jpeg",description:"Proyecto 3",full:"Detalle" },
{ id:4,title:"Proyecto 4",image:"img/Proyecto4.jpeg",description:"Proyecto 4",full:"Detalle" },
{ id:5,title:"Proyecto 5",image:"img/Proyecto5.jpeg",description:"Proyecto 5",full:"Detalle" },
{ id:6,title:"Proyecto 6",image:"img/Proyecto6.jpeg",description:"Proyecto 6",full:"Detalle" },
{ id:7,title:"Proyecto 7",image:"img/Proyecto7.jpeg",description:"Proyecto 7",full:"Detalle" },
{ id:8,title:"Proyecto 8",image:"img/Proyecto8.jpeg",description:"Proyecto 8",full:"Detalle" },
{ id:9,title:"Proyecto 9",image:"img/Proyecto9.jpeg",description:"Proyecto 9",full:"Detalle" }
];

function renderProjects(){
  const grid=document.getElementById("projectsGrid");
  projects.forEach((p,i)=>{
    const div=document.createElement("div");
    div.className="project-card";
    div.style.animationDelay=(i*0.2)+"s";

    div.innerHTML=`
      <img src="${p.image}">
      <h3>${p.title}</h3>
      <button onclick="openModal(${p.id})">Ver más</button>
    `;

    grid.appendChild(div);
  });
}
renderProjects();

function openModal(id){
  const p=projects.find(x=>x.id===id);
  document.getElementById("modalTitle").innerText=p.title;
  document.getElementById("modalImage").src=p.image;
  document.getElementById("modalDescription").innerText=p.full;
  document.getElementById("projectModal").style.display="block";
}

function closeModal(){
  document.getElementById("projectModal").style.display="none";
}

function scrollToSection(id){
  document.getElementById(id).scrollIntoView({behavior:'smooth'});
}

// ===== CALCULADORA =====
let estado="menu";
let temp;

function print(t){
  document.getElementById("output").innerHTML+=t+"<br>";
}

function limpiar(){
  document.getElementById("output").innerHTML="";
}

function menu(){
  limpiar();
  print("CALCULADORA DE FISICA");
  print("1. Fisica Clasica");
  print("2. Oscilaciones");
  print("3. Electromagnetismo");
  print("4. Termodinamica");
  estado="cat";
}

function procesar(){
  let val=Number(document.getElementById("inputUser").value);
  document.getElementById("inputUser").value="";

  if(estado==="cat"){
    if(val===1){ print("MRU: ingresa v y t"); estado="mru"; }
    if(val===4){ print("Celsius:"); estado="temp"; }
  }
  else if(estado==="mru"){
    if(temp==null){ temp=val; print("t:"); }
    else{
      print("Resultado: "+(temp*val));
      temp=null;
      menu();
    }
  }
  else if(estado==="temp"){
    print("Resultado: "+(val+273.15)+" K");
    menu();
  }
}

window.onload=menu;