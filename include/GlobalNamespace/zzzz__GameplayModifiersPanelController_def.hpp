#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayModifiersPanelController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(GameplayModifiersPanelController)
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace GlobalNamespace {
class GameplayModifierToggle;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IRefreshable;
}
namespace GlobalNamespace {
class __GameplayModifiersPanelController____c__DisplayClass16_0;
}
namespace HMUI {
class ToggleBinder;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Action;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Toggle;
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayModifiersPanelController::<>c__DisplayClass16_0*
class CORDL_TYPE __GameplayModifiersPanelController____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GameplayModifiersPanelController> __4__this;

  /// @brief Field gameplayModifierToggle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifierToggle, put = __cordl_internal_set_gameplayModifierToggle)) ::UnityW<::GlobalNamespace::GameplayModifierToggle> gameplayModifierToggle;

  static inline ::GlobalNamespace::__GameplayModifiersPanelController____c__DisplayClass16_0* New_ctor();

  /// @brief Method <Awake>b__0, addr 0x3ae445c, size 0x204, virtual false, abstract: false, final false
  inline void _Awake_b__0(bool on);

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersPanelController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersPanelController>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierToggle> const& __cordl_internal_get_gameplayModifierToggle() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierToggle>& __cordl_internal_get_gameplayModifierToggle();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameplayModifiersPanelController> value);

  constexpr void __cordl_internal_set_gameplayModifierToggle(::UnityW<::GlobalNamespace::GameplayModifierToggle> value);

  /// @brief Method .ctor, addr 0x3ae3fd4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayModifiersPanelController____c__DisplayClass16_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersPanelController____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayModifiersPanelController____c__DisplayClass16_0(__GameplayModifiersPanelController____c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersPanelController____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayModifiersPanelController____c__DisplayClass16_0(__GameplayModifiersPanelController____c__DisplayClass16_0 const&) = delete;

  /// @brief Field gameplayModifierToggle, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierToggle> ___gameplayModifierToggle;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifiersPanelController> _____4__this;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5299 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayModifiersPanelController____c__DisplayClass16_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayModifiersPanelController____c__DisplayClass16_0, ___gameplayModifierToggle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayModifiersPanelController____c__DisplayClass16_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameplayModifiersPanelController
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayModifiersPanelController*
class CORDL_TYPE GameplayModifiersPanelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass16_0 = ::GlobalNamespace::__GameplayModifiersPanelController____c__DisplayClass16_0;

  /// @brief Field _changingGameplayModifierToggles, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__changingGameplayModifierToggles, put = __cordl_internal_set__changingGameplayModifierToggles)) bool _changingGameplayModifierToggles;

  /// @brief Field _gameplayModifierToggles, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifierToggles,
                      put = __cordl_internal_set__gameplayModifierToggles)) ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierToggle>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierToggle>>*>
      _gameplayModifierToggles;

  /// @brief Field _gameplayModifiers, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers, put = __cordl_internal_set__gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _gameplayModifiersModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiersModel, put = __cordl_internal_set__gameplayModifiersModel)) ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>
      _gameplayModifiersModel;

  /// @brief Field _maxRankValueText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__maxRankValueText, put = __cordl_internal_set__maxRankValueText)) ::UnityW<::TMPro::TextMeshProUGUI> _maxRankValueText;

  /// @brief Field _negativeColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__negativeColor, put = __cordl_internal_set__negativeColor)) ::UnityEngine::Color _negativeColor;

  /// @brief Field _positiveColor, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__positiveColor, put = __cordl_internal_set__positiveColor)) ::UnityEngine::Color _positiveColor;

  /// @brief Field _toggleBinder, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleBinder, put = __cordl_internal_set__toggleBinder)) ::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field _toggleForGameplayModifierParam, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleForGameplayModifierParam,
                      put = __cordl_internal_set__toggleForGameplayModifierParam)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>,
                                                                                                                                ::UnityW<::UnityEngine::UI::Toggle>>* _toggleForGameplayModifierParam;

  /// @brief Field _totalMultiplierValueText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__totalMultiplierValueText, put = __cordl_internal_set__totalMultiplierValueText)) ::UnityW<::TMPro::TextMeshProUGUI> _totalMultiplierValueText;

  /// @brief Field didChangeGameplayModifiersEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeGameplayModifiersEvent, put = __cordl_internal_set_didChangeGameplayModifiersEvent)) ::System::Action* didChangeGameplayModifiersEvent;

  __declspec(property(get = get_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Convert operator to "::GlobalNamespace::IRefreshable"
  constexpr operator ::GlobalNamespace::IRefreshable*() noexcept;

  /// @brief Method Awake, addr 0x3ae3e58, size 0x17c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetToggleValueWithGameplayModifierParams, addr 0x3ae4078, size 0x8c, virtual false, abstract: false, final false
  inline bool GetToggleValueWithGameplayModifierParams(::GlobalNamespace::GameplayModifierParamsSO* gameplayModifierParams);

  /// @brief Method IRefreshable.Refresh, addr 0x3ae42d8, size 0x104, virtual true, abstract: false, final true
  inline void IRefreshable_Refresh();

  static inline ::GlobalNamespace::GameplayModifiersPanelController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3ae3fdc, size 0x14, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshTotalMultiplierAndRankUI, addr 0x3ae4104, size 0x1d4, virtual false, abstract: false, final false
  inline void RefreshTotalMultiplierAndRankUI();

  /// @brief Method SetData, addr 0x3ae3e50, size 0x8, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::GameplayModifiers* newGameplayModifiers);

  /// @brief Method SetToggleValueWithGameplayModifierParams, addr 0x3ae3ff0, size 0x88, virtual false, abstract: false, final false
  inline void SetToggleValueWithGameplayModifierParams(::GlobalNamespace::GameplayModifierParamsSO* gameplayModifierParams, bool value);

  constexpr bool const& __cordl_internal_get__changingGameplayModifierToggles() const;

  constexpr bool& __cordl_internal_get__changingGameplayModifierToggles();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierToggle>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierToggle>>*> const& __cordl_internal_get__gameplayModifierToggles() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierToggle>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierToggle>>*>& __cordl_internal_get__gameplayModifierToggles();

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __cordl_internal_get__gameplayModifiers() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& __cordl_internal_get__gameplayModifiersModel() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& __cordl_internal_get__gameplayModifiersModel();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__maxRankValueText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__maxRankValueText();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__negativeColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__negativeColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__positiveColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__positiveColor();

  constexpr ::HMUI::ToggleBinder*& __cordl_internal_get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __cordl_internal_get__toggleBinder() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::UnityW<::UnityEngine::UI::Toggle>>*&
  __cordl_internal_get__toggleForGameplayModifierParam();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::UnityW<::UnityEngine::UI::Toggle>>*> const&
  __cordl_internal_get__toggleForGameplayModifierParam() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__totalMultiplierValueText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__totalMultiplierValueText();

  constexpr ::System::Action*& __cordl_internal_get_didChangeGameplayModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didChangeGameplayModifiersEvent() const;

  constexpr void __cordl_internal_set__changingGameplayModifierToggles(bool value);

  constexpr void __cordl_internal_set__gameplayModifierToggles(::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierToggle>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierToggle>>*> value);

  constexpr void __cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value);

  constexpr void __cordl_internal_set__maxRankValueText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__negativeColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__positiveColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr void
  __cordl_internal_set__toggleForGameplayModifierParam(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::UnityW<::UnityEngine::UI::Toggle>>* value);

  constexpr void __cordl_internal_set__totalMultiplierValueText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set_didChangeGameplayModifiersEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3ae43dc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangeGameplayModifiersEvent, addr 0x3ae3d10, size 0x9c, virtual false, abstract: false, final false
  inline void add_didChangeGameplayModifiersEvent(::System::Action* value);

  /// @brief Method get_gameplayModifiers, addr 0x3ae3e48, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  /// @brief Convert to "::GlobalNamespace::IRefreshable"
  constexpr ::GlobalNamespace::IRefreshable* i___GlobalNamespace__IRefreshable() noexcept;

  /// @brief Method remove_didChangeGameplayModifiersEvent, addr 0x3ae3dac, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didChangeGameplayModifiersEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiersPanelController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersPanelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifiersPanelController(GameplayModifiersPanelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersPanelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifiersPanelController(GameplayModifiersPanelController const&) = delete;

  /// @brief Field _gameplayModifiersModel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> ____gameplayModifiersModel;

  /// @brief Field _totalMultiplierValueText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____totalMultiplierValueText;

  /// @brief Field _maxRankValueText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____maxRankValueText;

  /// @brief Field _positiveColor, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____positiveColor;

  /// @brief Field _negativeColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____negativeColor;

  /// @brief Field didChangeGameplayModifiersEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___didChangeGameplayModifiersEvent;

  /// @brief Field _gameplayModifiers, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  /// @brief Field _toggleBinder, offset: 0x68, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _gameplayModifierToggles, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierToggle>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierToggle>>*> ____gameplayModifierToggles;

  /// @brief Field _changingGameplayModifierToggles, offset: 0x78, size: 0x1, def value: None
  bool ____changingGameplayModifierToggles;

  /// @brief Field _toggleForGameplayModifierParam, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::UnityW<::UnityEngine::UI::Toggle>>* ____toggleForGameplayModifierParam;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5300 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiersPanelController, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersPanelController, ____gameplayModifiersModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersPanelController, ____totalMultiplierValueText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersPanelController, ____maxRankValueText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersPanelController, ____positiveColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersPanelController, ____negativeColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersPanelController, ___didChangeGameplayModifiersEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersPanelController, ____gameplayModifiers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersPanelController, ____toggleBinder) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersPanelController, ____gameplayModifierToggles) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersPanelController, ____changingGameplayModifierToggles) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersPanelController, ____toggleForGameplayModifierParam) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersPanelController*, "", "GameplayModifiersPanelController");
NEED_NO_BOX(::GlobalNamespace::__GameplayModifiersPanelController____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayModifiersPanelController____c__DisplayClass16_0*, "", "GameplayModifiersPanelController/<>c__DisplayClass16_0");
