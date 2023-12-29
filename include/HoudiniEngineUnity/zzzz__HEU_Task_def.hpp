#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_Task_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_Task)
namespace HoudiniEngineUnity {
struct __HEU_Task__TaskStatus;
}
namespace HoudiniEngineUnity {
struct __HEU_Task__TaskResult;
}
namespace HoudiniEngineUnity {
class __HEU_Task__TaskCallback;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_Task__TaskResult;
}
namespace HoudiniEngineUnity {
struct __HEU_Task__TaskStatus;
}
namespace HoudiniEngineUnity {
class HEU_Task;
}
namespace HoudiniEngineUnity {
class __HEU_Task__TaskCallback;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_Task__TaskResult);
MARK_VAL_T(::HoudiniEngineUnity::__HEU_Task__TaskStatus);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_Task);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_Task__TaskCallback);
// Type: ::TaskStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9724))
// CS Name: ::HEU_Task::TaskStatus
struct CORDL_TYPE __HEU_Task__TaskStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_Task__TaskStatus_Unwrapped
  enum struct ____HEU_Task__TaskStatus_Unwrapped : int32_t {
    __E_NONE = static_cast<int32_t>(0x0),
    __E_PENDING_START = static_cast<int32_t>(0x1),
    __E_STARTED = static_cast<int32_t>(0x2),
    __E_REQUIRE_UPDATE = static_cast<int32_t>(0x3),
    __E_PENDING_COMPLETE = static_cast<int32_t>(0x4),
    __E_COMPLETED = static_cast<int32_t>(0x5),
    __E_UNUSED = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_Task__TaskStatus_Unwrapped() const noexcept {
    return static_cast<____HEU_Task__TaskStatus_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_Task__TaskStatus(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_Task__TaskStatus();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NONE value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_Task__TaskStatus const NONE;

  /// @brief Field PENDING_START value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_Task__TaskStatus const PENDING_START;

  /// @brief Field STARTED value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_Task__TaskStatus const STARTED;

  /// @brief Field REQUIRE_UPDATE value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::__HEU_Task__TaskStatus const REQUIRE_UPDATE;

  /// @brief Field PENDING_COMPLETE value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::__HEU_Task__TaskStatus const PENDING_COMPLETE;

  /// @brief Field COMPLETED value: static_cast<int32_t>(0x5)
  static ::HoudiniEngineUnity::__HEU_Task__TaskStatus const COMPLETED;

  /// @brief Field UNUSED value: static_cast<int32_t>(0x6)
  static ::HoudiniEngineUnity::__HEU_Task__TaskStatus const UNUSED;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_Task__TaskStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_Task__TaskStatus, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::TaskResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9725))
// CS Name: ::HEU_Task::TaskResult
struct CORDL_TYPE __HEU_Task__TaskResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_Task__TaskResult_Unwrapped
  enum struct ____HEU_Task__TaskResult_Unwrapped : int32_t {
    __E_NONE = static_cast<int32_t>(0x0),
    __E_SUCCESS = static_cast<int32_t>(0x1),
    __E_FAILED = static_cast<int32_t>(0x2),
    __E_KILLED = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_Task__TaskResult_Unwrapped() const noexcept {
    return static_cast<____HEU_Task__TaskResult_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_Task__TaskResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_Task__TaskResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NONE value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_Task__TaskResult const NONE;

  /// @brief Field SUCCESS value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_Task__TaskResult const SUCCESS;

  /// @brief Field FAILED value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_Task__TaskResult const FAILED;

  /// @brief Field KILLED value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::__HEU_Task__TaskResult const KILLED;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_Task__TaskResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_Task__TaskResult, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::TaskCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9726))
// CS Name: ::HEU_Task::TaskCallback*
class CORDL_TYPE __HEU_Task__TaskCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::__HEU_Task__TaskCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2053d40 size 0x12c virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2053e6c size 0x14 virtual true final false
  inline void Invoke(::HoudiniEngineUnity::HEU_Task* task);

  /// @brief Method BeginInvoke addr 0x2053e80 size 0x20 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_Task* task, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x2053ea0 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_Task__TaskCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_Task__TaskCallback(__HEU_Task__TaskCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_Task__TaskCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_Task__TaskCallback(__HEU_Task__TaskCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_Task__TaskCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_Task__TaskCallback, 0x80>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_Task
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9724)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2406)),
// TypeDefinitionIndex(TypeDefinitionIndex(9725))} Self: TypeDefinitionIndex(TypeDefinitionIndex(9727)) CS Name: ::HoudiniEngineUnity::HEU_Task*
class CORDL_TYPE HEU_Task : public ::System::Object {
public:
  // Declarations
  using TaskCallback = ::HoudiniEngineUnity::__HEU_Task__TaskCallback;

  using TaskResult = ::HoudiniEngineUnity::__HEU_Task__TaskResult;

  using TaskStatus = ::HoudiniEngineUnity::__HEU_Task__TaskStatus;

  /// @brief Field _status, offset 0x10, size 0x4
  __declspec(property(get = __get__status, put = __set__status))::HoudiniEngineUnity::__HEU_Task__TaskStatus _status;

  /// @brief Field _result, offset 0x14, size 0x4
  __declspec(property(get = __get__result, put = __set__result))::HoudiniEngineUnity::__HEU_Task__TaskResult _result;

  /// @brief Field _guid, offset 0x18, size 0x10
  __declspec(property(get = __get__guid, put = __set__guid))::System::Guid _guid;

  /// @brief Field _taskCompletedDelegate, offset 0x28, size 0x8
  __declspec(property(get = __get__taskCompletedDelegate, put = __set__taskCompletedDelegate))::HoudiniEngineUnity::__HEU_Task__TaskCallback* _taskCompletedDelegate;

  __declspec(property(get = get_TaskGuid))::System::Guid TaskGuid;

  constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus& __get__status();

  constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus const& __get__status() const;

  constexpr void __set__status(::HoudiniEngineUnity::__HEU_Task__TaskStatus value);

  constexpr ::HoudiniEngineUnity::__HEU_Task__TaskResult& __get__result();

  constexpr ::HoudiniEngineUnity::__HEU_Task__TaskResult const& __get__result() const;

  constexpr void __set__result(::HoudiniEngineUnity::__HEU_Task__TaskResult value);

  constexpr ::System::Guid& __get__guid();

  constexpr ::System::Guid const& __get__guid() const;

  constexpr void __set__guid(::System::Guid value);

  constexpr ::HoudiniEngineUnity::__HEU_Task__TaskCallback*& __get__taskCompletedDelegate();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::__HEU_Task__TaskCallback*> const& __get__taskCompletedDelegate() const;

  constexpr void __set__taskCompletedDelegate(::HoudiniEngineUnity::__HEU_Task__TaskCallback* value);

  /// @brief Method get_TaskGuid addr 0x2053d0c size 0xc virtual false final false
  inline ::System::Guid get_TaskGuid();

  static inline ::HoudiniEngineUnity::HEU_Task* New_ctor();

  /// @brief Method .ctor addr 0x2053d18 size 0x24 virtual false final false
  inline void _ctor();

  /// @brief Method DoTask addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void DoTask();

  /// @brief Method UpdateTask addr 0x2053d3c size 0x4 virtual true final false
  inline void UpdateTask();

  /// @brief Method KillTask addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void KillTask();

  /// @brief Method CompleteTask addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void CompleteTask(::HoudiniEngineUnity::__HEU_Task__TaskResult result);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Task", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_Task(HEU_Task&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Task", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_Task(HEU_Task const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Task();

public:
  /// @brief Field _status, offset: 0x10, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_Task__TaskStatus ____status;

  /// @brief Field _result, offset: 0x14, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_Task__TaskResult ____result;

  /// @brief Field _guid, offset: 0x18, size: 0x10, def value: None
  ::System::Guid ____guid;

  /// @brief Field _taskCompletedDelegate, offset: 0x28, size: 0x8, def value: None
  ::HoudiniEngineUnity::__HEU_Task__TaskCallback* ____taskCompletedDelegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Task, 0x30>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Task, ____status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Task, ____result) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Task, ____guid) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Task, ____taskCompletedDelegate) == 0x28, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_Task__TaskResult, "HoudiniEngineUnity", "HEU_Task/TaskResult");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_Task__TaskStatus, "HoudiniEngineUnity", "HEU_Task/TaskStatus");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Task);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Task*, "HoudiniEngineUnity", "HEU_Task");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_Task__TaskCallback);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_Task__TaskCallback*, "HoudiniEngineUnity", "HEU_Task/TaskCallback");
