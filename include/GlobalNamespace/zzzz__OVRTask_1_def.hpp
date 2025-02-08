#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTask_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTask_1)
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1_Awaiter;
}
namespace GlobalNamespace {
template <typename TResult> class OVRTask_1_CallbackInvoker;
}
namespace GlobalNamespace {
template <typename TResult> class OVRTask_1_CallbackRemover;
}
namespace GlobalNamespace {
template <typename TResult, typename T> struct OVRTask_1_CallbackWithState_1;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1_Callback;
}
namespace GlobalNamespace {
template <typename TResult, typename T> class OVRTask_1_IncrementalResultSubscriber_1;
}
namespace GlobalNamespace {
template <typename TResult> class OVRTask_1_InternalDataRemover;
}
namespace GlobalNamespace {
template <typename TResult, typename T> class OVRTask_1_InternalData_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
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
namespace GlobalNamespace {
template <typename TResult> class OVRTask_1_CallbackInvoker;
}
namespace GlobalNamespace {
template <typename TResult> class OVRTask_1_CallbackRemover;
}
namespace GlobalNamespace {
template <typename TResult, typename T> class OVRTask_1_IncrementalResultSubscriber_1;
}
namespace GlobalNamespace {
template <typename TResult> class OVRTask_1_InternalDataRemover;
}
namespace GlobalNamespace {
template <typename TResult, typename T> class OVRTask_1_InternalData_1;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1_Awaiter;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1_Callback;
}
namespace GlobalNamespace {
template <typename TResult, typename T> struct OVRTask_1_CallbackWithState_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::OVRTask_1_CallbackInvoker);
MARK_GEN_REF_PTR_T(::GlobalNamespace::OVRTask_1_CallbackRemover);
MARK_GEN_REF_PTR_T(::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::OVRTask_1_InternalDataRemover);
MARK_GEN_REF_PTR_T(::GlobalNamespace::OVRTask_1_InternalData_1);
MARK_GEN_VAL_T(::GlobalNamespace::OVRTask_1);
MARK_GEN_VAL_T(::GlobalNamespace::OVRTask_1_Awaiter);
MARK_GEN_VAL_T(::GlobalNamespace::OVRTask_1_Callback);
MARK_GEN_VAL_T(::GlobalNamespace::OVRTask_1_CallbackWithState_1);
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: OVRTask`1/CallbackInvoker<TResult>
class CORDL_TYPE OVRTask_1_CallbackInvoker : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Guid guid, TResult result, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::System::Guid guid, TResult result);

  static inline ::GlobalNamespace::OVRTask_1_CallbackInvoker<TResult>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTask_1_CallbackInvoker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_CallbackInvoker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTask_1_CallbackInvoker(OVRTask_1_CallbackInvoker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_CallbackInvoker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTask_1_CallbackInvoker(OVRTask_1_CallbackInvoker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8382 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: OVRTask`1/CallbackRemover<TResult>
class CORDL_TYPE OVRTask_1_CallbackRemover : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Guid guid, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Invoke(::System::Guid guid);

  static inline ::GlobalNamespace::OVRTask_1_CallbackRemover<TResult>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTask_1_CallbackRemover();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_CallbackRemover", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTask_1_CallbackRemover(OVRTask_1_CallbackRemover&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_CallbackRemover", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTask_1_CallbackRemover(OVRTask_1_CallbackRemover const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8383 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: OVRTask`1/InternalDataRemover<TResult>
class CORDL_TYPE OVRTask_1_InternalDataRemover : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Guid guid, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Invoke(::System::Guid guid);

  static inline ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTask_1_InternalDataRemover();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_InternalDataRemover", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTask_1_InternalDataRemover(OVRTask_1_InternalDataRemover&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_InternalDataRemover", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTask_1_InternalDataRemover(OVRTask_1_InternalDataRemover const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8384 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TResult, typename T>
// Is value type: false
// CS Name: OVRTask`1/InternalData`1<TResult,T>
class CORDL_TYPE OVRTask_1_InternalData_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Clearer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Clearer, put = setStaticF_Clearer)) ::System::Action* Clearer;

  /// @brief Field Data, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Data, put = setStaticF_Data)) ::System::Collections::Generic::Dictionary_2<::System::Guid, T>* Data;

  /// @brief Field Remover, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Remover, put = setStaticF_Remover)) ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>* Remover;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Clear();

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool Remove(::System::Guid taskId);

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Set(::System::Guid taskId, T data);

  /// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool TryGet(::System::Guid taskId, ::ByRef<T> data);

  static inline ::System::Action* getStaticF_Clearer();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, T>* getStaticF_Data();

  static inline ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>* getStaticF_Remover();

  static inline void setStaticF_Clearer(::System::Action* value);

  static inline void setStaticF_Data(::System::Collections::Generic::Dictionary_2<::System::Guid, T>* value);

  static inline void setStaticF_Remover(::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTask_1_InternalData_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_InternalData_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTask_1_InternalData_1(OVRTask_1_InternalData_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_InternalData_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTask_1_InternalData_1(OVRTask_1_InternalData_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8385 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TResult, typename T>
// Is value type: false
// CS Name: OVRTask`1/IncrementalResultSubscriber`1<TResult,T>
class CORDL_TYPE OVRTask_1_IncrementalResultSubscriber_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Clearer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Clearer, put = setStaticF_Clearer)) ::System::Action* Clearer;

  /// @brief Field Remover, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Remover, put = setStaticF_Remover)) ::System::Action_1<::System::Guid>* Remover;

  /// @brief Field Subscribers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Subscribers, put = setStaticF_Subscribers)) ::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<T>*>* Subscribers;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Clear();

  /// @brief Method Notify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Notify(::System::Guid taskId, T result);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Remove(::System::Guid id);

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Set(::System::Guid taskId, ::System::Action_1<T>* subscriber);

  static inline ::System::Action* getStaticF_Clearer();

  static inline ::System::Action_1<::System::Guid>* getStaticF_Remover();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<T>*>* getStaticF_Subscribers();

  static inline void setStaticF_Clearer(::System::Action* value);

  static inline void setStaticF_Remover(::System::Action_1<::System::Guid>* value);

  static inline void setStaticF_Subscribers(::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<T>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTask_1_IncrementalResultSubscriber_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_IncrementalResultSubscriber_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTask_1_IncrementalResultSubscriber_1(OVRTask_1_IncrementalResultSubscriber_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_IncrementalResultSubscriber_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTask_1_IncrementalResultSubscriber_1(OVRTask_1_IncrementalResultSubscriber_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8386 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Guid, System.IDisposable, System.IEquatable`1<T>
namespace GlobalNamespace {
// cpp template
template <typename TResult>
// Is value type: true
// CS Name: OVRTask`1<TResult>
struct CORDL_TYPE OVRTask_1 {
public:
  // Declarations
  using Awaiter = ::GlobalNamespace::OVRTask_1_Awaiter<TResult>;

  using Callback = ::GlobalNamespace::OVRTask_1_Callback<TResult>;

  using CallbackInvoker = ::GlobalNamespace::OVRTask_1_CallbackInvoker<TResult>;

  using CallbackRemover = ::GlobalNamespace::OVRTask_1_CallbackRemover<TResult>;

  template <typename T> using CallbackWithState_1 = ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>;

  template <typename T> using IncrementalResultSubscriber_1 = ::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>;

  using InternalDataRemover = ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>;

  template <typename T> using InternalData_1 = ::GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>;

  /// @brief Field CallbackClearers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CallbackClearers, put = setStaticF_CallbackClearers)) ::System::Collections::Generic::HashSet_1<::System::Action*>* CallbackClearers;

  /// @brief Field CallbackInvokers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CallbackInvokers,
                      put = setStaticF_CallbackInvokers)) ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_CallbackInvoker<TResult>*>* CallbackInvokers;

  /// @brief Field CallbackRemovers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CallbackRemovers,
                      put = setStaticF_CallbackRemovers)) ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_CallbackRemover<TResult>*>* CallbackRemovers;

  /// @brief Field Continuations, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Continuations, put = setStaticF_Continuations)) ::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action*>* Continuations;

  /// @brief Field InternalDataClearers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InternalDataClearers, put = setStaticF_InternalDataClearers)) ::System::Collections::Generic::HashSet_1<::System::Action*>* InternalDataClearers;

  /// @brief Field InternalDataRemovers, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_InternalDataRemovers,
      put = setStaticF_InternalDataRemovers)) ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>* InternalDataRemovers;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  __declspec(property(get = get_IsPending)) bool IsPending;

  /// @brief Field Pending, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pending, put = setStaticF_Pending)) ::System::Collections::Generic::HashSet_1<::System::Guid>* Pending;

  /// @brief Field Results, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Results, put = setStaticF_Results)) ::System::Collections::Generic::Dictionary_2<::System::Guid, TResult>* Results;

  /// @brief Field SubscriberClearers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SubscriberClearers, put = setStaticF_SubscriberClearers)) ::System::Collections::Generic::HashSet_1<::System::Action*>* SubscriberClearers;

  /// @brief Field SubscriberRemovers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SubscriberRemovers,
                      put = setStaticF_SubscriberRemovers)) ::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<::System::Guid>*>* SubscriberRemovers;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>*();

  /// @brief Method AddToPending, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddToPending();

  /// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ContinueWith(::System::Action_1<TResult>* onCompleted);

  /// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void ContinueWith(::System::Action_2<TResult, T>* onCompleted, T state);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRTask_1<TResult> other);

  /// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1_Awaiter<TResult> GetAwaiter();

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TResult GetResult();

  /// @brief Method NotifyIncrementalResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TIncrementalResult> inline void NotifyIncrementalResult(TIncrementalResult incrementalResult);

  /// @brief Method SetIncrementalResultCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TIncrementalResult> inline void SetIncrementalResultCallback(::System::Action_1<TIncrementalResult>* onIncrementalResultAvailable);

  /// @brief Method SetInternalData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetInternalData(T data);

  /// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetResult(TResult result);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetInternalData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetInternalData(::ByRef<T> data);

  /// @brief Method ValidateDelegateAndThrow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ValidateDelegateAndThrow(::System::Object* delegate, ::StringW paramName);

  /// @brief Method WithContinuation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void WithContinuation(::System::Action* continuation);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Guid id);

  static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_CallbackClearers();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_CallbackInvoker<TResult>*>* getStaticF_CallbackInvokers();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_CallbackRemover<TResult>*>* getStaticF_CallbackRemovers();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action*>* getStaticF_Continuations();

  static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_InternalDataClearers();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>* getStaticF_InternalDataRemovers();

  static inline ::System::Collections::Generic::HashSet_1<::System::Guid>* getStaticF_Pending();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, TResult>* getStaticF_Results();

  static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_SubscriberClearers();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<::System::Guid>*>* getStaticF_SubscriberRemovers();

  /// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Method get_IsPending, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsPending();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>* i___System__IEquatable_1___GlobalNamespace__OVRTask_1_TResult__();

  /// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRTask_1<TResult> lhs, ::GlobalNamespace::OVRTask_1<TResult> rhs);

  /// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRTask_1<TResult> lhs, ::GlobalNamespace::OVRTask_1<TResult> rhs);

  static inline void setStaticF_CallbackClearers(::System::Collections::Generic::HashSet_1<::System::Action*>* value);

  static inline void setStaticF_CallbackInvokers(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_CallbackInvoker<TResult>*>* value);

  static inline void setStaticF_CallbackRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_CallbackRemover<TResult>*>* value);

  static inline void setStaticF_Continuations(::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action*>* value);

  static inline void setStaticF_InternalDataClearers(::System::Collections::Generic::HashSet_1<::System::Action*>* value);

  static inline void setStaticF_InternalDataRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>* value);

  static inline void setStaticF_Pending(::System::Collections::Generic::HashSet_1<::System::Guid>* value);

  static inline void setStaticF_Results(::System::Collections::Generic::Dictionary_2<::System::Guid, TResult>* value);

  static inline void setStaticF_SubscriberClearers(::System::Collections::Generic::HashSet_1<::System::Action*>* value);

  static inline void setStaticF_SubscriberRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Action_1<::System::Guid>*>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTask_1();

  // Ctor Parameters [CppParam { name: "_id", ty: "::System::Guid", modifiers: "", def_value: None }]
  constexpr OVRTask_1(::System::Guid _id) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8390 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _id, offset: 0x0, size: 0x10, def value: None
  ::System::Guid _id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies OVRTask`1<TResult>, System.Runtime.CompilerServices.INotifyCompletion
namespace GlobalNamespace {
// cpp template
template <typename TResult>
// Is value type: true
// CS Name: OVRTask`1/Awaiter<TResult>
struct CORDL_TYPE OVRTask_1_Awaiter {
public:
  // Declarations
  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*();

  /// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TResult GetResult();

  /// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnCompleted(::System::Action* continuation);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRTask_1<TResult> task);

  /// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTask_1_Awaiter();

  // Ctor Parameters [CppParam { name: "_task", ty: "::GlobalNamespace::OVRTask_1<TResult>", modifiers: "", def_value: None }]
  constexpr OVRTask_1_Awaiter(::GlobalNamespace::OVRTask_1<TResult> _task) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8387 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _task, offset: 0x0, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1<TResult> _task;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename TResult>
// Is value type: true
// CS Name: OVRTask`1/Callback<TResult>
struct CORDL_TYPE OVRTask_1_Callback {
public:
  // Declarations
  /// @brief Field Callbacks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Callbacks, put = setStaticF_Callbacks)) ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_Callback<TResult>>* Callbacks;

  /// @brief Field Clearer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Clearer, put = setStaticF_Clearer)) ::System::Action* Clearer;

  /// @brief Field Invoker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Invoker, put = setStaticF_Invoker)) ::GlobalNamespace::OVRTask_1_CallbackInvoker<TResult>* Invoker;

  /// @brief Field Remover, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Remover, put = setStaticF_Remover)) ::GlobalNamespace::OVRTask_1_CallbackRemover<TResult>* Remover;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Add(::System::Guid taskId, ::System::Action_1<TResult>* delegate);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Clear();

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Invoke(TResult result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Invoke(::System::Guid taskId, TResult result);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool Remove(::System::Guid taskId);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<TResult>* delegate);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_Callback<TResult>>* getStaticF_Callbacks();

  static inline ::System::Action* getStaticF_Clearer();

  static inline ::GlobalNamespace::OVRTask_1_CallbackInvoker<TResult>* getStaticF_Invoker();

  static inline ::GlobalNamespace::OVRTask_1_CallbackRemover<TResult>* getStaticF_Remover();

  static inline void setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_Callback<TResult>>* value);

  static inline void setStaticF_Clearer(::System::Action* value);

  static inline void setStaticF_Invoker(::GlobalNamespace::OVRTask_1_CallbackInvoker<TResult>* value);

  static inline void setStaticF_Remover(::GlobalNamespace::OVRTask_1_CallbackRemover<TResult>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTask_1_Callback();

  // Ctor Parameters [CppParam { name: "_delegate", ty: "::System::Action_1<TResult>*", modifiers: "", def_value: None }]
  constexpr OVRTask_1_Callback(::System::Action_1<TResult>* _delegate) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8388 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _delegate, offset: 0x0, size: 0x8, def value: None
  ::System::Action_1<TResult>* _delegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename TResult, typename T>
// Is value type: true
// CS Name: OVRTask`1/CallbackWithState`1<TResult,T>
struct CORDL_TYPE OVRTask_1_CallbackWithState_1 {
public:
  // Declarations
  /// @brief Field Callbacks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Callbacks,
                      put = setStaticF_Callbacks)) ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>* Callbacks;

  /// @brief Field Clearer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Clearer, put = setStaticF_Clearer)) ::System::Action* Clearer;

  /// @brief Field Invoker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Invoker, put = setStaticF_Invoker)) ::GlobalNamespace::OVRTask_1_CallbackInvoker<TResult>* Invoker;

  /// @brief Field Remover, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Remover, put = setStaticF_Remover)) ::GlobalNamespace::OVRTask_1_CallbackRemover<TResult>* Remover;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Add(::System::Guid taskId, T data, ::System::Action_2<TResult, T>* callback);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Clear();

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Invoke(TResult result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Invoke(::System::Guid taskId, TResult result);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool Remove(::System::Guid taskId);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T data, ::System::Action_2<TResult, T>* delegate);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>* getStaticF_Callbacks();

  static inline ::System::Action* getStaticF_Clearer();

  static inline ::GlobalNamespace::OVRTask_1_CallbackInvoker<TResult>* getStaticF_Invoker();

  static inline ::GlobalNamespace::OVRTask_1_CallbackRemover<TResult>* getStaticF_Remover();

  static inline void setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>>* value);

  static inline void setStaticF_Clearer(::System::Action* value);

  static inline void setStaticF_Invoker(::GlobalNamespace::OVRTask_1_CallbackInvoker<TResult>* value);

  static inline void setStaticF_Remover(::GlobalNamespace::OVRTask_1_CallbackRemover<TResult>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTask_1_CallbackWithState_1();

  // Ctor Parameters [CppParam { name: "_data", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_delegate", ty: "::System::Action_2<TResult,T>*", modifiers: "", def_value: None }]
  constexpr OVRTask_1_CallbackWithState_1(T _data, ::System::Action_2<TResult, T>* _delegate) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8389 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _data, offset: 0x0, size: 0x8, def value: None
  T _data;

  /// @brief Field _delegate, offset: 0x8, size: 0x8, def value: None
  ::System::Action_2<TResult, T>* _delegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::OVRTask_1_CallbackInvoker, "", "OVRTask`1/CallbackInvoker");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::OVRTask_1_CallbackRemover, "", "OVRTask`1/CallbackRemover");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1, "", "OVRTask`1/IncrementalResultSubscriber`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::OVRTask_1_InternalDataRemover, "", "OVRTask`1/InternalDataRemover");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::OVRTask_1_InternalData_1, "", "OVRTask`1/InternalData`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRTask_1, "", "OVRTask`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRTask_1_Awaiter, "", "OVRTask`1/Awaiter");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRTask_1_Callback, "", "OVRTask`1/Callback");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRTask_1_CallbackWithState_1, "", "OVRTask`1/CallbackWithState`1");
