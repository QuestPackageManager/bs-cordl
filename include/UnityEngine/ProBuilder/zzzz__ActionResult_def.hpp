#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ActionResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ActionResult)
namespace UnityEngine::ProBuilder {
struct ActionResult_Status;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct ActionResult_Status;
}
namespace UnityEngine::ProBuilder {
class ActionResult;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::ActionResult_Status);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ActionResult);
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.ActionResult/Status
struct CORDL_TYPE ActionResult_Status {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ActionResult_Status_Unwrapped
  enum struct __ActionResult_Status_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Failure = static_cast<int32_t>(0x1),
    __E_Canceled = static_cast<int32_t>(0x2),
    __E_NoChange = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ActionResult_Status_Unwrapped() const noexcept {
    return static_cast<__ActionResult_Status_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ActionResult_Status();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ActionResult_Status(int32_t value__) noexcept;

  /// @brief Field Canceled value: I32(2)
  static ::UnityEngine::ProBuilder::ActionResult_Status const Canceled;

  /// @brief Field Failure value: I32(1)
  static ::UnityEngine::ProBuilder::ActionResult_Status const Failure;

  /// @brief Field NoChange value: I32(3)
  static ::UnityEngine::ProBuilder::ActionResult_Status const NoChange;

  /// @brief Field Success value: I32(0)
  static ::UnityEngine::ProBuilder::ActionResult_Status const Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14205 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::ActionResult_Status, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ActionResult_Status, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.Object, UnityEngine.ProBuilder.ActionResult::Status
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.ActionResult
class CORDL_TYPE ActionResult : public ::System::Object {
public:
  // Declarations
  using Status = ::UnityEngine::ProBuilder::ActionResult_Status;

  /// @brief Field <notification>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__notification_k__BackingField, put = __cordl_internal_set__notification_k__BackingField)) ::StringW _notification_k__BackingField;

  /// @brief Field <status>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__status_k__BackingField, put = __cordl_internal_set__status_k__BackingField)) ::UnityEngine::ProBuilder::ActionResult_Status _status_k__BackingField;

  __declspec(property(get = get_notification, put = set_notification)) ::StringW notification;

  __declspec(property(get = get_status, put = set_status)) ::UnityEngine::ProBuilder::ActionResult_Status status;

  /// @brief Method FromBool, addr 0x46fde20, size 0x98, virtual false, abstract: false, final false
  static inline bool FromBool(bool success);

  static inline ::UnityEngine::ProBuilder::ActionResult* New_ctor(::UnityEngine::ProBuilder::ActionResult_Status status, ::StringW notification);

  /// @brief Method ToBool, addr 0x46fde10, size 0x10, virtual false, abstract: false, final false
  inline bool ToBool();

  constexpr ::StringW const& __cordl_internal_get__notification_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__notification_k__BackingField();

  constexpr ::UnityEngine::ProBuilder::ActionResult_Status const& __cordl_internal_get__status_k__BackingField() const;

  constexpr ::UnityEngine::ProBuilder::ActionResult_Status& __cordl_internal_get__status_k__BackingField();

  constexpr void __cordl_internal_set__notification_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__status_k__BackingField(::UnityEngine::ProBuilder::ActionResult_Status value);

  /// @brief Method .ctor, addr 0x46fddcc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::ActionResult_Status status, ::StringW notification);

  /// @brief Method get_NoSelection, addr 0x46fdf2c, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::ActionResult* get_NoSelection();

  /// @brief Method get_Success, addr 0x46fdeb8, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::ActionResult* get_Success();

  /// @brief Method get_UserCanceled, addr 0x46fdfa4, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::ActionResult* get_UserCanceled();

  /// @brief Method get_notification, addr 0x46fddbc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_notification();

  /// @brief Method get_status, addr 0x46fddac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::ActionResult_Status get_status();

  /// @brief Method op_Implicit, addr 0x46fddfc, size 0x14, virtual false, abstract: false, final false
  static inline bool op_Implicit_bool(::UnityEngine::ProBuilder::ActionResult* res);

  /// @brief Method set_notification, addr 0x46fddc4, size 0x8, virtual false, abstract: false, final false
  inline void set_notification(::StringW value);

  /// @brief Method set_status, addr 0x46fddb4, size 0x8, virtual false, abstract: false, final false
  inline void set_status(::UnityEngine::ProBuilder::ActionResult_Status value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActionResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActionResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActionResult(ActionResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActionResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActionResult(ActionResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14206 };

  /// @brief Field <status>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::ProBuilder::ActionResult_Status ____status_k__BackingField;

  /// @brief Field <notification>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____notification_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::ActionResult, ____status_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ActionResult, ____notification_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ActionResult, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ActionResult_Status, "UnityEngine.ProBuilder", "ActionResult/Status");
NEED_NO_BOX(::UnityEngine::ProBuilder::ActionResult);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ActionResult*, "UnityEngine.ProBuilder", "ActionResult");
