#pragma once
// IWYU pragma private; include "System/Threading/Tasks/ValueTask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTask)
namespace System::Runtime::CompilerServices {
struct ConfiguredValueTaskAwaitable;
}
namespace System::Runtime::CompilerServices {
struct ValueTaskAwaiter;
}
namespace System::Threading::Tasks::Sources {
class IValueTaskSource;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class ValueTaskSourceAsTask_ValueTask___c;
}
namespace System::Threading::Tasks {
class ValueTask_ValueTaskSourceAsTask;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
class ValueTaskSourceAsTask_ValueTask___c;
}
namespace System::Threading::Tasks {
class ValueTask_ValueTaskSourceAsTask;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c);
MARK_REF_PTR_T(::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask);
MARK_VAL_T(::System::Threading::Tasks::ValueTask);
// Dependencies System.Object
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask/<>c
class CORDL_TYPE ValueTaskSourceAsTask_ValueTask___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c* __9;

  static inline ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c* New_ctor();

  /// @brief Method <.cctor>b__4_0, addr 0x5aa570c, size 0x2a8, virtual false, abstract: false, final false
  inline void __cctor_b__4_0(::System::Object* state);

  /// @brief Method .ctor, addr 0x5aa5708, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c* getStaticF___9();

  static inline void setStaticF___9(::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTaskSourceAsTask_ValueTask___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValueTaskSourceAsTask_ValueTask___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValueTaskSourceAsTask_ValueTask___c(ValueTaskSourceAsTask_ValueTask___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValueTaskSourceAsTask_ValueTask___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValueTaskSourceAsTask_ValueTask___c(ValueTaskSourceAsTask_ValueTask___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2776 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Dependencies System.Threading.Tasks.Task`1<TResult>, System.Threading.Tasks.VoidTaskResult
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask
class CORDL_TYPE ValueTask_ValueTaskSourceAsTask : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> {
public:
  // Declarations
  using __c = ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c;

  /// @brief Field _source, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__source, put = __cordl_internal_set__source)) ::System::Threading::Tasks::Sources::IValueTaskSource* _source;

  /// @brief Field _token, offset 0x60, size 0x2
  __declspec(property(get = __cordl_internal_get__token, put = __cordl_internal_set__token)) int16_t _token;

  /// @brief Field s_completionAction, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_completionAction, put = setStaticF_s_completionAction)) ::System::Action_1<::System::Object*>* s_completionAction;

  static inline ::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask* New_ctor(::System::Threading::Tasks::Sources::IValueTaskSource* source, int16_t token);

  constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* const& __cordl_internal_get__source() const;

  constexpr ::System::Threading::Tasks::Sources::IValueTaskSource*& __cordl_internal_get__source();

  constexpr int16_t const& __cordl_internal_get__token() const;

  constexpr int16_t& __cordl_internal_get__token();

  constexpr void __cordl_internal_set__source(::System::Threading::Tasks::Sources::IValueTaskSource* value);

  constexpr void __cordl_internal_set__token(int16_t value);

  /// @brief Method .ctor, addr 0x5aa5180, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Sources::IValueTaskSource* source, int16_t token);

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_completionAction();

  static inline void setStaticF_s_completionAction(::System::Action_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTask_ValueTaskSourceAsTask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValueTask_ValueTaskSourceAsTask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValueTask_ValueTaskSourceAsTask(ValueTask_ValueTaskSourceAsTask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValueTask_ValueTaskSourceAsTask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValueTask_ValueTaskSourceAsTask(ValueTask_ValueTaskSourceAsTask const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2777 };

  /// @brief Field _source, offset: 0x58, size: 0x8, def value: None
  ::System::Threading::Tasks::Sources::IValueTaskSource* ____source;

  /// @brief Field _token, offset: 0x60, size: 0x2, def value: None
  int16_t ____token;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask, ____source) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask, ____token) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask, 0x68>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Dependencies
namespace System::Threading::Tasks {
// Is value type: true
// CS Name: System.Threading.Tasks.ValueTask
struct CORDL_TYPE ValueTask {
public:
  // Declarations
  using ValueTaskSourceAsTask = ::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Field s_canceledTask, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_canceledTask, put = setStaticF_s_canceledTask)) ::System::Threading::Tasks::Task* s_canceledTask;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Threading::Tasks::ValueTask>"
  constexpr operator ::System::IEquatable_1<::System::Threading::Tasks::ValueTask>*();

  /// @brief Method AsTask, addr 0x5aa4ce0, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* AsTask();

  /// @brief Method ConfigureAwait, addr 0x5aa54e0, size 0x20, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable ConfigureAwait(bool continueOnCapturedContext);

  /// @brief Method Equals, addr 0x5aa4bfc, size 0xc0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5aa4cbc, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::System::Threading::Tasks::ValueTask other);

  /// @brief Method GetAwaiter, addr 0x5aa54d4, size 0xc, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::ValueTaskAwaiter GetAwaiter();

  /// @brief Method GetHashCode, addr 0x5aa4be4, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTaskForValueTaskSource, addr 0x5aa4db8, size 0x2fc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GetTaskForValueTaskSource(::System::Threading::Tasks::Sources::IValueTaskSource* t);

  /// @brief Method ThrowIfCompletedUnsuccessfully, addr 0x5aa53b0, size 0x124, virtual false, abstract: false, final false
  inline void ThrowIfCompletedUnsuccessfully();

  /// @brief Method .ctor, addr 0x5aa4bd4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj, int16_t token, bool continueOnCapturedContext);

  /// @brief Method .ctor, addr 0x5aa4bb0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Sources::IValueTaskSource* source, int16_t token);

  /// @brief Method .ctor, addr 0x5aa4b8c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task* task);

  static inline ::System::Threading::Tasks::Task* getStaticF_s_canceledTask();

  /// @brief Method get_CompletedTask, addr 0x5aa4af8, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* get_CompletedTask();

  /// @brief Method get_IsCompleted, addr 0x5aa52a4, size 0x10c, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Convert to "::System::IEquatable_1<::System::Threading::Tasks::ValueTask>"
  constexpr ::System::IEquatable_1<::System::Threading::Tasks::ValueTask>* i___System__IEquatable_1___System__Threading__Tasks__ValueTask_();

  static inline void setStaticF_s_canceledTask(::System::Threading::Tasks::Task* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTask();

  // Ctor Parameters [CppParam { name: "_obj", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_token", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name:
  // "_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
  constexpr ValueTask(::System::Object* _obj, int16_t _token, bool _continueOnCapturedContext) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2778 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _obj, offset: 0x0, size: 0x8, def value: None
  ::System::Object* _obj;

  /// @brief Field _token, offset: 0x8, size: 0x2, def value: None
  int16_t _token;

  /// @brief Field _continueOnCapturedContext, offset: 0xa, size: 0x1, def value: None
  bool _continueOnCapturedContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::ValueTask, _obj) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::ValueTask, _token) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::ValueTask, _continueOnCapturedContext) == 0xa, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::ValueTask, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c*, "System.Threading.Tasks", "ValueTask/ValueTaskSourceAsTask/<>c");
NEED_NO_BOX(::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask*, "System.Threading.Tasks", "ValueTask/ValueTaskSourceAsTask");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::ValueTask, "System.Threading.Tasks", "ValueTask");
