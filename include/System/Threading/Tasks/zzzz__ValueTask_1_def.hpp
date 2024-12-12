#pragma once
// IWYU pragma private; include "System/Threading/Tasks/ValueTask_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTask_1)
namespace System::Runtime::CompilerServices {
template <typename TResult> struct ConfiguredValueTaskAwaitable_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct ValueTaskAwaiter_1;
}
namespace System::Threading::Tasks::Sources {
template <typename TResult> class IValueTaskSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class ValueTaskSourceAsTask_ValueTask_1___c;
}
namespace System::Threading::Tasks {
template <typename TResult> class ValueTask_1_ValueTaskSourceAsTask;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
template <typename TResult> class ValueTaskSourceAsTask_ValueTask_1___c;
}
namespace System::Threading::Tasks {
template <typename TResult> class ValueTask_1_ValueTaskSourceAsTask;
}
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c);
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask);
MARK_GEN_VAL_T(::System::Threading::Tasks::ValueTask_1);
// Dependencies System.Object
namespace System::Threading::Tasks {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: System.Threading.Tasks.ValueTask`1/ValueTaskSourceAsTask/<>c<TResult>
class CORDL_TYPE ValueTaskSourceAsTask_ValueTask_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>* __9;

  static inline ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>* New_ctor();

  /// @brief Method <.cctor>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __cctor_b__4_0(::System::Object* state);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>* getStaticF___9();

  static inline void setStaticF___9(::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTaskSourceAsTask_ValueTask_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValueTaskSourceAsTask_ValueTask_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValueTaskSourceAsTask_ValueTask_1___c(ValueTaskSourceAsTask_ValueTask_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValueTaskSourceAsTask_ValueTask_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValueTaskSourceAsTask_ValueTask_1___c(ValueTaskSourceAsTask_ValueTask_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2768 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
// Dependencies System.Threading.Tasks.Task`1<TResult>
namespace System::Threading::Tasks {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: System.Threading.Tasks.ValueTask`1/ValueTaskSourceAsTask<TResult>
class CORDL_TYPE ValueTask_1_ValueTaskSourceAsTask : public ::System::Threading::Tasks::Task_1<TResult> {
public:
  // Declarations
  using __c = ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c<TResult>;

  /// @brief Field _source, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__source, put = __cordl_internal_set__source)) ::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* _source;

  /// @brief Field _token, offset 0x60, size 0x2
  __declspec(property(get = __cordl_internal_get__token, put = __cordl_internal_set__token)) int16_t _token;

  /// @brief Field s_completionAction, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_completionAction, put = setStaticF_s_completionAction)) ::System::Action_1<::System::Object*>* s_completionAction;

  static inline ::System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>* New_ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* source, int16_t token);

  constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* const& __cordl_internal_get__source() const;

  constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*& __cordl_internal_get__source();

  constexpr int16_t const& __cordl_internal_get__token() const;

  constexpr int16_t& __cordl_internal_get__token();

  constexpr void __cordl_internal_set__source(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* value);

  constexpr void __cordl_internal_set__token(int16_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* source, int16_t token);

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_completionAction();

  static inline void setStaticF_s_completionAction(::System::Action_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTask_1_ValueTaskSourceAsTask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValueTask_1_ValueTaskSourceAsTask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValueTask_1_ValueTaskSourceAsTask(ValueTask_1_ValueTaskSourceAsTask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValueTask_1_ValueTaskSourceAsTask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValueTask_1_ValueTaskSourceAsTask(ValueTask_1_ValueTaskSourceAsTask const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2769 };

  /// @brief Field _source, offset: 0x58, size: 0x8, def value: None
  ::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* ____source;

  /// @brief Field _token, offset: 0x60, size: 0x2, def value: None
  int16_t ____token;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
// Dependencies System.IEquatable`1<T>
namespace System::Threading::Tasks {
// cpp template
template <typename TResult>
// Is value type: true
// CS Name: System.Threading.Tasks.ValueTask`1<TResult>
struct CORDL_TYPE ValueTask_1 {
public:
  // Declarations
  using ValueTaskSourceAsTask = ::System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask<TResult>;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  __declspec(property(get = get_IsCompletedSuccessfully)) bool IsCompletedSuccessfully;

  __declspec(property(get = get_Result)) TResult Result;

  /// @brief Field s_canceledTask, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_canceledTask, put = setStaticF_s_canceledTask)) ::System::Threading::Tasks::Task_1<TResult>* s_canceledTask;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<TResult>>"
  constexpr operator ::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<TResult>>*();

  /// @brief Method AsTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<TResult>* AsTask();

  /// @brief Method ConfigureAwait, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult> ConfigureAwait(bool continueOnCapturedContext);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::System::Threading::Tasks::ValueTask_1<TResult> other);

  /// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult> GetAwaiter();

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTaskForValueTaskSource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<TResult>* GetTaskForValueTaskSource(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* t);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj, TResult result, int16_t token, bool continueOnCapturedContext);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TResult result);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* source, int16_t token);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task_1<TResult>* task);

  static inline ::System::Threading::Tasks::Task_1<TResult>* getStaticF_s_canceledTask();

  /// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Method get_IsCompletedSuccessfully, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCompletedSuccessfully();

  /// @brief Method get_Result, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TResult get_Result();

  /// @brief Convert to "::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<TResult>>"
  constexpr ::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<TResult>>* i___System__IEquatable_1___System__Threading__Tasks__ValueTask_1_TResult__();

  static inline void setStaticF_s_canceledTask(::System::Threading::Tasks::Task_1<TResult>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTask_1();

  // Ctor Parameters [CppParam { name: "_obj", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_result", ty: "TResult", modifiers: "", def_value: None }, CppParam { name:
  // "_token", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
  constexpr ValueTask_1(::System::Object* _obj, TResult _result, int16_t _token, bool _continueOnCapturedContext) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2770 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field _obj, offset: 0x0, size: 0x8, def value: None
  ::System::Object* _obj;

  /// @brief Field _result, offset: 0x8, size: 0x8, def value: None
  TResult _result;

  /// @brief Field _token, offset: 0x10, size: 0x2, def value: None
  int16_t _token;

  /// @brief Field _continueOnCapturedContext, offset: 0x12, size: 0x1, def value: None
  bool _continueOnCapturedContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask_1___c, "System.Threading.Tasks", "ValueTask`1/ValueTaskSourceAsTask/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::ValueTask_1_ValueTaskSourceAsTask, "System.Threading.Tasks", "ValueTask`1/ValueTaskSourceAsTask");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Threading::Tasks::ValueTask_1, "System.Threading.Tasks", "ValueTask`1");
