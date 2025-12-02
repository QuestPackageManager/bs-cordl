#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativePassData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__FixedAttachmentArray_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__LoadAudit_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassAttachment_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassBreakAudit_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassFragmentData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__StoreAudit_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativePassData)
namespace System {
template <typename T> struct ReadOnlySpan_1;
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
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct NativePassData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData);
// Dependencies UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.FixedAttachmentArray`1<DataType>, UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.LoadAudit,
// UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassAttachment, UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassBreakAudit,
// UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassFragmentData, UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.StoreAudit
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassData
struct CORDL_TYPE NativePassData {
public:
  // Declarations
  /// @brief Method CanMerge, addr 0x65dc6d8, size 0x7a8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit CanMerge(Il2CppObject* contextData, int32_t activeNativePassId, int32_t passIdToMerge);

  /// @brief Method CanMergeNativeSubPass, addr 0x65dcfd0, size 0x5a0, virtual false, abstract: false, final false
  static inline bool CanMergeNativeSubPass(Il2CppObject* contextData, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData nativePass,
                                           ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData passToMerge);

  /// @brief Method Clear, addr 0x65dc288, size 0x134, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method GetGraphPassNames, addr 0x65dc5b4, size 0x124, virtual false, abstract: false, final false
  inline void GetGraphPassNames(Il2CppObject* ctx, ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>* dest);

  /// @brief Method GraphPasses, addr 0x65dc3cc, size 0x1e8, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> GraphPasses(Il2CppObject* ctx);

  /// @brief Method IsValid, addr 0x65dc3bc, size 0x10, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method SetPassStatesForNativePass, addr 0x65ddfc0, size 0x1d4, virtual false, abstract: false, final false
  static inline void SetPassStatesForNativePass(Il2CppObject* contextData, int32_t nativePassId);

  /// @brief Method TryMerge, addr 0x65dd928, size 0x698, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit TryMerge(Il2CppObject* contextData, int32_t activeNativePassId, int32_t passIdToMerge);

  /// @brief Method TryMergeNativeSubPass, addr 0x65dbc20, size 0x668, virtual false, abstract: false, final false
  static inline void TryMergeNativeSubPass(Il2CppObject* contextData, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass,
                                           ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> passToMerge);

  /// @brief Method UpdateNativeSubPassesAttachments, addr 0x65dd570, size 0x3b8, virtual false, abstract: false, final false
  static inline void UpdateNativeSubPassesAttachments(Il2CppObject* contextData, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass);

  /// @brief Method .ctor, addr 0x65db9c8, size 0x258, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> pass, Il2CppObject* ctx);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativePassData();

  // Ctor Parameters [CppParam { name: "loadAudit", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit>", modifiers: "",
  // def_value: None }, CppParam { name: "storeAudit", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit>", modifiers: "",
  // def_value: None }, CppParam { name: "breakAudit", ty: "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit", modifiers: "", def_value: None }, CppParam { name:
  // "fragments", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>",
  // modifiers: "", def_value: None }, CppParam { name: "attachments", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment>",
  // modifiers: "", def_value: None }, CppParam { name: "firstGraphPass", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastGraphPass", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "numGraphPasses", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstNativeSubPass", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "numNativeSubPasses", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "volumeDepth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "samples", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "hasDepth", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasFoveatedRasterization", ty: "bool", modifiers: "", def_value: None }]
  constexpr NativePassData(
      ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit> loadAudit,
      ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit> storeAudit,
      ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit breakAudit,
      ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData> fragments,
      ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment>
          attachments,
      int32_t firstGraphPass, int32_t lastGraphPass, int32_t numGraphPasses, int32_t firstNativeSubPass, int32_t numNativeSubPasses, int32_t width, int32_t height, int32_t volumeDepth,
      int32_t samples, bool hasDepth, bool hasFoveatedRasterization) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12470 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2c0 };

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

  /// @brief Field hasDepth, offset: 0x2bc, size: 0x1, def value: None
  bool hasDepth;

  /// @brief Field hasFoveatedRasterization, offset: 0x2bd, size: 0x1, def value: None
  bool hasFoveatedRasterization;

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

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, hasDepth) == 0x2bc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, hasFoveatedRasterization) == 0x2bd, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, 0x2c0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler", "NativePassData");
