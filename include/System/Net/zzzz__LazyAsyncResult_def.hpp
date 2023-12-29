#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LazyAsyncResult)
namespace System::Threading {
class ManualResetEvent;
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
namespace System::Net {
class __LazyAsyncResult__ThreadContext;
}
namespace System::Threading {
class WaitHandle;
}
// Forward declare root types
namespace System::Net {
class LazyAsyncResult;
}
namespace System::Net {
class __LazyAsyncResult__ThreadContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::LazyAsyncResult);
MARK_REF_PTR_T(::System::Net::__LazyAsyncResult__ThreadContext);
// Type: ::ThreadContext
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7943))
// CS Name: ::LazyAsyncResult::ThreadContext*
class CORDL_TYPE __LazyAsyncResult__ThreadContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_NestedIOCount, offset 0x10, size 0x4
  __declspec(property(get = __get_m_NestedIOCount, put = __set_m_NestedIOCount)) int32_t m_NestedIOCount;

  constexpr int32_t& __get_m_NestedIOCount();

  constexpr int32_t const& __get_m_NestedIOCount() const;

  constexpr void __set_m_NestedIOCount(int32_t value);

  static inline ::System::Net::__LazyAsyncResult__ThreadContext* New_ctor();

  /// @brief Method .ctor addr 0x282a2e0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LazyAsyncResult__ThreadContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LazyAsyncResult__ThreadContext(__LazyAsyncResult__ThreadContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LazyAsyncResult__ThreadContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LazyAsyncResult__ThreadContext(__LazyAsyncResult__ThreadContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LazyAsyncResult__ThreadContext();

public:
  /// @brief Field m_NestedIOCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_NestedIOCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__LazyAsyncResult__ThreadContext, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::__LazyAsyncResult__ThreadContext, ___m_NestedIOCount) == 0x10, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::LazyAsyncResult
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7944))
// CS Name: ::System.Net::LazyAsyncResult*
class CORDL_TYPE LazyAsyncResult : public ::System::Object {
public:
  // Declarations
  using ThreadContext = ::System::Net::__LazyAsyncResult__ThreadContext;

  /// @brief Field m_AsyncObject, offset 0x10, size 0x8
  __declspec(property(get = __get_m_AsyncObject, put = __set_m_AsyncObject))::System::Object* m_AsyncObject;

  /// @brief Field m_AsyncState, offset 0x18, size 0x8
  __declspec(property(get = __get_m_AsyncState, put = __set_m_AsyncState))::System::Object* m_AsyncState;

  /// @brief Field m_AsyncCallback, offset 0x20, size 0x8
  __declspec(property(get = __get_m_AsyncCallback, put = __set_m_AsyncCallback))::System::AsyncCallback* m_AsyncCallback;

  /// @brief Field m_Result, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Result, put = __set_m_Result))::System::Object* m_Result;

  /// @brief Field m_IntCompleted, offset 0x30, size 0x4
  __declspec(property(get = __get_m_IntCompleted, put = __set_m_IntCompleted)) int32_t m_IntCompleted;

  /// @brief Field m_EndCalled, offset 0x34, size 0x1
  __declspec(property(get = __get_m_EndCalled, put = __set_m_EndCalled)) bool m_EndCalled;

  /// @brief Field m_UserEvent, offset 0x35, size 0x1
  __declspec(property(get = __get_m_UserEvent, put = __set_m_UserEvent)) bool m_UserEvent;

  /// @brief Field m_Event, offset 0x38, size 0x8
  __declspec(property(get = __get_m_Event, put = __set_m_Event))::System::Object* m_Event;

  /// @brief Field t_ThreadContext, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_t_ThreadContext, put = setStaticF_t_ThreadContext))::System::Net::__LazyAsyncResult__ThreadContext* t_ThreadContext;

  __declspec(property(get = get_AsyncObject))::System::Object* AsyncObject;

  __declspec(property(get = get_AsyncState))::System::Object* AsyncState;

  __declspec(property(get = get_AsyncCallback))::System::AsyncCallback* AsyncCallback;

  __declspec(property(get = get_AsyncWaitHandle))::System::Threading::WaitHandle* AsyncWaitHandle;

  __declspec(property(get = get_CompletedSynchronously)) bool CompletedSynchronously;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  __declspec(property(get = get_InternalPeekCompleted)) bool InternalPeekCompleted;

  __declspec(property(get = get_EndCalled, put = set_EndCalled)) bool EndCalled;

  /// @brief Convert operator to "::System::IAsyncResult"
  constexpr operator ::System::IAsyncResult*() noexcept;

  constexpr ::System::Object*& __get_m_AsyncObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_m_AsyncObject() const;

  constexpr void __set_m_AsyncObject(::System::Object* value);

  constexpr ::System::Object*& __get_m_AsyncState();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_m_AsyncState() const;

  constexpr void __set_m_AsyncState(::System::Object* value);

  constexpr ::System::AsyncCallback*& __get_m_AsyncCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& __get_m_AsyncCallback() const;

  constexpr void __set_m_AsyncCallback(::System::AsyncCallback* value);

  constexpr ::System::Object*& __get_m_Result();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_m_Result() const;

  constexpr void __set_m_Result(::System::Object* value);

  constexpr int32_t& __get_m_IntCompleted();

  constexpr int32_t const& __get_m_IntCompleted() const;

  constexpr void __set_m_IntCompleted(int32_t value);

  constexpr bool& __get_m_EndCalled();

  constexpr bool const& __get_m_EndCalled() const;

  constexpr void __set_m_EndCalled(bool value);

  constexpr bool& __get_m_UserEvent();

  constexpr bool const& __get_m_UserEvent() const;

  constexpr void __set_m_UserEvent(bool value);

  constexpr ::System::Object*& __get_m_Event();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_m_Event() const;

  constexpr void __set_m_Event(::System::Object* value);

  static inline void setStaticF_t_ThreadContext(::System::Net::__LazyAsyncResult__ThreadContext* value);

  static inline ::System::Net::__LazyAsyncResult__ThreadContext* getStaticF_t_ThreadContext();

  /// @brief Method get_CurrentThreadContext addr 0x282a24c size 0x94 virtual false final false
  static inline ::System::Net::__LazyAsyncResult__ThreadContext* get_CurrentThreadContext();

  static inline ::System::Net::LazyAsyncResult* New_ctor(::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack);

  /// @brief Method .ctor addr 0x282a2e8 size 0x90 virtual false final false
  inline void _ctor(::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack);

  /// @brief Method get_AsyncObject addr 0x282a378 size 0x8 virtual false final false
  inline ::System::Object* get_AsyncObject();

  /// @brief Method get_AsyncState addr 0x282a380 size 0x8 virtual true final true
  inline ::System::Object* get_AsyncState();

  /// @brief Method get_AsyncCallback addr 0x282a388 size 0x8 virtual false final false
  inline ::System::AsyncCallback* get_AsyncCallback();

  /// @brief Method get_AsyncWaitHandle addr 0x282a390 size 0xa4 virtual true final true
  inline ::System::Threading::WaitHandle* get_AsyncWaitHandle();

  /// @brief Method LazilyCreateEvent addr 0x282a434 size 0x1b4 virtual false final false
  inline bool LazilyCreateEvent(ByRef<::System::Threading::ManualResetEvent*> waitHandle);

  /// @brief Method get_CompletedSynchronously addr 0x282a5f8 size 0x30 virtual true final true
  inline bool get_CompletedSynchronously();

  /// @brief Method get_IsCompleted addr 0x282a628 size 0x30 virtual true final true
  inline bool get_IsCompleted();

  /// @brief Method get_InternalPeekCompleted addr 0x282a5e8 size 0x10 virtual false final false
  inline bool get_InternalPeekCompleted();

  /// @brief Method get_EndCalled addr 0x282a658 size 0x8 virtual false final false
  inline bool get_EndCalled();

  /// @brief Method set_EndCalled addr 0x282a660 size 0xc virtual false final false
  inline void set_EndCalled(bool value);

  /// @brief Method ProtectedInvokeCallback addr 0x282a66c size 0x1d8 virtual false final false
  inline void ProtectedInvokeCallback(::System::Object* result, void* userToken);

  /// @brief Method InvokeCallback addr 0x282a844 size 0x60 virtual false final false
  inline void InvokeCallback(::System::Object* result);

  /// @brief Method InvokeCallback addr 0x282a8a4 size 0x54 virtual false final false
  inline void InvokeCallback();

  /// @brief Method Complete addr 0x282a8f8 size 0x198 virtual true final false
  inline void Complete(void* userToken);

  /// @brief Method WorkerThreadComplete addr 0x282aa90 size 0xac virtual false final false
  inline void WorkerThreadComplete(::System::Object* state);

  /// @brief Method Cleanup addr 0x282ab3c size 0x4 virtual true final false
  inline void Cleanup();

  /// @brief Method InternalWaitForCompletion addr 0x282ab40 size 0x8 virtual false final false
  inline ::System::Object* InternalWaitForCompletion();

  /// @brief Method WaitForCompletion addr 0x282ab48 size 0x2b8 virtual false final false
  inline ::System::Object* WaitForCompletion(bool snap);

  // Ctor Parameters [CppParam { name: "", ty: "LazyAsyncResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LazyAsyncResult(LazyAsyncResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LazyAsyncResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LazyAsyncResult(LazyAsyncResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyAsyncResult();

public:
  /// @brief Field m_AsyncObject, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___m_AsyncObject;

  /// @brief Field m_AsyncState, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___m_AsyncState;

  /// @brief Field m_AsyncCallback, offset: 0x20, size: 0x8, def value: None
  ::System::AsyncCallback* ___m_AsyncCallback;

  /// @brief Field m_Result, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___m_Result;

  /// @brief Field m_IntCompleted, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_IntCompleted;

  /// @brief Field m_EndCalled, offset: 0x34, size: 0x1, def value: None
  bool ___m_EndCalled;

  /// @brief Field m_UserEvent, offset: 0x35, size: 0x1, def value: None
  bool ___m_UserEvent;

  /// @brief Field m_Event, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ___m_Event;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::LazyAsyncResult, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Net::LazyAsyncResult, ___m_AsyncObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::LazyAsyncResult, ___m_AsyncState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::LazyAsyncResult, ___m_AsyncCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::LazyAsyncResult, ___m_Result) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::LazyAsyncResult, ___m_IntCompleted) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::LazyAsyncResult, ___m_EndCalled) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Net::LazyAsyncResult, ___m_UserEvent) == 0x35, "Offset mismatch!");

static_assert(offsetof(::System::Net::LazyAsyncResult, ___m_Event) == 0x38, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::LazyAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::LazyAsyncResult*, "System.Net", "LazyAsyncResult");
NEED_NO_BOX(::System::Net::__LazyAsyncResult__ThreadContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__LazyAsyncResult__ThreadContext*, "System.Net", "LazyAsyncResult/ThreadContext");
