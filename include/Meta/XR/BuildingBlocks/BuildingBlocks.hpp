#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Meta/XR/BuildingBlocks/BuildingBlock.hpp"
#include "Meta/XR/BuildingBlocks/ControllerButtonsMapper.hpp"
#include "Meta/XR/BuildingBlocks/InstallationRoutineCheckpoint.hpp"
#include "Meta/XR/BuildingBlocks/PassthroughProjectionSurfaceBuildingBlock.hpp"
#include "Meta/XR/BuildingBlocks/RoomMeshController.hpp"
#include "Meta/XR/BuildingBlocks/RoomMeshEvent.hpp"
#include "Meta/XR/BuildingBlocks/RunTimeUtils.hpp"
#include "Meta/XR/BuildingBlocks/SharedSpatialAnchorCore.hpp"
#include "Meta/XR/BuildingBlocks/SpatialAnchorCoreBuildingBlock.hpp"
#include "Meta/XR/BuildingBlocks/SpatialAnchorLoaderBuildingBlock.hpp"
#include "Meta/XR/BuildingBlocks/SpatialAnchorLocalStorageManagerBuildingBlock.hpp"
#include "Meta/XR/BuildingBlocks/SpatialAnchorSpawnerBuildingBlock.hpp"
#include "Meta/XR/BuildingBlocks/Telemetry.hpp"
#include "Meta/XR/BuildingBlocks/VariantCheckpoint.hpp"
#ifdef __cpp_modules
export module BuildingBlocks;
#endif
