#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativePassData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__FixedAttachmentArray_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__LoadAudit_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassAttachment_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassBreakAudit_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassFragmentData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__StoreAudit_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ExtendedFeatureFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateCombiner_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateFragmentSize_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativePassData)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
template <typename DataType> struct FixedAttachmentArray_1;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct Name;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct PassBreakAudit;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct PassData;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct PassFragmentData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct ExtendedFeatureFlags;
}
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1;
}
namespace UnityEngine::Rendering {
struct SubPassFlags;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct NativePassData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler", "NativePassData");
// Dependencies UnityEngine.Rendering.RenderGraphModule.ExtendedFeatureFlags, UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.FixedAttachmentArray`1<DataType>,
// UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.LoadAudit, UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassAttachment,
// UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassBreakAudit, UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassFragmentData,
// UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.StoreAudit, UnityEngine.Rendering.ShadingRateCombiner, UnityEngine.Rendering.ShadingRateFragmentSize
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassData
struct CORDL_TYPE NativePassData {
public:
  // Declarations
  __declspec(property(get = get_hasShadingRateImage)) bool hasShadingRateImage;

  /// @brief Method AddDepthAttachmentFirstDuringMerge, addr 0x6c2abe0, size 0x2d8, virtual false, abstract: false, final false
  inline void AddDepthAttachmentFirstDuringMerge(Il2CppObject* contextData,
                                                 /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData const> depthAttachment);

  /// @brief Method AreExtendedFeatureFlagsCompatible, addr 0x6c298b0, size 0x8, virtual false, abstract: false, final false
  static inline bool AreExtendedFeatureFlagsCompatible(::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags flags0,
                                                       ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags flags1);

  /// @brief Method CanMerge, addr 0x6c298b8, size 0xba0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit CanMerge(Il2CppObject* contextData, int32_t activeNativePassId, int32_t passIdToMerge);

  /// @brief Method CanMergeMSAASamples, addr 0x6c2987c, size 0x34, virtual false, abstract: false, final false
  static inline bool CanMergeMSAASamples(::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass,
                                         ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> passToMerge);

  /// @brief Method CanMergeNativeSubPass, addr 0x6c2a6b0, size 0x530, virtual false, abstract: false, final false
  static inline bool CanMergeNativeSubPass(Il2CppObject* contextData, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass,
                                           ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> passToMerge);

  /// @brief Method Clear, addr 0x6c293c8, size 0x134, virtual false, abstract: false, final false
  inline void Clear();

  /// [IsReadOnly]
  /// @brief Method GetGraphPassNames, addr 0x6c29710, size 0x16c, virtual false, abstract: false, final false
  inline void GetGraphPassNames(Il2CppObject* ctx, ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>* dest);

  /// @brief Method GetSubPassFlagForMerging, addr 0x6c292d4, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SubPassFlags GetSubPassFlagForMerging();

  /// [IsReadOnly]
  /// @brief Method GraphPasses, addr 0x6c2950c, size 0x204, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>
  GraphPasses(Il2CppObject* ctx, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>> actualPasses);

  /// [IsReadOnly]
  /// @brief Method IsValid, addr 0x6c294fc, size 0x10, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method SetPassStatesForNativePass, addr 0x6c2b50c, size 0x1d4, virtual false, abstract: false, final false
  static inline void SetPassStatesForNativePass(Il2CppObject* contextData, int32_t nativePassId);

  /// @brief Method TotalAttachmentsSizeExceedPixelStorageLimit, addr 0x6c2a458, size 0x258, virtual false, abstract: false, final false
  static inline bool TotalAttachmentsSizeExceedPixelStorageLimit(
      Il2CppObject* contextData, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass,
      ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>>
          attachmentsToTryAdding);

  /// @brief Method TryMerge, addr 0x6c2aeb8, size 0x654, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit TryMerge(Il2CppObject* contextData, int32_t activeNativePassId, int32_t passIdToMerge);

  /// @brief Method TryMergeNativeSubPass, addr 0x6c28d08, size 0x5cc, virtual false, abstract: false, final false
  static inline void TryMergeNativeSubPass(Il2CppObject* contextData, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass,
                                           ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> passToMerge);

  /// @brief Method .ctor, addr 0x6c289b4, size 0x354, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> pass, Il2CppObject* ctx);

  /// @brief Method get_hasShadingRateImage, addr 0x6c289a4, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasShadingRateImage();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativePassData();

  // Ctor Parameters [CppParam { name: "loadAudit", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit>", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "storeAudit", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit>", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "breakAudit", ty: "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "fragments", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "attachments", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment>",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "firstGraphPass", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastGraphPass", ty:
  // "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "numGraphPasses", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "firstNativeSubPass", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "numNativeSubPasses", ty: "int32_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "volumeDepth", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "samples", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "shadingRateImageIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasDepth", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "hasFoveatedRasterization", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasShadingRateStates", ty: "bool", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "extendedFeatureFlags", ty: "::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "shadingRateFragmentSize", ty: "::UnityEngine::Rendering::ShadingRateFragmentSize", modifiers: "", def_value: None, comment: None }, CppParam { name: "primitiveShadingRateCombiner", ty:
  // "::UnityEngine::Rendering::ShadingRateCombiner", modifiers: "", def_value: None, comment: None }, CppParam { name: "fragmentShadingRateCombiner", ty:
  // "::UnityEngine::Rendering::ShadingRateCombiner", modifiers: "", def_value: None, comment: None }]
  constexpr NativePassData(
      ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit> loadAudit,
      ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit> storeAudit,
      ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit breakAudit,
      ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData> fragments,
      ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment>
          attachments,
      int32_t firstGraphPass, int32_t lastGraphPass, int32_t numGraphPasses, int32_t firstNativeSubPass, int32_t numNativeSubPasses, int32_t width, int32_t height, int32_t volumeDepth,
      int32_t samples, int32_t shadingRateImageIndex, bool hasDepth, bool hasFoveatedRasterization, bool hasShadingRateStates,
      ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags extendedFeatureFlags, ::UnityEngine::Rendering::ShadingRateFragmentSize shadingRateFragmentSize,
      ::UnityEngine::Rendering::ShadingRateCombiner primitiveShadingRateCombiner, ::UnityEngine::Rendering::ShadingRateCombiner fragmentShadingRateCombiner) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9416 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2d4 };

  /// @brief Field loadAudit, offset: 0x0, size: 0x44, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit> loadAudit;

  /// @brief Field storeAudit, offset: 0x44, size: 0x84, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit> storeAudit;

  /// @brief Field breakAudit, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit breakAudit;

  /// @brief Field fragments, offset: 0xd0, size: 0xc4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData> fragments;

  /// @brief Field attachments, offset: 0x194, size: 0x104, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment>
      attachments;

  /// @brief Field firstGraphPass, offset: 0x298, size: 0x4, def value: None
  int32_t firstGraphPass;

  /// @brief Field lastGraphPass, offset: 0x29c, size: 0x4, def value: None
  int32_t lastGraphPass;

  /// @brief Field numGraphPasses, offset: 0x2a0, size: 0x4, def value: None
  int32_t numGraphPasses;

  /// @brief Field firstNativeSubPass, offset: 0x2a4, size: 0x4, def value: None
  int32_t firstNativeSubPass;

  /// @brief Field numNativeSubPasses, offset: 0x2a8, size: 0x4, def value: None
  int32_t numNativeSubPasses;

  /// @brief Field width, offset: 0x2ac, size: 0x4, def value: None
  int32_t width;

  /// @brief Field height, offset: 0x2b0, size: 0x4, def value: None
  int32_t height;

  /// @brief Field volumeDepth, offset: 0x2b4, size: 0x4, def value: None
  int32_t volumeDepth;

  /// @brief Field samples, offset: 0x2b8, size: 0x4, def value: None
  int32_t samples;

  /// @brief Field shadingRateImageIndex, offset: 0x2bc, size: 0x4, def value: None
  int32_t shadingRateImageIndex;

  /// @brief Field hasDepth, offset: 0x2c0, size: 0x1, def value: None
  bool hasDepth;

  /// @brief Field hasFoveatedRasterization, offset: 0x2c1, size: 0x1, def value: None
  bool hasFoveatedRasterization;

  /// @brief Field hasShadingRateStates, offset: 0x2c2, size: 0x1, def value: None
  bool hasShadingRateStates;

  /// @brief Field extendedFeatureFlags, offset: 0x2c4, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags extendedFeatureFlags;

  /// @brief Field shadingRateFragmentSize, offset: 0x2c8, size: 0x4, def value: None
  ::UnityEngine::Rendering::ShadingRateFragmentSize shadingRateFragmentSize;

  /// @brief Field primitiveShadingRateCombiner, offset: 0x2cc, size: 0x4, def value: None
  ::UnityEngine::Rendering::ShadingRateCombiner primitiveShadingRateCombiner;

  /// @brief Field fragmentShadingRateCombiner, offset: 0x2d0, size: 0x4, def value: None
  ::UnityEngine::Rendering::ShadingRateCombiner fragmentShadingRateCombiner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, loadAudit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, storeAudit) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, breakAudit) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, fragments) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, attachments) == 0x194, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, firstGraphPass) == 0x298, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, lastGraphPass) == 0x29c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, numGraphPasses) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, firstNativeSubPass) == 0x2a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, numNativeSubPasses) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, width) == 0x2ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, height) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, volumeDepth) == 0x2b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, samples) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, shadingRateImageIndex) == 0x2bc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, hasDepth) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, hasFoveatedRasterization) == 0x2c1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, hasShadingRateStates) == 0x2c2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, extendedFeatureFlags) == 0x2c4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, shadingRateFragmentSize) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, primitiveShadingRateCombiner) == 0x2cc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, fragmentShadingRateCombiner) == 0x2d0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData) == 0x2d4, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
