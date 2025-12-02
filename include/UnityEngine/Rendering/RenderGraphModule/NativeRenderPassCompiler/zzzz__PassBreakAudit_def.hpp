#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassBreakAudit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassBreakReason_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PassBreakAudit)
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct PassBreakReason;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct PassBreakAudit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit);
// Dependencies UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassBreakReason
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassBreakAudit
struct CORDL_TYPE PassBreakAudit {
public:
  // Declarations
  /// @brief Field BreakReasonMessages, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BreakReasonMessages, put = setStaticF_BreakReasonMessages)) ::ArrayW<::StringW, ::Array<::StringW>*> BreakReasonMessages;

  /// @brief Method .ctor, addr 0x65db710, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason reason, int32_t breakPass);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_BreakReasonMessages();

  static inline void setStaticF_BreakReasonMessages(::ArrayW<::StringW, ::Array<::StringW>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PassBreakAudit();

  // Ctor Parameters [CppParam { name: "reason", ty: "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason", modifiers: "", def_value: None }, CppParam { name:
  // "breakPass", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PassBreakAudit(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason reason, int32_t breakPass) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12469 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field reason, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason reason;

  /// @brief Field breakPass, offset: 0x4, size: 0x4, def value: None
  int32_t breakPass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit, reason) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit, breakPass) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler", "PassBreakAudit");
