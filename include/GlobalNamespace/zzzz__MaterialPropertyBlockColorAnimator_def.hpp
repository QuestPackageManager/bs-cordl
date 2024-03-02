#pragma once
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
// Type: ::MaterialPropertyBlockColorAnimator
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MaterialPropertyBlockColorAnimator*
class CORDL_TYPE MaterialPropertyBlockColorAnimator : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
public:
  // Declarations
  /// @brief Field _color, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color))::UnityEngine::Color _color;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  static inline ::GlobalNamespace::MaterialPropertyBlockColorAnimator* New_ctor();

  /// @brief Method SetProperty, addr 0x2276b3c, size 0x34, virtual true, abstract: false, final false
  inline void SetProperty();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x2276bdc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0x2276b24, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color, addr 0x2276b30, size 0xc, virtual false, abstract: false, final false
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

  /// @brief Field _color, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockColorAnimator, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockColorAnimator, ____color) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockColorAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockColorAnimator*, "", "MaterialPropertyBlockColorAnimator");
