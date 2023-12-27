#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HSVColor)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class HSVColor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::HSVColor);
// Type: UnityEngine.ProBuilder::HSVColor
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12113))
// CS Name: ::UnityEngine.ProBuilder::HSVColor*
class CORDL_TYPE HSVColor : public ::System::Object {
public:
  // Declarations
  /// @brief Field h, offset 0x10, size 0x4
  __declspec(property(get = __get_h, put = __set_h)) float_t h;

  /// @brief Field s, offset 0x14, size 0x4
  __declspec(property(get = __get_s, put = __set_s)) float_t s;

  /// @brief Field v, offset 0x18, size 0x4
  __declspec(property(get = __get_v, put = __set_v)) float_t v;

  constexpr float_t& __get_h();

  constexpr float_t const& __get_h() const;

  constexpr void __set_h(float_t value);

  constexpr float_t& __get_s();

  constexpr float_t const& __get_s() const;

  constexpr void __set_s(float_t value);

  constexpr float_t& __get_v();

  constexpr float_t const& __get_v() const;

  constexpr void __set_v(float_t value);

  static inline ::UnityEngine::ProBuilder::HSVColor* New_ctor(float_t h, float_t s, float_t v);

  /// @brief Method .ctor addr 0x2b3d220 size 0x3c virtual false final false
  inline void _ctor(float_t h, float_t s, float_t v);

  static inline ::UnityEngine::ProBuilder::HSVColor* New_ctor(float_t h, float_t s, float_t v, float_t sv_modifier);

  /// @brief Method .ctor addr 0x2b3d25c size 0x48 virtual false final false
  inline void _ctor(float_t h, float_t s, float_t v, float_t sv_modifier);

  /// @brief Method FromRGB addr 0x2b3d2a4 size 0x7c virtual false final false
  static inline ::UnityEngine::ProBuilder::HSVColor* FromRGB(::UnityEngine::Color col);

  /// @brief Method ToString addr 0x2b3d540 size 0xc4 virtual true final false
  inline ::StringW ToString();

  /// @brief Method SqrDistance addr 0x2b3d604 size 0x48 virtual false final false
  inline float_t SqrDistance(::UnityEngine::ProBuilder::HSVColor* InColor);

  // Ctor Parameters [CppParam { name: "", ty: "HSVColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HSVColor(HSVColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HSVColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HSVColor(HSVColor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HSVColor();

public:
  /// @brief Field h, offset: 0x10, size: 0x4, def value: None
  float_t ___h;

  /// @brief Field s, offset: 0x14, size: 0x4, def value: None
  float_t ___s;

  /// @brief Field v, offset: 0x18, size: 0x4, def value: None
  float_t ___v;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::HSVColor, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::HSVColor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::HSVColor*, "UnityEngine.ProBuilder", "HSVColor");
