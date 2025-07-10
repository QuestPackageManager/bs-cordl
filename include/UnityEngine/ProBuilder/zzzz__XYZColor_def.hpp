#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/XYZColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XYZColor)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class XYZColor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::XYZColor);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.XYZColor
class CORDL_TYPE XYZColor : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) float_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) float_t y;

  /// @brief Field z, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) float_t z;

  /// @brief Method FromRGB, addr 0x4705f94, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::XYZColor* FromRGB(float_t R, float_t G, float_t B);

  /// @brief Method FromRGB, addr 0x4705ea4, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::XYZColor* FromRGB(::UnityEngine::Color col);

  static inline ::UnityEngine::ProBuilder::XYZColor* New_ctor(float_t x, float_t y, float_t z);

  /// @brief Method ToString, addr 0x47061b4, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr float_t const& __cordl_internal_get_x() const;

  constexpr float_t& __cordl_internal_get_x();

  constexpr float_t const& __cordl_internal_get_y() const;

  constexpr float_t& __cordl_internal_get_y();

  constexpr float_t const& __cordl_internal_get_z() const;

  constexpr float_t& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_x(float_t value);

  constexpr void __cordl_internal_set_y(float_t value);

  constexpr void __cordl_internal_set_z(float_t value);

  /// @brief Method .ctor, addr 0x4705e68, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XYZColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XYZColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XYZColor(XYZColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XYZColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XYZColor(XYZColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14232 };

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  float_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  float_t ___y;

  /// @brief Field z, offset: 0x18, size: 0x4, def value: None
  float_t ___z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::XYZColor, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::XYZColor, ___y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::XYZColor, ___z) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::XYZColor, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::XYZColor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::XYZColor*, "UnityEngine.ProBuilder", "XYZColor");
