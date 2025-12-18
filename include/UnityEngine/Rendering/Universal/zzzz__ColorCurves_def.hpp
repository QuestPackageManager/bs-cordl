#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ColorCurves.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(ColorCurves)
namespace UnityEngine::Rendering {
class IPostProcessComponent;
}
namespace UnityEngine::Rendering {
class TextureCurveParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ColorCurves;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ColorCurves);
// Dependencies UnityEngine.Rendering.VolumeComponent
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ColorCurves
class CORDL_TYPE ColorCurves : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field blue, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_blue, put = __cordl_internal_set_blue)) ::UnityEngine::Rendering::TextureCurveParameter* blue;

  /// @brief Field green, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_green, put = __cordl_internal_set_green)) ::UnityEngine::Rendering::TextureCurveParameter* green;

  /// @brief Field hueVsHue, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_hueVsHue, put = __cordl_internal_set_hueVsHue)) ::UnityEngine::Rendering::TextureCurveParameter* hueVsHue;

  /// @brief Field hueVsSat, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_hueVsSat, put = __cordl_internal_set_hueVsSat)) ::UnityEngine::Rendering::TextureCurveParameter* hueVsSat;

  /// @brief Field lumVsSat, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_lumVsSat, put = __cordl_internal_set_lumVsSat)) ::UnityEngine::Rendering::TextureCurveParameter* lumVsSat;

  /// @brief Field master, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_master, put = __cordl_internal_set_master)) ::UnityEngine::Rendering::TextureCurveParameter* master;

  /// @brief Field red, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_red, put = __cordl_internal_set_red)) ::UnityEngine::Rendering::TextureCurveParameter* red;

  /// @brief Field satVsSat, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_satVsSat, put = __cordl_internal_set_satVsSat)) ::UnityEngine::Rendering::TextureCurveParameter* satVsSat;

  /// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x66c5ba8, size 0x8, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x66c5bb0, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::ColorCurves* New_ctor();

  constexpr ::UnityEngine::Rendering::TextureCurveParameter* const& __cordl_internal_get_blue() const;

  constexpr ::UnityEngine::Rendering::TextureCurveParameter*& __cordl_internal_get_blue();

  constexpr ::UnityEngine::Rendering::TextureCurveParameter* const& __cordl_internal_get_green() const;

  constexpr ::UnityEngine::Rendering::TextureCurveParameter*& __cordl_internal_get_green();

  constexpr ::UnityEngine::Rendering::TextureCurveParameter* const& __cordl_internal_get_hueVsHue() const;

  constexpr ::UnityEngine::Rendering::TextureCurveParameter*& __cordl_internal_get_hueVsHue();

  constexpr ::UnityEngine::Rendering::TextureCurveParameter* const& __cordl_internal_get_hueVsSat() const;

  constexpr ::UnityEngine::Rendering::TextureCurveParameter*& __cordl_internal_get_hueVsSat();

  constexpr ::UnityEngine::Rendering::TextureCurveParameter* const& __cordl_internal_get_lumVsSat() const;

  constexpr ::UnityEngine::Rendering::TextureCurveParameter*& __cordl_internal_get_lumVsSat();

  constexpr ::UnityEngine::Rendering::TextureCurveParameter* const& __cordl_internal_get_master() const;

  constexpr ::UnityEngine::Rendering::TextureCurveParameter*& __cordl_internal_get_master();

  constexpr ::UnityEngine::Rendering::TextureCurveParameter* const& __cordl_internal_get_red() const;

  constexpr ::UnityEngine::Rendering::TextureCurveParameter*& __cordl_internal_get_red();

  constexpr ::UnityEngine::Rendering::TextureCurveParameter* const& __cordl_internal_get_satVsSat() const;

  constexpr ::UnityEngine::Rendering::TextureCurveParameter*& __cordl_internal_get_satVsSat();

  constexpr void __cordl_internal_set_blue(::UnityEngine::Rendering::TextureCurveParameter* value);

  constexpr void __cordl_internal_set_green(::UnityEngine::Rendering::TextureCurveParameter* value);

  constexpr void __cordl_internal_set_hueVsHue(::UnityEngine::Rendering::TextureCurveParameter* value);

  constexpr void __cordl_internal_set_hueVsSat(::UnityEngine::Rendering::TextureCurveParameter* value);

  constexpr void __cordl_internal_set_lumVsSat(::UnityEngine::Rendering::TextureCurveParameter* value);

  constexpr void __cordl_internal_set_master(::UnityEngine::Rendering::TextureCurveParameter* value);

  constexpr void __cordl_internal_set_red(::UnityEngine::Rendering::TextureCurveParameter* value);

  constexpr void __cordl_internal_set_satVsSat(::UnityEngine::Rendering::TextureCurveParameter* value);

  /// @brief Method .ctor, addr 0x66c5bb8, size 0x44c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::IPostProcessComponent* i___UnityEngine__Rendering__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorCurves();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorCurves", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorCurves(ColorCurves&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorCurves", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorCurves(ColorCurves const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12764 };

  /// @brief Field master, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::TextureCurveParameter* ___master;

  /// @brief Field red, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::TextureCurveParameter* ___red;

  /// @brief Field green, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::TextureCurveParameter* ___green;

  /// @brief Field blue, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::TextureCurveParameter* ___blue;

  /// @brief Field hueVsHue, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::TextureCurveParameter* ___hueVsHue;

  /// @brief Field hueVsSat, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::TextureCurveParameter* ___hueVsSat;

  /// @brief Field satVsSat, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::TextureCurveParameter* ___satVsSat;

  /// @brief Field lumVsSat, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::TextureCurveParameter* ___lumVsSat;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ColorCurves, ___master) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ColorCurves, ___red) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ColorCurves, ___green) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ColorCurves, ___blue) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ColorCurves, ___hueVsHue) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ColorCurves, ___hueVsSat) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ColorCurves, ___satVsSat) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ColorCurves, ___lumVsSat) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ColorCurves, 0x78>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ColorCurves);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ColorCurves*, "UnityEngine.Rendering.Universal", "ColorCurves");
