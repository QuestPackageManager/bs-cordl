#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ColorSchemeColorsToggleGroup)
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace UnityEngine {
struct Color;
}
namespace HMUI {
class ToggleBinder;
}
namespace GlobalNamespace {
class ColorSchemeColorToggleController;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeColorsToggleGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemeColorsToggleGroup);
// Type: ::ColorSchemeColorsToggleGroup
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5500))
// CS Name: ::ColorSchemeColorsToggleGroup*
class CORDL_TYPE ColorSchemeColorsToggleGroup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _saberAColorToggleController, offset 0x18, size 0x8
  __declspec(property(get = __get__saberAColorToggleController, put = __set__saberAColorToggleController))::GlobalNamespace::ColorSchemeColorToggleController* _saberAColorToggleController;

  /// @brief Field _saberBColorToggleController, offset 0x20, size 0x8
  __declspec(property(get = __get__saberBColorToggleController, put = __set__saberBColorToggleController))::GlobalNamespace::ColorSchemeColorToggleController* _saberBColorToggleController;

  /// @brief Field _environmentColor0ToggleController, offset 0x28, size 0x8
  __declspec(property(get = __get__environmentColor0ToggleController,
                      put = __set__environmentColor0ToggleController))::GlobalNamespace::ColorSchemeColorToggleController* _environmentColor0ToggleController;

  /// @brief Field _environmentColor1ToggleController, offset 0x30, size 0x8
  __declspec(property(get = __get__environmentColor1ToggleController,
                      put = __set__environmentColor1ToggleController))::GlobalNamespace::ColorSchemeColorToggleController* _environmentColor1ToggleController;

  /// @brief Field _obstaclesColorToggleController, offset 0x38, size 0x8
  __declspec(property(get = __get__obstaclesColorToggleController, put = __set__obstaclesColorToggleController))::GlobalNamespace::ColorSchemeColorToggleController* _obstaclesColorToggleController;

  /// @brief Field _environmentColor0BoostToggleController, offset 0x40, size 0x8
  __declspec(property(get = __get__environmentColor0BoostToggleController,
                      put = __set__environmentColor0BoostToggleController))::GlobalNamespace::ColorSchemeColorToggleController* _environmentColor0BoostToggleController;

  /// @brief Field _environmentColor1BoostToggleController, offset 0x48, size 0x8
  __declspec(property(get = __get__environmentColor1BoostToggleController,
                      put = __set__environmentColor1BoostToggleController))::GlobalNamespace::ColorSchemeColorToggleController* _environmentColor1BoostToggleController;

  /// @brief Field selectedColorDidChangeEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_selectedColorDidChangeEvent, put = __set_selectedColorDidChangeEvent))::System::Action_1<::UnityEngine::Color>* selectedColorDidChangeEvent;

  /// @brief Field _toggleBinder, offset 0x58, size 0x8
  __declspec(property(get = __get__toggleBinder, put = __set__toggleBinder))::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field _selectedColorToggleController, offset 0x60, size 0x8
  __declspec(property(get = __get__selectedColorToggleController, put = __set__selectedColorToggleController))::GlobalNamespace::ColorSchemeColorToggleController* _selectedColorToggleController;

  /// @brief Field _colorScheme, offset 0x68, size 0x8
  __declspec(property(get = __get__colorScheme, put = __set__colorScheme))::GlobalNamespace::ColorScheme* _colorScheme;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  constexpr ::GlobalNamespace::ColorSchemeColorToggleController*& __get__saberAColorToggleController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeColorToggleController*> const& __get__saberAColorToggleController() const;

  constexpr void __set__saberAColorToggleController(::GlobalNamespace::ColorSchemeColorToggleController* value);

  constexpr ::GlobalNamespace::ColorSchemeColorToggleController*& __get__saberBColorToggleController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeColorToggleController*> const& __get__saberBColorToggleController() const;

  constexpr void __set__saberBColorToggleController(::GlobalNamespace::ColorSchemeColorToggleController* value);

  constexpr ::GlobalNamespace::ColorSchemeColorToggleController*& __get__environmentColor0ToggleController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeColorToggleController*> const& __get__environmentColor0ToggleController() const;

  constexpr void __set__environmentColor0ToggleController(::GlobalNamespace::ColorSchemeColorToggleController* value);

  constexpr ::GlobalNamespace::ColorSchemeColorToggleController*& __get__environmentColor1ToggleController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeColorToggleController*> const& __get__environmentColor1ToggleController() const;

  constexpr void __set__environmentColor1ToggleController(::GlobalNamespace::ColorSchemeColorToggleController* value);

  constexpr ::GlobalNamespace::ColorSchemeColorToggleController*& __get__obstaclesColorToggleController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeColorToggleController*> const& __get__obstaclesColorToggleController() const;

  constexpr void __set__obstaclesColorToggleController(::GlobalNamespace::ColorSchemeColorToggleController* value);

  constexpr ::GlobalNamespace::ColorSchemeColorToggleController*& __get__environmentColor0BoostToggleController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeColorToggleController*> const& __get__environmentColor0BoostToggleController() const;

  constexpr void __set__environmentColor0BoostToggleController(::GlobalNamespace::ColorSchemeColorToggleController* value);

  constexpr ::GlobalNamespace::ColorSchemeColorToggleController*& __get__environmentColor1BoostToggleController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeColorToggleController*> const& __get__environmentColor1BoostToggleController() const;

  constexpr void __set__environmentColor1BoostToggleController(::GlobalNamespace::ColorSchemeColorToggleController* value);

  constexpr ::System::Action_1<::UnityEngine::Color>*& __get_selectedColorDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Color>*> const& __get_selectedColorDidChangeEvent() const;

  constexpr void __set_selectedColorDidChangeEvent(::System::Action_1<::UnityEngine::Color>* value);

  constexpr ::HMUI::ToggleBinder*& __get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __get__toggleBinder() const;

  constexpr void __set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr ::GlobalNamespace::ColorSchemeColorToggleController*& __get__selectedColorToggleController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeColorToggleController*> const& __get__selectedColorToggleController() const;

  constexpr void __set__selectedColorToggleController(::GlobalNamespace::ColorSchemeColorToggleController* value);

  constexpr ::GlobalNamespace::ColorScheme*& __get__colorScheme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorScheme*> const& __get__colorScheme() const;

  constexpr void __set__colorScheme(::GlobalNamespace::ColorScheme* value);

  /// @brief Method add_selectedColorDidChangeEvent addr 0x212fb64 size 0xb0 virtual false final false
  inline void add_selectedColorDidChangeEvent(::System::Action_1<::UnityEngine::Color>* value);

  /// @brief Method remove_selectedColorDidChangeEvent addr 0x212fc14 size 0xb0 virtual false final false
  inline void remove_selectedColorDidChangeEvent(::System::Action_1<::UnityEngine::Color>* value);

  /// @brief Method get_color addr 0x212fcc4 size 0x18 virtual false final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color addr 0x212fd14 size 0x18 virtual false final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method SetColorScheme addr 0x212fdc4 size 0xe0 virtual false final false
  inline void SetColorScheme(::GlobalNamespace::ColorScheme* colorScheme);

  /// @brief Method Awake addr 0x212fea4 size 0x314 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x21301b8 size 0x1c virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleToggleWasSelected addr 0x21301d4 size 0x40 virtual false final false
  inline void HandleToggleWasSelected(::GlobalNamespace::ColorSchemeColorToggleController* toggleController, bool isOn);

  /// @brief Method CreateColorSchemeFromEditedColors addr 0x2130214 size 0x1d0 virtual false final false
  inline ::GlobalNamespace::ColorScheme* CreateColorSchemeFromEditedColors();

  static inline ::GlobalNamespace::ColorSchemeColorsToggleGroup* New_ctor();

  /// @brief Method .ctor addr 0x21303e4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Awake>b__17_0 addr 0x21303ec size 0x10 virtual false final false
  inline void _Awake_b__17_0(bool isOn);

  /// @brief Method <Awake>b__17_1 addr 0x21303fc size 0x10 virtual false final false
  inline void _Awake_b__17_1(bool isOn);

  /// @brief Method <Awake>b__17_2 addr 0x213040c size 0x10 virtual false final false
  inline void _Awake_b__17_2(bool isOn);

  /// @brief Method <Awake>b__17_3 addr 0x213041c size 0x10 virtual false final false
  inline void _Awake_b__17_3(bool isOn);

  /// @brief Method <Awake>b__17_4 addr 0x213042c size 0x10 virtual false final false
  inline void _Awake_b__17_4(bool isOn);

  /// @brief Method <Awake>b__17_5 addr 0x213043c size 0x10 virtual false final false
  inline void _Awake_b__17_5(bool isOn);

  /// @brief Method <Awake>b__17_6 addr 0x213044c size 0x10 virtual false final false
  inline void _Awake_b__17_6(bool isOn);

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeColorsToggleGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemeColorsToggleGroup(ColorSchemeColorsToggleGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeColorsToggleGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemeColorsToggleGroup(ColorSchemeColorsToggleGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemeColorsToggleGroup();

public:
  /// @brief Field _saberAColorToggleController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemeColorToggleController* ____saberAColorToggleController;

  /// @brief Field _saberBColorToggleController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemeColorToggleController* ____saberBColorToggleController;

  /// @brief Field _environmentColor0ToggleController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemeColorToggleController* ____environmentColor0ToggleController;

  /// @brief Field _environmentColor1ToggleController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemeColorToggleController* ____environmentColor1ToggleController;

  /// @brief Field _obstaclesColorToggleController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemeColorToggleController* ____obstaclesColorToggleController;

  /// @brief Field _environmentColor0BoostToggleController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemeColorToggleController* ____environmentColor0BoostToggleController;

  /// @brief Field _environmentColor1BoostToggleController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemeColorToggleController* ____environmentColor1BoostToggleController;

  /// @brief Field selectedColorDidChangeEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Color>* ___selectedColorDidChangeEvent;

  /// @brief Field _toggleBinder, offset: 0x58, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _selectedColorToggleController, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemeColorToggleController* ____selectedColorToggleController;

  /// @brief Field _colorScheme, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::ColorScheme* ____colorScheme;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeColorsToggleGroup, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeColorsToggleGroup, ____saberAColorToggleController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeColorsToggleGroup, ____saberBColorToggleController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeColorsToggleGroup, ____environmentColor0ToggleController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeColorsToggleGroup, ____environmentColor1ToggleController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeColorsToggleGroup, ____obstaclesColorToggleController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeColorsToggleGroup, ____environmentColor0BoostToggleController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeColorsToggleGroup, ____environmentColor1BoostToggleController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeColorsToggleGroup, ___selectedColorDidChangeEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeColorsToggleGroup, ____toggleBinder) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeColorsToggleGroup, ____selectedColorToggleController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeColorsToggleGroup, ____colorScheme) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeColorsToggleGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeColorsToggleGroup*, "", "ColorSchemeColorsToggleGroup");
