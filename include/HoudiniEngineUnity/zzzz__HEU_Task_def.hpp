#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_Task.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_Task)
namespace HoudiniEngineUnity {
class HEU_Task_TaskCallback;
}
namespace HoudiniEngineUnity {
struct HEU_Task_TaskResult;
}
namespace HoudiniEngineUnity {
struct HEU_Task_TaskStatus;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct Guid;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_Task_TaskResult;
}
namespace HoudiniEngineUnity {
struct HEU_Task_TaskStatus;
}
namespace HoudiniEngineUnity {
class HEU_Task;
}
namespace HoudiniEngineUnity {
class HEU_Task_TaskCallback;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_Task_TaskResult);
MARK_VAL_T(::HoudiniEngineUnity::HEU_Task_TaskStatus);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_Task);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_Task_TaskCallback);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_Task/TaskStatus
struct CORDL_TYPE HEU_Task_TaskStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_Task_TaskStatus_Unwrapped
  enum struct __HEU_Task_TaskStatus_Unwrapped : int32_t {
    __E_NONE = static_cast<int32_t>(0x0),
    __E_PENDING_START = static_cast<int32_t>(0x1),
    __E_STARTED = static_cast<int32_t>(0x2),
    __E_REQUIRE_UPDATE = static_cast<int32_t>(0x3),
    __E_PENDING_COMPLETE = static_cast<int32_t>(0x4),
    __E_COMPLETED = static_cast<int32_t>(0x5),
    __E_UNUSED = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_Task_TaskStatus_Unwrapped() const noexcept {
    return static_cast<__HEU_Task_TaskStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Task_TaskStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_Task_TaskStatus(int32_t value__) noexcept;

  /// @brief Field COMPLETED value: I32(5)
  static ::HoudiniEngineUnity::HEU_Task_TaskStatus const COMPLETED;

  /// @brief Field NONE value: I32(0)
  static ::HoudiniEngineUnity::HEU_Task_TaskStatus const NONE;

  /// @brief Field PENDING_COMPLETE value: I32(4)
  static ::HoudiniEngineUnity::HEU_Task_TaskStatus const PENDING_COMPLETE;

  /// @brief Field PENDING_START value: I32(1)
  static ::HoudiniEngineUnity::HEU_Task_TaskStatus const PENDING_START;

  /// @brief Field REQUIRE_UPDATE value: I32(3)
  static ::HoudiniEngineUnity::HEU_Task_TaskStatus const REQUIRE_UPDATE;

  /// @brief Field STARTED value: I32(2)
  static ::HoudiniEngineUnity::HEU_Task_TaskStatus const STARTED;

  /// @brief Field UNUSED value: I32(6)
  static ::HoudiniEngineUnity::HEU_Task_TaskStatus const UNUSED;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11784 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_Task_TaskStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Task_TaskStatus, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_Task/TaskResult
struct CORDL_TYPE HEU_Task_TaskResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_Task_TaskResult_Unwrapped
  enum struct __HEU_Task_TaskResult_Unwrapped : int32_t {
    __E_NONE = static_cast<int32_t>(0x0),
    __E_SUCCESS = static_cast<int32_t>(0x1),
    __E_FAILED = static_cast<int32_t>(0x2),
    __E_KILLED = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_Task_TaskResult_Unwrapped() const noexcept {
    return static_cast<__HEU_Task_TaskResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Task_TaskResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_Task_TaskResult(int32_t value__) noexcept;

  /// @brief Field FAILED value: I32(2)
  static ::HoudiniEngineUnity::HEU_Task_TaskResult const FAILED;

  /// @brief Field KILLED value: I32(3)
  static ::HoudiniEngineUnity::HEU_Task_TaskResult const KILLED;

  /// @brief Field NONE value: I32(0)
  static ::HoudiniEngineUnity::HEU_Task_TaskResult const NONE;

  /// @brief Field SUCCESS value: I32(1)
  static ::HoudiniEngineUnity::HEU_Task_TaskResult const SUCCESS;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11785 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_Task_TaskResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Task_TaskResult, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.MulticastDelegate
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_Task/TaskCallback
class CORDL_TYPE HEU_Task_TaskCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3a6ee38, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_Task* task, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3a6ee58, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3a6ee24, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::HoudiniEngineUnity::HEU_Task* task);

  static inline ::HoudiniEngineUnity::HEU_Task_TaskCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3a6ed24, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Task_TaskCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_Task_TaskCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_Task_TaskCallback(HEU_Task_TaskCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Task_TaskCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_Task_TaskCallback(HEU_Task_TaskCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11786 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Task_TaskCallback, 0x80>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.HEU_Task::TaskResult, HoudiniEngineUnity.HEU_Task::TaskStatus, System.Guid, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_Task
class CORDL_TYPE HEU_Task : public ::System::Object {
public:
  // Declarations
  using TaskCallback = ::HoudiniEngineUnity::HEU_Task_TaskCallback;

  using TaskResult = ::HoudiniEngineUnity::HEU_Task_TaskResult;

  using TaskStatus = ::HoudiniEngineUnity::HEU_Task_TaskStatus;

  __declspec(property(get = get_TaskGuid)) ::System::Guid TaskGuid;

  /// @brief Field _guid, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__guid, put = __cordl_internal_set__guid)) ::System::Guid _guid;

  /// @brief Field _result, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__result, put = __cordl_internal_set__result)) ::HoudiniEngineUnity::HEU_Task_TaskResult _result;

  /// @brief Field _status, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__status, put = __cordl_internal_set__status)) ::HoudiniEngineUnity::HEU_Task_TaskStatus _status;

  /// @brief Field _taskCompletedDelegate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__taskCompletedDelegate, put = __cordl_internal_set__taskCompletedDelegate)) ::HoudiniEngineUnity::HEU_Task_TaskCallback* _taskCompletedDelegate;

  /// @brief Method CompleteTask, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CompleteTask(::HoudiniEngineUnity::HEU_Task_TaskResult result);

  /// @brief Method DoTask, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DoTask();

  /// @brief Method KillTask, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void KillTask();

  static inline ::HoudiniEngineUnity::HEU_Task* New_ctor();

  /// @brief Method UpdateTask, addr 0x3a6ed20, size 0x4, virtual true, abstract: false, final false
  inline void UpdateTask();

  constexpr ::System::Guid const& __cordl_internal_get__guid() const;

  constexpr ::System::Guid& __cordl_internal_get__guid();

  constexpr ::HoudiniEngineUnity::HEU_Task_TaskResult const& __cordl_internal_get__result() const;

  constexpr ::HoudiniEngineUnity::HEU_Task_TaskResult& __cordl_internal_get__result();

  constexpr ::HoudiniEngineUnity::HEU_Task_TaskStatus const& __cordl_internal_get__status() const;

  constexpr ::HoudiniEngineUnity::HEU_Task_TaskStatus& __cordl_internal_get__status();

  constexpr ::HoudiniEngineUnity::HEU_Task_TaskCallback* const& __cordl_internal_get__taskCompletedDelegate() const;

  constexpr ::HoudiniEngineUnity::HEU_Task_TaskCallback*& __cordl_internal_get__taskCompletedDelegate();

  constexpr void __cordl_internal_set__guid(::System::Guid value);

  constexpr void __cordl_internal_set__result(::HoudiniEngineUnity::HEU_Task_TaskResult value);

  constexpr void __cordl_internal_set__status(::HoudiniEngineUnity::HEU_Task_TaskStatus value);

  constexpr void __cordl_internal_set__taskCompletedDelegate(::HoudiniEngineUnity::HEU_Task_TaskCallback* value);

  /// @brief Method .ctor, addr 0x3a6ecfc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TaskGuid, addr 0x3a6ecf0, size 0xc, virtual false, abstract: false, final false
  inline ::System::Guid get_TaskGuid();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Task();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_Task", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_Task(HEU_Task&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Task", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_Task(HEU_Task const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11787 };

  /// @brief Field _status, offset: 0x10, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_Task_TaskStatus ____status;

  /// @brief Field _result, offset: 0x14, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_Task_TaskResult ____result;

  /// @brief Field _guid, offset: 0x18, size: 0x10, def value: None
  ::System::Guid ____guid;

  /// @brief Field _taskCompletedDelegate, offset: 0x28, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_Task_TaskCallback* ____taskCompletedDelegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_Task, ____status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Task, ____result) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Task, ____guid) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Task, ____taskCompletedDelegate) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Task, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Task_TaskResult, "HoudiniEngineUnity", "HEU_Task/TaskResult");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Task_TaskStatus, "HoudiniEngineUnity", "HEU_Task/TaskStatus");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Task);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Task*, "HoudiniEngineUnity", "HEU_Task");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Task_TaskCallback);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Task_TaskCallback*, "HoudiniEngineUnity", "HEU_Task/TaskCallback");
