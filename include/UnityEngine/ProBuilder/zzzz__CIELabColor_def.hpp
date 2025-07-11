#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/CIELabColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CIELabColor)
namespace UnityEngine::ProBuilder {
class XYZColor;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class CIELabColor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::CIELabColor);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.CIELabColor
class CORDL_TYPE CIELabColor : public ::System::Object {
public:
  // Declarations
  /// @brief Field L, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_L, put = __cordl_internal_set_L)) float_t L;

  /// @brief Field a, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_a, put = __cordl_internal_set_a)) float_t a;

  /// @brief Field b, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) float_t b;

  /// @brief Method FromRGB, addr 0x4706490, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::CIELabColor* FromRGB(::UnityEngine::Color col);

  /// @brief Method FromXYZ, addr 0x47062b4, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::CIELabColor* FromXYZ(::UnityEngine::ProBuilder::XYZColor* xyz);

  static inline ::UnityEngine::ProBuilder::CIELabColor* New_ctor(float_t L, float_t a, float_t b);

  /// @brief Method ToString, addr 0x470651c, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr float_t const& __cordl_internal_get_L() const;

  constexpr float_t& __cordl_internal_get_L();

  constexpr float_t const& __cordl_internal_get_a() const;

  constexpr float_t& __cordl_internal_get_a();

  constexpr float_t const& __cordl_internal_get_b() const;

  constexpr float_t& __cordl_internal_get_b();

  constexpr void __cordl_internal_set_L(float_t value);

  constexpr void __cordl_internal_set_a(float_t value);

  constexpr void __cordl_internal_set_b(float_t value);

  /// @brief Method .ctor, addr 0x4706278, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(float_t L, float_t a, float_t b);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CIELabColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CIELabColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CIELabColor(CIELabColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CIELabColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CIELabColor(CIELabColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14233 };

  /// @brief Field L, offset: 0x10, size: 0x4, def value: None
  float_t ___L;

  /// @brief Field a, offset: 0x14, size: 0x4, def value: None
  float_t ___a;

  /// @brief Field b, offset: 0x18, size: 0x4, def value: None
  float_t ___b;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::CIELabColor, ___L) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::CIELabColor, ___a) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::CIELabColor, ___b) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::CIELabColor, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::CIELabColor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::CIELabColor*, "UnityEngine.ProBuilder", "CIELabColor");
