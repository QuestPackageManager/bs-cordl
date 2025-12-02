#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/StoreAudit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__StoreReason_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StoreAudit)
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct StoreReason;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct StoreAudit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit);
// Dependencies UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.StoreReason
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.StoreAudit
struct CORDL_TYPE StoreAudit {
public:
  // Declarations
  /// @brief Field StoreReasonMessages, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_StoreReasonMessages, put = setStaticF_StoreReasonMessages)) ::ArrayW<::StringW, ::Array<::StringW>*> StoreReasonMessages;

  /// @brief Method .ctor, addr 0x65db570, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason setReason, int32_t setPassId,
                    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason setMsaaReason, int32_t setMsaaPassId);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_StoreReasonMessages();

  static inline void setStaticF_StoreReasonMessages(::ArrayW<::StringW, ::Array<::StringW>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StoreAudit();

  // Ctor Parameters [CppParam { name: "reason", ty: "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason", modifiers: "", def_value: None }, CppParam { name: "passId",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "msaaReason", ty: "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason", modifiers: "", def_value:
  // None }, CppParam { name: "msaaPassId", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StoreAudit(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason reason, int32_t passId,
                       ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason msaaReason, int32_t msaaPassId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12467 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field reason, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason reason;

  /// @brief Field passId, offset: 0x4, size: 0x4, def value: None
  int32_t passId;

  /// @brief Field msaaReason, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason msaaReason;

  /// @brief Field msaaPassId, offset: 0xc, size: 0x4, def value: None
  int32_t msaaPassId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit, reason) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit, passId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit, msaaReason) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit, msaaPassId) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreAudit, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler", "StoreAudit");
