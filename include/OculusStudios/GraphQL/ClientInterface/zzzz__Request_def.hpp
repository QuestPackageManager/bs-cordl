#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/Request.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/ClientInterface/zzzz__RequestState_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__RequestType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Request)
namespace OculusStudios::GraphQL::ClientInterface {
class AttemptData;
}
namespace OculusStudios::GraphQL::ClientInterface {
struct FailureHandlingMethod;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLOperation;
}
namespace OculusStudios::GraphQL::ClientInterface {
struct RequestState;
}
namespace OculusStudios::GraphQL::ClientInterface {
struct RequestType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
class Request;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::ClientInterface::Request);
// Dependencies OculusStudios.GraphQL.ClientInterface.RequestState, OculusStudios.GraphQL.ClientInterface.RequestType, System.Object
namespace OculusStudios::GraphQL::ClientInterface {
// Is value type: false
// CS Name: OculusStudios.GraphQL.ClientInterface.Request
class CORDL_TYPE Request : public ::System::Object {
public:
  // Declarations
  /// @brief Field _attempts, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__attempts,
                      put = __cordl_internal_set__attempts)) ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::ClientInterface::AttemptData*>* _attempts;

  /// @brief Field _cancellationTokenSource, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _requestId, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__requestId, put = __cordl_internal_set__requestId)) int64_t _requestId;

  /// @brief Field _requestState, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__requestState, put = __cordl_internal_set__requestState)) ::OculusStudios::GraphQL::ClientInterface::RequestState _requestState;

  __declspec(property(get = get_attempts)) ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::ClientInterface::AttemptData*>* attempts;

  __declspec(property(get = get_attemptsPerformed)) int32_t attemptsPerformed;

  __declspec(property(get = get_cancellationToken)) ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field clientMutationId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_clientMutationId, put = __cordl_internal_set_clientMutationId)) ::StringW clientMutationId;

  /// @brief Field forceRequestWhenOffline, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_forceRequestWhenOffline, put = __cordl_internal_set_forceRequestWhenOffline)) bool forceRequestWhenOffline;

  /// @brief Field onRequestStateUpdated, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onRequestStateUpdated,
                      put = __cordl_internal_set_onRequestStateUpdated)) ::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*,
                                                                                            ::OculusStudios::GraphQL::ClientInterface::RequestState>* onRequestStateUpdated;

  __declspec(property(get = get_requestId)) int64_t requestId;

  __declspec(property(get = get_requestState)) ::OculusStudios::GraphQL::ClientInterface::RequestState requestState;

  /// @brief Field requestType, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_requestType, put = __cordl_internal_set_requestType)) ::OculusStudios::GraphQL::ClientInterface::RequestType requestType;

  /// @brief Field taskCompletionSource, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_taskCompletionSource,
                      put = __cordl_internal_set_taskCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* taskCompletionSource;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Cancel, addr 0x5d7f21c, size 0x28, virtual false, abstract: false, final false
  inline void Cancel();

  /// @brief Method GetCodeGenInfo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation* GetCodeGenInfo();

  /// @brief Method GetFailureHandlingMethod, addr 0x5d7e914, size 0x8, virtual true, abstract: false, final false
  inline ::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod GetFailureHandlingMethod();

  /// @brief Method GetLastException, addr 0x5d7e91c, size 0x90, virtual true, abstract: false, final false
  inline ::System::Exception* GetLastException();

  /// @brief Method GetTimeoutMs, addr 0x5d7e90c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetTimeoutMs();

  static inline ::OculusStudios::GraphQL::ClientInterface::Request* New_ctor(bool forceRequestWhenOffline, ::OculusStudios::GraphQL::ClientInterface::RequestType requestType);

  /// @brief Method OnRequestStateChanged, addr 0x5d7eef8, size 0x12c, virtual false, abstract: false, final false
  inline void OnRequestStateChanged(::OculusStudios::GraphQL::ClientInterface::RequestState requestState);

  /// @brief Method PerformRequest, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PerformRequest();

  /// @brief Method RegisterException, addr 0x5d7f0f8, size 0xd4, virtual false, abstract: false, final false
  inline void RegisterException(::System::Exception* e);

  /// @brief Method RegisterRawResponseData, addr 0x5d7f024, size 0xd4, virtual false, abstract: false, final false
  inline void RegisterRawResponseData(::StringW json);

  /// @brief Method ResetStateForUserInitiatedRetry, addr 0x5d7e9ac, size 0x3dc, virtual false, abstract: false, final false
  inline void ResetStateForUserInitiatedRetry();

  /// @brief Method SetRequestId, addr 0x5d7ed88, size 0x64, virtual false, abstract: false, final false
  inline void SetRequestId(int64_t newRequestId);

  /// @brief Method SetRequestState, addr 0x5d7edec, size 0x10c, virtual false, abstract: false, final false
  inline void SetRequestState(::OculusStudios::GraphQL::ClientInterface::RequestState requestState);

  /// @brief Method SupportsClientMutationId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool SupportsClientMutationId();

  /// @brief Method System.IDisposable.Dispose, addr 0x5d7f1cc, size 0x50, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::ClientInterface::AttemptData*>* const& __cordl_internal_get__attempts() const;

  constexpr ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::ClientInterface::AttemptData*>*& __cordl_internal_get__attempts();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr int64_t const& __cordl_internal_get__requestId() const;

  constexpr int64_t& __cordl_internal_get__requestId();

  constexpr ::OculusStudios::GraphQL::ClientInterface::RequestState const& __cordl_internal_get__requestState() const;

  constexpr ::OculusStudios::GraphQL::ClientInterface::RequestState& __cordl_internal_get__requestState();

  constexpr ::StringW const& __cordl_internal_get_clientMutationId() const;

  constexpr ::StringW& __cordl_internal_get_clientMutationId();

  constexpr bool const& __cordl_internal_get_forceRequestWhenOffline() const;

  constexpr bool& __cordl_internal_get_forceRequestWhenOffline();

  constexpr ::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*, ::OculusStudios::GraphQL::ClientInterface::RequestState>* const& __cordl_internal_get_onRequestStateUpdated() const;

  constexpr ::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*, ::OculusStudios::GraphQL::ClientInterface::RequestState>*& __cordl_internal_get_onRequestStateUpdated();

  constexpr ::OculusStudios::GraphQL::ClientInterface::RequestType const& __cordl_internal_get_requestType() const;

  constexpr ::OculusStudios::GraphQL::ClientInterface::RequestType& __cordl_internal_get_requestType();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* const& __cordl_internal_get_taskCompletionSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& __cordl_internal_get_taskCompletionSource();

  constexpr void __cordl_internal_set__attempts(::System::Collections::Generic::List_1<::OculusStudios::GraphQL::ClientInterface::AttemptData*>* value);

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__requestId(int64_t value);

  constexpr void __cordl_internal_set__requestState(::OculusStudios::GraphQL::ClientInterface::RequestState value);

  constexpr void __cordl_internal_set_clientMutationId(::StringW value);

  constexpr void __cordl_internal_set_forceRequestWhenOffline(bool value);

  constexpr void __cordl_internal_set_onRequestStateUpdated(::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*, ::OculusStudios::GraphQL::ClientInterface::RequestState>* value);

  constexpr void __cordl_internal_set_requestType(::OculusStudios::GraphQL::ClientInterface::RequestType value);

  constexpr void __cordl_internal_set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value);

  /// @brief Method .ctor, addr 0x5d7e7c8, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(bool forceRequestWhenOffline, ::OculusStudios::GraphQL::ClientInterface::RequestType requestType);

  /// @brief Method add_onRequestStateUpdated, addr 0x5d7e5c0, size 0xc0, virtual false, abstract: false, final false
  inline void add_onRequestStateUpdated(::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*, ::OculusStudios::GraphQL::ClientInterface::RequestState>* value);

  /// @brief Method get_attempts, addr 0x5d7e7c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::ClientInterface::AttemptData*>* get_attempts();

  /// @brief Method get_attemptsPerformed, addr 0x5d7e774, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_attemptsPerformed();

  /// @brief Method get_cancellationToken, addr 0x5d7e740, size 0x24, virtual false, abstract: false, final false
  inline ::System::Threading::CancellationToken get_cancellationToken();

  /// @brief Method get_requestId, addr 0x5d7e764, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_requestId();

  /// @brief Method get_requestState, addr 0x5d7e76c, size 0x8, virtual false, abstract: false, final false
  inline ::OculusStudios::GraphQL::ClientInterface::RequestState get_requestState();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_onRequestStateUpdated, addr 0x5d7e680, size 0xc0, virtual false, abstract: false, final false
  inline void remove_onRequestStateUpdated(::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*, ::OculusStudios::GraphQL::ClientInterface::RequestState>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Request();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Request", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Request(Request&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Request", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Request(Request const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22478 };

  /// @brief Field onRequestStateUpdated, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<::OculusStudios::GraphQL::ClientInterface::Request*, ::OculusStudios::GraphQL::ClientInterface::RequestState>* ___onRequestStateUpdated;

  /// @brief Field forceRequestWhenOffline, offset: 0x18, size: 0x1, def value: None
  bool ___forceRequestWhenOffline;

  /// @brief Field clientMutationId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___clientMutationId;

  /// @brief Field requestType, offset: 0x28, size: 0x1, def value: None
  ::OculusStudios::GraphQL::ClientInterface::RequestType ___requestType;

  /// @brief Field taskCompletionSource, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* ___taskCompletionSource;

  /// @brief Field _requestId, offset: 0x38, size: 0x8, def value: None
  int64_t ____requestId;

  /// @brief Field _requestState, offset: 0x40, size: 0x4, def value: None
  ::OculusStudios::GraphQL::ClientInterface::RequestState ____requestState;

  /// @brief Field _cancellationTokenSource, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _attempts, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::ClientInterface::AttemptData*>* ____attempts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::ClientInterface::Request, ___onRequestStateUpdated) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::ClientInterface::Request, ___forceRequestWhenOffline) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::ClientInterface::Request, ___clientMutationId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::ClientInterface::Request, ___requestType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::ClientInterface::Request, ___taskCompletionSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::ClientInterface::Request, ____requestId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::ClientInterface::Request, ____requestState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::ClientInterface::Request, ____cancellationTokenSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::ClientInterface::Request, ____attempts) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::ClientInterface::Request, 0x58>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::ClientInterface
NEED_NO_BOX(::OculusStudios::GraphQL::ClientInterface::Request);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::ClientInterface::Request*, "OculusStudios.GraphQL.ClientInterface", "Request");
