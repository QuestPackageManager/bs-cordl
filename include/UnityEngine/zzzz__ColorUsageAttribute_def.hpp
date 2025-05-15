#pragma once
// IWYU pragma private; include "UnityEngine/ColorUsageAttribute.hpp"
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
// Dependencies UnityEngine.PropertyAttribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ColorUsageAttribute
class CORDL_TYPE ColorUsageAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field hdr, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_hdr, put = __cordl_internal_set_hdr)) bool hdr;

  /// @brief Field maxBrightness, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_maxBrightness, put = __cordl_internal_set_maxBrightness)) float_t maxBrightness;

  /// @brief Field maxExposureValue, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_maxExposureValue, put = __cordl_internal_set_maxExposureValue)) float_t maxExposureValue;

  /// @brief Field minBrightness, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_minBrightness, put = __cordl_internal_set_minBrightness)) float_t minBrightness;

  /// @brief Field minExposureValue, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_minExposureValue, put = __cordl_internal_set_minExposureValue)) float_t minExposureValue;

  /// @brief Field showAlpha, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_showAlpha, put = __cordl_internal_set_showAlpha)) bool showAlpha;

  static inline ::UnityEngine::ColorUsageAttribute* New_ctor(bool showAlpha);

  static inline ::UnityEngine::ColorUsageAttribute* New_ctor(bool showAlpha, bool hdr);

  constexpr bool const& __cordl_internal_get_hdr() const;

  constexpr bool& __cordl_internal_get_hdr();

  constexpr float_t const& __cordl_internal_get_maxBrightness() const;

  constexpr float_t& __cordl_internal_get_maxBrightness();

  constexpr float_t const& __cordl_internal_get_maxExposureValue() const;

  constexpr float_t& __cordl_internal_get_maxExposureValue();

  constexpr float_t const& __cordl_internal_get_minBrightness() const;

  constexpr float_t& __cordl_internal_get_minBrightness();

  constexpr float_t const& __cordl_internal_get_minExposureValue() const;

  constexpr float_t& __cordl_internal_get_minExposureValue();

  constexpr bool const& __cordl_internal_get_showAlpha() const;

  constexpr bool& __cordl_internal_get_showAlpha();

  constexpr void __cordl_internal_set_hdr(bool value);

  constexpr void __cordl_internal_set_maxBrightness(float_t value);

  constexpr void __cordl_internal_set_maxExposureValue(float_t value);

  constexpr void __cordl_internal_set_minBrightness(float_t value);

  constexpr void __cordl_internal_set_minExposureValue(float_t value);

  constexpr void __cordl_internal_set_showAlpha(bool value);

  /// @brief Method .ctor, addr 0x48a71cc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(bool showAlpha);

  /// @brief Method .ctor, addr 0x48a7208, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(bool showAlpha, bool hdr);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorUsageAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorUsageAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorUsageAttribute(ColorUsageAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorUsageAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorUsageAttribute(ColorUsageAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10847 };

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
static_assert(offsetof(::UnityEngine::ColorUsageAttribute, ___showAlpha) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ColorUsageAttribute, ___hdr) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ColorUsageAttribute, ___minBrightness) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ColorUsageAttribute, ___maxBrightness) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ColorUsageAttribute, ___minExposureValue) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ColorUsageAttribute, ___maxExposureValue) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ColorUsageAttribute, 0x28>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ColorUsageAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ColorUsageAttribute*, "UnityEngine", "ColorUsageAttribute");
