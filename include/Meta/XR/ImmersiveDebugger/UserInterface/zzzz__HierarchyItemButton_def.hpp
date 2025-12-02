#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/HierarchyItemButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Flex_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyItemButton)
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class Item;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ToggleWithLabel;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Toggle;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class HierarchyItemButton;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton
class CORDL_TYPE HierarchyItemButton : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex {
public:
  // Declarations
  __declspec(property(get = get_Counter, put = set_Counter)) int32_t Counter;

  __declspec(property(get = get_Foldout)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> Foldout;

  __declspec(property(get = get_Item, put = set_Item)) ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* Item;

  __declspec(property(get = get_Label)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel> Label;

  /// @brief Field _counter, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__counter, put = __cordl_internal_set__counter)) int32_t _counter;

  /// @brief Field _foldout, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__foldout, put = __cordl_internal_set__foldout)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> _foldout;

  /// @brief Field _item, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__item, put = __cordl_internal_set__item)) ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* _item;

  /// @brief Field _label, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__label, put = __cordl_internal_set__label)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel> _label;

  /// @brief Field _previousEnabledState, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get__previousEnabledState, put = __cordl_internal_set__previousEnabledState)) bool _previousEnabledState;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton* New_ctor();

  /// @brief Method OnStateChanged, addr 0x5839cd4, size 0xfc, virtual false, abstract: false, final false
  inline void OnStateChanged(bool state);

  /// @brief Method Setup, addr 0x5839744, size 0x374, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  /// @brief Method Update, addr 0x5839dd0, size 0xbc, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateGameObjectState, addr 0x5839628, size 0x98, virtual false, abstract: false, final false
  inline void UpdateGameObjectState(bool force);

  /// @brief Method UpdateGameObjectState, addr 0x5839e8c, size 0xdc, virtual false, abstract: false, final false
  inline void UpdateGameObjectState(bool state, bool force);

  constexpr int32_t const& __cordl_internal_get__counter() const;

  constexpr int32_t& __cordl_internal_get__counter();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> const& __cordl_internal_get__foldout() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>& __cordl_internal_get__foldout();

  constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* const& __cordl_internal_get__item() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::Item*& __cordl_internal_get__item();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel> const& __cordl_internal_get__label() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel>& __cordl_internal_get__label();

  constexpr bool const& __cordl_internal_get__previousEnabledState() const;

  constexpr bool& __cordl_internal_get__previousEnabledState();

  constexpr void __cordl_internal_set__counter(int32_t value);

  constexpr void __cordl_internal_set__foldout(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> value);

  constexpr void __cordl_internal_set__item(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* value);

  constexpr void __cordl_internal_set__label(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel> value);

  constexpr void __cordl_internal_set__previousEnabledState(bool value);

  /// @brief Method .ctor, addr 0x5839f68, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Counter, addr 0x58396c0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Counter();

  /// @brief Method get_Foldout, addr 0x5839734, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> get_Foldout();

  /// @brief Method get_Item, addr 0x5839508, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* get_Item();

  /// @brief Method get_Label, addr 0x583973c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel> get_Label();

  /// @brief Method set_Counter, addr 0x58396c8, size 0x6c, virtual false, abstract: false, final false
  inline void set_Counter(int32_t value);

  /// @brief Method set_Item, addr 0x5839510, size 0x118, virtual false, abstract: false, final false
  inline void set_Item(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyItemButton();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyItemButton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyItemButton(HierarchyItemButton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyItemButton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyItemButton(HierarchyItemButton const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18318 };

  /// @brief Field _item, offset: 0x90, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* ____item;

  /// @brief Field _counter, offset: 0x98, size: 0x4, def value: None
  int32_t ____counter;

  /// @brief Field _label, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel> ____label;

  /// @brief Field _foldout, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> ____foldout;

  /// @brief Field _previousEnabledState, offset: 0xb0, size: 0x1, def value: None
  bool ____previousEnabledState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton, ____item) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton, ____counter) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton, ____label) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton, ____foldout) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton, ____previousEnabledState) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton, 0xb8>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*, "Meta.XR.ImmersiveDebugger.UserInterface", "HierarchyItemButton");
