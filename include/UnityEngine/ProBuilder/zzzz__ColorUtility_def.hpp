#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ColorUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorUtility)
namespace UnityEngine::ProBuilder {
class CIELabColor;
}
namespace UnityEngine::ProBuilder {
class HSVColor;
}
namespace UnityEngine::ProBuilder {
class XYZColor;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ColorUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::ProBuilder::ColorUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::ColorUtility*, "UnityEngine.ProBuilder", "ColorUtility");
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.ColorUtility
class CORDL_TYPE ColorUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method DeltaE, addr 0x6ac49f8, size 0x44, virtual false, abstract: false, final false
  static inline float_t DeltaE(::UnityEngine::ProBuilder::CIELabColor* lhs, ::UnityEngine::ProBuilder::CIELabColor* rhs);

  /// @brief Method GetColor, addr 0x6ac493c, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color GetColor(::UnityEngine::Vector3 vec);

  /// @brief Method HSVtoRGB, addr 0x6ac4a54, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color HSVtoRGB(float_t h, float_t s, float_t v);

  /// @brief Method HSVtoRGB, addr 0x6ac4a3c, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color HSVtoRGB(::UnityEngine::ProBuilder::HSVColor* hsv);

  /// @brief Method RGBToXYZ, addr 0x6ac43f0, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::XYZColor* RGBToXYZ(::UnityEngine::Color col);

  /// @brief Method RGBToXYZ, addr 0x6ac43f8, size 0x1a8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::XYZColor* RGBToXYZ(float_t r, float_t g, float_t b);

  /// @brief Method RGBtoHSV, addr 0x6ac416c, size 0x158, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::HSVColor* RGBtoHSV(::UnityEngine::Color color);

  /// @brief Method XYZToCIE_Lab, addr 0x6ac4688, size 0x164, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::CIELabColor* XYZToCIE_Lab(::UnityEngine::ProBuilder::XYZColor* xyz);

  /// @brief Method approx, addr 0x6ac48d4, size 0x68, virtual false, abstract: false, final false
  static inline bool approx(float_t lhs, float_t rhs);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorUtility(ColorUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorUtility(ColorUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17247 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ProBuilder::ColorUtility) == 0x10, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
