#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchCullingOutput.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutputDrawCommands_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutput_def.hpp"
// Ctor Parameters [CppParam { name: "drawCommands", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "customCullingResult", ty: "::Unity::Collections::NativeArray_1<::System::IntPtr>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchCullingOutput::BatchCullingOutput(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands> drawCommands,
                                                                           ::Unity::Collections::NativeArray_1<::System::IntPtr> customCullingResult) noexcept {
  this->drawCommands = drawCommands;
  this->customCullingResult = customCullingResult;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchCullingOutput::BatchCullingOutput() {}
