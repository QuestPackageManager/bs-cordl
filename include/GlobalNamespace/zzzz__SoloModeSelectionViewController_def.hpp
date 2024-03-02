#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SoloModeSelectionViewController)
namespace GlobalNamespace {
struct __SoloModeSelectionViewController__MenuType;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SoloModeSelectionViewController__MenuType;
}
namespace GlobalNamespace {
class SoloModeSelectionViewController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SoloModeSelectionViewController__MenuType);
MARK_REF_PTR_T(::GlobalNamespace::SoloModeSelectionViewController);
// Type: ::MenuType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SoloModeSelectionViewController::MenuType
struct CORDL_TYPE __SoloModeSelectionViewController__MenuType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SoloModeSelectionViewController__MenuType_Unwrapped
  enum struct ____SoloModeSelectionViewController__MenuType_Unwrapped : int32_t {
    __E_FreePlayMode = static_cast<int32_t>(0x0),
    __E_NoArrowsMode = static_cast<int32_t>(0x1),
    __E_OneSaberMode = static_cast<int32_t>(0x2),
    __E_Back = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SoloModeSelectionViewController__MenuType_Unwrapped() const noexcept {
    return static_cast<____SoloModeSelectionViewController__MenuType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SoloModeSelectionViewController__MenuType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SoloModeSelectionViewController__MenuType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Back value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__SoloModeSelectionViewController__MenuType const Back;

  /// @brief Field FreePlayMode value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SoloModeSelectionViewController__MenuType const FreePlayMode;

  /// @brief Field NoArrowsMode value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SoloModeSelectionViewController__MenuType const NoArrowsMode;

  /// @brief Field OneSaberMode value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SoloModeSelectionViewController__MenuType const OneSaberMode;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SoloModeSelectionViewController__MenuType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoloModeSelectionViewController__MenuType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SoloModeSelectionViewController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SoloModeSelectionViewController*
class CORDL_TYPE SoloModeSelectionViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using MenuType = ::GlobalNamespace::__SoloModeSelectionViewController__MenuType;

  /// @brief Field _dismissButton, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__dismissButton, put = __cordl_internal_set__dismissButton))::UnityW<::UnityEngine::UI::Button> _dismissButton;

  /// @brief Field _freePlayModeButton, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__freePlayModeButton, put = __cordl_internal_set__freePlayModeButton))::UnityW<::UnityEngine::UI::Button> _freePlayModeButton;

  /// @brief Field _noArrowsModeButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__noArrowsModeButton, put = __cordl_internal_set__noArrowsModeButton))::UnityW<::UnityEngine::UI::Button> _noArrowsModeButton;

  /// @brief Field _oneSaberModeButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__oneSaberModeButton, put = __cordl_internal_set__oneSaberModeButton))::UnityW<::UnityEngine::UI::Button> _oneSaberModeButton;

  /// @brief Field didFinishEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent))::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>,
                                                                                    ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>* didFinishEvent;

  /// @brief Method DidActivate, addr 0x23da348, size 0x1b0, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandleMenuButton, addr 0x23da4f8, size 0x28, virtual false, abstract: false, final false
  inline void HandleMenuButton(::GlobalNamespace::__SoloModeSelectionViewController__MenuType subMenuType);

  static inline ::GlobalNamespace::SoloModeSelectionViewController* New_ctor();

  /// @brief Method <DidActivate>b__8_0, addr 0x23da528, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__8_0();

  /// @brief Method <DidActivate>b__8_1, addr 0x23da54c, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__8_1();

  /// @brief Method <DidActivate>b__8_2, addr 0x23da570, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__8_2();

  /// @brief Method <DidActivate>b__8_3, addr 0x23da594, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__8_3();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__dismissButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__dismissButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__freePlayModeButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__freePlayModeButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__noArrowsModeButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__noArrowsModeButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__oneSaberModeButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__oneSaberModeButton();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*> const&
  __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__dismissButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__freePlayModeButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__noArrowsModeButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__oneSaberModeButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void
  __cordl_internal_set_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>* value);

  /// @brief Method .ctor, addr 0x23da520, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x23da1e8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>* value);

  /// @brief Method remove_didFinishEvent, addr 0x23da298, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>* value);

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

  /// @brief Field _freePlayModeButton, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____freePlayModeButton;

  /// @brief Field _oneSaberModeButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____oneSaberModeButton;

  /// @brief Field _noArrowsModeButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____noArrowsModeButton;

  /// @brief Field _dismissButton, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____dismissButton;

  /// @brief Field didFinishEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::SoloModeSelectionViewController>, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SoloModeSelectionViewController, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloModeSelectionViewController, ____freePlayModeButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloModeSelectionViewController, ____oneSaberModeButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloModeSelectionViewController, ____noArrowsModeButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloModeSelectionViewController, ____dismissButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloModeSelectionViewController, ___didFinishEvent) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SoloModeSelectionViewController__MenuType, "", "SoloModeSelectionViewController/MenuType");
NEED_NO_BOX(::GlobalNamespace::SoloModeSelectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SoloModeSelectionViewController*, "", "SoloModeSelectionViewController");
