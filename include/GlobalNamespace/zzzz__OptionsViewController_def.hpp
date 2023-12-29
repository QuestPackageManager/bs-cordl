#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OptionsViewController)
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
struct __OptionsViewController__OptionsButton;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OptionsViewController__OptionsButton;
}
namespace GlobalNamespace {
class OptionsViewController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OptionsViewController__OptionsButton);
MARK_REF_PTR_T(::GlobalNamespace::OptionsViewController);
// Type: ::OptionsButton
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5825))
// CS Name: ::OptionsViewController::OptionsButton
struct CORDL_TYPE __OptionsViewController__OptionsButton {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OptionsViewController__OptionsButton_Unwrapped
  enum struct ____OptionsViewController__OptionsButton_Unwrapped : int32_t {
    __E_EditAvatar = static_cast<int32_t>(0x0),
    __E_PlayerOptions = static_cast<int32_t>(0x1),
    __E_Settings = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OptionsViewController__OptionsButton_Unwrapped() const noexcept {
    return static_cast<____OptionsViewController__OptionsButton_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OptionsViewController__OptionsButton(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OptionsViewController__OptionsButton();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field EditAvatar value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OptionsViewController__OptionsButton const EditAvatar;

  /// @brief Field PlayerOptions value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OptionsViewController__OptionsButton const PlayerOptions;

  /// @brief Field Settings value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OptionsViewController__OptionsButton const Settings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OptionsViewController__OptionsButton, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OptionsViewController__OptionsButton, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OptionsViewController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13722))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5826))
// CS Name: ::OptionsViewController*
class CORDL_TYPE OptionsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using OptionsButton = ::GlobalNamespace::__OptionsViewController__OptionsButton;

  /// @brief Field _editAvatarButton, offset 0x70, size 0x8
  __declspec(property(get = __get__editAvatarButton, put = __set__editAvatarButton))::UnityEngine::UI::Button* _editAvatarButton;

  /// @brief Field _playerOptionsButton, offset 0x78, size 0x8
  __declspec(property(get = __get__playerOptionsButton, put = __set__playerOptionsButton))::UnityEngine::UI::Button* _playerOptionsButton;

  /// @brief Field _settingsButton, offset 0x80, size 0x8
  __declspec(property(get = __get__settingsButton, put = __set__settingsButton))::UnityEngine::UI::Button* _settingsButton;

  /// @brief Field _appStaticSettings, offset 0x88, size 0x8
  __declspec(property(get = __get__appStaticSettings, put = __set__appStaticSettings))::GlobalNamespace::AppStaticSettingsSO* _appStaticSettings;

  /// @brief Field didFinishEvent, offset 0x90, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>* didFinishEvent;

  constexpr ::UnityEngine::UI::Button*& __get__editAvatarButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__editAvatarButton() const;

  constexpr void __set__editAvatarButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__playerOptionsButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__playerOptionsButton() const;

  constexpr void __set__playerOptionsButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__settingsButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__settingsButton() const;

  constexpr void __set__settingsButton(::UnityEngine::UI::Button* value);

  constexpr ::GlobalNamespace::AppStaticSettingsSO*& __get__appStaticSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppStaticSettingsSO*> const& __get__appStaticSettings() const;

  constexpr void __set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO* value);

  constexpr ::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>* value);

  /// @brief Method add_didFinishEvent addr 0x218fe98 size 0xb0 virtual false final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>* value);

  /// @brief Method remove_didFinishEvent addr 0x218ff48 size 0xb0 virtual false final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>* value);

  /// @brief Method DidActivate addr 0x218fff8 size 0x190 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::OptionsViewController* New_ctor();

  /// @brief Method .ctor addr 0x2190188 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__8_0 addr 0x2190190 size 0x20 virtual false final false
  inline void _DidActivate_b__8_0();

  /// @brief Method <DidActivate>b__8_1 addr 0x21901b0 size 0x20 virtual false final false
  inline void _DidActivate_b__8_1();

  /// @brief Method <DidActivate>b__8_2 addr 0x21901d0 size 0x20 virtual false final false
  inline void _DidActivate_b__8_2();

  // Ctor Parameters [CppParam { name: "", ty: "OptionsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OptionsViewController(OptionsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OptionsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OptionsViewController(OptionsViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OptionsViewController();

public:
  /// @brief Field _editAvatarButton, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____editAvatarButton;

  /// @brief Field _playerOptionsButton, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____playerOptionsButton;

  /// @brief Field _settingsButton, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____settingsButton;

  /// @brief Field _appStaticSettings, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::AppStaticSettingsSO* ____appStaticSettings;

  /// @brief Field didFinishEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OptionsViewController, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OptionsViewController, ____editAvatarButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OptionsViewController, ____playerOptionsButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OptionsViewController, ____settingsButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OptionsViewController, ____appStaticSettings) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OptionsViewController, ___didFinishEvent) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OptionsViewController__OptionsButton, "", "OptionsViewController/OptionsButton");
NEED_NO_BOX(::GlobalNamespace::OptionsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OptionsViewController*, "", "OptionsViewController");
