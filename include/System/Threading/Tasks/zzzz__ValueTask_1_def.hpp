#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTask_1)
namespace System {
class Object;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
template <typename TResult> class __ValueTask_1__ValueTaskSourceAsTask____c;
}
namespace System::Threading::Tasks::Sources {
template <typename TResult> class IValueTaskSource_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct ConfiguredValueTaskAwaitable_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class __ValueTask_1__ValueTaskSourceAsTask;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct ValueTaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TResult> class __ValueTask_1__ValueTaskSourceAsTask____c;
}
namespace System::Threading::Tasks {
template <typename TResult> class __ValueTask_1__ValueTaskSourceAsTask;
}
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c);
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask);
MARK_GEN_VAL_T(::System::Threading::Tasks::ValueTask_1);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2765))
// CS Name: ::ValueTask`1::ValueTaskSourceAsTask::<>c<TResult>*
class CORDL_TYPE __ValueTask_1__ValueTaskSourceAsTask____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>* __9;

  static inline void setStaticF___9(::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>* value);

  static inline ::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>* getStaticF___9();

  static inline ::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <.cctor>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __cctor_b__4_0(::System::Object* state);

  // Ctor Parameters [CppParam { name: "", ty: "__ValueTask_1__ValueTaskSourceAsTask____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ValueTask_1__ValueTaskSourceAsTask____c(__ValueTask_1__ValueTaskSourceAsTask____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ValueTask_1__ValueTaskSourceAsTask____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ValueTask_1__ValueTaskSourceAsTask____c(__ValueTask_1__ValueTaskSourceAsTask____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ValueTask_1__ValueTaskSourceAsTask____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::ValueTaskSourceAsTask
// SizeInfo { instance_size: 104, native_size: 98, calculated_instance_size: 104, calculated_native_size: 98, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// cpp template
template <typename TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 3850 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2766))
// CS Name: ::ValueTask`1::ValueTaskSourceAsTask<TResult>*
class CORDL_TYPE __ValueTask_1__ValueTaskSourceAsTask : public ::System::Threading::Tasks::Task_1<TResult> {
public:
  // Declarations
  using __c = ::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>;

  /// @brief Field _source, offset 0x58, size 0x8
  __declspec(property(get = __get__source, put = __set__source))::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* _source;

  /// @brief Field _token, offset 0x60, size 0x2
  __declspec(property(get = __get__token, put = __set__token)) int16_t _token;

  /// @brief Field s_completionAction, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_completionAction, put = setStaticF_s_completionAction))::System::Action_1<::System::Object*>* s_completionAction;

  constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*& __get__source();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*> const& __get__source() const;

  constexpr void __set__source(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* value);

  constexpr int16_t& __get__token();

  constexpr int16_t const& __get__token() const;

  constexpr void __set__token(int16_t value);

  static inline void setStaticF_s_completionAction(::System::Action_1<::System::Object*>* value);

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_completionAction();

  static inline ::System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>* New_ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* source, int16_t token);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* source, int16_t token);

  // Ctor Parameters [CppParam { name: "", ty: "__ValueTask_1__ValueTaskSourceAsTask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ValueTask_1__ValueTaskSourceAsTask(__ValueTask_1__ValueTaskSourceAsTask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ValueTask_1__ValueTaskSourceAsTask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ValueTask_1__ValueTaskSourceAsTask(__ValueTask_1__ValueTaskSourceAsTask const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ValueTask_1__ValueTaskSourceAsTask();

public:
  /// @brief Field _source, offset: 0x58, size: 0x8, def value: None
  ::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* ____source;

  /// @brief Field _token, offset: 0x60, size: 0x2, def value: None
  int16_t ____token;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
// Type: System.Threading.Tasks::ValueTask`1
// SizeInfo { instance_size: 24, native_size: 35, calculated_instance_size: 24, calculated_native_size: 35, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// cpp template
template <typename TResult>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2767))
// CS Name: ::System.Threading.Tasks::ValueTask`1<TResult>
struct CORDL_TYPE ValueTask_1 {
public:
  // Declarations
  using ValueTaskSourceAsTask = ::System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>;

  /// @brief Field s_canceledTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_canceledTask, put = setStaticF_s_canceledTask))::System::Threading::Tasks::Task_1<TResult>* s_canceledTask;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  __declspec(property(get = get_IsCompletedSuccessfully)) bool IsCompletedSuccessfully;

  __declspec(property(get = get_Result)) TResult Result;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<TResult>>"
  constexpr operator ::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<TResult>>*();

  static inline void setStaticF_s_canceledTask(::System::Threading::Tasks::Task_1<TResult>* value);

  static inline ::System::Threading::Tasks::Task_1<TResult>* getStaticF_s_canceledTask();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TResult result);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task_1<TResult>* task);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* source, int16_t token);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj, TResult result, int16_t token, bool continueOnCapturedContext);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::System::Threading::Tasks::ValueTask_1<TResult> other);

  /// @brief Method AsTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<TResult>* AsTask();

  /// @brief Method GetTaskForValueTaskSource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<TResult>* GetTaskForValueTaskSource(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* t);

  /// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Method get_IsCompletedSuccessfully, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCompletedSuccessfully();

  /// @brief Method get_Result, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TResult get_Result();

  /// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult> GetAwaiter();

  /// @brief Method ConfigureAwait, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult> ConfigureAwait(bool continueOnCapturedContext);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "_obj", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_result", ty: "TResult", modifiers: "", def_value: None }, CppParam { name:
  // "_token", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
  constexpr ValueTask_1(::System::Object* _obj, TResult _result, int16_t _token, bool _continueOnCapturedContext) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTask_1();

  /// @brief Field _obj, offset: 0x0, size: 0x8, def value: None
  ::System::Object* _obj;

  /// @brief Field _result, offset: 0x8, size: 0x8, def value: None
  TResult _result;

  /// @brief Field _token, offset: 0x10, size: 0x2, def value: None
  int16_t _token;

  /// @brief Field _continueOnCapturedContext, offset: 0x12, size: 0x1, def value: None
  bool _continueOnCapturedContext;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c, "System.Threading.Tasks", "ValueTask`1/ValueTaskSourceAsTask/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask, "System.Threading.Tasks", "ValueTask`1/ValueTaskSourceAsTask");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Threading::Tasks::ValueTask_1, "System.Threading.Tasks", "ValueTask`1");
