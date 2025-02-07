#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialPropertyBlockColorAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(MaterialPropertyBlockColorAnimator)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockColorAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockColorAnimator);
// Dependencies MaterialPropertyBlockAnimator, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialPropertyBlockColorAnimator
class CORDL_TYPE MaterialPropertyBlockColorAnimator : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
public:
  // Declarations
  /// @brief Field _color, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  static inline ::GlobalNamespace::MaterialPropertyBlockColorAnimator* New_ctor();

  /// @brief Method SetProperty, addr 0x39eb200, size 0x34, virtual true, abstract: false, final false
  inline void SetProperty();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x39eb298, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0x39eb1e8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color, addr 0x39eb1f4, size 0xc, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockColorAnimator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockColorAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockColorAnimator(MaterialPropertyBlockColorAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockColorAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockColorAnimator(MaterialPropertyBlockColorAnimator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16349 };

  /// @brief Field _color, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockColorAnimator, ____color) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockColorAnimator, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockColorAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockColorAnimator*, "", "MaterialPropertyBlockColorAnimator");
