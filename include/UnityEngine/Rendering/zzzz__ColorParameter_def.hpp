#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ColorParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorParameter)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ColorParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ColorParameter);
// Dependencies UnityEngine.Color, UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ColorParameter
class CORDL_TYPE ColorParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Color> {
public:
  // Declarations
  /// @brief Field hdr, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_hdr, put = __cordl_internal_set_hdr)) bool hdr;

  /// @brief Field showAlpha, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_showAlpha, put = __cordl_internal_set_showAlpha)) bool showAlpha;

  /// @brief Field showEyeDropper, offset 0x26, size 0x1
  __declspec(property(get = __cordl_internal_get_showEyeDropper, put = __cordl_internal_set_showEyeDropper)) bool showEyeDropper;

  /// @brief Method Interp, addr 0x65ae58c, size 0x30, virtual true, abstract: false, final false
  inline void Interp(::UnityEngine::Color from, ::UnityEngine::Color to, float_t t);

  static inline ::UnityEngine::Rendering::ColorParameter* New_ctor(::UnityEngine::Color value, bool hdr, bool showAlpha, bool showEyeDropper, bool overrideState);

  static inline ::UnityEngine::Rendering::ColorParameter* New_ctor(::UnityEngine::Color value, bool overrideState);

  constexpr bool const& __cordl_internal_get_hdr() const;

  constexpr bool& __cordl_internal_get_hdr();

  constexpr bool const& __cordl_internal_get_showAlpha() const;

  constexpr bool& __cordl_internal_get_showAlpha();

  constexpr bool const& __cordl_internal_get_showEyeDropper() const;

  constexpr bool& __cordl_internal_get_showEyeDropper();

  constexpr void __cordl_internal_set_hdr(bool value);

  constexpr void __cordl_internal_set_showAlpha(bool value);

  constexpr void __cordl_internal_set_showEyeDropper(bool value);

  /// @brief Method .ctor, addr 0x65ae4c0, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color value, bool hdr, bool showAlpha, bool showEyeDropper, bool overrideState);

  /// @brief Method .ctor, addr 0x65ae434, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorParameter(ColorParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorParameter(ColorParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12326 };

  /// @brief Field hdr, offset: 0x24, size: 0x1, def value: None
  bool ___hdr;

  /// @brief Field showAlpha, offset: 0x25, size: 0x1, def value: None
  bool ___showAlpha;

  /// @brief Field showEyeDropper, offset: 0x26, size: 0x1, def value: None
  bool ___showEyeDropper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ColorParameter, ___hdr) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ColorParameter, ___showAlpha) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ColorParameter, ___showEyeDropper) == 0x26, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ColorParameter, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ColorParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ColorParameter*, "UnityEngine.Rendering", "ColorParameter");
