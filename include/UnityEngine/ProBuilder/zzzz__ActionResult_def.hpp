#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ActionResult)
namespace UnityEngine::ProBuilder {
struct __ActionResult__Status;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct __ActionResult__Status;
}
namespace UnityEngine::ProBuilder {
class ActionResult;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::__ActionResult__Status);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ActionResult);
// Type: ::Status
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12092))
// CS Name: ::ActionResult::Status
struct CORDL_TYPE __ActionResult__Status {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ActionResult__Status_Unwrapped
  enum struct ____ActionResult__Status_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Failure = static_cast<int32_t>(0x1),
    __E_Canceled = static_cast<int32_t>(0x2),
    __E_NoChange = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ActionResult__Status_Unwrapped() const noexcept {
    return static_cast<____ActionResult__Status_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ActionResult__Status(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ActionResult__Status();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Success value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::__ActionResult__Status const Success;

  /// @brief Field Failure value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::__ActionResult__Status const Failure;

  /// @brief Field Canceled value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::__ActionResult__Status const Canceled;

  /// @brief Field NoChange value: static_cast<int32_t>(0x3)
  static ::UnityEngine::ProBuilder::__ActionResult__Status const NoChange;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__ActionResult__Status, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::__ActionResult__Status, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::ActionResult
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12092)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12093))
// CS Name: ::UnityEngine.ProBuilder::ActionResult*
class CORDL_TYPE ActionResult : public ::System::Object {
public:
  // Declarations
  using Status = ::UnityEngine::ProBuilder::__ActionResult__Status;

  /// @brief Field <status>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__status_k__BackingField, put = __set__status_k__BackingField))::UnityEngine::ProBuilder::__ActionResult__Status _status_k__BackingField;

  /// @brief Field <notification>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__notification_k__BackingField, put = __set__notification_k__BackingField))::StringW _notification_k__BackingField;

  __declspec(property(get = get_status, put = set_status))::UnityEngine::ProBuilder::__ActionResult__Status status;

  __declspec(property(get = get_notification, put = set_notification))::StringW notification;

  constexpr ::UnityEngine::ProBuilder::__ActionResult__Status& __get__status_k__BackingField();

  constexpr ::UnityEngine::ProBuilder::__ActionResult__Status const& __get__status_k__BackingField() const;

  constexpr void __set__status_k__BackingField(::UnityEngine::ProBuilder::__ActionResult__Status value);

  constexpr ::StringW& __get__notification_k__BackingField();

  constexpr ::StringW const& __get__notification_k__BackingField() const;

  constexpr void __set__notification_k__BackingField(::StringW value);

  /// @brief Method get_status, addr 0x2b366fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::__ActionResult__Status get_status();

  /// @brief Method set_status, addr 0x2b36704, size 0x8, virtual false, abstract: false, final false
  inline void set_status(::UnityEngine::ProBuilder::__ActionResult__Status value);

  /// @brief Method get_notification, addr 0x2b3670c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_notification();

  /// @brief Method set_notification, addr 0x2b36714, size 0x8, virtual false, abstract: false, final false
  inline void set_notification(::StringW value);

  static inline ::UnityEngine::ProBuilder::ActionResult* New_ctor(::UnityEngine::ProBuilder::__ActionResult__Status status, ::StringW notification);

  /// @brief Method .ctor, addr 0x2b3671c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::__ActionResult__Status status, ::StringW notification);

  /// @brief Method op_Implicit, addr 0x2b3674c, size 0x14, virtual false, abstract: false, final false
  static inline bool op_Implicit_bool(::UnityEngine::ProBuilder::ActionResult* res);

  /// @brief Method ToBool, addr 0x2b36760, size 0x10, virtual false, abstract: false, final false
  inline bool ToBool();

  /// @brief Method FromBool, addr 0x2b36770, size 0xa0, virtual false, abstract: false, final false
  static inline bool FromBool(bool success);

  /// @brief Method get_Success, addr 0x2b36810, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::ActionResult* get_Success();

  /// @brief Method get_NoSelection, addr 0x2b3688c, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::ActionResult* get_NoSelection();

  /// @brief Method get_UserCanceled, addr 0x2b3690c, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::ActionResult* get_UserCanceled();

  // Ctor Parameters [CppParam { name: "", ty: "ActionResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActionResult(ActionResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActionResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActionResult(ActionResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActionResult();

public:
  /// @brief Field <status>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::ProBuilder::__ActionResult__Status ____status_k__BackingField;

  /// @brief Field <notification>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____notification_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ActionResult, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ActionResult, ____status_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ActionResult, ____notification_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__ActionResult__Status, "UnityEngine.ProBuilder", "ActionResult/Status");
NEED_NO_BOX(::UnityEngine::ProBuilder::ActionResult);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ActionResult*, "UnityEngine.ProBuilder", "ActionResult");
