#pragma once
// IWYU pragma private; include "GlobalNamespace/HowToPlayViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HowToPlayViewController)
namespace GlobalNamespace {
struct __HowToPlayViewController__HowToPlayOptions;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
struct __HowToPlayViewController__HowToPlayOptions;
}
namespace GlobalNamespace {
class HowToPlayViewController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions);
MARK_REF_PTR_T(::GlobalNamespace::HowToPlayViewController);
// Type: ::HowToPlayOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::HowToPlayViewController::HowToPlayOptions
struct CORDL_TYPE __HowToPlayViewController__HowToPlayOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HowToPlayViewController__HowToPlayOptions_Unwrapped
  enum struct ____HowToPlayViewController__HowToPlayOptions_Unwrapped : int32_t {
    __E_HowToPlay = static_cast<int32_t>(0x0),
    __E_Credits = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HowToPlayViewController__HowToPlayOptions_Unwrapped() const noexcept {
    return static_cast<____HowToPlayViewController__HowToPlayOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HowToPlayViewController__HowToPlayOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HowToPlayViewController__HowToPlayOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Credits value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions const Credits;

  /// @brief Field HowToPlay value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions const HowToPlay;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HowToPlayViewController
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HowToPlayViewController*
class CORDL_TYPE HowToPlayViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using HowToPlayOptions = ::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions;

  /// @brief Field _creditsButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__creditsButton, put = __cordl_internal_set__creditsButton))::UnityW<::UnityEngine::UI::Button> _creditsButton;

  /// @brief Field _tutorialButton, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialButton, put = __cordl_internal_set__tutorialButton))::UnityW<::UnityEngine::UI::Button> _tutorialButton;

  /// @brief Field didFinishEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent))::System::Action_1<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions>* didFinishEvent;

  /// @brief Method DidActivate, addr 0x266ad50, size 0x108, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::HowToPlayViewController* New_ctor();

  /// @brief Method Setup, addr 0x266ad20, size 0x30, virtual false, abstract: false, final false
  inline void Setup(bool showTutorialButton);

  /// @brief Method <DidActivate>b__7_0, addr 0x266ae60, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__7_0();

  /// @brief Method <DidActivate>b__7_1, addr 0x266ae80, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__7_1();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__creditsButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__creditsButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__tutorialButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__tutorialButton();

  constexpr ::System::Action_1<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions>*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions>*> const& __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__creditsButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__tutorialButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions>* value);

  /// @brief Method .ctor, addr 0x266ae58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x266abc0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions>* value);

  /// @brief Method remove_didFinishEvent, addr 0x266ac70, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HowToPlayViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HowToPlayViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HowToPlayViewController(HowToPlayViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HowToPlayViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HowToPlayViewController(HowToPlayViewController const&) = delete;

  /// @brief Field _tutorialButton, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____tutorialButton;

  /// @brief Field _creditsButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____creditsButton;

  /// @brief Field didFinishEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HowToPlayViewController, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HowToPlayViewController, ____tutorialButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HowToPlayViewController, ____creditsButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HowToPlayViewController, ___didFinishEvent) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions, "", "HowToPlayViewController/HowToPlayOptions");
NEED_NO_BOX(::GlobalNamespace::HowToPlayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HowToPlayViewController*, "", "HowToPlayViewController");
