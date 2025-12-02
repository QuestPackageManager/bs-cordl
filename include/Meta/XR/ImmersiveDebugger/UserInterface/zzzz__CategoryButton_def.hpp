#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/CategoryButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Category_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Toggle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CategoryButton)
namespace Meta::XR::ImmersiveDebugger::Manager {
struct Category;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Flex;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Label;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class CategoryButton;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton);
// Dependencies Meta.XR.ImmersiveDebugger.Manager.Category, Meta.XR.ImmersiveDebugger.UserInterface.Generic.Toggle
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.CategoryButton
class CORDL_TYPE CategoryButton : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle {
public:
  // Declarations
  __declspec(property(get = get_Category, put = set_Category)) ::Meta::XR::ImmersiveDebugger::Manager::Category Category;

  __declspec(property(get = get_Counter, put = set_Counter)) int32_t Counter;

  /// @brief Field _category, offset 0xb8, size 0x10
  __declspec(property(get = __cordl_internal_get__category, put = __cordl_internal_set__category)) ::Meta::XR::ImmersiveDebugger::Manager::Category _category;

  /// @brief Field _counter, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get__counter, put = __cordl_internal_set__counter)) int32_t _counter;

  /// @brief Field _flex, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__flex, put = __cordl_internal_set__flex)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> _flex;

  /// @brief Field _label, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__label, put = __cordl_internal_set__label)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> _label;

  /// @brief Field _subLabel, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__subLabel, put = __cordl_internal_set__subLabel)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> _subLabel;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton* New_ctor();

  /// @brief Method Setup, addr 0x583315c, size 0x2d8, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::Category const& __cordl_internal_get__category() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::Category& __cordl_internal_get__category();

  constexpr int32_t const& __cordl_internal_get__counter() const;

  constexpr int32_t& __cordl_internal_get__counter();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& __cordl_internal_get__flex() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& __cordl_internal_get__flex();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& __cordl_internal_get__label() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& __cordl_internal_get__label();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& __cordl_internal_get__subLabel() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& __cordl_internal_get__subLabel();

  constexpr void __cordl_internal_set__category(::Meta::XR::ImmersiveDebugger::Manager::Category value);

  constexpr void __cordl_internal_set__counter(int32_t value);

  constexpr void __cordl_internal_set__flex(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value);

  constexpr void __cordl_internal_set__label(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value);

  constexpr void __cordl_internal_set__subLabel(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value);

  /// @brief Method .ctor, addr 0x5833510, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Category, addr 0x5832f68, size 0xc, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Manager::Category get_Category();

  /// @brief Method get_Counter, addr 0x583300c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Counter();

  /// @brief Method set_Category, addr 0x5832f74, size 0x98, virtual false, abstract: false, final false
  inline void set_Category(::Meta::XR::ImmersiveDebugger::Manager::Category value);

  /// @brief Method set_Counter, addr 0x5833014, size 0x148, virtual false, abstract: false, final false
  inline void set_Counter(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CategoryButton();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CategoryButton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CategoryButton(CategoryButton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CategoryButton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CategoryButton(CategoryButton const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18310 };

  /// @brief Field _category, offset: 0xb8, size: 0x10, def value: None
  ::Meta::XR::ImmersiveDebugger::Manager::Category ____category;

  /// @brief Field _counter, offset: 0xc8, size: 0x4, def value: None
  int32_t ____counter;

  /// @brief Field _label, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> ____label;

  /// @brief Field _subLabel, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> ____subLabel;

  /// @brief Field _flex, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> ____flex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton, ____category) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton, ____counter) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton, ____label) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton, ____subLabel) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton, ____flex) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton, 0xe8>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*, "Meta.XR.ImmersiveDebugger.UserInterface", "CategoryButton");
