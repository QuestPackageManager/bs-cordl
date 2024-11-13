#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ColorUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorUtility)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
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
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ColorUtility);
// Type: UnityEngine.ProBuilder::ColorUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::ColorUtility*
class CORDL_TYPE ColorUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field ColorNameLookup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ColorNameLookup,
                             put = setStaticF_ColorNameLookup)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ProBuilder::CIELabColor*>* ColorNameLookup;

  /// @brief Method CIELabFromRGB, addr 0x46a4168, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::CIELabColor* CIELabFromRGB(float_t R, float_t G, float_t B, float_t Scale);

  /// @brief Method DeltaE, addr 0x46a3db0, size 0x48, virtual false, abstract: false, final false
  static inline float_t DeltaE(::UnityEngine::ProBuilder::CIELabColor* lhs, ::UnityEngine::ProBuilder::CIELabColor* rhs);

  /// @brief Method GetColor, addr 0x46a3cd0, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color GetColor(::UnityEngine::Vector3 vec);

  /// @brief Method GetColorName, addr 0x46a3f58, size 0x210, virtual false, abstract: false, final false
  static inline ::StringW GetColorName(::UnityEngine::Color InColor);

  /// @brief Method HSVtoRGB, addr 0x46a3e74, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color HSVtoRGB(float_t h, float_t s, float_t v);

  /// @brief Method HSVtoRGB, addr 0x46a3df8, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color HSVtoRGB(::UnityEngine::ProBuilder::HSVColor* hsv);

  /// @brief Method RGBToXYZ, addr 0x46a35ac, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::XYZColor* RGBToXYZ(::UnityEngine::Color col);

  /// @brief Method RGBToXYZ, addr 0x46a3694, size 0x1ac, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::XYZColor* RGBToXYZ(float_t r, float_t g, float_t b);

  /// @brief Method RGBtoHSV, addr 0x46a3218, size 0x1d0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::HSVColor* RGBtoHSV(::UnityEngine::Color color);

  /// @brief Method XYZToCIE_Lab, addr 0x46a3994, size 0x188, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::CIELabColor* XYZToCIE_Lab(::UnityEngine::ProBuilder::XYZColor* xyz);

  /// @brief Method approx, addr 0x46a3c6c, size 0x64, virtual false, abstract: false, final false
  static inline bool approx(float_t lhs, float_t rhs);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ProBuilder::CIELabColor*>* getStaticF_ColorNameLookup();

  static inline void setStaticF_ColorNameLookup(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ProBuilder::CIELabColor*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorUtility(ColorUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorUtility(ColorUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14195 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ColorUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::ColorUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ColorUtility*, "UnityEngine.ProBuilder", "ColorUtility");
