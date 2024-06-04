#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuLightsPresetSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MenuLightsPresetSO)
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
class __MenuLightsPresetSO__LightIdColorPair;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace GlobalNamespace {
class __MenuLightsPresetSO__LightIdColorPair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuLightsPresetSO);
MARK_REF_PTR_T(::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair);
// Type: ::LightIdColorPair
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuLightsPresetSO::LightIdColorPair*
class CORDL_TYPE __MenuLightsPresetSO__LightIdColorPair : public ::System::Object {
public:
  // Declarations
  /// @brief Field baseColor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_baseColor, put = __cordl_internal_set_baseColor))::UnityW<::GlobalNamespace::ColorSO> baseColor;

  /// @brief Field intensity, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity)) float_t intensity;

  __declspec(property(get = get_lightColor))::UnityEngine::Color lightColor;

  /// @brief Field lightId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_lightId, put = __cordl_internal_set_lightId)) int32_t lightId;

  static inline ::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get_baseColor() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get_baseColor();

  constexpr float_t const& __cordl_internal_get_intensity() const;

  constexpr float_t& __cordl_internal_get_intensity();

  constexpr int32_t const& __cordl_internal_get_lightId() const;

  constexpr int32_t& __cordl_internal_get_lightId();

  constexpr void __cordl_internal_set_baseColor(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set_intensity(float_t value);

  constexpr void __cordl_internal_set_lightId(int32_t value);

  /// @brief Method .ctor, addr 0x14cff64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lightColor, addr 0x14cff38, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_lightColor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuLightsPresetSO__LightIdColorPair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MenuLightsPresetSO__LightIdColorPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuLightsPresetSO__LightIdColorPair(__MenuLightsPresetSO__LightIdColorPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuLightsPresetSO__LightIdColorPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuLightsPresetSO__LightIdColorPair(__MenuLightsPresetSO__LightIdColorPair const&) = delete;

  /// @brief Field lightId, offset: 0x10, size: 0x4, def value: None
  int32_t ___lightId;

  /// @brief Field baseColor, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ___baseColor;

  /// @brief Field intensity, offset: 0x20, size: 0x4, def value: None
  float_t ___intensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair, ___lightId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair, ___baseColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair, ___intensity) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MenuLightsPresetSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuLightsPresetSO*
class CORDL_TYPE MenuLightsPresetSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LightIdColorPair = ::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair;

  /// @brief Field _lightIdColorPairs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lightIdColorPairs,
                      put = __cordl_internal_set__lightIdColorPairs))::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*,
                                                                              ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*> _lightIdColorPairs;

  /// @brief Field _playersPlaceNeonsColor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playersPlaceNeonsColor, put = __cordl_internal_set__playersPlaceNeonsColor))::UnityW<::GlobalNamespace::ColorSO> _playersPlaceNeonsColor;

  /// @brief Field _playersPlaceNeonsIntensity, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__playersPlaceNeonsIntensity, put = __cordl_internal_set__playersPlaceNeonsIntensity)) float_t _playersPlaceNeonsIntensity;

  __declspec(property(
      get = get_lightIdColorPairs))::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*> lightIdColorPairs;

  __declspec(property(get = get_playersPlaceNeonsColor))::UnityW<::GlobalNamespace::ColorSO> playersPlaceNeonsColor;

  __declspec(property(get = get_playersPlaceNeonsIntensity)) float_t playersPlaceNeonsIntensity;

  static inline ::GlobalNamespace::MenuLightsPresetSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*> const&
  __cordl_internal_get__lightIdColorPairs() const;

  constexpr ::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*>& __cordl_internal_get__lightIdColorPairs();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__playersPlaceNeonsColor() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__playersPlaceNeonsColor();

  constexpr float_t const& __cordl_internal_get__playersPlaceNeonsIntensity() const;

  constexpr float_t& __cordl_internal_get__playersPlaceNeonsIntensity();

  constexpr void
  __cordl_internal_set__lightIdColorPairs(::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*> value);

  constexpr void __cordl_internal_set__playersPlaceNeonsColor(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__playersPlaceNeonsIntensity(float_t value);

  /// @brief Method .ctor, addr 0x14cff28, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lightIdColorPairs, addr 0x14cff20, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*> get_lightIdColorPairs();

  /// @brief Method get_playersPlaceNeonsColor, addr 0x14cff10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ColorSO> get_playersPlaceNeonsColor();

  /// @brief Method get_playersPlaceNeonsIntensity, addr 0x14cff18, size 0x8, virtual false, abstract: false, final false
  inline float_t get_playersPlaceNeonsIntensity();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuLightsPresetSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuLightsPresetSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuLightsPresetSO(MenuLightsPresetSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuLightsPresetSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuLightsPresetSO(MenuLightsPresetSO const&) = delete;

  /// @brief Field _playersPlaceNeonsColor, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____playersPlaceNeonsColor;

  /// @brief Field _playersPlaceNeonsIntensity, offset: 0x20, size: 0x4, def value: None
  float_t ____playersPlaceNeonsIntensity;

  /// @brief Field _lightIdColorPairs, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*> ____lightIdColorPairs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuLightsPresetSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuLightsPresetSO, ____playersPlaceNeonsColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuLightsPresetSO, ____playersPlaceNeonsIntensity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuLightsPresetSO, ____lightIdColorPairs) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuLightsPresetSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuLightsPresetSO*, "", "MenuLightsPresetSO");
NEED_NO_BOX(::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, "", "MenuLightsPresetSO/LightIdColorPair");
