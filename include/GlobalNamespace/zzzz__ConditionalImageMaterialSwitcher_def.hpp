#pragma once
// IWYU pragma private; include "GlobalNamespace/ConditionalImageMaterialSwitcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ConditionalImageMaterialSwitcher)
namespace GlobalNamespace {
class BoolSO;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class ConditionalImageMaterialSwitcher;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConditionalImageMaterialSwitcher);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConditionalImageMaterialSwitcher
class CORDL_TYPE ConditionalImageMaterialSwitcher : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _image, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__image, put = __cordl_internal_set__image)) ::UnityW<::UnityEngine::UI::Image> _image;

  /// @brief Field _material0, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__material0, put = __cordl_internal_set__material0)) ::UnityW<::UnityEngine::Material> _material0;

  /// @brief Field _material1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__material1, put = __cordl_internal_set__material1)) ::UnityW<::UnityEngine::Material> _material1;

  /// @brief Field _value, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) ::UnityW<::GlobalNamespace::BoolSO> _value;

  /// @brief Method Awake, addr 0x3b2e2e0, size 0x80, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::ConditionalImageMaterialSwitcher* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__image() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__image();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material0() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material0();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material1() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material1();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__value() const;

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__image(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__material0(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__material1(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__value(::UnityW<::GlobalNamespace::BoolSO> value);

  /// @brief Method .ctor, addr 0x3b2e360, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionalImageMaterialSwitcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConditionalImageMaterialSwitcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionalImageMaterialSwitcher(ConditionalImageMaterialSwitcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalImageMaterialSwitcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionalImageMaterialSwitcher(ConditionalImageMaterialSwitcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5165 };

  /// @brief Field _material0, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material0;

  /// @brief Field _material1, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material1;

  /// @brief Field _value, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____value;

  /// @brief Field _image, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____image;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConditionalImageMaterialSwitcher, ____material0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalImageMaterialSwitcher, ____material1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalImageMaterialSwitcher, ____value) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalImageMaterialSwitcher, ____image) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConditionalImageMaterialSwitcher, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConditionalImageMaterialSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConditionalImageMaterialSwitcher*, "", "ConditionalImageMaterialSwitcher");
