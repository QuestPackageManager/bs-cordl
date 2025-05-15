#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/HSVColor.hpp"
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
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.HSVColor
class CORDL_TYPE HSVColor : public ::System::Object {
public:
  // Declarations
  /// @brief Field h, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_h, put = __cordl_internal_set_h)) float_t h;

  /// @brief Field s, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s)) float_t s;

  /// @brief Field v, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_v, put = __cordl_internal_set_v)) float_t v;

  /// @brief Method FromRGB, addr 0x4705ef0, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::HSVColor* FromRGB(::UnityEngine::Color col);

  static inline ::UnityEngine::ProBuilder::HSVColor* New_ctor(float_t h, float_t s, float_t v);

  static inline ::UnityEngine::ProBuilder::HSVColor* New_ctor(float_t h, float_t s, float_t v, float_t sv_modifier);

  /// @brief Method SqrDistance, addr 0x4706200, size 0x48, virtual false, abstract: false, final false
  inline float_t SqrDistance(::UnityEngine::ProBuilder::HSVColor* InColor);

  /// @brief Method ToString, addr 0x470613c, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr float_t const& __cordl_internal_get_h() const;

  constexpr float_t& __cordl_internal_get_h();

  constexpr float_t const& __cordl_internal_get_s() const;

  constexpr float_t& __cordl_internal_get_s();

  constexpr float_t const& __cordl_internal_get_v() const;

  constexpr float_t& __cordl_internal_get_v();

  constexpr void __cordl_internal_set_h(float_t value);

  constexpr void __cordl_internal_set_s(float_t value);

  constexpr void __cordl_internal_set_v(float_t value);

  /// @brief Method .ctor, addr 0x4705e6c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(float_t h, float_t s, float_t v);

  /// @brief Method .ctor, addr 0x4705ea8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(float_t h, float_t s, float_t v, float_t sv_modifier);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HSVColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HSVColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HSVColor(HSVColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HSVColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HSVColor(HSVColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14231 };

  /// @brief Field h, offset: 0x10, size: 0x4, def value: None
  float_t ___h;

  /// @brief Field s, offset: 0x14, size: 0x4, def value: None
  float_t ___s;

  /// @brief Field v, offset: 0x18, size: 0x4, def value: None
  float_t ___v;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::HSVColor, ___h) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::HSVColor, ___s) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::HSVColor, ___v) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::HSVColor, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::HSVColor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::HSVColor*, "UnityEngine.ProBuilder", "HSVColor");
