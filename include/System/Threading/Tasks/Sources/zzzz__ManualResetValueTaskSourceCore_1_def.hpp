#pragma once
// IWYU pragma private; include "System/Threading/Tasks/Sources/ManualResetValueTaskSourceCore_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ManualResetValueTaskSourceCore_1)
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Threading::Tasks::Sources {
template <typename TResult> class ManualResetValueTaskSourceCore_1___c;
}
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceOnCompletedFlags;
}
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceStatus;
}
namespace System::Threading {
template <typename TState> class ContextCallback_1;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks::Sources {
template <typename TResult> class ManualResetValueTaskSourceCore_1___c;
}
namespace System::Threading::Tasks::Sources {
template <typename TResult> struct ManualResetValueTaskSourceCore_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c);
MARK_GEN_VAL_T(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1);
// Dependencies System.Object
namespace System::Threading::Tasks::Sources {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: System.Threading.Tasks.Sources.ManualResetValueTaskSourceCore`1/<>c<TResult>
class CORDL_TYPE ManualResetValueTaskSourceCore_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>* __9;

  /// @brief Field <>9__19_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_0, put = setStaticF___9__19_0)) ::System::Threading::SendOrPostCallback* __9__19_0;

  /// @brief Field <>9__21_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_0,
                      put = setStaticF___9__21_0)) ::System::Threading::ContextCallback_1<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>* __9__21_0;

  /// @brief Field <>9__22_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_0, put = setStaticF___9__22_0)) ::System::Threading::SendOrPostCallback* __9__22_0;

  static inline ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>* New_ctor();

  /// @brief Method <InvokeContinuation>b__22_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _InvokeContinuation_b__22_0(::System::Object* s);

  /// @brief Method <OnCompleted>b__19_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _OnCompleted_b__19_0(::System::Object* s);

  /// @brief Method <SignalCompletion>b__21_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SignalCompletion_b__21_0(::ByRef<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>> s);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>* getStaticF___9();

  static inline ::System::Threading::SendOrPostCallback* getStaticF___9__19_0();

  static inline ::System::Threading::ContextCallback_1<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>* getStaticF___9__21_0();

  static inline ::System::Threading::SendOrPostCallback* getStaticF___9__22_0();

  static inline void setStaticF___9(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>* value);

  static inline void setStaticF___9__19_0(::System::Threading::SendOrPostCallback* value);

  static inline void setStaticF___9__21_0(::System::Threading::ContextCallback_1<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>>* value);

  static inline void setStaticF___9__22_0(::System::Threading::SendOrPostCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ManualResetValueTaskSourceCore_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ManualResetValueTaskSourceCore_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ManualResetValueTaskSourceCore_1___c(ManualResetValueTaskSourceCore_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ManualResetValueTaskSourceCore_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ManualResetValueTaskSourceCore_1___c(ManualResetValueTaskSourceCore_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2841 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks::Sources
// Dependencies
namespace System::Threading::Tasks::Sources {
// cpp template
template <typename TResult>
// Is value type: true
// CS Name: System.Threading.Tasks.Sources.ManualResetValueTaskSourceCore`1<TResult>
struct CORDL_TYPE ManualResetValueTaskSourceCore_1 {
public:
  // Declarations
  using __c = ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c<TResult>;

  __declspec(property(get = get_RunContinuationsAsynchronously)) bool RunContinuationsAsynchronously;

  __declspec(property(get = get_Version)) int16_t Version;

  /// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TResult GetResult(int16_t token);

  /// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus GetStatus(int16_t token);

  /// @brief Method InvokeContinuation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InvokeContinuation();

  /// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetException(::System::Exception* error);

  /// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetResult(TResult result);

  /// @brief Method SignalCompletion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SignalCompletion();

  /// @brief Method ValidateToken, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ValidateToken(int16_t token);

  /// @brief Method get_RunContinuationsAsynchronously, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_RunContinuationsAsynchronously();

  /// @brief Method get_Version, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int16_t get_Version();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ManualResetValueTaskSourceCore_1();

  // Ctor Parameters [CppParam { name: "_continuation", ty: "::System::Action_1<::System::Object*>*", modifiers: "", def_value: None }, CppParam { name: "_continuationState", ty: "::System::Object*",
  // modifiers: "", def_value: None }, CppParam { name: "_executionContext", ty: "::System::Threading::ExecutionContext*", modifiers: "", def_value: None }, CppParam { name: "_capturedContext", ty:
  // "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_completed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_result", ty: "TResult", modifiers: "",
  // def_value: None }, CppParam { name: "_error", ty: "::System::Runtime::ExceptionServices::ExceptionDispatchInfo*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int16_t",
  // modifiers: "", def_value: None }, CppParam { name: "_RunContinuationsAsynchronously_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
  constexpr ManualResetValueTaskSourceCore_1(::System::Action_1<::System::Object*>* _continuation, ::System::Object* _continuationState, ::System::Threading::ExecutionContext* _executionContext,
                                             ::System::Object* _capturedContext, bool _completed, TResult _result, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _error,
                                             int16_t _version, bool _RunContinuationsAsynchronously_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2842 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field _continuation, offset: 0x0, size: 0x8, def value: None
  ::System::Action_1<::System::Object*>* _continuation;

  /// @brief Field _continuationState, offset: 0x8, size: 0x8, def value: None
  ::System::Object* _continuationState;

  /// @brief Field _executionContext, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* _executionContext;

  /// @brief Field _capturedContext, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _capturedContext;

  /// @brief Field _completed, offset: 0x20, size: 0x1, def value: None
  bool _completed;

  /// @brief Field _result, offset: 0x28, size: 0x8, def value: None
  TResult _result;

  /// @brief Field _error, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _error;

  /// @brief Field _version, offset: 0x38, size: 0x2, def value: None
  int16_t _version;

  /// @brief Field <RunContinuationsAsynchronously>k__BackingField, offset: 0x3a, size: 0x1, def value: None
  bool _RunContinuationsAsynchronously_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Threading::Tasks::Sources
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1___c, "System.Threading.Tasks.Sources", "ManualResetValueTaskSourceCore`1/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1, "System.Threading.Tasks.Sources", "ManualResetValueTaskSourceCore`1");
