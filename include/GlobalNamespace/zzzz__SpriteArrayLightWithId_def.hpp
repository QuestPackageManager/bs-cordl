#pragma once
// IWYU pragma private; include "GlobalNamespace/SpriteArrayLightWithId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteArrayLightWithId)
namespace GlobalNamespace {
struct SpriteArrayLightWithId_MultiplyColorByAlphaType;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
struct SpriteArrayLightWithId_MultiplyColorByAlphaType;
}
namespace GlobalNamespace {
class SpriteArrayLightWithId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType);
MARK_REF_PTR_T(::GlobalNamespace::SpriteArrayLightWithId);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: SpriteArrayLightWithId/MultiplyColorByAlphaType
struct CORDL_TYPE SpriteArrayLightWithId_MultiplyColorByAlphaType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SpriteArrayLightWithId_MultiplyColorByAlphaType_Unwrapped
  enum struct __SpriteArrayLightWithId_MultiplyColorByAlphaType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_BeforeApplyingMinAlpha = static_cast<int32_t>(0x1),
    __E_AfterApplyingMinAlpha = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SpriteArrayLightWithId_MultiplyColorByAlphaType_Unwrapped() const noexcept {
    return static_cast<__SpriteArrayLightWithId_MultiplyColorByAlphaType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteArrayLightWithId_MultiplyColorByAlphaType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SpriteArrayLightWithId_MultiplyColorByAlphaType(int32_t value__) noexcept;

  /// @brief Field AfterApplyingMinAlpha value: I32(2)
  static ::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType const AfterApplyingMinAlpha;

  /// @brief Field BeforeApplyingMinAlpha value: I32(1)
  static ::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType const BeforeApplyingMinAlpha;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19747 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LightWithIdMonoBehaviour, SpriteArrayLightWithId::MultiplyColorByAlphaType
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpriteArrayLightWithId
class CORDL_TYPE SpriteArrayLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  using MultiplyColorByAlphaType = ::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType;

  /// @brief Field _hideAlphaRangeMax, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__hideAlphaRangeMax, put = __cordl_internal_set__hideAlphaRangeMax)) float_t _hideAlphaRangeMax;

  /// @brief Field _hideAlphaRangeMin, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__hideAlphaRangeMin, put = __cordl_internal_set__hideAlphaRangeMin)) float_t _hideAlphaRangeMin;

  /// @brief Field _hideIfAlphaOutOfRange, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__hideIfAlphaOutOfRange, put = __cordl_internal_set__hideIfAlphaOutOfRange)) bool _hideIfAlphaOutOfRange;

  /// @brief Field _intensity, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  /// @brief Field _minAlpha, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__minAlpha, put = __cordl_internal_set__minAlpha)) float_t _minAlpha;

  /// @brief Field _multiplyColorByAlpha, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplyColorByAlpha,
                      put = __cordl_internal_set__multiplyColorByAlpha)) ::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType _multiplyColorByAlpha;

  /// @brief Field _setAlphaOnly, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__setAlphaOnly, put = __cordl_internal_set__setAlphaOnly)) bool _setAlphaOnly;

  /// @brief Field _setColorOnly, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__setColorOnly, put = __cordl_internal_set__setColorOnly)) bool _setColorOnly;

  /// @brief Field _setOnlyOnce, offset 0x5a, size 0x1
  __declspec(property(get = __cordl_internal_get__setOnlyOnce, put = __cordl_internal_set__setOnlyOnce)) bool _setOnlyOnce;

  /// @brief Field _spriteRenderers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__spriteRenderers,
                      put = __cordl_internal_set__spriteRenderers)) ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>, ::Array<::UnityW<::UnityEngine::SpriteRenderer>>*>
      _spriteRenderers;

  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  /// @brief Method ColorWasSet, addr 0x56bcda4, size 0x1a4, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::SpriteArrayLightWithId* New_ctor();

  constexpr float_t const& __cordl_internal_get__hideAlphaRangeMax() const;

  constexpr float_t& __cordl_internal_get__hideAlphaRangeMax();

  constexpr float_t const& __cordl_internal_get__hideAlphaRangeMin() const;

  constexpr float_t& __cordl_internal_get__hideAlphaRangeMin();

  constexpr bool const& __cordl_internal_get__hideIfAlphaOutOfRange() const;

  constexpr bool& __cordl_internal_get__hideIfAlphaOutOfRange();

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr float_t const& __cordl_internal_get__minAlpha() const;

  constexpr float_t& __cordl_internal_get__minAlpha();

  constexpr ::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType const& __cordl_internal_get__multiplyColorByAlpha() const;

  constexpr ::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType& __cordl_internal_get__multiplyColorByAlpha();

  constexpr bool const& __cordl_internal_get__setAlphaOnly() const;

  constexpr bool& __cordl_internal_get__setAlphaOnly();

  constexpr bool const& __cordl_internal_get__setColorOnly() const;

  constexpr bool& __cordl_internal_get__setColorOnly();

  constexpr bool const& __cordl_internal_get__setOnlyOnce() const;

  constexpr bool& __cordl_internal_get__setOnlyOnce();

  constexpr ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>, ::Array<::UnityW<::UnityEngine::SpriteRenderer>>*> const& __cordl_internal_get__spriteRenderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>, ::Array<::UnityW<::UnityEngine::SpriteRenderer>>*>& __cordl_internal_get__spriteRenderers();

  constexpr void __cordl_internal_set__hideAlphaRangeMax(float_t value);

  constexpr void __cordl_internal_set__hideAlphaRangeMin(float_t value);

  constexpr void __cordl_internal_set__hideIfAlphaOutOfRange(bool value);

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr void __cordl_internal_set__minAlpha(float_t value);

  constexpr void __cordl_internal_set__multiplyColorByAlpha(::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType value);

  constexpr void __cordl_internal_set__setAlphaOnly(bool value);

  constexpr void __cordl_internal_set__setColorOnly(bool value);

  constexpr void __cordl_internal_set__setOnlyOnce(bool value);

  constexpr void __cordl_internal_set__spriteRenderers(::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>, ::Array<::UnityW<::UnityEngine::SpriteRenderer>>*> value);

  /// @brief Method .ctor, addr 0x56bcf48, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0x56bcd74, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteArrayLightWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpriteArrayLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteArrayLightWithId(SpriteArrayLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteArrayLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteArrayLightWithId(SpriteArrayLightWithId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19748 };

  /// @brief Field _spriteRenderers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>, ::Array<::UnityW<::UnityEngine::SpriteRenderer>>*> ____spriteRenderers;

  /// @brief Field _hideIfAlphaOutOfRange, offset: 0x40, size: 0x1, def value: None
  bool ____hideIfAlphaOutOfRange;

  /// @brief Field _hideAlphaRangeMin, offset: 0x44, size: 0x4, def value: None
  float_t ____hideAlphaRangeMin;

  /// @brief Field _hideAlphaRangeMax, offset: 0x48, size: 0x4, def value: None
  float_t ____hideAlphaRangeMax;

  /// @brief Field _intensity, offset: 0x4c, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _minAlpha, offset: 0x50, size: 0x4, def value: None
  float_t ____minAlpha;

  /// @brief Field _multiplyColorByAlpha, offset: 0x54, size: 0x4, def value: None
  ::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType ____multiplyColorByAlpha;

  /// @brief Field _setColorOnly, offset: 0x58, size: 0x1, def value: None
  bool ____setColorOnly;

  /// @brief Field _setAlphaOnly, offset: 0x59, size: 0x1, def value: None
  bool ____setAlphaOnly;

  /// @brief Field _setOnlyOnce, offset: 0x5a, size: 0x1, def value: None
  bool ____setOnlyOnce;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpriteArrayLightWithId, ____spriteRenderers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteArrayLightWithId, ____hideIfAlphaOutOfRange) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteArrayLightWithId, ____hideAlphaRangeMin) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteArrayLightWithId, ____hideAlphaRangeMax) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteArrayLightWithId, ____intensity) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteArrayLightWithId, ____minAlpha) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteArrayLightWithId, ____multiplyColorByAlpha) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteArrayLightWithId, ____setColorOnly) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteArrayLightWithId, ____setAlphaOnly) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteArrayLightWithId, ____setOnlyOnce) == 0x5a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpriteArrayLightWithId, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType, "", "SpriteArrayLightWithId/MultiplyColorByAlphaType");
NEED_NO_BOX(::GlobalNamespace::SpriteArrayLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpriteArrayLightWithId*, "", "SpriteArrayLightWithId");
