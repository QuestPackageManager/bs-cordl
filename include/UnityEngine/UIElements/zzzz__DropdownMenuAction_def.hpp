#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DropdownMenuAction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DropdownMenuAction)
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
class DropdownMenuEventInfo;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct DropdownMenuAction_Status;
}
namespace UnityEngine::UIElements {
class DropdownMenuAction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::DropdownMenuAction_Status);
MARK_REF_PTR_T(::UnityEngine::UIElements::DropdownMenuAction);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.DropdownMenuAction/Status
struct CORDL_TYPE DropdownMenuAction_Status {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DropdownMenuAction_Status_Unwrapped
  enum struct __DropdownMenuAction_Status_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Normal = static_cast<int32_t>(0x1),
    __E_Disabled = static_cast<int32_t>(0x2),
    __E_Checked = static_cast<int32_t>(0x4),
    __E_Hidden = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DropdownMenuAction_Status_Unwrapped() const noexcept {
    return static_cast<__DropdownMenuAction_Status_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownMenuAction_Status();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DropdownMenuAction_Status(int32_t value__) noexcept;

  /// @brief Field Checked value: I32(4)
  static ::UnityEngine::UIElements::DropdownMenuAction_Status const Checked;

  /// @brief Field Disabled value: I32(2)
  static ::UnityEngine::UIElements::DropdownMenuAction_Status const Disabled;

  /// @brief Field Hidden value: I32(8)
  static ::UnityEngine::UIElements::DropdownMenuAction_Status const Hidden;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::DropdownMenuAction_Status const None;

  /// @brief Field Normal value: I32(1)
  static ::UnityEngine::UIElements::DropdownMenuAction_Status const Normal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5771 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction_Status, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownMenuAction_Status, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.DropdownMenuAction::Status, UnityEngine.UIElements.DropdownMenuItem
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DropdownMenuAction
class CORDL_TYPE DropdownMenuAction : public ::UnityEngine::UIElements::DropdownMenuItem {
public:
  // Declarations
  using Status = ::UnityEngine::UIElements::DropdownMenuAction_Status;

  /// @brief Field <eventInfo>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__eventInfo_k__BackingField,
                      put = __cordl_internal_set__eventInfo_k__BackingField)) ::UnityEngine::UIElements::DropdownMenuEventInfo* _eventInfo_k__BackingField;

  /// @brief Field <name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__name_k__BackingField, put = __cordl_internal_set__name_k__BackingField)) ::StringW _name_k__BackingField;

  /// @brief Field <status>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__status_k__BackingField,
                      put = __cordl_internal_set__status_k__BackingField)) ::UnityEngine::UIElements::DropdownMenuAction_Status _status_k__BackingField;

  /// @brief Field <userData>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__userData_k__BackingField, put = __cordl_internal_set__userData_k__BackingField)) ::System::Object* _userData_k__BackingField;

  /// @brief Field actionCallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_actionCallback, put = __cordl_internal_set_actionCallback)) ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* actionCallback;

  /// @brief Field actionStatusCallback, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get_actionStatusCallback,
      put = __cordl_internal_set_actionStatusCallback)) ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::DropdownMenuAction_Status>* actionStatusCallback;

  __declspec(property(put = set_eventInfo)) ::UnityEngine::UIElements::DropdownMenuEventInfo* eventInfo;

  __declspec(property(put = set_status)) ::UnityEngine::UIElements::DropdownMenuAction_Status status;

  __declspec(property(put = set_userData)) ::System::Object* userData;

  /// @brief Method AlwaysDisabled, addr 0x4a2516c, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::DropdownMenuAction_Status AlwaysDisabled(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method AlwaysEnabled, addr 0x4a25164, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::DropdownMenuAction_Status AlwaysEnabled(::UnityEngine::UIElements::DropdownMenuAction* a);

  static inline ::UnityEngine::UIElements::DropdownMenuAction*
  New_ctor(::StringW actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* actionCallback,
           ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::DropdownMenuAction_Status>* actionStatusCallback, ::System::Object* userData);

  /// @brief Method UpdateActionStatus, addr 0x4a251b8, size 0x3c, virtual false, abstract: false, final false
  inline void UpdateActionStatus(::UnityEngine::UIElements::DropdownMenuEventInfo* eventInfo);

  constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo* const& __cordl_internal_get__eventInfo_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo*& __cordl_internal_get__eventInfo_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__name_k__BackingField();

  constexpr ::UnityEngine::UIElements::DropdownMenuAction_Status const& __cordl_internal_get__status_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::DropdownMenuAction_Status& __cordl_internal_get__status_k__BackingField();

  constexpr ::System::Object* const& __cordl_internal_get__userData_k__BackingField() const;

  constexpr ::System::Object*& __cordl_internal_get__userData_k__BackingField();

  constexpr ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* const& __cordl_internal_get_actionCallback() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*& __cordl_internal_get_actionCallback();

  constexpr ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::DropdownMenuAction_Status>* const& __cordl_internal_get_actionStatusCallback() const;

  constexpr ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::DropdownMenuAction_Status>*& __cordl_internal_get_actionStatusCallback();

  constexpr void __cordl_internal_set__eventInfo_k__BackingField(::UnityEngine::UIElements::DropdownMenuEventInfo* value);

  constexpr void __cordl_internal_set__name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__status_k__BackingField(::UnityEngine::UIElements::DropdownMenuAction_Status value);

  constexpr void __cordl_internal_set__userData_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set_actionCallback(::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* value);

  constexpr void __cordl_internal_set_actionStatusCallback(::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::DropdownMenuAction_Status>* value);

  /// @brief Method .ctor, addr 0x4a25174, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* actionCallback,
                    ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::DropdownMenuAction_Status>* actionStatusCallback, ::System::Object* userData);

  /// @brief Method set_eventInfo, addr 0x4a25154, size 0x8, virtual false, abstract: false, final false
  inline void set_eventInfo(::UnityEngine::UIElements::DropdownMenuEventInfo* value);

  /// @brief Method set_status, addr 0x4a2514c, size 0x8, virtual false, abstract: false, final false
  inline void set_status(::UnityEngine::UIElements::DropdownMenuAction_Status value);

  /// @brief Method set_userData, addr 0x4a2515c, size 0x8, virtual false, abstract: false, final false
  inline void set_userData(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownMenuAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DropdownMenuAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownMenuAction(DropdownMenuAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownMenuAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownMenuAction(DropdownMenuAction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5772 };

  /// @brief Field <name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name_k__BackingField;

  /// @brief Field <status>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UIElements::DropdownMenuAction_Status ____status_k__BackingField;

  /// @brief Field <eventInfo>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::DropdownMenuEventInfo* ____eventInfo_k__BackingField;

  /// @brief Field <userData>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____userData_k__BackingField;

  /// @brief Field actionCallback, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* ___actionCallback;

  /// @brief Field actionStatusCallback, offset: 0x38, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*, ::UnityEngine::UIElements::DropdownMenuAction_Status>* ___actionStatusCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ____name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ____status_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ____eventInfo_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ____userData_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ___actionCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ___actionStatusCallback) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownMenuAction, 0x40>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownMenuAction_Status, "UnityEngine.UIElements", "DropdownMenuAction/Status");
NEED_NO_BOX(::UnityEngine::UIElements::DropdownMenuAction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownMenuAction*, "UnityEngine.UIElements", "DropdownMenuAction");
