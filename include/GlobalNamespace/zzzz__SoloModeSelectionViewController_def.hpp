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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5855))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SoloModeSelectionViewController__MenuType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SoloModeSelectionViewController__MenuType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field FreePlayMode value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SoloModeSelectionViewController__MenuType const FreePlayMode;

  /// @brief Field NoArrowsMode value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SoloModeSelectionViewController__MenuType const NoArrowsMode;

  /// @brief Field OneSaberMode value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SoloModeSelectionViewController__MenuType const OneSaberMode;

  /// @brief Field Back value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__SoloModeSelectionViewController__MenuType const Back;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13722))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5856))
// CS Name: ::SoloModeSelectionViewController*
class CORDL_TYPE SoloModeSelectionViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using MenuType = ::GlobalNamespace::__SoloModeSelectionViewController__MenuType;

  /// @brief Field _freePlayModeButton, offset 0x70, size 0x8
  __declspec(property(get = __get__freePlayModeButton, put = __set__freePlayModeButton))::UnityEngine::UI::Button* _freePlayModeButton;

  /// @brief Field _oneSaberModeButton, offset 0x78, size 0x8
  __declspec(property(get = __get__oneSaberModeButton, put = __set__oneSaberModeButton))::UnityEngine::UI::Button* _oneSaberModeButton;

  /// @brief Field _noArrowsModeButton, offset 0x80, size 0x8
  __declspec(property(get = __get__noArrowsModeButton, put = __set__noArrowsModeButton))::UnityEngine::UI::Button* _noArrowsModeButton;

  /// @brief Field _dismissButton, offset 0x88, size 0x8
  __declspec(property(get = __get__dismissButton, put = __set__dismissButton))::UnityEngine::UI::Button* _dismissButton;

  /// @brief Field didFinishEvent, offset 0x90, size 0x8
  __declspec(
      property(get = __get_didFinishEvent,
               put = __set_didFinishEvent))::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>* didFinishEvent;

  constexpr ::UnityEngine::UI::Button*& __get__freePlayModeButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__freePlayModeButton() const;

  constexpr void __set__freePlayModeButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__oneSaberModeButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__oneSaberModeButton() const;

  constexpr void __set__oneSaberModeButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__noArrowsModeButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__noArrowsModeButton() const;

  constexpr void __set__noArrowsModeButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__dismissButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__dismissButton() const;

  constexpr void __set__dismissButton(::UnityEngine::UI::Button* value);

  constexpr ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*> const&
  __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>* value);

  /// @brief Method add_didFinishEvent addr 0x2196130 size 0xb0 virtual false final false
  inline void add_didFinishEvent(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>* value);

  /// @brief Method remove_didFinishEvent addr 0x21961e0 size 0xb0 virtual false final false
  inline void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>* value);

  /// @brief Method DidActivate addr 0x2196290 size 0x1b0 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandleMenuButton addr 0x2196440 size 0x28 virtual false final false
  inline void HandleMenuButton(::GlobalNamespace::__SoloModeSelectionViewController__MenuType subMenuType);

  static inline ::GlobalNamespace::SoloModeSelectionViewController* New_ctor();

  /// @brief Method .ctor addr 0x2196468 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__8_0 addr 0x2196470 size 0x24 virtual false final false
  inline void _DidActivate_b__8_0();

  /// @brief Method <DidActivate>b__8_1 addr 0x2196494 size 0x24 virtual false final false
  inline void _DidActivate_b__8_1();

  /// @brief Method <DidActivate>b__8_2 addr 0x21964b8 size 0x24 virtual false final false
  inline void _DidActivate_b__8_2();

  /// @brief Method <DidActivate>b__8_3 addr 0x21964dc size 0x24 virtual false final false
  inline void _DidActivate_b__8_3();

  // Ctor Parameters [CppParam { name: "", ty: "SoloModeSelectionViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoloModeSelectionViewController(SoloModeSelectionViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoloModeSelectionViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoloModeSelectionViewController(SoloModeSelectionViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoloModeSelectionViewController();

public:
  /// @brief Field _freePlayModeButton, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____freePlayModeButton;

  /// @brief Field _oneSaberModeButton, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____oneSaberModeButton;

  /// @brief Field _noArrowsModeButton, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____noArrowsModeButton;

  /// @brief Field _dismissButton, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____dismissButton;

  /// @brief Field didFinishEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>* ___didFinishEvent;

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
