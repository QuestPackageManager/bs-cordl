#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorUsageAttribute)
// Forward declare root types
namespace UnityEngine {
class ColorUsageAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ColorUsageAttribute);
// Type: UnityEngine::ColorUsageAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10098))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10108))
// CS Name: ::UnityEngine::ColorUsageAttribute*
class CORDL_TYPE ColorUsageAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field showAlpha, offset 0x10, size 0x1
  __declspec(property(get = __get_showAlpha, put = __set_showAlpha)) bool showAlpha;

  /// @brief Field hdr, offset 0x11, size 0x1
  __declspec(property(get = __get_hdr, put = __set_hdr)) bool hdr;

  /// @brief Field minBrightness, offset 0x14, size 0x4
  __declspec(property(get = __get_minBrightness, put = __set_minBrightness)) float_t minBrightness;

  /// @brief Field maxBrightness, offset 0x18, size 0x4
  __declspec(property(get = __get_maxBrightness, put = __set_maxBrightness)) float_t maxBrightness;

  /// @brief Field minExposureValue, offset 0x1c, size 0x4
  __declspec(property(get = __get_minExposureValue, put = __set_minExposureValue)) float_t minExposureValue;

  /// @brief Field maxExposureValue, offset 0x20, size 0x4
  __declspec(property(get = __get_maxExposureValue, put = __set_maxExposureValue)) float_t maxExposureValue;

  constexpr bool& __get_showAlpha();

  constexpr bool const& __get_showAlpha() const;

  constexpr void __set_showAlpha(bool value);

  constexpr bool& __get_hdr();

  constexpr bool const& __get_hdr() const;

  constexpr void __set_hdr(bool value);

  constexpr float_t& __get_minBrightness();

  constexpr float_t const& __get_minBrightness() const;

  constexpr void __set_minBrightness(float_t value);

  constexpr float_t& __get_maxBrightness();

  constexpr float_t const& __get_maxBrightness() const;

  constexpr void __set_maxBrightness(float_t value);

  constexpr float_t& __get_minExposureValue();

  constexpr float_t const& __get_minExposureValue() const;

  constexpr void __set_minExposureValue(float_t value);

  constexpr float_t& __get_maxExposureValue();

  constexpr float_t const& __get_maxExposureValue() const;

  constexpr void __set_maxExposureValue(float_t value);

  static inline ::UnityEngine::ColorUsageAttribute* New_ctor(bool showAlpha);

  /// @brief Method .ctor addr 0x2b65d74 size 0x3c virtual false final false
  inline void _ctor(bool showAlpha);

  static inline ::UnityEngine::ColorUsageAttribute* New_ctor(bool showAlpha, bool hdr);

  /// @brief Method .ctor addr 0x2b65db0 size 0x44 virtual false final false
  inline void _ctor(bool showAlpha, bool hdr);

  // Ctor Parameters [CppParam { name: "", ty: "ColorUsageAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorUsageAttribute(ColorUsageAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorUsageAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorUsageAttribute(ColorUsageAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorUsageAttribute();

public:
  /// @brief Field showAlpha, offset: 0x10, size: 0x1, def value: None
  bool ___showAlpha;

  /// @brief Field hdr, offset: 0x11, size: 0x1, def value: None
  bool ___hdr;

  /// @brief Field minBrightness, offset: 0x14, size: 0x4, def value: None
  float_t ___minBrightness;

  /// @brief Field maxBrightness, offset: 0x18, size: 0x4, def value: None
  float_t ___maxBrightness;

  /// @brief Field minExposureValue, offset: 0x1c, size: 0x4, def value: None
  float_t ___minExposureValue;

  /// @brief Field maxExposureValue, offset: 0x20, size: 0x4, def value: None
  float_t ___maxExposureValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ColorUsageAttribute, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ColorUsageAttribute, ___showAlpha) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ColorUsageAttribute, ___hdr) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ColorUsageAttribute, ___minBrightness) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ColorUsageAttribute, ___maxBrightness) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ColorUsageAttribute, ___minExposureValue) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ColorUsageAttribute, ___maxExposureValue) == 0x20, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ColorUsageAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ColorUsageAttribute*, "UnityEngine", "ColorUsageAttribute");
