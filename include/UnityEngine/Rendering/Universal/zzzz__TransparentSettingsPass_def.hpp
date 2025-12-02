#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TransparentSettingsPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
CORDL_MODULE_EXPORT(TransparentSettingsPass)
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class TransparentSettingsPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::TransparentSettingsPass);
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.TransparentSettingsPass
class CORDL_TYPE TransparentSettingsPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field m_shouldReceiveShadows, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_shouldReceiveShadows, put = __cordl_internal_set_m_shouldReceiveShadows)) bool m_shouldReceiveShadows;

  /// @brief Method Execute, addr 0x6689028, size 0xcc, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x66890f4, size 0x90, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* rasterCommandBuffer);

  static inline ::UnityEngine::Rendering::Universal::TransparentSettingsPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, bool shadowReceiveSupported);

  /// @brief Method Setup, addr 0x6689018, size 0x10, virtual false, abstract: false, final false
  inline bool Setup();

  constexpr bool const& __cordl_internal_get_m_shouldReceiveShadows() const;

  constexpr bool& __cordl_internal_get_m_shouldReceiveShadows();

  constexpr void __cordl_internal_set_m_shouldReceiveShadows(bool value);

  /// @brief Method .ctor, addr 0x6688f44, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, bool shadowReceiveSupported);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransparentSettingsPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransparentSettingsPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransparentSettingsPass(TransparentSettingsPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransparentSettingsPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransparentSettingsPass(TransparentSettingsPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12857 };

  /// @brief Field m_shouldReceiveShadows, offset: 0xb8, size: 0x1, def value: None
  bool ___m_shouldReceiveShadows;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::TransparentSettingsPass, ___m_shouldReceiveShadows) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TransparentSettingsPass, 0xc0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::TransparentSettingsPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TransparentSettingsPass*, "UnityEngine.Rendering.Universal", "TransparentSettingsPass");
