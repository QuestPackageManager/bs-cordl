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
struct DropdownMenuAction_Status;
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
class DropdownMenu___c__DisplayClass10_0;
}
namespace UnityEngine::UIElements {
class DropdownMenu___c__DisplayClass13_0;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownMenu;
}
namespace UnityEngine::UIElements {
class DropdownMenu___c__DisplayClass10_0;
}
namespace UnityEngine::UIElements {
class DropdownMenu___c__DisplayClass13_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DropdownMenu);
MARK_REF_PTR_T(::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0);
MARK_REF_PTR_T(::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0);
// Dependencies System.Object, UnityEngine.UIElements.DropdownMenuAction::Status
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DropdownMenu/<>c__DisplayClass10_0
class CORDL_TYPE DropdownMenu___c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field status, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_status, put = __cordl_internal_set_status)) ::UnityEngine::UIElements::DropdownMenuAction_Status status;

  static inline ::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0* New_ctor();

  /// @brief Method <AppendAction>b__0, addr 0x6bc8f70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DropdownMenuAction_Status _AppendAction_b__0(::UnityEngine::UIElements::DropdownMenuAction* e);

  constexpr ::UnityEngine::UIElements::DropdownMenuAction_Status const& __cordl_internal_get_status() const;

  constexpr ::UnityEngine::UIElements::DropdownMenuAction_Status& __cordl_internal_get_status();

  constexpr void __cordl_internal_set_status(::UnityEngine::UIElements::DropdownMenuAction_Status value);

  /// @brief Method .ctor, addr 0x6bc8898, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownMenu___c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DropdownMenu___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownMenu___c__DisplayClass10_0(DropdownMenu___c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownMenu___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownMenu___c__DisplayClass10_0(DropdownMenu___c__DisplayClass10_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4418 };

  /// @brief Field status, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::DropdownMenuAction_Status ___status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0, ___status) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DropdownMenu/<>c__DisplayClass13_0
class CORDL_TYPE DropdownMenu___c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field subMenuPath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_subMenuPath, put = __cordl_internal_set_subMenuPath)) ::StringW subMenuPath;

  static inline ::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0* New_ctor();

  /// @brief Method <AppendSeparator>b__0, addr 0x6bc8f78, size 0xa8, virtual false, abstract: false, final false
  inline bool _AppendSeparator_b__0(::UnityEngine::UIElements::DropdownMenuItem* item);

  constexpr ::StringW const& __cordl_internal_get_subMenuPath() const;

  constexpr ::StringW& __cordl_internal_get_subMenuPath();

  constexpr void __cordl_internal_set_subMenuPath(::StringW value);

  /// @brief Method .ctor, addr 0x6bc8b30, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownMenu___c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DropdownMenu___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownMenu___c__DisplayClass13_0(DropdownMenu___c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownMenu___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownMenu___c__DisplayClass13_0(DropdownMenu___c__DisplayClass13_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4419 };

  /// @brief Field subMenuPath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___subMenuPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0, ___subMenuPath) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DropdownMenu
class CORDL_TYPE DropdownMenu : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass10_0 = ::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0;

  using __c__DisplayClass13_0 = ::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field m_DropdownMenuEventInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DropdownMenuEventInfo,
                      put = __cordl_internal_set_m_DropdownMenuEventInfo)) ::UnityEngine::UIElements::DropdownMenuEventInfo* m_DropdownMenuEventInfo;

  /// @brief Field m_MenuItems, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MenuItems,
                      put = __cordl_internal_set_m_MenuItems)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* m_MenuItems;

  /// @brief Method AppendAction, addr 0x6bc866c, size 0xf8, virtual false, abstract: false, final false
  inline void AppendAction(::StringW actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* action,
                           ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::DropdownMenuAction_Status>* actionStatusCallback, ::System::Object* userData);

  /// @brief Method AppendAction, addr 0x6bc8764, size 0x134, virtual false, abstract: false, final false
  inline void AppendAction(::StringW actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* action, ::UnityEngine::UIElements::DropdownMenuAction_Status status);

  /// @brief Method AppendSeparator, addr 0x6bc889c, size 0x294, virtual false, abstract: false, final false
  inline void AppendSeparator(::StringW subMenuPath);

  /// @brief Method InsertSeparator, addr 0x6bc8b34, size 0x138, virtual false, abstract: false, final false
  inline void InsertSeparator(::StringW subMenuPath, int32_t atIndex);

  /// @brief Method MenuItems, addr 0x6bc8664, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* MenuItems();

  static inline ::UnityEngine::UIElements::DropdownMenu* New_ctor();

  /// @brief Method PrepareForDisplay, addr 0x6bc8c6c, size 0x290, virtual false, abstract: false, final false
  inline void PrepareForDisplay(::UnityEngine::UIElements::EventBase* e);

  constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo* const& __cordl_internal_get_m_DropdownMenuEventInfo() const;

  constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo*& __cordl_internal_get_m_DropdownMenuEventInfo();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* const& __cordl_internal_get_m_MenuItems() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>*& __cordl_internal_get_m_MenuItems();

  constexpr void __cordl_internal_set_m_DropdownMenuEventInfo(::UnityEngine::UIElements::DropdownMenuEventInfo* value);

  constexpr void __cordl_internal_set_m_MenuItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* value);

  /// @brief Method .ctor, addr 0x6bc8efc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x6bc8614, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_Count();

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4420 };

  /// @brief Field m_MenuItems, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* ___m_MenuItems;

  /// @brief Field m_DropdownMenuEventInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::DropdownMenuEventInfo* ___m_DropdownMenuEventInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DropdownMenu, ___m_MenuItems) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenu, ___m_DropdownMenuEventInfo) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownMenu, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DropdownMenu);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownMenu*, "UnityEngine.UIElements", "DropdownMenu");
NEED_NO_BOX(::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownMenu___c__DisplayClass10_0*, "UnityEngine.UIElements", "DropdownMenu/<>c__DisplayClass10_0");
NEED_NO_BOX(::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownMenu___c__DisplayClass13_0*, "UnityEngine.UIElements", "DropdownMenu/<>c__DisplayClass13_0");
