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
class VertexHelper;
}
namespace UnityEngine::UI {
class IMeshModifier;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13214))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13143))
// CS Name: ::UnityEngine.UI::BaseMeshEffect*
class CORDL_TYPE BaseMeshEffect : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  /// @brief Field m_Graphic, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Graphic, put = __set_m_Graphic))::UnityEngine::UI::Graphic* m_Graphic;

  __declspec(property(get = get_graphic))::UnityEngine::UI::Graphic* graphic;

  /// @brief Convert operator to "::UnityEngine::UI::IMeshModifier"
  constexpr operator ::UnityEngine::UI::IMeshModifier*() noexcept;

  constexpr ::UnityEngine::UI::Graphic*& __get_m_Graphic();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Graphic*> const& __get_m_Graphic() const;

  constexpr void __set_m_Graphic(::UnityEngine::UI::Graphic* value);

  /// @brief Method get_graphic addr 0x2d90520 size 0x94 virtual false final false
  inline ::UnityEngine::UI::Graphic* get_graphic();

  /// @brief Method OnEnable addr 0x2d905b4 size 0xa8 virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2d9065c size 0x9c virtual true final false
  inline void OnDisable();

  /// @brief Method OnDidApplyAnimationProperties addr 0x2d906f8 size 0x9c virtual true final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method ModifyMesh addr 0x2d90794 size 0x1a8 virtual true final false
  inline void ModifyMesh(::UnityEngine::Mesh* mesh);

  /// @brief Method ModifyMesh addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ModifyMesh(::UnityEngine::UI::VertexHelper* vh);

  static inline ::UnityEngine::UI::BaseMeshEffect* New_ctor();

  /// @brief Method .ctor addr 0x2d9093c size 0x8 virtual false final false
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
  ::UnityEngine::UI::Graphic* ___m_Graphic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::BaseMeshEffect, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::BaseMeshEffect);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::BaseMeshEffect*, "UnityEngine.UI", "BaseMeshEffect");
