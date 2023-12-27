#pragma once
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
// Type: UnityEngine.ProBuilder::XYZColor
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12114))
// CS Name: ::UnityEngine.ProBuilder::XYZColor*
class CORDL_TYPE XYZColor : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __get_x, put = __set_x)) float_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __get_y, put = __set_y)) float_t y;

  /// @brief Field z, offset 0x18, size 0x4
  __declspec(property(get = __get_z, put = __set_z)) float_t z;

  constexpr float_t& __get_x();

  constexpr float_t const& __get_x() const;

  constexpr void __set_x(float_t value);

  constexpr float_t& __get_y();

  constexpr float_t const& __get_y() const;

  constexpr void __set_y(float_t value);

  constexpr float_t& __get_z();

  constexpr float_t const& __get_z() const;

  constexpr void __set_z(float_t value);

  static inline ::UnityEngine::ProBuilder::XYZColor* New_ctor(float_t x, float_t y, float_t z);

  /// @brief Method .ctor addr 0x2b3d64c size 0x3c virtual false final false
  inline void _ctor(float_t x, float_t y, float_t z);

  /// @brief Method FromRGB addr 0x2b3d688 size 0x7c virtual false final false
  static inline ::UnityEngine::ProBuilder::XYZColor* FromRGB(::UnityEngine::Color col);

  /// @brief Method FromRGB addr 0x2b3d778 size 0x74 virtual false final false
  static inline ::UnityEngine::ProBuilder::XYZColor* FromRGB(float_t R, float_t G, float_t B);

  /// @brief Method ToString addr 0x2b3d988 size 0xc4 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "XYZColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XYZColor(XYZColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XYZColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XYZColor(XYZColor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XYZColor();

public:
  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  float_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  float_t ___y;

  /// @brief Field z, offset: 0x18, size: 0x4, def value: None
  float_t ___z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::XYZColor, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::XYZColor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::XYZColor*, "UnityEngine.ProBuilder", "XYZColor");
