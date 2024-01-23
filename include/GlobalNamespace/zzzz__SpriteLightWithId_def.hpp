#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__SpriteLightWithId_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteLightWithId)
namespace GlobalNamespace {
struct __SpriteLightWithId__MultiplyColorByAlphaType;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SpriteLightWithId__MultiplyColorByAlphaType;
}
namespace GlobalNamespace {
class SpriteLightWithId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType);
MARK_REF_PTR_T(::GlobalNamespace::SpriteLightWithId);
// Type: ::MultiplyColorByAlphaType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14556))
// CS Name: ::SpriteLightWithId::MultiplyColorByAlphaType
struct CORDL_TYPE __SpriteLightWithId__MultiplyColorByAlphaType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SpriteLightWithId__MultiplyColorByAlphaType_Unwrapped
  enum struct ____SpriteLightWithId__MultiplyColorByAlphaType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_BeforeApplyingMinAlpha = static_cast<int32_t>(0x1),
    __E_AfterApplyingMinAlpha = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SpriteLightWithId__MultiplyColorByAlphaType_Unwrapped() const noexcept {
    return static_cast<____SpriteLightWithId__MultiplyColorByAlphaType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SpriteLightWithId__MultiplyColorByAlphaType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SpriteLightWithId__MultiplyColorByAlphaType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType const None;

  /// @brief Field BeforeApplyingMinAlpha value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType const BeforeApplyingMinAlpha;

  /// @brief Field AfterApplyingMinAlpha value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType const AfterApplyingMinAlpha;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SpriteLightWithId
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 83, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14542)), TypeDefinitionIndex(TypeDefinitionIndex(14556))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14557))
// CS Name: ::SpriteLightWithId*
class CORDL_TYPE SpriteLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  using MultiplyColorByAlphaType = ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType;

  /// @brief Field _spriteRenderer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__spriteRenderer, put = __cordl_internal_set__spriteRenderer))::UnityW<::UnityEngine::SpriteRenderer> _spriteRenderer;

  /// @brief Field _hideIfAlphaOutOfRange, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__hideIfAlphaOutOfRange, put = __cordl_internal_set__hideIfAlphaOutOfRange)) bool _hideIfAlphaOutOfRange;

  /// @brief Field _hideAlphaRangeMin, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__hideAlphaRangeMin, put = __cordl_internal_set__hideAlphaRangeMin)) float_t _hideAlphaRangeMin;

  /// @brief Field _hideAlphaRangeMax, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__hideAlphaRangeMax, put = __cordl_internal_set__hideAlphaRangeMax)) float_t _hideAlphaRangeMax;

  /// @brief Field _intensity, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  /// @brief Field _minAlpha, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__minAlpha, put = __cordl_internal_set__minAlpha)) float_t _minAlpha;

  /// @brief Field _multiplyColorByAlpha, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplyColorByAlpha,
                      put = __cordl_internal_set__multiplyColorByAlpha))::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType _multiplyColorByAlpha;

  /// @brief Field _setColorOnly, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__setColorOnly, put = __cordl_internal_set__setColorOnly)) bool _setColorOnly;

  /// @brief Field _setAlphaOnly, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__setAlphaOnly, put = __cordl_internal_set__setAlphaOnly)) bool _setAlphaOnly;

  /// @brief Field _setOnlyOnce, offset 0x52, size 0x1
  __declspec(property(get = __cordl_internal_get__setOnlyOnce, put = __cordl_internal_set__setOnlyOnce)) bool _setOnlyOnce;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__spriteRenderer();

  constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__spriteRenderer() const;

  constexpr void __cordl_internal_set__spriteRenderer(::UnityW<::UnityEngine::SpriteRenderer> value);

  constexpr bool& __cordl_internal_get__hideIfAlphaOutOfRange();

  constexpr bool const& __cordl_internal_get__hideIfAlphaOutOfRange() const;

  constexpr void __cordl_internal_set__hideIfAlphaOutOfRange(bool value);

  constexpr float_t& __cordl_internal_get__hideAlphaRangeMin();

  constexpr float_t const& __cordl_internal_get__hideAlphaRangeMin() const;

  constexpr void __cordl_internal_set__hideAlphaRangeMin(float_t value);

  constexpr float_t& __cordl_internal_get__hideAlphaRangeMax();

  constexpr float_t const& __cordl_internal_get__hideAlphaRangeMax() const;

  constexpr void __cordl_internal_set__hideAlphaRangeMax(float_t value);

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr float_t& __cordl_internal_get__minAlpha();

  constexpr float_t const& __cordl_internal_get__minAlpha() const;

  constexpr void __cordl_internal_set__minAlpha(float_t value);

  constexpr ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType& __cordl_internal_get__multiplyColorByAlpha();

  constexpr ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType const& __cordl_internal_get__multiplyColorByAlpha() const;

  constexpr void __cordl_internal_set__multiplyColorByAlpha(::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType value);

  constexpr bool& __cordl_internal_get__setColorOnly();

  constexpr bool const& __cordl_internal_get__setColorOnly() const;

  constexpr void __cordl_internal_set__setColorOnly(bool value);

  constexpr bool& __cordl_internal_get__setAlphaOnly();

  constexpr bool const& __cordl_internal_get__setAlphaOnly() const;

  constexpr void __cordl_internal_set__setAlphaOnly(bool value);

  constexpr bool& __cordl_internal_get__setOnlyOnce();

  constexpr bool const& __cordl_internal_get__setOnlyOnce() const;

  constexpr void __cordl_internal_set__setOnlyOnce(bool value);

  /// @brief Method get_color, addr 0x2113eb4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method ColorWasSet, addr 0x2113ed0, size 0x144, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::SpriteLightWithId* New_ctor();

  /// @brief Method .ctor, addr 0x2114014, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SpriteLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteLightWithId(SpriteLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteLightWithId(SpriteLightWithId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteLightWithId();

public:
  /// @brief Field _spriteRenderer, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ____spriteRenderer;

  /// @brief Field _hideIfAlphaOutOfRange, offset: 0x38, size: 0x1, def value: None
  bool ____hideIfAlphaOutOfRange;

  /// @brief Field _hideAlphaRangeMin, offset: 0x3c, size: 0x4, def value: None
  float_t ____hideAlphaRangeMin;

  /// @brief Field _hideAlphaRangeMax, offset: 0x40, size: 0x4, def value: None
  float_t ____hideAlphaRangeMax;

  /// @brief Field _intensity, offset: 0x44, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _minAlpha, offset: 0x48, size: 0x4, def value: None
  float_t ____minAlpha;

  /// @brief Field _multiplyColorByAlpha, offset: 0x4c, size: 0x4, def value: None
  ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType ____multiplyColorByAlpha;

  /// @brief Field _setColorOnly, offset: 0x50, size: 0x1, def value: None
  bool ____setColorOnly;

  /// @brief Field _setAlphaOnly, offset: 0x51, size: 0x1, def value: None
  bool ____setAlphaOnly;

  /// @brief Field _setOnlyOnce, offset: 0x52, size: 0x1, def value: None
  bool ____setOnlyOnce;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpriteLightWithId, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteLightWithId, ____spriteRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteLightWithId, ____hideIfAlphaOutOfRange) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteLightWithId, ____hideAlphaRangeMin) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteLightWithId, ____hideAlphaRangeMax) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteLightWithId, ____intensity) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteLightWithId, ____minAlpha) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteLightWithId, ____multiplyColorByAlpha) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteLightWithId, ____setColorOnly) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteLightWithId, ____setAlphaOnly) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteLightWithId, ____setOnlyOnce) == 0x52, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType, "", "SpriteLightWithId/MultiplyColorByAlphaType");
NEED_NO_BOX(::GlobalNamespace::SpriteLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpriteLightWithId*, "", "SpriteLightWithId");
