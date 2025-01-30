#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/AvatarPropertyBlockColorSetter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarPropertyBlockColorSetter)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class AvatarPropertyBlockColorSetter;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.AvatarPropertyBlockColorSetter
class CORDL_TYPE AvatarPropertyBlockColorSetter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _boostColor, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__boostColor, put = __cordl_internal_set__boostColor)) ::UnityEngine::Color _boostColor;

  /// @brief Field _darkerColorMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__darkerColorMultiplier, put = __cordl_internal_set__darkerColorMultiplier)) float_t _darkerColorMultiplier;

  /// @brief Field _defaultColor, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__defaultColor, put = __cordl_internal_set__defaultColor)) ::UnityEngine::Color _defaultColor;

  /// @brief Field _editInPlayMode, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__editInPlayMode, put = __cordl_internal_set__editInPlayMode)) bool _editInPlayMode;

  /// @brief Field _highlighted, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__highlighted, put = __cordl_internal_set__highlighted)) bool _highlighted;

  /// @brief Field _ignoreRimLight, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__ignoreRimLight, put = __cordl_internal_set__ignoreRimLight)) bool _ignoreRimLight;

  /// @brief Field _mainColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__mainColor, put = __cordl_internal_set__mainColor)) ::UnityEngine::Color _mainColor;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _renderer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__renderer, put = __cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer> _renderer;

  /// @brief Field _rimLightColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__rimLightColor, put = __cordl_internal_set__rimLightColor)) ::UnityEngine::Color _rimLightColor;

  /// @brief Field _whiteBoost, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__whiteBoost, put = __cordl_internal_set__whiteBoost)) float_t _whiteBoost;

  /// @brief Method Awake, addr 0x225a354, size 0x10, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter* New_ctor();

  /// @brief Method OnValidate, addr 0x225a364, size 0xc4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method SetColor, addr 0x225a428, size 0x38, virtual false, abstract: false, final false
  inline void SetColor(::UnityEngine::Color color);

  /// @brief Method SetColors, addr 0x225a460, size 0x14, virtual false, abstract: false, final false
  inline void SetColors(::UnityEngine::Color mainColor, ::UnityEngine::Color rimLightColor);

  /// @brief Method SetHighlight, addr 0x225a610, size 0xc, virtual false, abstract: false, final false
  inline void SetHighlight(bool highlighted, int32_t uvSegment);

  /// @brief Method UpdateRenderer, addr 0x225a474, size 0x19c, virtual false, abstract: false, final false
  inline void UpdateRenderer();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__boostColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__boostColor();

  constexpr float_t const& __cordl_internal_get__darkerColorMultiplier() const;

  constexpr float_t& __cordl_internal_get__darkerColorMultiplier();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__defaultColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__defaultColor();

  constexpr bool const& __cordl_internal_get__editInPlayMode() const;

  constexpr bool& __cordl_internal_get__editInPlayMode();

  constexpr bool const& __cordl_internal_get__highlighted() const;

  constexpr bool& __cordl_internal_get__highlighted();

  constexpr bool const& __cordl_internal_get__ignoreRimLight() const;

  constexpr bool& __cordl_internal_get__ignoreRimLight();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__mainColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__mainColor();

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__rimLightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__rimLightColor();

  constexpr float_t const& __cordl_internal_get__whiteBoost() const;

  constexpr float_t& __cordl_internal_get__whiteBoost();

  constexpr void __cordl_internal_set__boostColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__darkerColorMultiplier(float_t value);

  constexpr void __cordl_internal_set__defaultColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__editInPlayMode(bool value);

  constexpr void __cordl_internal_set__highlighted(bool value);

  constexpr void __cordl_internal_set__ignoreRimLight(bool value);

  constexpr void __cordl_internal_set__mainColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer> value);

  constexpr void __cordl_internal_set__rimLightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__whiteBoost(float_t value);

  /// @brief Method .ctor, addr 0x225a61c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarPropertyBlockColorSetter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarPropertyBlockColorSetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarPropertyBlockColorSetter(AvatarPropertyBlockColorSetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPropertyBlockColorSetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarPropertyBlockColorSetter(AvatarPropertyBlockColorSetter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18153 };

  /// @brief Field _defaultColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ____defaultColor;

  /// @brief Field _darkerColorMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t ____darkerColorMultiplier;

  /// @brief Field _whiteBoost, offset: 0x34, size: 0x4, def value: None
  float_t ____whiteBoost;

  /// @brief Field _editInPlayMode, offset: 0x38, size: 0x1, def value: None
  bool ____editInPlayMode;

  /// @brief Field _ignoreRimLight, offset: 0x39, size: 0x1, def value: None
  bool ____ignoreRimLight;

  /// @brief Field _renderer, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ____renderer;

  /// @brief Field _rimLightColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____rimLightColor;

  /// @brief Field _mainColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ____mainColor;

  /// @brief Field _boostColor, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ____boostColor;

  /// @brief Field _highlighted, offset: 0x78, size: 0x1, def value: None
  bool ____highlighted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter, ____defaultColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter, ____darkerColorMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter, ____whiteBoost) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter, ____editInPlayMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter, ____ignoreRimLight) == 0x39, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter, ____renderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter, ____rimLightColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter, ____mainColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter, ____boostColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter, ____highlighted) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter, 0x80>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter*, "BeatSaber.BeatAvatarSDK", "AvatarPropertyBlockColorSetter");
