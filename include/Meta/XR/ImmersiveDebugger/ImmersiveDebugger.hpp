#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Meta/XR/ImmersiveDebugger/CustomIntegrationConfig.hpp"
#include "Meta/XR/ImmersiveDebugger/CustomIntegrationConfigBase.hpp"
#include "Meta/XR/ImmersiveDebugger/DebugColor.hpp"
#include "Meta/XR/ImmersiveDebugger/DebugData.hpp"
#include "Meta/XR/ImmersiveDebugger/DebugGizmoType.hpp"
#include "Meta/XR/ImmersiveDebugger/DebugInspector.hpp"
#include "Meta/XR/ImmersiveDebugger/DebugInspectorManager.hpp"
#include "Meta/XR/ImmersiveDebugger/DebugMember.hpp"
#include "Meta/XR/ImmersiveDebugger/ExampleCustomIntegrationConfig.hpp"
#include "Meta/XR/ImmersiveDebugger/ICustomIntegrationConfig.hpp"
#include "Meta/XR/ImmersiveDebugger/InspectedData.hpp"
#include "Meta/XR/ImmersiveDebugger/InspectedDataRegistry.hpp"
#include "Meta/XR/ImmersiveDebugger/InspectedHandle.hpp"
#include "Meta/XR/ImmersiveDebugger/InspectedItemBase.hpp"
#include "Meta/XR/ImmersiveDebugger/InspectedMember.hpp"
#include "Meta/XR/ImmersiveDebugger/RuntimeSettings.hpp"
#include "Meta/XR/ImmersiveDebugger/SceneSetup.hpp"
#include "Meta/XR/ImmersiveDebugger/Telemetry.hpp"
#ifdef __cpp_modules
export module ImmersiveDebugger;
#endif
