#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DropdownMenuAction)
namespace UnityEngine::UIElements {
struct __DropdownMenuAction__Status;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements {
class DropdownMenuEventInfo;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __DropdownMenuAction__Status;
}
namespace UnityEngine::UIElements {
class DropdownMenuAction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__DropdownMenuAction__Status);
MARK_REF_PTR_T(::UnityEngine::UIElements::DropdownMenuAction);
// Type: ::Status
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6947))
// CS Name: ::DropdownMenuAction::Status
struct CORDL_TYPE __DropdownMenuAction__Status {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DropdownMenuAction__Status_Unwrapped
  enum struct ____DropdownMenuAction__Status_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Normal = static_cast<int32_t>(0x1),
    __E_Disabled = static_cast<int32_t>(0x2),
    __E_Checked = static_cast<int32_t>(0x4),
    __E_Hidden = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DropdownMenuAction__Status_Unwrapped() const noexcept {
    return static_cast<____DropdownMenuAction__Status_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DropdownMenuAction__Status(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DropdownMenuAction__Status();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__DropdownMenuAction__Status const None;

  /// @brief Field Normal value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__DropdownMenuAction__Status const Normal;

  /// @brief Field Disabled value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__DropdownMenuAction__Status const Disabled;

  /// @brief Field Checked value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::__DropdownMenuAction__Status const Checked;

  /// @brief Field Hidden value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::__DropdownMenuAction__Status const Hidden;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DropdownMenuAction__Status, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__DropdownMenuAction__Status, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::DropdownMenuAction
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6947)), TypeDefinitionIndex(TypeDefinitionIndex(6945))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6948))
// CS Name: ::UnityEngine.UIElements::DropdownMenuAction*
class CORDL_TYPE DropdownMenuAction : public ::UnityEngine::UIElements::DropdownMenuItem {
public:
  // Declarations
  using Status = ::UnityEngine::UIElements::__DropdownMenuAction__Status;

  /// @brief Field <name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__name_k__BackingField, put = __set__name_k__BackingField))::StringW _name_k__BackingField;

  /// @brief Field <status>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__status_k__BackingField, put = __set__status_k__BackingField))::UnityEngine::UIElements::__DropdownMenuAction__Status _status_k__BackingField;

  /// @brief Field <eventInfo>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__eventInfo_k__BackingField, put = __set__eventInfo_k__BackingField))::UnityEngine::UIElements::DropdownMenuEventInfo* _eventInfo_k__BackingField;

  /// @brief Field <userData>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__userData_k__BackingField, put = __set__userData_k__BackingField))::System::Object* _userData_k__BackingField;

  /// @brief Field actionCallback, offset 0x30, size 0x8
  __declspec(property(get = __get_actionCallback, put = __set_actionCallback))::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* actionCallback;

  /// @brief Field actionStatusCallback, offset 0x38, size 0x8
  __declspec(property(get = __get_actionStatusCallback,
                      put = __set_actionStatusCallback))::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::__DropdownMenuAction__Status>* actionStatusCallback;

  __declspec(property(put = set_status))::UnityEngine::UIElements::__DropdownMenuAction__Status status;

  __declspec(property(put = set_eventInfo))::UnityEngine::UIElements::DropdownMenuEventInfo* eventInfo;

  __declspec(property(put = set_userData))::System::Object* userData;

  constexpr ::StringW& __get__name_k__BackingField();

  constexpr ::StringW const& __get__name_k__BackingField() const;

  constexpr void __set__name_k__BackingField(::StringW value);

  constexpr ::UnityEngine::UIElements::__DropdownMenuAction__Status& __get__status_k__BackingField();

  constexpr ::UnityEngine::UIElements::__DropdownMenuAction__Status const& __get__status_k__BackingField() const;

  constexpr void __set__status_k__BackingField(::UnityEngine::UIElements::__DropdownMenuAction__Status value);

  constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo*& __get__eventInfo_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DropdownMenuEventInfo*> const& __get__eventInfo_k__BackingField() const;

  constexpr void __set__eventInfo_k__BackingField(::UnityEngine::UIElements::DropdownMenuEventInfo* value);

  constexpr ::System::Object*& __get__userData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__userData_k__BackingField() const;

  constexpr void __set__userData_k__BackingField(::System::Object* value);

  constexpr ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*& __get_actionCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*> const& __get_actionCallback() const;

  constexpr void __set_actionCallback(::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* value);

  constexpr ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::__DropdownMenuAction__Status>*& __get_actionStatusCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::__DropdownMenuAction__Status>*> const&
  __get_actionStatusCallback() const;

  constexpr void __set_actionStatusCallback(::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::__DropdownMenuAction__Status>* value);

  /// @brief Method set_status, addr 0x2e0856c, size 0x8, virtual false, abstract: false, final false
  inline void set_status(::UnityEngine::UIElements::__DropdownMenuAction__Status value);

  /// @brief Method set_eventInfo, addr 0x2e08574, size 0x8, virtual false, abstract: false, final false
  inline void set_eventInfo(::UnityEngine::UIElements::DropdownMenuEventInfo* value);

  /// @brief Method set_userData, addr 0x2e0857c, size 0x8, virtual false, abstract: false, final false
  inline void set_userData(::System::Object* value);

  static inline ::UnityEngine::UIElements::DropdownMenuAction*
  New_ctor(::StringW actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* actionCallback,
           ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::__DropdownMenuAction__Status>* actionStatusCallback, ::System::Object* userData);

  /// @brief Method .ctor, addr 0x2e08584, size 0x44, virtual false, abstract: false, final false
  /// @param userData: ::System::Object* (default: nullptr)
  inline void _ctor(::StringW actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* actionCallback,
                    ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::__DropdownMenuAction__Status>* actionStatusCallback,
                    ::System::Object* userData = nullptr);

  /// @brief Method UpdateActionStatus, addr 0x2e085c8, size 0x3c, virtual false, abstract: false, final false
  inline void UpdateActionStatus(::UnityEngine::UIElements::DropdownMenuEventInfo* eventInfo);

  // Ctor Parameters [CppParam { name: "", ty: "DropdownMenuAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownMenuAction(DropdownMenuAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownMenuAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownMenuAction(DropdownMenuAction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownMenuAction();

public:
  /// @brief Field <name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name_k__BackingField;

  /// @brief Field <status>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UIElements::__DropdownMenuAction__Status ____status_k__BackingField;

  /// @brief Field <eventInfo>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::DropdownMenuEventInfo* ____eventInfo_k__BackingField;

  /// @brief Field <userData>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____userData_k__BackingField;

  /// @brief Field actionCallback, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* ___actionCallback;

  /// @brief Field actionStatusCallback, offset: 0x38, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::__DropdownMenuAction__Status>* ___actionStatusCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownMenuAction, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ____name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ____status_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ____eventInfo_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ____userData_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ___actionCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ___actionStatusCallback) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DropdownMenuAction__Status, "UnityEngine.UIElements", "DropdownMenuAction/Status");
NEED_NO_BOX(::UnityEngine::UIElements::DropdownMenuAction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownMenuAction*, "UnityEngine.UIElements", "DropdownMenuAction");
