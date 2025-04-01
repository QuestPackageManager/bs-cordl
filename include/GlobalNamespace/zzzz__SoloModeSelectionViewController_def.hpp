#pragma once
// IWYU pragma private; include "GlobalNamespace/SoloModeSelectionViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SoloModeSelectionViewController)
namespace GlobalNamespace {
struct SoloModeSelectionViewController_MenuType;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
struct SoloModeSelectionViewController_MenuType;
}
namespace GlobalNamespace {
class SoloModeSelectionViewController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SoloModeSelectionViewController_MenuType);
MARK_REF_PTR_T(::GlobalNamespace::SoloModeSelectionViewController);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: SoloModeSelectionViewController/MenuType
struct CORDL_TYPE SoloModeSelectionViewController_MenuType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SoloModeSelectionViewController_MenuType_Unwrapped
  enum struct __SoloModeSelectionViewController_MenuType_Unwrapped : int32_t {
    __E_FreePlayMode = static_cast<int32_t>(0x0),
    __E_NoArrowsMode = static_cast<int32_t>(0x1),
    __E_OneSaberMode = static_cast<int32_t>(0x2),
    __E_Back = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SoloModeSelectionViewController_MenuType_Unwrapped() const noexcept {
    return static_cast<__SoloModeSelectionViewController_MenuType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SoloModeSelectionViewController_MenuType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SoloModeSelectionViewController_MenuType(int32_t value__) noexcept;

  /// @brief Field Back value: I32(3)
  static ::GlobalNamespace::SoloModeSelectionViewController_MenuType const Back;

  /// @brief Field FreePlayMode value: I32(0)
  static ::GlobalNamespace::SoloModeSelectionViewController_MenuType const FreePlayMode;

  /// @brief Field NoArrowsMode value: I32(1)
  static ::GlobalNamespace::SoloModeSelectionViewController_MenuType const NoArrowsMode;

  /// @brief Field OneSaberMode value: I32(2)
  static ::GlobalNamespace::SoloModeSelectionViewController_MenuType const OneSaberMode;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4962 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoloModeSelectionViewController_MenuType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SoloModeSelectionViewController_MenuType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: SoloModeSelectionViewController
class CORDL_TYPE SoloModeSelectionViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using MenuType = ::GlobalNamespace::SoloModeSelectionViewController_MenuType;

  /// @brief Field _dismissButton, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__dismissButton, put = __cordl_internal_set__dismissButton)) ::UnityW<::UnityEngine::UI::Button> _dismissButton;

  /// @brief Field _freePlayModeButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__freePlayModeButton, put = __cordl_internal_set__freePlayModeButton)) ::UnityW<::UnityEngine::UI::Button> _freePlayModeButton;

  /// @brief Field _noArrowsModeButton, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__noArrowsModeButton, put = __cordl_internal_set__noArrowsModeButton)) ::UnityW<::UnityEngine::UI::Button> _noArrowsModeButton;

  /// @brief Field _oneSaberModeButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__oneSaberModeButton, put = __cordl_internal_set__oneSaberModeButton)) ::UnityW<::UnityEngine::UI::Button> _oneSaberModeButton;

  /// @brief Field didFinishEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>,
                                                                                     ::GlobalNamespace::SoloModeSelectionViewController_MenuType>* didFinishEvent;

  /// @brief Method DidActivate, addr 0x3af6f18, size 0x1a0, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandleMenuButton, addr 0x3af70b8, size 0x28, virtual false, abstract: false, final false
  inline void HandleMenuButton(::GlobalNamespace::SoloModeSelectionViewController_MenuType subMenuType);

  static inline ::GlobalNamespace::SoloModeSelectionViewController* New_ctor();

  /// @brief Method <DidActivate>b__8_0, addr 0x3af70e8, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__8_0();

  /// @brief Method <DidActivate>b__8_1, addr 0x3af710c, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__8_1();

  /// @brief Method <DidActivate>b__8_2, addr 0x3af7130, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__8_2();

  /// @brief Method <DidActivate>b__8_3, addr 0x3af7154, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__8_3();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__dismissButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__dismissButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__freePlayModeButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__freePlayModeButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__noArrowsModeButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__noArrowsModeButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__oneSaberModeButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__oneSaberModeButton();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::SoloModeSelectionViewController_MenuType>* const&
  __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::SoloModeSelectionViewController_MenuType>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__dismissButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__freePlayModeButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__noArrowsModeButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__oneSaberModeButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void
  __cordl_internal_set_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::SoloModeSelectionViewController_MenuType>* value);

  /// @brief Method .ctor, addr 0x3af70e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x3af6db8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::SoloModeSelectionViewController_MenuType>* value);

  /// @brief Method remove_didFinishEvent, addr 0x3af6e68, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::SoloModeSelectionViewController_MenuType>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoloModeSelectionViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SoloModeSelectionViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoloModeSelectionViewController(SoloModeSelectionViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoloModeSelectionViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoloModeSelectionViewController(SoloModeSelectionViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4963 };

  /// @brief Field _freePlayModeButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____freePlayModeButton;

  /// @brief Field _oneSaberModeButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____oneSaberModeButton;

  /// @brief Field _noArrowsModeButton, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____noArrowsModeButton;

  /// @brief Field _dismissButton, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____dismissButton;

  /// @brief Field didFinishEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::SoloModeSelectionViewController_MenuType>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoloModeSelectionViewController, ____freePlayModeButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloModeSelectionViewController, ____oneSaberModeButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloModeSelectionViewController, ____noArrowsModeButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloModeSelectionViewController, ____dismissButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloModeSelectionViewController, ___didFinishEvent) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SoloModeSelectionViewController, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SoloModeSelectionViewController_MenuType, "", "SoloModeSelectionViewController/MenuType");
NEED_NO_BOX(::GlobalNamespace::SoloModeSelectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SoloModeSelectionViewController*, "", "SoloModeSelectionViewController");
