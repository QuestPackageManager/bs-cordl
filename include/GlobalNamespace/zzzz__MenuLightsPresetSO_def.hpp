#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4452))
// CS Name: ::MenuLightsPresetSO::LightIdColorPair*
class CORDL_TYPE __MenuLightsPresetSO__LightIdColorPair : public ::System::Object {
public:
  // Declarations
  /// @brief Field lightId, offset 0x10, size 0x4
  __declspec(property(get = __get_lightId, put = __set_lightId)) int32_t lightId;

  /// @brief Field baseColor, offset 0x18, size 0x8
  __declspec(property(get = __get_baseColor, put = __set_baseColor))::GlobalNamespace::ColorSO* baseColor;

  /// @brief Field intensity, offset 0x20, size 0x4
  __declspec(property(get = __get_intensity, put = __set_intensity)) float_t intensity;

  __declspec(property(get = get_lightColor))::UnityEngine::Color lightColor;

  constexpr int32_t& __get_lightId();

  constexpr int32_t const& __get_lightId() const;

  constexpr void __set_lightId(int32_t value);

  constexpr ::GlobalNamespace::ColorSO*& __get_baseColor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get_baseColor() const;

  constexpr void __set_baseColor(::GlobalNamespace::ColorSO* value);

  constexpr float_t& __get_intensity();

  constexpr float_t const& __get_intensity() const;

  constexpr void __set_intensity(float_t value);

  /// @brief Method get_lightColor, addr 0x23524dc, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_lightColor();

  static inline ::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair* New_ctor();

  /// @brief Method .ctor, addr 0x2352508, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuLightsPresetSO__LightIdColorPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuLightsPresetSO__LightIdColorPair(__MenuLightsPresetSO__LightIdColorPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuLightsPresetSO__LightIdColorPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuLightsPresetSO__LightIdColorPair(__MenuLightsPresetSO__LightIdColorPair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuLightsPresetSO__LightIdColorPair();

public:
  /// @brief Field lightId, offset: 0x10, size: 0x4, def value: None
  int32_t ___lightId;

  /// @brief Field baseColor, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ___baseColor;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4453))
// CS Name: ::MenuLightsPresetSO*
class CORDL_TYPE MenuLightsPresetSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LightIdColorPair = ::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair;

  /// @brief Field _playersPlaceNeonsColor, offset 0x18, size 0x8
  __declspec(property(get = __get__playersPlaceNeonsColor, put = __set__playersPlaceNeonsColor))::GlobalNamespace::ColorSO* _playersPlaceNeonsColor;

  /// @brief Field _playersPlaceNeonsIntensity, offset 0x20, size 0x4
  __declspec(property(get = __get__playersPlaceNeonsIntensity, put = __set__playersPlaceNeonsIntensity)) float_t _playersPlaceNeonsIntensity;

  /// @brief Field _lightIdColorPairs, offset 0x28, size 0x8
  __declspec(property(
      get = __get__lightIdColorPairs,
      put = __set__lightIdColorPairs))::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*> _lightIdColorPairs;

  __declspec(property(get = get_playersPlaceNeonsColor))::GlobalNamespace::ColorSO* playersPlaceNeonsColor;

  __declspec(property(get = get_playersPlaceNeonsIntensity)) float_t playersPlaceNeonsIntensity;

  __declspec(property(
      get = get_lightIdColorPairs))::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*> lightIdColorPairs;

  constexpr ::GlobalNamespace::ColorSO*& __get__playersPlaceNeonsColor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__playersPlaceNeonsColor() const;

  constexpr void __set__playersPlaceNeonsColor(::GlobalNamespace::ColorSO* value);

  constexpr float_t& __get__playersPlaceNeonsIntensity();

  constexpr float_t const& __get__playersPlaceNeonsIntensity() const;

  constexpr void __set__playersPlaceNeonsIntensity(float_t value);

  constexpr ::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*>& __get__lightIdColorPairs();

  constexpr ::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*> const& __get__lightIdColorPairs() const;

  constexpr void __set__lightIdColorPairs(::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*> value);

  /// @brief Method get_playersPlaceNeonsColor, addr 0x23524b4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorSO* get_playersPlaceNeonsColor();

  /// @brief Method get_playersPlaceNeonsIntensity, addr 0x23524bc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_playersPlaceNeonsIntensity();

  /// @brief Method get_lightIdColorPairs, addr 0x23524c4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*> get_lightIdColorPairs();

  static inline ::GlobalNamespace::MenuLightsPresetSO* New_ctor();

  /// @brief Method .ctor, addr 0x23524cc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MenuLightsPresetSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuLightsPresetSO(MenuLightsPresetSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuLightsPresetSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuLightsPresetSO(MenuLightsPresetSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuLightsPresetSO();

public:
  /// @brief Field _playersPlaceNeonsColor, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____playersPlaceNeonsColor;

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
