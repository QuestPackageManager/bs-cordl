#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/LoadAudit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__LoadReason_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoadAudit)
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct LoadReason;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct LoadAudit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit);
// Dependencies UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.LoadReason
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.LoadAudit
struct CORDL_TYPE LoadAudit {
public:
  // Declarations
  /// @brief Field LoadReasonMessages, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_LoadReasonMessages, put = setStaticF_LoadReasonMessages)) ::ArrayW<::StringW, ::Array<::StringW>*> LoadReasonMessages;

  /// @brief Method .ctor, addr 0x65db3fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason setReason, int32_t setPassId);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_LoadReasonMessages();

  static inline void setStaticF_LoadReasonMessages(::ArrayW<::StringW, ::Array<::StringW>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadAudit();

  // Ctor Parameters [CppParam { name: "reason", ty: "::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason", modifiers: "", def_value: None }, CppParam { name: "passId",
  // ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LoadAudit(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason reason, int32_t passId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12465 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field reason, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason reason;

  /// @brief Field passId, offset: 0x4, size: 0x4, def value: None
  int32_t passId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit, reason) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit, passId) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadAudit, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler", "LoadAudit");
