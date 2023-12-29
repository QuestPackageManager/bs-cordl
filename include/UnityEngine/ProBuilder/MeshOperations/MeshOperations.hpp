#ifdef __cpp_modules
module;
#endif

#pragma once
#include "UnityEngine/ProBuilder/MeshOperations/AppendElements.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/Bevel.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/CombineMeshes.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/ConnectElements.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/ConnectFaceRebuildData.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/DeleteElements.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/ElementSelection.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/ExtrudeElements.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/InternalMeshUtility.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/MergeElements.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/MeshImportSettings.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/MeshImporter.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/MeshTransform.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/MeshValidation.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/QuadUtility.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/Subdivision.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/SurfaceTopology.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/Triangulation.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/UVEditing.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/VertexEditing.hpp"
#ifdef __cpp_modules
export module MeshOperations;
#endif
