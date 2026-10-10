#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassMergeState_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ExtendedFeatureFlags_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPassType_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateCombiner_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateFragmentSize_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PassData)
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct Name;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct PassFragmentData;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct PassInputData;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct PassOutputData;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct PassRandomWriteData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct ResourceHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct PassData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler", "PassData");
// Dependencies UnityEngine.Rendering.RenderGraphModule.ExtendedFeatureFlags, UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassMergeState,
// UnityEngine.Rendering.RenderGraphModule.RenderGraphPassType, UnityEngine.Rendering.ShadingRateCombiner, UnityEngine.Rendering.ShadingRateFragmentSize
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassData
struct CORDL_TYPE PassData {
public:
  // Declarations
  __declspec(property(get = get_fragmentInfoHasShadingRateImage)) bool fragmentInfoHasShadingRateImage;

  /// @brief Method AddFirstUse, addr 0x6c27910, size 0x1c0, virtual false, abstract: false, final false
  inline void AddFirstUse(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> h, Il2CppObject* ctx);

  /// @brief Method AddLastUse, addr 0x6c27ad0, size 0x1c0, virtual false, abstract: false, final false
  inline void AddLastUse(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> h, Il2CppObject* ctx);

  /// @brief Method AddRandomAccessResource, addr 0x6c27900, size 0x10, virtual false, abstract: false, final false
  inline void AddRandomAccessResource();

  /// @brief Method DisconnectFromResources, addr 0x6c27e78, size 0x2ac, virtual false, abstract: false, final false
  inline void DisconnectFromResources(Il2CppObject* ctx, ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>* unusedVersionedResourceIdCullingStack,
                                      int32_t type);

  /// [IsReadOnly]
  /// @brief Method FirstUsedResources, addr 0x6c2760c, size 0x94, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> FirstUsedResources(Il2CppObject* ctx);

  /// [IsReadOnly]
  /// @brief Method FragmentInputs, addr 0x6c27578, size 0x94, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData> FragmentInputs(Il2CppObject* ctx);

  /// [IsReadOnly]
  /// @brief Method Fragments, addr 0x6c273b4, size 0x94, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData> Fragments(Il2CppObject* ctx);

  /// @brief Method GetName, addr 0x6c270e8, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name GetName(Il2CppObject* ctx);

  /// [IsReadOnly]
  /// @brief Method Inputs, addr 0x6c27320, size 0x94, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassInputData> Inputs(Il2CppObject* ctx);

  /// [IsReadOnly]
  /// @brief Method IsUsedAsFragment, addr 0x6c27c90, size 0x1e8, virtual false, abstract: false, final false
  inline bool IsUsedAsFragment(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> h, Il2CppObject* ctx);

  /// [IsReadOnly]
  /// @brief Method LastUsedResources, addr 0x6c27734, size 0x94, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> LastUsedResources(Il2CppObject* ctx);

  /// [IsReadOnly]
  /// @brief Method Outputs, addr 0x6c2728c, size 0x94, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassOutputData> Outputs(Il2CppObject* ctx);

  /// @brief Method RandomWriteTextures, addr 0x6c276a0, size 0x94, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassRandomWriteData> RandomWriteTextures(Il2CppObject* ctx);

  /// @brief Method ResetAndInitialize, addr 0x6c271f8, size 0x94, virtual false, abstract: false, final false
  inline void ResetAndInitialize(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* const> pass, int32_t passIndex);

  /// [IsReadOnly]
  /// @brief Method SampledTexturesIfRaster, addr 0x6c27448, size 0x94, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> SampledTexturesIfRaster(Il2CppObject* ctx);

  /// [IsReadOnly]
  /// @brief Method ShadingRateImage, addr 0x6c274dc, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData ShadingRateImage(Il2CppObject* ctx);

  /// @brief Method TryAddFragment, addr 0x6c278c0, size 0x20, virtual false, abstract: false, final false
  inline void TryAddFragment(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> h, Il2CppObject* ctx, ::by_ref<::StringW> errorMessage);

  /// @brief Method TryAddFragmentInput, addr 0x6c278e0, size 0x20, virtual false, abstract: false, final false
  inline void TryAddFragmentInput(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> h, Il2CppObject* ctx, ::by_ref<::StringW> errorMessage);

  /// @brief Method TrySetupAndValidateFragmentInfo, addr 0x6c277c8, size 0xf8, virtual false, abstract: false, final false
  inline bool TrySetupAndValidateFragmentInfo(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> h, Il2CppObject* ctx, ::by_ref<::StringW> errorMessage);

  /// @brief Method .ctor, addr 0x6c27164, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* const> pass, int32_t passIndex);

  /// @brief Method get_fragmentInfoHasShadingRateImage, addr 0x6c270d8, size 0x10, virtual false, abstract: false, final false
  inline bool get_fragmentInfoHasShadingRateImage();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PassData();

  // Ctor Parameters [CppParam { name: "passId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasFoveatedRasterization", ty: "bool", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "extendedFeatureFlags", ty: "::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "tag", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "shadingRateFragmentSize", ty: "::UnityEngine::Rendering::ShadingRateFragmentSize",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "primitiveShadingRateCombiner", ty: "::UnityEngine::Rendering::ShadingRateCombiner", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "fragmentShadingRateCombiner", ty: "::UnityEngine::Rendering::ShadingRateCombiner", modifiers: "", def_value: None, comment: None }, CppParam { name: "mergeState", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState", modifiers: "", def_value: None, comment: None }, CppParam { name: "nativePassIndex", ty: "int32_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "nativeSubPassIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "firstInput", ty:
  // "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "numInputs", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "firstOutput", ty:
  // "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "numOutputs", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "firstFragment", ty:
  // "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "numFragments", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "firstFragmentInput",
  // ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "numFragmentInputs", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "firstSampledOnlyRaster", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "numSampledOnlyRaster", ty: "int32_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "firstRandomAccessResource", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "numRandomAccessResources", ty: "int32_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "firstCreate", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "numCreated", ty: "int32_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "firstDestroy", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "numDestroyed", ty: "int32_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "shadingRateImageIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "fragmentInfoWidth", ty: "int32_t", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "fragmentInfoHeight", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "fragmentInfoVolumeDepth", ty:
  // "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "fragmentInfoSamples", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "waitOnGraphicsFencePassId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "awaitingMyGraphicsFencePassId", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "asyncCompute", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasSideEffects", ty: "bool", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "culled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "beginNativeSubpass", ty: "bool", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "fragmentInfoValid", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "fragmentInfoHasDepth", ty: "bool", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "insertGraphicsFence", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasShadingRateStates", ty: "bool", modifiers: "",
  // def_value: None, comment: None }]
  constexpr PassData(int32_t passId, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType type, bool hasFoveatedRasterization,
                     ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags extendedFeatureFlags, int32_t tag, ::UnityEngine::Rendering::ShadingRateFragmentSize shadingRateFragmentSize,
                     ::UnityEngine::Rendering::ShadingRateCombiner primitiveShadingRateCombiner, ::UnityEngine::Rendering::ShadingRateCombiner fragmentShadingRateCombiner,
                     ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState mergeState, int32_t nativePassIndex, int32_t nativeSubPassIndex, int32_t firstInput,
                     int32_t numInputs, int32_t firstOutput, int32_t numOutputs, int32_t firstFragment, int32_t numFragments, int32_t firstFragmentInput, int32_t numFragmentInputs,
                     int32_t firstSampledOnlyRaster, int32_t numSampledOnlyRaster, int32_t firstRandomAccessResource, int32_t numRandomAccessResources, int32_t firstCreate, int32_t numCreated,
                     int32_t firstDestroy, int32_t numDestroyed, int32_t shadingRateImageIndex, int32_t fragmentInfoWidth, int32_t fragmentInfoHeight, int32_t fragmentInfoVolumeDepth,
                     int32_t fragmentInfoSamples, int32_t waitOnGraphicsFencePassId, int32_t awaitingMyGraphicsFencePassId, bool asyncCompute, bool hasSideEffects, bool culled,
                     bool beginNativeSubpass, bool fragmentInfoValid, bool fragmentInfoHasDepth, bool insertGraphicsFence, bool hasShadingRateStates) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9408 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  /// @brief Field passId, offset: 0x0, size: 0x4, def value: None
  int32_t passId;

  /// @brief Field type, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType type;

  /// @brief Field hasFoveatedRasterization, offset: 0x8, size: 0x1, def value: None
  bool hasFoveatedRasterization;

  /// @brief Field extendedFeatureFlags, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags extendedFeatureFlags;

  /// @brief Field tag, offset: 0x10, size: 0x4, def value: None
  int32_t tag;

  /// @brief Field shadingRateFragmentSize, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::Rendering::ShadingRateFragmentSize shadingRateFragmentSize;

  /// @brief Field primitiveShadingRateCombiner, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::ShadingRateCombiner primitiveShadingRateCombiner;

  /// @brief Field fragmentShadingRateCombiner, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Rendering::ShadingRateCombiner fragmentShadingRateCombiner;

  /// @brief Field mergeState, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState mergeState;

  /// @brief Field nativePassIndex, offset: 0x24, size: 0x4, def value: None
  int32_t nativePassIndex;

  /// @brief Field nativeSubPassIndex, offset: 0x28, size: 0x4, def value: None
  int32_t nativeSubPassIndex;

  /// @brief Field firstInput, offset: 0x2c, size: 0x4, def value: None
  int32_t firstInput;

  /// @brief Field numInputs, offset: 0x30, size: 0x4, def value: None
  int32_t numInputs;

  /// @brief Field firstOutput, offset: 0x34, size: 0x4, def value: None
  int32_t firstOutput;

  /// @brief Field numOutputs, offset: 0x38, size: 0x4, def value: None
  int32_t numOutputs;

  /// @brief Field firstFragment, offset: 0x3c, size: 0x4, def value: None
  int32_t firstFragment;

  /// @brief Field numFragments, offset: 0x40, size: 0x4, def value: None
  int32_t numFragments;

  /// @brief Field firstFragmentInput, offset: 0x44, size: 0x4, def value: None
  int32_t firstFragmentInput;

  /// @brief Field numFragmentInputs, offset: 0x48, size: 0x4, def value: None
  int32_t numFragmentInputs;

  /// @brief Field firstSampledOnlyRaster, offset: 0x4c, size: 0x4, def value: None
  int32_t firstSampledOnlyRaster;

  /// @brief Field numSampledOnlyRaster, offset: 0x50, size: 0x4, def value: None
  int32_t numSampledOnlyRaster;

  /// @brief Field firstRandomAccessResource, offset: 0x54, size: 0x4, def value: None
  int32_t firstRandomAccessResource;

  /// @brief Field numRandomAccessResources, offset: 0x58, size: 0x4, def value: None
  int32_t numRandomAccessResources;

  /// @brief Field firstCreate, offset: 0x5c, size: 0x4, def value: None
  int32_t firstCreate;

  /// @brief Field numCreated, offset: 0x60, size: 0x4, def value: None
  int32_t numCreated;

  /// @brief Field firstDestroy, offset: 0x64, size: 0x4, def value: None
  int32_t firstDestroy;

  /// @brief Field numDestroyed, offset: 0x68, size: 0x4, def value: None
  int32_t numDestroyed;

  /// @brief Field shadingRateImageIndex, offset: 0x6c, size: 0x4, def value: None
  int32_t shadingRateImageIndex;

  /// @brief Field fragmentInfoWidth, offset: 0x70, size: 0x4, def value: None
  int32_t fragmentInfoWidth;

  /// @brief Field fragmentInfoHeight, offset: 0x74, size: 0x4, def value: None
  int32_t fragmentInfoHeight;

  /// @brief Field fragmentInfoVolumeDepth, offset: 0x78, size: 0x4, def value: None
  int32_t fragmentInfoVolumeDepth;

  /// @brief Field fragmentInfoSamples, offset: 0x7c, size: 0x4, def value: None
  int32_t fragmentInfoSamples;

  /// @brief Field waitOnGraphicsFencePassId, offset: 0x80, size: 0x4, def value: None
  int32_t waitOnGraphicsFencePassId;

  /// @brief Field awaitingMyGraphicsFencePassId, offset: 0x84, size: 0x4, def value: None
  int32_t awaitingMyGraphicsFencePassId;

  /// @brief Field asyncCompute, offset: 0x88, size: 0x1, def value: None
  bool asyncCompute;

  /// @brief Field hasSideEffects, offset: 0x89, size: 0x1, def value: None
  bool hasSideEffects;

  /// @brief Field culled, offset: 0x8a, size: 0x1, def value: None
  bool culled;

  /// @brief Field beginNativeSubpass, offset: 0x8b, size: 0x1, def value: None
  bool beginNativeSubpass;

  /// @brief Field fragmentInfoValid, offset: 0x8c, size: 0x1, def value: None
  bool fragmentInfoValid;

  /// @brief Field fragmentInfoHasDepth, offset: 0x8d, size: 0x1, def value: None
  bool fragmentInfoHasDepth;

  /// @brief Field insertGraphicsFence, offset: 0x8e, size: 0x1, def value: None
  bool insertGraphicsFence;

  /// @brief Field hasShadingRateStates, offset: 0x8f, size: 0x1, def value: None
  bool hasShadingRateStates;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, passId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, type) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, hasFoveatedRasterization) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, extendedFeatureFlags) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, tag) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, shadingRateFragmentSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, primitiveShadingRateCombiner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, fragmentShadingRateCombiner) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, mergeState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, nativePassIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, nativeSubPassIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, firstInput) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, numInputs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, firstOutput) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, numOutputs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, firstFragment) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, numFragments) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, firstFragmentInput) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, numFragmentInputs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, firstSampledOnlyRaster) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, numSampledOnlyRaster) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, firstRandomAccessResource) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, numRandomAccessResources) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, firstCreate) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, numCreated) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, firstDestroy) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, numDestroyed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, shadingRateImageIndex) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, fragmentInfoWidth) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, fragmentInfoHeight) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, fragmentInfoVolumeDepth) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, fragmentInfoSamples) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, waitOnGraphicsFencePassId) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, awaitingMyGraphicsFencePassId) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, asyncCompute) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, hasSideEffects) == 0x89, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, culled) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, beginNativeSubpass) == 0x8b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, fragmentInfoValid) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, fragmentInfoHasDepth) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, insertGraphicsFence) == 0x8e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData, hasShadingRateStates) == 0x8f, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData) == 0x90, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
