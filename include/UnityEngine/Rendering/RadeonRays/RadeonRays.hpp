#ifdef __cpp_modules
module;
#endif

#pragma once
#include "UnityEngine/Rendering/RadeonRays/AABB.hpp"
#include "UnityEngine/Rendering/RadeonRays/BottomLevelLevelAccelStruct.hpp"
#include "UnityEngine/Rendering/RadeonRays/BuildFlags.hpp"
#include "UnityEngine/Rendering/RadeonRays/BvhCheck.hpp"
#include "UnityEngine/Rendering/RadeonRays/BvhHeader.hpp"
#include "UnityEngine/Rendering/RadeonRays/BvhNode.hpp"
#include "UnityEngine/Rendering/RadeonRays/Common.hpp"
#include "UnityEngine/Rendering/RadeonRays/HlbvhBuilder.hpp"
#include "UnityEngine/Rendering/RadeonRays/HlbvhTopLevelBuilder.hpp"
#include "UnityEngine/Rendering/RadeonRays/IndexFormat.hpp"
#include "UnityEngine/Rendering/RadeonRays/Instance.hpp"
#include "UnityEngine/Rendering/RadeonRays/InstanceInfo.hpp"
#include "UnityEngine/Rendering/RadeonRays/MeshBuildInfo.hpp"
#include "UnityEngine/Rendering/RadeonRays/MeshBuildMemoryRequirements.hpp"
#include "UnityEngine/Rendering/RadeonRays/RadeonRaysAPI.hpp"
#include "UnityEngine/Rendering/RadeonRays/RadeonRaysShaders.hpp"
#include "UnityEngine/Rendering/RadeonRays/RadixSort.hpp"
#include "UnityEngine/Rendering/RadeonRays/RayQueryOutputType.hpp"
#include "UnityEngine/Rendering/RadeonRays/RayQueryType.hpp"
#include "UnityEngine/Rendering/RadeonRays/RestructureBvh.hpp"
#include "UnityEngine/Rendering/RadeonRays/SID.hpp"
#include "UnityEngine/Rendering/RadeonRays/Scan.hpp"
#include "UnityEngine/Rendering/RadeonRays/SceneBuildMemoryRequirements.hpp"
#include "UnityEngine/Rendering/RadeonRays/SceneMemoryRequirements.hpp"
#include "UnityEngine/Rendering/RadeonRays/TopLevelAccelStruct.hpp"
#include "UnityEngine/Rendering/RadeonRays/Transform.hpp"
#ifdef __cpp_modules
export module RadeonRays;
#endif
