const projects = [
{title:"Simulación Física 1",img:"img/Proyecto1.jpeg",text:"Análisis de movimiento aplicado en sistemas computacionales."},
{title:"Modelo Matemático",img:"img/Proyecto2.jpeg",text:"Uso de ecuaciones para representar sistemas reales."},
{title:"Sistema Dinámico",img:"img/Proyecto3.jpeg",text:"Simulación interactiva de variables físicas."},
{title:"Procesamiento de Señales",img:"img/Proyecto4.jpeg",text:"Aplicación en tecnología y comunicación digital."},
{title:"Simulación en Software",img:"img/Proyecto5.jpeg",text:"Integración de física en programación."},
{title:"Análisis Experimental",img:"img/Proyecto6.jpeg",text:"Validación de resultados mediante datos reales."},
{title:"Sistema Inteligente",img:"img/Proyecto7.jpeg",text:"Aplicación en inteligencia artificial."},
{title:"Modelo Predictivo",img:"img/Proyecto8.jpeg",text:"Uso de algoritmos para predicción."},
{title:"Proyecto Final",img:"img/Proyecto9.jpeg",text:"Integración completa de física + software."}
];

const container = document.getElementById("projectsContainer");

projects.forEach(p=>{
  const div = document.createElement("div");
  div.className="project-block hidden";

  div.innerHTML = `
    <img src="${p.img}">
    <div class="project-text">
      <h2>${p.title}</h2>
      <p>${p.text}</p>
    </div>
  `;

  container.appendChild(div);
});

/* SCROLL ANIMATION */
const observer = new IntersectionObserver(entries=>{
  entries.forEach(entry=>{
    if(entry.isIntersecting){
      entry.target.classList.add("show");
    }
  });
});

document.querySelectorAll(".hidden").forEach(el=>{
  observer.observe(el);
});

/* SCROLL SUAVE */
function scrollToSection(id){
  document.getElementById(id).scrollIntoView({
    behavior:'smooth'
  });
}