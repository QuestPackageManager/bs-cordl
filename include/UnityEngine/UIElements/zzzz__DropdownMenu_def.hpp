#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DropdownMenu.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DropdownMenu)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class DropdownMenuAction;
}
namespace UnityEngine::UIElements {
class DropdownMenuEventInfo;
}
namespace UnityEngine::UIElements {
class DropdownMenuItem;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
struct __DropdownMenuAction__Status;
}
namespace UnityEngine::UIElements {
class __DropdownMenu____c__DisplayClass4_0;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownMenu;
}
namespace UnityEngine::UIElements {
class __DropdownMenu____c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DropdownMenu);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0);
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DropdownMenu::<>c__DisplayClass4_0*
class CORDL_TYPE __DropdownMenu____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field status, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_status, put = __cordl_internal_set_status)) ::UnityEngine::UIElements::__DropdownMenuAction__Status status;

  static inline ::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0* New_ctor();

  /// @brief Method <AppendAction>b__0, addr 0x49bb22c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__DropdownMenuAction__Status _AppendAction_b__0(::UnityEngine::UIElements::DropdownMenuAction* e);

  constexpr ::UnityEngine::UIElements::__DropdownMenuAction__Status const& __cordl_internal_get_status() const;

  constexpr ::UnityEngine::UIElements::__DropdownMenuAction__Status& __cordl_internal_get_status();

  constexpr void __cordl_internal_set_status(::UnityEngine::UIElements::__DropdownMenuAction__Status value);

  /// @brief Method .ctor, addr 0x49bac5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DropdownMenu____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DropdownMenu____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DropdownMenu____c__DisplayClass4_0(__DropdownMenu____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DropdownMenu____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DropdownMenu____c__DisplayClass4_0(__DropdownMenu____c__DisplayClass4_0 const&) = delete;

  /// @brief Field status, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::__DropdownMenuAction__Status ___status;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5744 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0, ___status) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::DropdownMenu
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::DropdownMenu*
class CORDL_TYPE DropdownMenu : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass4_0 = ::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0;

  /// @brief Field m_DropdownMenuEventInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DropdownMenuEventInfo,
                      put = __cordl_internal_set_m_DropdownMenuEventInfo)) ::UnityEngine::UIElements::DropdownMenuEventInfo* m_DropdownMenuEventInfo;

  /// @brief Field m_MenuItems, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MenuItems,
                      put = __cordl_internal_set_m_MenuItems)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* m_MenuItems;

  /// @brief Method AppendAction, addr 0x49baa30, size 0xfc, virtual false, abstract: false, final false
  inline void AppendAction(::StringW actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* action,
                           ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::__DropdownMenuAction__Status>* actionStatusCallback, ::System::Object* userData);

  /// @brief Method AppendAction, addr 0x49bab2c, size 0x130, virtual false, abstract: false, final false
  inline void AppendAction(::StringW actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* action, ::UnityEngine::UIElements::__DropdownMenuAction__Status status);

  /// @brief Method AppendSeparator, addr 0x49bac64, size 0x160, virtual false, abstract: false, final false
  inline void AppendSeparator(::StringW subMenuPath);

  /// @brief Method InsertSeparator, addr 0x49badc4, size 0x13c, virtual false, abstract: false, final false
  inline void InsertSeparator(::StringW subMenuPath, int32_t atIndex);

  /// @brief Method MenuItems, addr 0x49baa28, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* MenuItems();

  static inline ::UnityEngine::UIElements::DropdownMenu* New_ctor();

  /// @brief Method PrepareForDisplay, addr 0x49baf00, size 0x2b0, virtual false, abstract: false, final false
  inline void PrepareForDisplay(::UnityEngine::UIElements::EventBase* e);

  constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo*& __cordl_internal_get_m_DropdownMenuEventInfo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DropdownMenuEventInfo*> const& __cordl_internal_get_m_DropdownMenuEventInfo() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>*& __cordl_internal_get_m_MenuItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>*> const& __cordl_internal_get_m_MenuItems() const;

  constexpr void __cordl_internal_set_m_DropdownMenuEventInfo(::UnityEngine::UIElements::DropdownMenuEventInfo* value);

  constexpr void __cordl_internal_set_m_MenuItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* value);

  /// @brief Method .ctor, addr 0x49bb1b0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownMenu();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DropdownMenu", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownMenu(DropdownMenu&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownMenu", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownMenu(DropdownMenu const&) = delete;

  /// @brief Field m_MenuItems, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* ___m_MenuItems;

  /// @brief Field m_DropdownMenuEventInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::DropdownMenuEventInfo* ___m_DropdownMenuEventInfo;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5745 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownMenu, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenu, ___m_MenuItems) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenu, ___m_DropdownMenuEventInfo) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DropdownMenu);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownMenu*, "UnityEngine.UIElements", "DropdownMenu");
NEED_NO_BOX(::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DropdownMenu____c__DisplayClass4_0*, "UnityEngine.UIElements", "DropdownMenu/<>c__DisplayClass4_0");
