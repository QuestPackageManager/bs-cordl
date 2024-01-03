#pragma once
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5648))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HowToPlayViewController__HowToPlayOptions(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HowToPlayViewController__HowToPlayOptions();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HowToPlay value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions const HowToPlay;

  /// @brief Field Credits value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions const Credits;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5649))
// CS Name: ::HowToPlayViewController*
class CORDL_TYPE HowToPlayViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using HowToPlayOptions = ::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions;

  /// @brief Field _tutorialButton, offset 0x70, size 0x8
  __declspec(property(get = __get__tutorialButton, put = __set__tutorialButton))::UnityEngine::UI::Button* _tutorialButton;

  /// @brief Field _creditsButton, offset 0x78, size 0x8
  __declspec(property(get = __get__creditsButton, put = __set__creditsButton))::UnityEngine::UI::Button* _creditsButton;

  /// @brief Field didFinishEvent, offset 0x80, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action_1<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions>* didFinishEvent;

  constexpr ::UnityEngine::UI::Button*& __get__tutorialButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__tutorialButton() const;

  constexpr void __set__tutorialButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__creditsButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__creditsButton() const;

  constexpr void __set__creditsButton(::UnityEngine::UI::Button* value);

  constexpr ::System::Action_1<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions>* value);

  /// @brief Method add_didFinishEvent, addr 0x22b5934, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions>* value);

  /// @brief Method remove_didFinishEvent, addr 0x22b59e4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions>* value);

  /// @brief Method Setup, addr 0x22b5a94, size 0x30, virtual false, abstract: false, final false
  inline void Setup(bool showTutorialButton);

  /// @brief Method DidActivate, addr 0x22b5ac4, size 0x108, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::HowToPlayViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22b5bcc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__7_0, addr 0x22b5bd4, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__7_0();

  /// @brief Method <DidActivate>b__7_1, addr 0x22b5bf4, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__7_1();

  // Ctor Parameters [CppParam { name: "", ty: "HowToPlayViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HowToPlayViewController(HowToPlayViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HowToPlayViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HowToPlayViewController(HowToPlayViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HowToPlayViewController();

public:
  /// @brief Field _tutorialButton, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____tutorialButton;

  /// @brief Field _creditsButton, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____creditsButton;

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
