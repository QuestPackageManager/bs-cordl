#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(GameplayModifiersPanelController)
namespace HMUI {
class ToggleBinder;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace GlobalNamespace {
class GameplayModifierToggle;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class __GameplayModifiersPanelController____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class IRefreshable;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifiersPanelController;
}
namespace GlobalNamespace {
class __GameplayModifiersPanelController____c__DisplayClass16_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifiersPanelController);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayModifiersPanelController____c__DisplayClass16_0);
// Type: ::<>c__DisplayClass16_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5635))
// CS Name: ::GameplayModifiersPanelController::<>c__DisplayClass16_0*
class CORDL_TYPE __GameplayModifiersPanelController____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameplayModifierToggle, offset 0x10, size 0x8
  __declspec(property(get = __get_gameplayModifierToggle, put = __set_gameplayModifierToggle))::GlobalNamespace::GameplayModifierToggle* gameplayModifierToggle;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::GameplayModifiersPanelController* __4__this;

  constexpr ::GlobalNamespace::GameplayModifierToggle*& __get_gameplayModifierToggle();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierToggle*> const& __get_gameplayModifierToggle() const;

  constexpr void __set_gameplayModifierToggle(::GlobalNamespace::GameplayModifierToggle* value);

  constexpr ::GlobalNamespace::GameplayModifiersPanelController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersPanelController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::GameplayModifiersPanelController* value);

  static inline ::GlobalNamespace::__GameplayModifiersPanelController____c__DisplayClass16_0* New_ctor();

  /// @brief Method .ctor addr 0x22b17a0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Awake>b__0 addr 0x22b1c28 size 0x208 virtual false final false
  inline void _Awake_b__0(bool on);

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersPanelController____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayModifiersPanelController____c__DisplayClass16_0(__GameplayModifiersPanelController____c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersPanelController____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayModifiersPanelController____c__DisplayClass16_0(__GameplayModifiersPanelController____c__DisplayClass16_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayModifiersPanelController____c__DisplayClass16_0();

public:
  /// @brief Field gameplayModifierToggle, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierToggle* ___gameplayModifierToggle;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiersPanelController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayModifiersPanelController____c__DisplayClass16_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GameplayModifiersPanelController
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5636))
// CS Name: ::GameplayModifiersPanelController*
class CORDL_TYPE GameplayModifiersPanelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass16_0 = ::GlobalNamespace::__GameplayModifiersPanelController____c__DisplayClass16_0;

  /// @brief Field _gameplayModifiersModel, offset 0x18, size 0x8
  __declspec(property(get = __get__gameplayModifiersModel, put = __set__gameplayModifiersModel))::GlobalNamespace::GameplayModifiersModelSO* _gameplayModifiersModel;

  /// @brief Field _totalMultiplierValueText, offset 0x20, size 0x8
  __declspec(property(get = __get__totalMultiplierValueText, put = __set__totalMultiplierValueText))::TMPro::TextMeshProUGUI* _totalMultiplierValueText;

  /// @brief Field _maxRankValueText, offset 0x28, size 0x8
  __declspec(property(get = __get__maxRankValueText, put = __set__maxRankValueText))::TMPro::TextMeshProUGUI* _maxRankValueText;

  /// @brief Field _positiveColor, offset 0x30, size 0x10
  __declspec(property(get = __get__positiveColor, put = __set__positiveColor))::UnityEngine::Color _positiveColor;

  /// @brief Field _negativeColor, offset 0x40, size 0x10
  __declspec(property(get = __get__negativeColor, put = __set__negativeColor))::UnityEngine::Color _negativeColor;

  /// @brief Field didChangeGameplayModifiersEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_didChangeGameplayModifiersEvent, put = __set_didChangeGameplayModifiersEvent))::System::Action* didChangeGameplayModifiersEvent;

  /// @brief Field _gameplayModifiers, offset 0x58, size 0x8
  __declspec(property(get = __get__gameplayModifiers, put = __set__gameplayModifiers))::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _toggleBinder, offset 0x60, size 0x8
  __declspec(property(get = __get__toggleBinder, put = __set__toggleBinder))::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field _gameplayModifierToggles, offset 0x68, size 0x8
  __declspec(property(get = __get__gameplayModifierToggles,
                      put = __set__gameplayModifierToggles))::ArrayW<::GlobalNamespace::GameplayModifierToggle*, ::Array<::GlobalNamespace::GameplayModifierToggle*>*> _gameplayModifierToggles;

  /// @brief Field _changingGameplayModifierToggles, offset 0x70, size 0x1
  __declspec(property(get = __get__changingGameplayModifierToggles, put = __set__changingGameplayModifierToggles)) bool _changingGameplayModifierToggles;

  /// @brief Field _toggleForGameplayModifierParam, offset 0x78, size 0x8
  __declspec(property(get = __get__toggleForGameplayModifierParam,
                      put = __set__toggleForGameplayModifierParam))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GameplayModifierParamsSO*,
                                                                                                                ::UnityEngine::UI::Toggle*>* _toggleForGameplayModifierParam;

  __declspec(property(get = get_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Convert operator to "::GlobalNamespace::IRefreshable"
  constexpr operator ::GlobalNamespace::IRefreshable*() noexcept;

  constexpr ::GlobalNamespace::GameplayModifiersModelSO*& __get__gameplayModifiersModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> const& __get__gameplayModifiersModel() const;

  constexpr void __set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__totalMultiplierValueText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__totalMultiplierValueText() const;

  constexpr void __set__totalMultiplierValueText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__maxRankValueText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__maxRankValueText() const;

  constexpr void __set__maxRankValueText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::Color& __get__positiveColor();

  constexpr ::UnityEngine::Color const& __get__positiveColor() const;

  constexpr void __set__positiveColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__negativeColor();

  constexpr ::UnityEngine::Color const& __get__negativeColor() const;

  constexpr void __set__negativeColor(::UnityEngine::Color value);

  constexpr ::System::Action*& __get_didChangeGameplayModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didChangeGameplayModifiersEvent() const;

  constexpr void __set_didChangeGameplayModifiersEvent(::System::Action* value);

  constexpr ::GlobalNamespace::GameplayModifiers*& __get__gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __get__gameplayModifiers() const;

  constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr ::HMUI::ToggleBinder*& __get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __get__toggleBinder() const;

  constexpr void __set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr ::ArrayW<::GlobalNamespace::GameplayModifierToggle*, ::Array<::GlobalNamespace::GameplayModifierToggle*>*>& __get__gameplayModifierToggles();

  constexpr ::ArrayW<::GlobalNamespace::GameplayModifierToggle*, ::Array<::GlobalNamespace::GameplayModifierToggle*>*> const& __get__gameplayModifierToggles() const;

  constexpr void __set__gameplayModifierToggles(::ArrayW<::GlobalNamespace::GameplayModifierToggle*, ::Array<::GlobalNamespace::GameplayModifierToggle*>*> value);

  constexpr bool& __get__changingGameplayModifierToggles();

  constexpr bool const& __get__changingGameplayModifierToggles() const;

  constexpr void __set__changingGameplayModifierToggles(bool value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GameplayModifierParamsSO*, ::UnityEngine::UI::Toggle*>*& __get__toggleForGameplayModifierParam();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GameplayModifierParamsSO*, ::UnityEngine::UI::Toggle*>*> const&
  __get__toggleForGameplayModifierParam() const;

  constexpr void __set__toggleForGameplayModifierParam(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GameplayModifierParamsSO*, ::UnityEngine::UI::Toggle*>* value);

  /// @brief Method add_didChangeGameplayModifiersEvent addr 0x22b14d4 size 0x9c virtual false final false
  inline void add_didChangeGameplayModifiersEvent(::System::Action* value);

  /// @brief Method remove_didChangeGameplayModifiersEvent addr 0x22b1570 size 0x9c virtual false final false
  inline void remove_didChangeGameplayModifiersEvent(::System::Action* value);

  /// @brief Method get_gameplayModifiers addr 0x22b160c size 0x8 virtual false final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  /// @brief Method SetData addr 0x22b1614 size 0x8 virtual false final false
  inline void SetData(::GlobalNamespace::GameplayModifiers* newGameplayModifiers);

  /// @brief Method Awake addr 0x22b161c size 0x184 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x22b17a8 size 0x14 virtual false final false
  inline void OnDestroy();

  /// @brief Method SetToggleValueWithGameplayModifierParams addr 0x22b17bc size 0x88 virtual false final false
  inline void SetToggleValueWithGameplayModifierParams(::GlobalNamespace::GameplayModifierParamsSO* gameplayModifierParams, bool value);

  /// @brief Method GetToggleValueWithGameplayModifierParams addr 0x22b1844 size 0x8c virtual false final false
  inline bool GetToggleValueWithGameplayModifierParams(::GlobalNamespace::GameplayModifierParamsSO* gameplayModifierParams);

  /// @brief Method RefreshTotalMultiplierAndRankUI addr 0x22b18d0 size 0x1d4 virtual false final false
  inline void RefreshTotalMultiplierAndRankUI();

  /// @brief Method IRefreshable.Refresh addr 0x22b1aa4 size 0x104 virtual true final true
  inline void IRefreshable_Refresh();

  static inline ::GlobalNamespace::GameplayModifiersPanelController* New_ctor();

  /// @brief Method .ctor addr 0x22b1ba8 size 0x80 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersPanelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifiersPanelController(GameplayModifiersPanelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersPanelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifiersPanelController(GameplayModifiersPanelController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiersPanelController();

public:
  /// @brief Field _gameplayModifiersModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiersModelSO* ____gameplayModifiersModel;

  /// @brief Field _totalMultiplierValueText, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____totalMultiplierValueText;

  /// @brief Field _maxRankValueText, offset: 0x28, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____maxRankValueText;

  /// @brief Field _positiveColor, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ____positiveColor;

  /// @brief Field _negativeColor, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ____negativeColor;

  /// @brief Field didChangeGameplayModifiersEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___didChangeGameplayModifiersEvent;

  /// @brief Field _gameplayModifiers, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  /// @brief Field _toggleBinder, offset: 0x60, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _gameplayModifierToggles, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::GameplayModifierToggle*, ::Array<::GlobalNamespace::GameplayModifierToggle*>*> ____gameplayModifierToggles;

  /// @brief Field _changingGameplayModifierToggles, offset: 0x70, size: 0x1, def value: None
  bool ____changingGameplayModifierToggles;

  /// @brief Field _toggleForGameplayModifierParam, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GameplayModifierParamsSO*, ::UnityEngine::UI::Toggle*>* ____toggleForGameplayModifierParam;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiersPanelController, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersPanelController*, "", "GameplayModifiersPanelController");
NEED_NO_BOX(::GlobalNamespace::__GameplayModifiersPanelController____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayModifiersPanelController____c__DisplayClass16_0*, "", "GameplayModifiersPanelController/<>c__DisplayClass16_0");
