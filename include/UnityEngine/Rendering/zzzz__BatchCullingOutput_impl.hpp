#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchCullingOutput.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutputDrawCommands_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutput_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutputDrawCommands_def.hpp"
// Ctor Parameters [CppParam { name: "drawCommands", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchCullingOutput::BatchCullingOutput(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands> drawCommands) noexcept {
  this->drawCommands = drawCommands;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchCullingOutput::BatchCullingOutput() {}
