#pragma once
// IWYU pragma private; include "UnityEngine/UI/BaseMeshEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/UI/zzzz__IMeshModifier_def.hpp"
CORDL_MODULE_EXPORT(BaseMeshEffect)
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::UI {
class BaseMeshEffect;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::BaseMeshEffect);
// Dependencies UnityEngine.EventSystems.UIBehaviour, UnityEngine.UI.IMeshModifier
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.BaseMeshEffect
class CORDL_TYPE BaseMeshEffect : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  __declspec(property(get = get_graphic)) ::UnityW<::UnityEngine::UI::Graphic> graphic;

  /// @brief Field m_Graphic, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Graphic, put = __cordl_internal_set_m_Graphic)) ::UnityW<::UnityEngine::UI::Graphic> m_Graphic;

  /// @brief Convert operator to "::UnityEngine::UI::IMeshModifier"
  constexpr operator ::UnityEngine::UI::IMeshModifier*() noexcept;

  /// @brief Method ModifyMesh, addr 0x4ad0444, size 0x1b0, virtual true, abstract: false, final false
  inline void ModifyMesh(::UnityEngine::Mesh* mesh);

  /// @brief Method ModifyMesh, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ModifyMesh(::UnityEngine::UI::VertexHelper* vh);

  static inline ::UnityEngine::UI::BaseMeshEffect* New_ctor();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x4ad03a8, size 0x9c, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method OnDisable, addr 0x4ad030c, size 0x9c, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x4ad0264, size 0xa8, virtual true, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get_m_Graphic() const;

  constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get_m_Graphic();

  constexpr void __cordl_internal_set_m_Graphic(::UnityW<::UnityEngine::UI::Graphic> value);

  /// @brief Method .ctor, addr 0x4ad05f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_graphic, addr 0x4ad01d0, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Graphic> get_graphic();

  /// @brief Convert to "::UnityEngine::UI::IMeshModifier"
  constexpr ::UnityEngine::UI::IMeshModifier* i___UnityEngine__UI__IMeshModifier() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseMeshEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseMeshEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseMeshEffect(BaseMeshEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseMeshEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseMeshEffect(BaseMeshEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15154 };

  /// @brief Field m_Graphic, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> ___m_Graphic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::BaseMeshEffect, ___m_Graphic) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::BaseMeshEffect, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::BaseMeshEffect);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::BaseMeshEffect*, "UnityEngine.UI", "BaseMeshEffect");
