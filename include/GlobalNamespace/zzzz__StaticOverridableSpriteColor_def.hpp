#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticOverridableSpriteColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StaticOverridableSpriteColor)
namespace GlobalNamespace {
class ColorManager;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticOverridableSpriteColor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StaticOverridableSpriteColor);
// Dependencies ColorType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StaticOverridableSpriteColor
class CORDL_TYPE StaticOverridableSpriteColor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _colorManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _colorType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__colorType, put = __cordl_internal_set__colorType)) ::GlobalNamespace::ColorType _colorType;

  /// @brief Field _intensity, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  /// @brief Field _minAlpha, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__minAlpha, put = __cordl_internal_set__minAlpha)) float_t _minAlpha;

  /// @brief Field _spriteRenderer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__spriteRenderer, put = __cordl_internal_set__spriteRenderer)) ::UnityW<::UnityEngine::SpriteRenderer> _spriteRenderer;

  static inline ::GlobalNamespace::StaticOverridableSpriteColor* New_ctor();

  /// @brief Method SetColor, addr 0x57147d4, size 0x38, virtual false, abstract: false, final false
  inline void SetColor(::UnityEngine::Color color);

  /// @brief Method Start, addr 0x57147a8, size 0x2c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::GlobalNamespace::ColorType const& __cordl_internal_get__colorType() const;

  constexpr ::GlobalNamespace::ColorType& __cordl_internal_get__colorType();

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr float_t const& __cordl_internal_get__minAlpha() const;

  constexpr float_t& __cordl_internal_get__minAlpha();

  constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__spriteRenderer() const;

  constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__spriteRenderer();

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__colorType(::GlobalNamespace::ColorType value);

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr void __cordl_internal_set__minAlpha(float_t value);

  constexpr void __cordl_internal_set__spriteRenderer(::UnityW<::UnityEngine::SpriteRenderer> value);

  /// @brief Method .ctor, addr 0x571480c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticOverridableSpriteColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StaticOverridableSpriteColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticOverridableSpriteColor(StaticOverridableSpriteColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticOverridableSpriteColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticOverridableSpriteColor(StaticOverridableSpriteColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6762 };

  /// @brief Field _spriteRenderer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ____spriteRenderer;

  /// @brief Field _intensity, offset: 0x28, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _minAlpha, offset: 0x2c, size: 0x4, def value: None
  float_t ____minAlpha;

  /// @brief Field _colorType, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::ColorType ____colorType;

  /// @brief Field _colorManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StaticOverridableSpriteColor, ____spriteRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticOverridableSpriteColor, ____intensity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticOverridableSpriteColor, ____minAlpha) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticOverridableSpriteColor, ____colorType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticOverridableSpriteColor, ____colorManager) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticOverridableSpriteColor, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StaticOverridableSpriteColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticOverridableSpriteColor*, "", "StaticOverridableSpriteColor");
