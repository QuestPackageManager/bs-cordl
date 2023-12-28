#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerHeightSettingsController)
namespace HMUI {
class ButtonBinder;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class Vector3SO;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerHeightSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerHeightSettingsController);
// Type: ::PlayerHeightSettingsController
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5608))
// CS Name: ::PlayerHeightSettingsController*
class CORDL_TYPE PlayerHeightSettingsController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _text, offset 0x18, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::TMPro::TextMeshProUGUI* _text;

  /// @brief Field _setButton, offset 0x20, size 0x8
  __declspec(property(get = __get__setButton, put = __set__setButton))::UnityEngine::UI::Button* _setButton;

  /// @brief Field _roomCenter, offset 0x28, size 0x8
  __declspec(property(get = __get__roomCenter, put = __set__roomCenter))::GlobalNamespace::Vector3SO* _roomCenter;

  /// @brief Field _vrPlatformHelper, offset 0x30, size 0x8
  __declspec(property(get = __get__vrPlatformHelper, put = __set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field valueDidChangeEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_valueDidChangeEvent, put = __set_valueDidChangeEvent))::System::Action_1<float_t>* valueDidChangeEvent;

  /// @brief Field _buttonBinder, offset 0x40, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _value, offset 0x48, size 0x4
  __declspec(property(get = __get__value, put = __set__value)) float_t _value;

  __declspec(property(get = get_value)) float_t value;

  constexpr ::TMPro::TextMeshProUGUI*& __get__text();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__text() const;

  constexpr void __set__text(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::UI::Button*& __get__setButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__setButton() const;

  constexpr void __set__setButton(::UnityEngine::UI::Button* value);

  constexpr ::GlobalNamespace::Vector3SO*& __get__roomCenter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& __get__roomCenter() const;

  constexpr void __set__roomCenter(::GlobalNamespace::Vector3SO* value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__vrPlatformHelper() const;

  constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr ::System::Action_1<float_t>*& __get_valueDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __get_valueDidChangeEvent() const;

  constexpr void __set_valueDidChangeEvent(::System::Action_1<float_t>* value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr float_t& __get__value();

  constexpr float_t const& __get__value() const;

  constexpr void __set__value(float_t value);

  /// @brief Method add_valueDidChangeEvent addr 0x22aba80 size 0xb0 virtual false final false
  inline void add_valueDidChangeEvent(::System::Action_1<float_t>* value);

  /// @brief Method remove_valueDidChangeEvent addr 0x22abb30 size 0xb0 virtual false final false
  inline void remove_valueDidChangeEvent(::System::Action_1<float_t>* value);

  /// @brief Method get_value addr 0x22abbe0 size 0x8 virtual false final false
  inline float_t get_value();

  /// @brief Method Awake addr 0x22abbe8 size 0xc4 virtual false final false
  inline void Awake();

  /// @brief Method Init addr 0x22abcac size 0x8 virtual false final false
  inline void Init(float_t playerHeight);

  /// @brief Method AutoSetHeight addr 0x22abd5c size 0x120 virtual false final false
  inline void AutoSetHeight();

  /// @brief Method RefreshUI addr 0x22abcb4 size 0xa8 virtual false final false
  inline void RefreshUI();

  static inline ::GlobalNamespace::PlayerHeightSettingsController* New_ctor();

  /// @brief Method .ctor addr 0x22abe7c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeightSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerHeightSettingsController(PlayerHeightSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeightSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerHeightSettingsController(PlayerHeightSettingsController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerHeightSettingsController();

public:
  /// @brief Field _text, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____text;

  /// @brief Field _setButton, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____setButton;

  /// @brief Field _roomCenter, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::Vector3SO* ____roomCenter;

  /// @brief Field _vrPlatformHelper, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field valueDidChangeEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___valueDidChangeEvent;

  /// @brief Field _buttonBinder, offset: 0x40, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _value, offset: 0x48, size: 0x4, def value: None
  float_t ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerHeightSettingsController, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerHeightSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerHeightSettingsController*, "", "PlayerHeightSettingsController");
