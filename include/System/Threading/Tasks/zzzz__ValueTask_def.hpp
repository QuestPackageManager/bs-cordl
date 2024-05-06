#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTask)
namespace GlobalNamespace {
class __ValueTask__ValueTaskSourceAsTask____c;
}
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
class __ValueTask__ValueTaskSourceAsTask;
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
namespace GlobalNamespace {
class __ValueTask__ValueTaskSourceAsTask____c;
}
namespace System::Threading::Tasks {
class __ValueTask__ValueTaskSourceAsTask;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c);
MARK_REF_PTR_T(::System::Threading::Tasks::__ValueTask__ValueTaskSourceAsTask);
MARK_VAL_T(::System::Threading::Tasks::ValueTask);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ValueTask::ValueTaskSourceAsTask::<>c*
class CORDL_TYPE __ValueTask__ValueTaskSourceAsTask____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c* __9;

  static inline ::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c* New_ctor();

  /// @brief Method <.cctor>b__4_0, addr 0x29a98ec, size 0x2a4, virtual false, abstract: false, final false
  inline void __cctor_b__4_0(::System::Object* state);

  /// @brief Method .ctor, addr 0x29a98e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c* getStaticF___9();

  static inline void setStaticF___9(::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ValueTask__ValueTaskSourceAsTask____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ValueTask__ValueTaskSourceAsTask____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ValueTask__ValueTaskSourceAsTask____c(__ValueTask__ValueTaskSourceAsTask____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ValueTask__ValueTaskSourceAsTask____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ValueTask__ValueTaskSourceAsTask____c(__ValueTask__ValueTaskSourceAsTask____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ValueTaskSourceAsTask
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 98, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: ::ValueTask::ValueTaskSourceAsTask*
class CORDL_TYPE __ValueTask__ValueTaskSourceAsTask : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> {
public:
  // Declarations
  using __c = ::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c;

  /// @brief Field _source, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__source, put = __cordl_internal_set__source))::System::Threading::Tasks::Sources::IValueTaskSource* _source;

  /// @brief Field _token, offset 0x60, size 0x2
  __declspec(property(get = __cordl_internal_get__token, put = __cordl_internal_set__token)) int16_t _token;

  /// @brief Field s_completionAction, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_completionAction, put = setStaticF_s_completionAction))::System::Action_1<::System::Object*>* s_completionAction;

  static inline ::System::Threading::Tasks::__ValueTask__ValueTaskSourceAsTask* New_ctor(::System::Threading::Tasks::Sources::IValueTaskSource* source, int16_t token);

  constexpr ::System::Threading::Tasks::Sources::IValueTaskSource*& __cordl_internal_get__source();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Sources::IValueTaskSource*> const& __cordl_internal_get__source() const;

  constexpr int16_t const& __cordl_internal_get__token() const;

  constexpr int16_t& __cordl_internal_get__token();

  constexpr void __cordl_internal_set__source(::System::Threading::Tasks::Sources::IValueTaskSource* value);

  constexpr void __cordl_internal_set__token(int16_t value);

  /// @brief Method .ctor, addr 0x29a9394, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Sources::IValueTaskSource* source, int16_t token);

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_completionAction();

  static inline void setStaticF_s_completionAction(::System::Action_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ValueTask__ValueTaskSourceAsTask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ValueTask__ValueTaskSourceAsTask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ValueTask__ValueTaskSourceAsTask(__ValueTask__ValueTaskSourceAsTask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ValueTask__ValueTaskSourceAsTask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ValueTask__ValueTaskSourceAsTask(__ValueTask__ValueTaskSourceAsTask const&) = delete;

  /// @brief Field _source, offset: 0x58, size: 0x8, def value: None
  ::System::Threading::Tasks::Sources::IValueTaskSource* ____source;

  /// @brief Field _token, offset: 0x60, size: 0x2, def value: None
  int16_t ____token;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::__ValueTask__ValueTaskSourceAsTask, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Tasks::__ValueTask__ValueTaskSourceAsTask, ____source) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::__ValueTask__ValueTaskSourceAsTask, ____token) == 0x60, "Offset mismatch!");

} // namespace System::Threading::Tasks
// Type: System.Threading.Tasks::ValueTask
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 27, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: true
// CS Name: ::System.Threading.Tasks::ValueTask
struct CORDL_TYPE ValueTask {
public:
  // Declarations
  using ValueTaskSourceAsTask = ::System::Threading::Tasks::__ValueTask__ValueTaskSourceAsTask;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Field s_canceledTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_canceledTask, put = setStaticF_s_canceledTask))::System::Threading::Tasks::Task* s_canceledTask;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Threading::Tasks::ValueTask>"
  constexpr operator ::System::IEquatable_1<::System::Threading::Tasks::ValueTask>*();

  /// @brief Method AsTask, addr 0x29a8f44, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* AsTask();

  /// @brief Method ConfigureAwait, addr 0x29a96c8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable ConfigureAwait(bool continueOnCapturedContext);

  /// @brief Method Equals, addr 0x29a8e98, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x29a8f20, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::System::Threading::Tasks::ValueTask other);

  /// @brief Method GetAwaiter, addr 0x29a96bc, size 0xc, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::ValueTaskAwaiter GetAwaiter();

  /// @brief Method GetHashCode, addr 0x29a8e80, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTaskForValueTaskSource, addr 0x29a8ffc, size 0x2d8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GetTaskForValueTaskSource(::System::Threading::Tasks::Sources::IValueTaskSource* t);

  /// @brief Method ThrowIfCompletedUnsuccessfully, addr 0x29a95b8, size 0x104, virtual false, abstract: false, final false
  inline void ThrowIfCompletedUnsuccessfully();

  /// @brief Method .ctor, addr 0x29a8e6c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj, int16_t token, bool continueOnCapturedContext);

  /// @brief Method .ctor, addr 0x29a8e30, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Sources::IValueTaskSource* source, int16_t token);

  /// @brief Method .ctor, addr 0x29a8df8, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task* task);

  static inline ::System::Threading::Tasks::Task* getStaticF_s_canceledTask();

  /// @brief Method get_CompletedTask, addr 0x29a8d70, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* get_CompletedTask();

  /// @brief Method get_IsCompleted, addr 0x29a94b4, size 0x104, virtual false, abstract: false, final false
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

  /// @brief Field _obj, offset: 0x0, size: 0x8, def value: None
  ::System::Object* _obj;

  /// @brief Field _token, offset: 0x8, size: 0x2, def value: None
  int16_t _token;

  /// @brief Field _continueOnCapturedContext, offset: 0xa, size: 0x1, def value: None
  bool _continueOnCapturedContext;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::ValueTask, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Tasks::ValueTask, _obj) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::ValueTask, _token) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::ValueTask, _continueOnCapturedContext) == 0xa, "Offset mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ValueTask__ValueTaskSourceAsTask____c*, "System.Threading.Tasks", "ValueTask/ValueTaskSourceAsTask/<>c");
NEED_NO_BOX(::System::Threading::Tasks::__ValueTask__ValueTaskSourceAsTask);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::__ValueTask__ValueTaskSourceAsTask*, "System.Threading.Tasks", "ValueTask/ValueTaskSourceAsTask");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::ValueTask, "System.Threading.Tasks", "ValueTask");
