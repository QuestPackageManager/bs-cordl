#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BaseMeshEffect)
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class IMeshModifier;
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
// Type: UnityEngine.UI::BaseMeshEffect
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13112))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13041))
// CS Name: ::UnityEngine.UI::BaseMeshEffect*
class CORDL_TYPE BaseMeshEffect : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  /// @brief Field m_Graphic, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Graphic, put = __cordl_internal_set_m_Graphic))::UnityW<::UnityEngine::UI::Graphic> m_Graphic;

  __declspec(property(get = get_graphic))::UnityW<::UnityEngine::UI::Graphic> graphic;

  /// @brief Convert operator to "::UnityEngine::UI::IMeshModifier"
  constexpr operator ::UnityEngine::UI::IMeshModifier*() noexcept;

  /// @brief Convert to "::UnityEngine::UI::IMeshModifier"
  constexpr ::UnityEngine::UI::IMeshModifier* i___UnityEngine__UI__IMeshModifier() noexcept;

  constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get_m_Graphic();

  constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get_m_Graphic() const;

  constexpr void __cordl_internal_set_m_Graphic(::UnityW<::UnityEngine::UI::Graphic> value);

  /// @brief Method get_graphic, addr 0x2dad908, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Graphic> get_graphic();

  /// @brief Method OnEnable, addr 0x2dad99c, size 0xa8, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2dada44, size 0x9c, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x2dadae0, size 0x9c, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method ModifyMesh, addr 0x2dadb7c, size 0x1a8, virtual true, abstract: false, final false
  inline void ModifyMesh(::UnityEngine::Mesh* mesh);

  /// @brief Method ModifyMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ModifyMesh(::UnityEngine::UI::VertexHelper* vh);

  static inline ::UnityEngine::UI::BaseMeshEffect* New_ctor();

  /// @brief Method .ctor, addr 0x2dadd24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BaseMeshEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseMeshEffect(BaseMeshEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseMeshEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseMeshEffect(BaseMeshEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseMeshEffect();

public:
  /// @brief Field m_Graphic, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> ___m_Graphic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::BaseMeshEffect, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::BaseMeshEffect, ___m_Graphic) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::BaseMeshEffect);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::BaseMeshEffect*, "UnityEngine.UI", "BaseMeshEffect");
