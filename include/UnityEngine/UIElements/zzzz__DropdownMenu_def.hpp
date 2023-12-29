#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DropdownMenu)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UIElements {
class DropdownMenuItem;
}
namespace UnityEngine::UIElements {
class DropdownMenuEventInfo;
}
namespace UnityEngine::UIElements {
struct __DropdownMenuAction__Status;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class DropdownMenuAction;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownMenu;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DropdownMenu);
// Type: UnityEngine.UIElements::DropdownMenu
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7035))
// CS Name: ::UnityEngine.UIElements::DropdownMenu*
class CORDL_TYPE DropdownMenu : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_MenuItems, offset 0x10, size 0x8
  __declspec(property(get = __get_m_MenuItems, put = __set_m_MenuItems))::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* m_MenuItems;

  /// @brief Field m_DropdownMenuEventInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_m_DropdownMenuEventInfo, put = __set_m_DropdownMenuEventInfo))::UnityEngine::UIElements::DropdownMenuEventInfo* m_DropdownMenuEventInfo;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>*& __get_m_MenuItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>*> const& __get_m_MenuItems() const;

  constexpr void __set_m_MenuItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* value);

  constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo*& __get_m_DropdownMenuEventInfo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DropdownMenuEventInfo*> const& __get_m_DropdownMenuEventInfo() const;

  constexpr void __set_m_DropdownMenuEventInfo(::UnityEngine::UIElements::DropdownMenuEventInfo* value);

  /// @brief Method MenuItems addr 0x2ca2254 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* MenuItems();

  /// @brief Method AppendAction addr 0x2ca225c size 0x104 virtual false final false
  inline void AppendAction(::StringW actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* action,
                           ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::__DropdownMenuAction__Status>* actionStatusCallback, ::System::Object* userData);

  /// @brief Method InsertSeparator addr 0x2ca2360 size 0x140 virtual false final false
  inline void InsertSeparator(::StringW subMenuPath, int32_t atIndex);

  /// @brief Method PrepareForDisplay addr 0x2ca24a0 size 0x2bc virtual false final false
  inline void PrepareForDisplay(::UnityEngine::UIElements::EventBase* e);

  // Ctor Parameters [CppParam { name: "", ty: "DropdownMenu", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownMenu(DropdownMenu&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownMenu", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownMenu(DropdownMenu const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownMenu();

public:
  /// @brief Field m_MenuItems, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem*>* ___m_MenuItems;

  /// @brief Field m_DropdownMenuEventInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::DropdownMenuEventInfo* ___m_DropdownMenuEventInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownMenu, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenu, ___m_MenuItems) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenu, ___m_DropdownMenuEventInfo) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DropdownMenu);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownMenu*, "UnityEngine.UIElements", "DropdownMenu");
