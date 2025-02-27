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
struct HowToPlayViewController_HowToPlayOptions;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
struct HowToPlayViewController_HowToPlayOptions;
}
namespace GlobalNamespace {
class HowToPlayViewController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HowToPlayViewController_HowToPlayOptions);
MARK_REF_PTR_T(::GlobalNamespace::HowToPlayViewController);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: HowToPlayViewController/HowToPlayOptions
struct CORDL_TYPE HowToPlayViewController_HowToPlayOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HowToPlayViewController_HowToPlayOptions_Unwrapped
  enum struct __HowToPlayViewController_HowToPlayOptions_Unwrapped : int32_t {
    __E_HowToPlay = static_cast<int32_t>(0x0),
    __E_Credits = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HowToPlayViewController_HowToPlayOptions_Unwrapped() const noexcept {
    return static_cast<__HowToPlayViewController_HowToPlayOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HowToPlayViewController_HowToPlayOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HowToPlayViewController_HowToPlayOptions(int32_t value__) noexcept;

  /// @brief Field Credits value: I32(1)
  static ::GlobalNamespace::HowToPlayViewController_HowToPlayOptions const Credits;

  /// @brief Field HowToPlay value: I32(0)
  static ::GlobalNamespace::HowToPlayViewController_HowToPlayOptions const HowToPlay;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4907 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HowToPlayViewController_HowToPlayOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: HowToPlayViewController
class CORDL_TYPE HowToPlayViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using HowToPlayOptions = ::GlobalNamespace::HowToPlayViewController_HowToPlayOptions;

  /// @brief Field _creditsButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__creditsButton, put = __cordl_internal_set__creditsButton)) ::UnityW<::UnityEngine::UI::Button> _creditsButton;

  /// @brief Field _tutorialButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialButton, put = __cordl_internal_set__tutorialButton)) ::UnityW<::UnityEngine::UI::Button> _tutorialButton;

  /// @brief Field didFinishEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent)) ::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>* didFinishEvent;

  /// @brief Method DidActivate, addr 0x3c29848, size 0x100, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::HowToPlayViewController* New_ctor();

  /// @brief Method <DidActivate>b__6_0, addr 0x3c29950, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__6_0();

  /// @brief Method <DidActivate>b__6_1, addr 0x3c29970, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__6_1();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__creditsButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__creditsButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__tutorialButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__tutorialButton();

  constexpr ::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__creditsButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__tutorialButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>* value);

  /// @brief Method .ctor, addr 0x3c29948, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x3c296e8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>* value);

  /// @brief Method remove_didFinishEvent, addr 0x3c29798, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>* value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4908 };

  /// @brief Field _tutorialButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____tutorialButton;

  /// @brief Field _creditsButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____creditsButton;

  /// @brief Field didFinishEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HowToPlayViewController, ____tutorialButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HowToPlayViewController, ____creditsButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HowToPlayViewController, ___didFinishEvent) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HowToPlayViewController, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HowToPlayViewController_HowToPlayOptions, "", "HowToPlayViewController/HowToPlayOptions");
NEED_NO_BOX(::GlobalNamespace::HowToPlayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HowToPlayViewController*, "", "HowToPlayViewController");
