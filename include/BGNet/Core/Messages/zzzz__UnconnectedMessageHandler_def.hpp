#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnconnectedMessageHandler)
namespace BGNet::Core::Messages {
class __UnconnectedMessageHandler____c__DisplayClass74_0;
}
namespace BGNet::Core::Messages {
template <typename T> class __UnconnectedMessageHandler____c__DisplayClass46_0_1;
}
namespace GlobalNamespace {
class IPollable;
}
namespace BGNet::Core::Messages {
template <typename TRequest, typename TResponse> struct __UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace BGNet::Core::Messages {
template <typename T> struct __UnconnectedMessageHandler___AwaitResponseAsync_d__78_1;
}
namespace BGNet::Core::Messages {
class __UnconnectedMessageHandler__SentRequestWaiter;
}
namespace System::Threading {
struct CancellationToken;
}
namespace BGNet::Core::Messages {
class __UnconnectedMessageHandler__ConnectionState;
}
namespace BGNet::Core::Messages {
struct __UnconnectedMessageHandler__MessageOrigin;
}
namespace BGNet::Core::Messages {
template <typename T> class __UnconnectedMessageHandler____c__DisplayClass52_0_1;
}
namespace GlobalNamespace {
template <typename TData> class INetworkPacketSerializer_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace System {
class IDisposable;
}
namespace BGNet::Core::Messages {
struct __UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74;
}
namespace BGNet::Core::Messages {
template <typename TRequest, typename TResponse> struct __UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2;
}
namespace GlobalNamespace {
class SmallBufferPool;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace BGNet::Core::Messages {
class __UnconnectedMessageHandler__RequestWaiter;
}
namespace BGNet::Core::Messages {
class __UnconnectedMessageHandler__MultipartMessageWaiter;
}
namespace BGNet::Core {
class IAnalyticsManager;
}
namespace BGNet::Core::Messages {
struct __UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace BGNet::Core::Messages {
template <typename T> struct __UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace BGNet::Core::Messages {
class __UnconnectedMessageHandler__RequestResponseWaiter;
}
namespace BGNet::Core::Messages {
template <typename T> class __UnconnectedMessageHandler____c__DisplayClass53_0_1;
}
namespace BGNet::Core::Messages {
template <typename T> class __UnconnectedMessageHandler____c__DisplayClass77_0_1;
}
namespace BGNet::Core::Messages {
class BaseAcknowledgeMessage;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableRequest;
}
namespace BGNet::Core::Messages {
struct __UnconnectedMessageHandler__RequestWaiterId;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableResponse;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename TResult> class Func_5;
}
namespace System {
class Exception;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class ExpiringDictionary_2;
}
namespace GlobalNamespace {
class PacketEncryptionLayer;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace BGNet::Core::Messages {
class IUnconnectedUnreliableMessage;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace GlobalNamespace {
class IUnconnectedMessageReceiver;
}
namespace BGNet::Core::Messages {
template <typename TRequest, typename TResponse> struct __UnconnectedMessageHandler___GetAndSendResponse_d__57_2;
}
namespace GlobalNamespace {
class IUnconnectedMessageSender;
}
namespace System::Net {
class IPEndPoint;
}
namespace BGNet::Core::Messages {
class IUnconnectedResponse;
}
namespace BGNet::Core::Messages {
struct __UnconnectedMessageHandler___SendMessageWithRetry_d__72;
}
namespace BGNet::Core::Messages {
class BaseMultipartMessage;
}
namespace GlobalNamespace {
class __EncryptionUtility__IEncryptionState;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace BGNet::Core::Messages {
class IUnconnectedMultipartMessage;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace GlobalNamespace {
template <typename T> struct __UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class UnconnectedMessageHandler;
}
namespace BGNet::Core::Messages {
class __UnconnectedMessageHandler__ConnectionState;
}
namespace BGNet::Core::Messages {
class __UnconnectedMessageHandler__MultipartMessageWaiter;
}
namespace BGNet::Core::Messages {
class __UnconnectedMessageHandler__RequestResponseWaiter;
}
namespace BGNet::Core::Messages {
class __UnconnectedMessageHandler__RequestWaiter;
}
namespace BGNet::Core::Messages {
class __UnconnectedMessageHandler__SentRequestWaiter;
}
namespace BGNet::Core::Messages {
template <typename T> class __UnconnectedMessageHandler____c__DisplayClass46_0_1;
}
namespace BGNet::Core::Messages {
template <typename T> class __UnconnectedMessageHandler____c__DisplayClass52_0_1;
}
namespace BGNet::Core::Messages {
template <typename T> class __UnconnectedMessageHandler____c__DisplayClass53_0_1;
}
namespace BGNet::Core::Messages {
class __UnconnectedMessageHandler____c__DisplayClass74_0;
}
namespace BGNet::Core::Messages {
template <typename T> class __UnconnectedMessageHandler____c__DisplayClass77_0_1;
}
namespace BGNet::Core::Messages {
struct __UnconnectedMessageHandler__MessageOrigin;
}
namespace BGNet::Core::Messages {
struct __UnconnectedMessageHandler__RequestWaiterId;
}
namespace BGNet::Core::Messages {
template <typename T> struct __UnconnectedMessageHandler___AwaitResponseAsync_d__78_1;
}
namespace BGNet::Core::Messages {
template <typename TRequest, typename TResponse> struct __UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2;
}
namespace BGNet::Core::Messages {
template <typename TRequest, typename TResponse> struct __UnconnectedMessageHandler___GetAndSendResponse_d__57_2;
}
namespace BGNet::Core::Messages {
template <typename TRequest, typename TResponse> struct __UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2;
}
namespace BGNet::Core::Messages {
struct __UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75;
}
namespace BGNet::Core::Messages {
template <typename T> struct __UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1;
}
namespace BGNet::Core::Messages {
struct __UnconnectedMessageHandler___SendMessageWithRetry_d__72;
}
namespace BGNet::Core::Messages {
struct __UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74;
}
namespace GlobalNamespace {
template <typename T> struct __UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::UnconnectedMessageHandler);
MARK_REF_PTR_T(::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState);
MARK_REF_PTR_T(::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter);
MARK_REF_PTR_T(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter);
MARK_REF_PTR_T(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter);
MARK_REF_PTR_T(::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter);
MARK_GEN_REF_PTR_T(::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass46_0_1);
MARK_GEN_REF_PTR_T(::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1);
MARK_GEN_REF_PTR_T(::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1);
MARK_REF_PTR_T(::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0);
MARK_GEN_REF_PTR_T(::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1);
MARK_VAL_T(::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin);
MARK_VAL_T(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId);
MARK_GEN_VAL_T(::BGNet::Core::Messages::__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1);
MARK_GEN_VAL_T(::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2);
MARK_GEN_VAL_T(::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponse_d__57_2);
MARK_GEN_VAL_T(::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2);
MARK_VAL_T(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75);
MARK_GEN_VAL_T(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1);
MARK_VAL_T(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72);
MARK_VAL_T(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74);
MARK_GEN_VAL_T(::GlobalNamespace::__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d);
// Type: ::ConnectionState
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12988))
// CS Name: ::UnconnectedMessageHandler::ConnectionState*
class CORDL_TYPE __UnconnectedMessageHandler__ConnectionState : public ::System::Object {
public:
  // Declarations
  /// @brief Field _userId, offset 0x10, size 0x8
  __declspec(property(get = __get__userId, put = __set__userId))::StringW _userId;

  /// @brief Field _userName, offset 0x18, size 0x8
  __declspec(property(get = __get__userName, put = __set__userName))::StringW _userName;

  /// @brief Field _protocolVersion, offset 0x20, size 0x4
  __declspec(property(get = __get__protocolVersion, put = __set__protocolVersion)) uint32_t _protocolVersion;

  /// @brief Field _hasIdentity, offset 0x24, size 0x1
  __declspec(property(get = __get__hasIdentity, put = __set__hasIdentity)) bool _hasIdentity;

  /// @brief Field _encryptionState, offset 0x28, size 0x8
  __declspec(property(get = __get__encryptionState, put = __set__encryptionState))::GlobalNamespace::__EncryptionUtility__IEncryptionState* _encryptionState;

  /// @brief Field _lastReceivedRequestIndex, offset 0x30, size 0x4
  __declspec(property(get = __get__lastReceivedRequestIndex, put = __set__lastReceivedRequestIndex)) int32_t _lastReceivedRequestIndex;

  /// @brief Field _lastReceivedRequestId, offset 0x34, size 0x4
  __declspec(property(get = __get__lastReceivedRequestId, put = __set__lastReceivedRequestId)) uint32_t _lastReceivedRequestId;

  /// @brief Field _receivedRequestCount, offset 0x38, size 0x4
  __declspec(property(get = __get__receivedRequestCount, put = __set__receivedRequestCount)) int32_t _receivedRequestCount;

  /// @brief Field _receivedRequest, offset 0x40, size 0x8
  __declspec(property(get = __get__receivedRequest, put = __set__receivedRequest))::ArrayW<bool, ::Array<bool>*> _receivedRequest;

  /// @brief Field _currentRequestId, offset 0x48, size 0x4
  __declspec(property(get = __get__currentRequestId, put = __set__currentRequestId)) uint32_t _currentRequestId;

  /// @brief Field _currentEpoch, offset 0x4c, size 0x4
  __declspec(property(get = __get__currentEpoch, put = __set__currentEpoch)) uint32_t _currentEpoch;

  __declspec(property(get = get_isEncrypted)) bool isEncrypted;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::StringW& __get__userId();

  constexpr ::StringW const& __get__userId() const;

  constexpr void __set__userId(::StringW value);

  constexpr ::StringW& __get__userName();

  constexpr ::StringW const& __get__userName() const;

  constexpr void __set__userName(::StringW value);

  constexpr uint32_t& __get__protocolVersion();

  constexpr uint32_t const& __get__protocolVersion() const;

  constexpr void __set__protocolVersion(uint32_t value);

  constexpr bool& __get__hasIdentity();

  constexpr bool const& __get__hasIdentity() const;

  constexpr void __set__hasIdentity(bool value);

  constexpr ::GlobalNamespace::__EncryptionUtility__IEncryptionState*& __get__encryptionState();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> const& __get__encryptionState() const;

  constexpr void __set__encryptionState(::GlobalNamespace::__EncryptionUtility__IEncryptionState* value);

  constexpr int32_t& __get__lastReceivedRequestIndex();

  constexpr int32_t const& __get__lastReceivedRequestIndex() const;

  constexpr void __set__lastReceivedRequestIndex(int32_t value);

  constexpr uint32_t& __get__lastReceivedRequestId();

  constexpr uint32_t const& __get__lastReceivedRequestId() const;

  constexpr void __set__lastReceivedRequestId(uint32_t value);

  constexpr int32_t& __get__receivedRequestCount();

  constexpr int32_t const& __get__receivedRequestCount() const;

  constexpr void __set__receivedRequestCount(int32_t value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __get__receivedRequest();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __get__receivedRequest() const;

  constexpr void __set__receivedRequest(::ArrayW<bool, ::Array<bool>*> value);

  constexpr uint32_t& __get__currentRequestId();

  constexpr uint32_t const& __get__currentRequestId() const;

  constexpr void __set__currentRequestId(uint32_t value);

  constexpr uint32_t& __get__currentEpoch();

  constexpr uint32_t const& __get__currentEpoch() const;

  constexpr void __set__currentEpoch(uint32_t value);

  /// @brief Method get_isEncrypted addr 0xde5ba0 size 0xac virtual false final false
  inline bool get_isEncrypted();

  /// @brief Method GetNextRequestId addr 0xde5a64 size 0x1c virtual false final false
  inline uint32_t GetNextRequestId();

  /// @brief Method BeginSession addr 0xde59a8 size 0x84 virtual false final false
  inline void BeginSession();

  /// @brief Method IsValidSessionStartRequestId addr 0xde5ad8 size 0x3c virtual false final false
  inline bool IsValidSessionStartRequestId(uint32_t requestId);

  /// @brief Method BeginSession addr 0xde5a2c size 0x38 virtual false final false
  inline void BeginSession(uint32_t requestId);

  /// @brief Method SetEpoch addr 0xde5d94 size 0x24 virtual false final false
  inline void SetEpoch(uint32_t epoch);

  /// @brief Method CanAcceptRequest addr 0xde42d4 size 0x120 virtual false final false
  inline bool CanAcceptRequest(uint32_t requestId);

  /// @brief Method SetEncryptionState addr 0xde5db8 size 0x8 virtual false final false
  inline void SetEncryptionState(::GlobalNamespace::__EncryptionUtility__IEncryptionState* encryptionState);

  /// @brief Method SetIdentity addr 0xde5dc0 size 0x14 virtual false final false
  inline void SetIdentity(uint32_t protocolVersion, ::StringW userId, ::StringW userName);

  /// @brief Method VerifyIdentity addr 0xde5dd4 size 0x6c virtual false final false
  inline bool VerifyIdentity(uint32_t protocolVersion, ::StringW userId, ::StringW userName);

  /// @brief Method Dispose addr 0xde5e40 size 0x10 virtual true final true
  inline void Dispose();

  /// @brief Method LogD addr 0xde5e50 size 0x8c virtual false final false
  static inline void LogD(::StringW message);

  static inline ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState* New_ctor();

  /// @brief Method .ctor addr 0xde5a80 size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler__ConnectionState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnconnectedMessageHandler__ConnectionState(__UnconnectedMessageHandler__ConnectionState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler__ConnectionState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnconnectedMessageHandler__ConnectionState(__UnconnectedMessageHandler__ConnectionState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler__ConnectionState();

public:
  /// @brief Field _userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _userName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____userName;

  /// @brief Field _protocolVersion, offset: 0x20, size: 0x4, def value: None
  uint32_t ____protocolVersion;

  /// @brief Field _hasIdentity, offset: 0x24, size: 0x1, def value: None
  bool ____hasIdentity;

  /// @brief Field _encryptionState, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__EncryptionUtility__IEncryptionState* ____encryptionState;

  /// @brief Field _lastReceivedRequestIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ____lastReceivedRequestIndex;

  /// @brief Field _lastReceivedRequestId, offset: 0x34, size: 0x4, def value: None
  uint32_t ____lastReceivedRequestId;

  /// @brief Field _receivedRequestCount, offset: 0x38, size: 0x4, def value: None
  int32_t ____receivedRequestCount;

  /// @brief Field _receivedRequest, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ____receivedRequest;

  /// @brief Field _currentRequestId, offset: 0x48, size: 0x4, def value: None
  uint32_t ____currentRequestId;

  /// @brief Field _currentEpoch, offset: 0x4c, size: 0x4, def value: None
  uint32_t ____currentEpoch;

  /// @brief Field kEpochBitOffset offset 0xffffffff size 0x4
  static constexpr int32_t kEpochBitOffset{ static_cast<int32_t>(0x18) };

  /// @brief Field kRequestIdRange offset 0xffffffff size 0x4
  static constexpr uint32_t kRequestIdRange{ static_cast<uint32_t>(0xc1u) };

  /// @brief Field kRangeMask offset 0xffffffff size 0x4
  static constexpr uint32_t kRangeMask{ static_cast<uint32_t>(0xffffffc0u) };

  /// @brief Field kEpochMask offset 0xffffffff size 0x4
  static constexpr uint32_t kEpochMask{ static_cast<uint32_t>(0xf0u) };

  /// @brief Field kRequestBufferLength offset 0xffffffff size 0x4
  static constexpr int32_t kRequestBufferLength{ static_cast<int32_t>(0x40) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState, 0x50>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState, ____userId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState, ____userName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState, ____protocolVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState, ____hasIdentity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState, ____encryptionState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState, ____lastReceivedRequestIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState, ____lastReceivedRequestId) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState, ____receivedRequestCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState, ____receivedRequest) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState, ____currentRequestId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState, ____currentEpoch) == 0x4c, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::RequestWaiterId
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12989))
// CS Name: ::UnconnectedMessageHandler::RequestWaiterId
struct CORDL_TYPE __UnconnectedMessageHandler__RequestWaiterId {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId>"
  constexpr operator ::System::IEquatable_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId>*();

  /// @brief Method .ctor addr 0xde4688 size 0xc virtual false final false
  inline void _ctor(::System::Net::IPEndPoint* endPoint, uint32_t requestId);

  /// @brief Method Equals addr 0xde5edc size 0x40 virtual true final true
  inline bool Equals(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId other);

  /// @brief Method Equals addr 0xde5f1c size 0x88 virtual true final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode addr 0xde5fa4 size 0x2c virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "requestId", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __UnconnectedMessageHandler__RequestWaiterId(::System::Net::IPEndPoint* endPoint, uint32_t requestId) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler__RequestWaiterId();

  /// @brief Field endPoint, offset: 0x0, size: 0x8, def value: None
  ::System::Net::IPEndPoint* endPoint;

  /// @brief Field requestId, offset: 0x8, size: 0x4, def value: None
  uint32_t requestId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, 0x10>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, endPoint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, requestId) == 0x8, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::RequestWaiter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12990))
// CS Name: ::UnconnectedMessageHandler::RequestWaiter*
class CORDL_TYPE __UnconnectedMessageHandler__RequestWaiter : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Dispose();

  static inline ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter* New_ctor();

  /// @brief Method .ctor addr 0xde5fd0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler__RequestWaiter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnconnectedMessageHandler__RequestWaiter(__UnconnectedMessageHandler__RequestWaiter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler__RequestWaiter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnconnectedMessageHandler__RequestWaiter(__UnconnectedMessageHandler__RequestWaiter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler__RequestWaiter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter, 0x10>, "Size mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::SentRequestWaiter
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12990)), TypeDefinitionIndex(TypeDefinitionIndex(2681))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12991))
// CS Name: ::UnconnectedMessageHandler::SentRequestWaiter*
class CORDL_TYPE __UnconnectedMessageHandler__SentRequestWaiter : public ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter {
public:
  // Declarations
  /// @brief Field _taskCompletionSource, offset 0x10, size 0x8
  __declspec(property(get = __get__taskCompletionSource, put = __set__taskCompletionSource))::System::Threading::Tasks::TaskCompletionSource_1<bool>* _taskCompletionSource;

  /// @brief Field _disposedCancellationTokenRegistration, offset 0x18, size 0x18
  __declspec(property(get = __get__disposedCancellationTokenRegistration,
                      put = __set__disposedCancellationTokenRegistration))::System::Threading::CancellationTokenRegistration _disposedCancellationTokenRegistration;

  /// @brief Field _requestCancellationTokenRegistration, offset 0x30, size 0x18
  __declspec(property(get = __get__requestCancellationTokenRegistration,
                      put = __set__requestCancellationTokenRegistration))::System::Threading::CancellationTokenRegistration _requestCancellationTokenRegistration;

  __declspec(property(get = get_task))::System::Threading::Tasks::Task* task;

  __declspec(property(get = get_isWaiting)) bool isWaiting;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __get__taskCompletionSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __get__taskCompletionSource() const;

  constexpr void __set__taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  constexpr ::System::Threading::CancellationTokenRegistration& __get__disposedCancellationTokenRegistration();

  constexpr ::System::Threading::CancellationTokenRegistration const& __get__disposedCancellationTokenRegistration() const;

  constexpr void __set__disposedCancellationTokenRegistration(::System::Threading::CancellationTokenRegistration value);

  constexpr ::System::Threading::CancellationTokenRegistration& __get__requestCancellationTokenRegistration();

  constexpr ::System::Threading::CancellationTokenRegistration const& __get__requestCancellationTokenRegistration() const;

  constexpr void __set__requestCancellationTokenRegistration(::System::Threading::CancellationTokenRegistration value);

  static inline ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter* New_ctor(::System::Threading::CancellationToken disposedCancellationToken,
                                                                                                  ::System::Threading::CancellationToken requestCancellationToken);

  /// @brief Method .ctor addr 0xde5fd8 size 0x154 virtual false final false
  inline void _ctor(::System::Threading::CancellationToken disposedCancellationToken, ::System::Threading::CancellationToken requestCancellationToken);

  /// @brief Method Dispose addr 0xde612c size 0xdc virtual true final false
  inline void Dispose();

  /// @brief Method Complete addr 0xde4694 size 0xd4 virtual false final false
  inline void Complete(bool handled);

  /// @brief Method Cancel addr 0xde626c size 0x50 virtual false final false
  inline void Cancel();

  /// @brief Method get_task addr 0xde62bc size 0x48 virtual false final false
  inline ::System::Threading::Tasks::Task* get_task();

  /// @brief Method get_isWaiting addr 0xde6208 size 0x64 virtual false final false
  inline bool get_isWaiting();

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler__SentRequestWaiter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnconnectedMessageHandler__SentRequestWaiter(__UnconnectedMessageHandler__SentRequestWaiter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler__SentRequestWaiter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnconnectedMessageHandler__SentRequestWaiter(__UnconnectedMessageHandler__SentRequestWaiter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler__SentRequestWaiter();

public:
  /// @brief Field _taskCompletionSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ____taskCompletionSource;

  /// @brief Field _disposedCancellationTokenRegistration, offset: 0x18, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration ____disposedCancellationTokenRegistration;

  /// @brief Field _requestCancellationTokenRegistration, offset: 0x30, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration ____requestCancellationTokenRegistration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter, 0x48>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter, ____taskCompletionSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter, ____disposedCancellationTokenRegistration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter, ____requestCancellationTokenRegistration) == 0x30, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::RequestResponseWaiter
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2681)), TypeDefinitionIndex(TypeDefinitionIndex(12990))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12992))
// CS Name: ::UnconnectedMessageHandler::RequestResponseWaiter*
class CORDL_TYPE __UnconnectedMessageHandler__RequestResponseWaiter : public ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter {
public:
  // Declarations
  /// @brief Field _taskCompletionSource, offset 0x10, size 0x8
  __declspec(property(get = __get__taskCompletionSource,
                      put = __set__taskCompletionSource))::System::Threading::Tasks::TaskCompletionSource_1<::BGNet::Core::Messages::IUnconnectedMessage*>* _taskCompletionSource;

  /// @brief Field _disposedCancellationTokenRegistration, offset 0x18, size 0x18
  __declspec(property(get = __get__disposedCancellationTokenRegistration,
                      put = __set__disposedCancellationTokenRegistration))::System::Threading::CancellationTokenRegistration _disposedCancellationTokenRegistration;

  /// @brief Field _requestCancellationTokenRegistration, offset 0x30, size 0x18
  __declspec(property(get = __get__requestCancellationTokenRegistration,
                      put = __set__requestCancellationTokenRegistration))::System::Threading::CancellationTokenRegistration _requestCancellationTokenRegistration;

  __declspec(property(get = get_task))::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::IUnconnectedMessage*>* task;

  __declspec(property(get = get_isWaiting)) bool isWaiting;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::BGNet::Core::Messages::IUnconnectedMessage*>*& __get__taskCompletionSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::BGNet::Core::Messages::IUnconnectedMessage*>*> const& __get__taskCompletionSource() const;

  constexpr void __set__taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<::BGNet::Core::Messages::IUnconnectedMessage*>* value);

  constexpr ::System::Threading::CancellationTokenRegistration& __get__disposedCancellationTokenRegistration();

  constexpr ::System::Threading::CancellationTokenRegistration const& __get__disposedCancellationTokenRegistration() const;

  constexpr void __set__disposedCancellationTokenRegistration(::System::Threading::CancellationTokenRegistration value);

  constexpr ::System::Threading::CancellationTokenRegistration& __get__requestCancellationTokenRegistration();

  constexpr ::System::Threading::CancellationTokenRegistration const& __get__requestCancellationTokenRegistration() const;

  constexpr void __set__requestCancellationTokenRegistration(::System::Threading::CancellationTokenRegistration value);

  static inline ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter* New_ctor(::System::Threading::CancellationToken disposedCancellationToken,
                                                                                                      ::System::Threading::CancellationToken requestCancellationToken);

  /// @brief Method .ctor addr 0xde6304 size 0x154 virtual false final false
  inline void _ctor(::System::Threading::CancellationToken disposedCancellationToken, ::System::Threading::CancellationToken requestCancellationToken);

  /// @brief Method Dispose addr 0xde6458 size 0xdc virtual true final false
  inline void Dispose();

  /// @brief Method Complete addr 0xde4768 size 0xd8 virtual false final false
  inline void Complete(::BGNet::Core::Messages::IUnconnectedMessage* response);

  /// @brief Method Fail addr 0xde6598 size 0x58 virtual false final false
  inline void Fail(::System::Exception* ex);

  /// @brief Method Cancel addr 0xde65f0 size 0x50 virtual false final false
  inline void Cancel();

  /// @brief Method get_task addr 0xde6640 size 0x48 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::IUnconnectedMessage*>* get_task();

  /// @brief Method get_isWaiting addr 0xde6534 size 0x64 virtual false final false
  inline bool get_isWaiting();

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler__RequestResponseWaiter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnconnectedMessageHandler__RequestResponseWaiter(__UnconnectedMessageHandler__RequestResponseWaiter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler__RequestResponseWaiter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnconnectedMessageHandler__RequestResponseWaiter(__UnconnectedMessageHandler__RequestResponseWaiter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler__RequestResponseWaiter();

public:
  /// @brief Field _taskCompletionSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::BGNet::Core::Messages::IUnconnectedMessage*>* ____taskCompletionSource;

  /// @brief Field _disposedCancellationTokenRegistration, offset: 0x18, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration ____disposedCancellationTokenRegistration;

  /// @brief Field _requestCancellationTokenRegistration, offset: 0x30, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration ____requestCancellationTokenRegistration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter, 0x48>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter, ____taskCompletionSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter, ____disposedCancellationTokenRegistration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter, ____requestCancellationTokenRegistration) == 0x30, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::MultipartMessageWaiter
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 50, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12990))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12993))
// CS Name: ::UnconnectedMessageHandler::MultipartMessageWaiter*
class CORDL_TYPE __UnconnectedMessageHandler__MultipartMessageWaiter : public ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter {
public:
  // Declarations
  /// @brief Field _bufferPool, offset 0x10, size 0x8
  __declspec(property(get = __get__bufferPool, put = __set__bufferPool))::GlobalNamespace::SmallBufferPool* _bufferPool;

  /// @brief Field _buffer, offset 0x18, size 0x8
  __declspec(property(get = __get__buffer, put = __set__buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer;

  /// @brief Field _length, offset 0x20, size 0x4
  __declspec(property(get = __get__length, put = __set__length)) int32_t _length;

  /// @brief Field _ranges, offset 0x28, size 0x8
  __declspec(property(get = __get__ranges, put = __set__ranges))::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>* _ranges;

  /// @brief Field _isComplete, offset 0x30, size 0x1
  __declspec(property(get = __get__isComplete, put = __set__isComplete)) bool _isComplete;

  /// @brief Field _isDisposed, offset 0x31, size 0x1
  __declspec(property(get = __get__isDisposed, put = __set__isDisposed)) bool _isDisposed;

  __declspec(property(get = get_isWaiting)) bool isWaiting;

  __declspec(property(get = get_data))::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  __declspec(property(get = get_length)) int32_t length;

  constexpr ::GlobalNamespace::SmallBufferPool*& __get__bufferPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SmallBufferPool*> const& __get__bufferPool() const;

  constexpr void __set__bufferPool(::GlobalNamespace::SmallBufferPool* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__buffer() const;

  constexpr void __set__buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get__length();

  constexpr int32_t const& __get__length() const;

  constexpr void __set__length(int32_t value);

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>*& __get__ranges();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>*> const& __get__ranges() const;

  constexpr void __set__ranges(::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>* value);

  constexpr bool& __get__isComplete();

  constexpr bool const& __get__isComplete() const;

  constexpr void __set__isComplete(bool value);

  constexpr bool& __get__isDisposed();

  constexpr bool const& __get__isDisposed() const;

  constexpr void __set__isDisposed(bool value);

  static inline ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter* New_ctor(::GlobalNamespace::SmallBufferPool* bufferPool);

  /// @brief Method .ctor addr 0xde6688 size 0x90 virtual false final false
  inline void _ctor(::GlobalNamespace::SmallBufferPool* bufferPool);

  /// @brief Method Dispose addr 0xde6718 size 0x38 virtual true final false
  inline void Dispose();

  /// @brief Method Append addr 0xde6750 size 0x6a0 virtual false final false
  inline void Append(::BGNet::Core::Messages::IUnconnectedMultipartMessage* packet);

  /// @brief Method get_isWaiting addr 0xde6df0 size 0x20 virtual false final false
  inline bool get_isWaiting();

  /// @brief Method get_data addr 0xde6e10 size 0x8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_data();

  /// @brief Method get_length addr 0xde6e18 size 0x8 virtual false final false
  inline int32_t get_length();

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler__MultipartMessageWaiter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnconnectedMessageHandler__MultipartMessageWaiter(__UnconnectedMessageHandler__MultipartMessageWaiter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler__MultipartMessageWaiter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnconnectedMessageHandler__MultipartMessageWaiter(__UnconnectedMessageHandler__MultipartMessageWaiter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler__MultipartMessageWaiter();

public:
  /// @brief Field _bufferPool, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::SmallBufferPool* ____bufferPool;

  /// @brief Field _buffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____buffer;

  /// @brief Field _length, offset: 0x20, size: 0x4, def value: None
  int32_t ____length;

  /// @brief Field _ranges, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>* ____ranges;

  /// @brief Field _isComplete, offset: 0x30, size: 0x1, def value: None
  bool ____isComplete;

  /// @brief Field _isDisposed, offset: 0x31, size: 0x1, def value: None
  bool ____isDisposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter, 0x38>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter, ____bufferPool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter, ____buffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter, ____length) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter, ____ranges) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter, ____isComplete) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter, ____isDisposed) == 0x31, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::MessageOrigin
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12994))
// CS Name: ::UnconnectedMessageHandler::MessageOrigin
struct CORDL_TYPE __UnconnectedMessageHandler__MessageOrigin {
public:
  // Declarations
  /// @brief Method .ctor addr 0xde5938 size 0xc virtual false final false
  inline void _ctor(::System::Net::IPEndPoint* endPoint, uint32_t protocolVersion);

  // Ctor Parameters [CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value:
  // None }]
  constexpr __UnconnectedMessageHandler__MessageOrigin(::System::Net::IPEndPoint* endPoint, uint32_t protocolVersion) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler__MessageOrigin();

  /// @brief Field endPoint, offset: 0x0, size: 0x8, def value: None
  ::System::Net::IPEndPoint* endPoint;

  /// @brief Field protocolVersion, offset: 0x8, size: 0x4, def value: None
  uint32_t protocolVersion;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, 0x10>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, endPoint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, protocolVersion) == 0x8, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<>c__DisplayClass46_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12995))
// CS Name: ::UnconnectedMessageHandler::<>c__DisplayClass46_0`1<T>*
class CORDL_TYPE __UnconnectedMessageHandler____c__DisplayClass46_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field obtain, offset 0x10, size 0x8
  __declspec(property(get = __get_obtain, put = __set_obtain))::System::Func_2<uint32_t, T>* obtain;

  constexpr ::System::Func_2<uint32_t, T>*& __get_obtain();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<uint32_t, T>*> const& __get_obtain() const;

  constexpr void __set_obtain(::System::Func_2<uint32_t, T>* value);

  static inline ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass46_0_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <ObtainVersioned>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T _ObtainVersioned_b__0(::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin);

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler____c__DisplayClass46_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnconnectedMessageHandler____c__DisplayClass46_0_1(__UnconnectedMessageHandler____c__DisplayClass46_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler____c__DisplayClass46_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnconnectedMessageHandler____c__DisplayClass46_0_1(__UnconnectedMessageHandler____c__DisplayClass46_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler____c__DisplayClass46_0_1();

public:
  /// @brief Field obtain, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<uint32_t, T>* ___obtain;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
// Type: ::<>c__DisplayClass52_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12996))
// CS Name: ::UnconnectedMessageHandler::<>c__DisplayClass52_0`1<T>*
class CORDL_TYPE __UnconnectedMessageHandler____c__DisplayClass52_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this;

  /// @brief Field customHandler, offset 0x18, size 0x8
  __declspec(property(get = __get_customHandler, put = __set_customHandler))::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>* customHandler;

  constexpr ::BGNet::Core::Messages::UnconnectedMessageHandler*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::Messages::UnconnectedMessageHandler*> const& __get___4__this() const;

  constexpr void __set___4__this(::BGNet::Core::Messages::UnconnectedMessageHandler* value);

  constexpr ::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*& __get_customHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*> const& __get_customHandler() const;

  constexpr void __set_customHandler(::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>* value);

  static inline ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <CustomResponseHandler>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _CustomResponseHandler_b__0(T packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin);

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler____c__DisplayClass52_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnconnectedMessageHandler____c__DisplayClass52_0_1(__UnconnectedMessageHandler____c__DisplayClass52_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler____c__DisplayClass52_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnconnectedMessageHandler____c__DisplayClass52_0_1(__UnconnectedMessageHandler____c__DisplayClass52_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler____c__DisplayClass52_0_1();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::BGNet::Core::Messages::UnconnectedMessageHandler* _____4__this;

  /// @brief Field customHandler, offset: 0x18, size: 0x8, def value: None
  ::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>* ___customHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
// Type: ::<>c__DisplayClass53_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12997))
// CS Name: ::UnconnectedMessageHandler::<>c__DisplayClass53_0`1<T>*
class CORDL_TYPE __UnconnectedMessageHandler____c__DisplayClass53_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this;

  /// @brief Field customHandler, offset 0x18, size 0x8
  __declspec(property(get = __get_customHandler, put = __set_customHandler))::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>* customHandler;

  constexpr ::BGNet::Core::Messages::UnconnectedMessageHandler*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::Messages::UnconnectedMessageHandler*> const& __get___4__this() const;

  constexpr void __set___4__this(::BGNet::Core::Messages::UnconnectedMessageHandler* value);

  constexpr ::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*& __get_customHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*> const& __get_customHandler() const;

  constexpr void __set_customHandler(::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>* value);

  static inline ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <CustomUnreliableResponseHandler>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _CustomUnreliableResponseHandler_b__0(T packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin);

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler____c__DisplayClass53_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnconnectedMessageHandler____c__DisplayClass53_0_1(__UnconnectedMessageHandler____c__DisplayClass53_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler____c__DisplayClass53_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnconnectedMessageHandler____c__DisplayClass53_0_1(__UnconnectedMessageHandler____c__DisplayClass53_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler____c__DisplayClass53_0_1();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::BGNet::Core::Messages::UnconnectedMessageHandler* _____4__this;

  /// @brief Field customHandler, offset: 0x18, size: 0x8, def value: None
  ::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>* ___customHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
// Type: ::<GetAndSendResponse>d__57`2
// SizeInfo { instance_size: 96, native_size: 112, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// cpp template
template <typename TRequest, typename TResponse>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3388)), TypeDefinitionIndex(TypeDefinitionIndex(12994)), TypeDefinitionIndex(TypeDefinitionIndex(3395))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12998))
// CS Name: ::UnconnectedMessageHandler::<GetAndSendResponse>d__57`2<TRequest,TResponse>
struct CORDL_TYPE __UnconnectedMessageHandler___GetAndSendResponse_d__57_2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::UnconnectedMessageHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "request", ty: "TRequest", modifiers: "", def_value: None }, CppParam { name: "origin", ty:
  // "::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin", modifiers: "", def_value: None }, CppParam { name: "tryGetResponse", ty:
  // "::System::Func_3<TRequest,::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin,::System::Threading::Tasks::Task_1<TResponse>*>*", modifiers: "", def_value: None }, CppParam {
  // name: "getFailureResponse", ty: "::System::Func_1<TResponse>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None }]
  constexpr __UnconnectedMessageHandler___GetAndSendResponse_d__57_2(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this, TRequest request,
      ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin,
      ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse,
      ::System::Func_1<TResponse>* getFailureResponse, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler___GetAndSendResponse_d__57_2();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this;

  /// @brief Field request, offset: 0x30, size: 0x8, def value: None
  TRequest request;

  /// @brief Field origin, offset: 0x38, size: 0x10, def value: None
  ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin;

  /// @brief Field tryGetResponse, offset: 0x48, size: 0x8, def value: None
  ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse;

  /// @brief Field getFailureResponse, offset: 0x50, size: 0x8, def value: None
  ::System::Func_1<TResponse>* getFailureResponse;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
// Type: ::<GetAndSendResponseAsync>d__58`2
// SizeInfo { instance_size: 96, native_size: 112, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// cpp template
template <typename TRequest, typename TResponse>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12994)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(3396)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 1963 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(12999)) CS Name:
// ::UnconnectedMessageHandler::<GetAndSendResponseAsync>d__58`2<TRequest,TResponse>
struct CORDL_TYPE __UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "tryGetResponse", ty:
  // "::System::Func_3<TRequest,::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin,::System::Threading::Tasks::Task_1<TResponse>*>*", modifiers: "", def_value: None }, CppParam {
  // name: "request", ty: "TRequest", modifiers: "", def_value: None }, CppParam { name: "origin", ty: "::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin", modifiers: "", def_value:
  // None }, CppParam { name: "getFailureResponse", ty: "::System::Func_1<TResponse>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BGNet::Core::Messages::UnconnectedMessageHandler*", modifiers: "", def_value: None }, CppParam { name: "_response_5__2", ty: "TResponse", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>", modifiers: "", def_value: None }]
  constexpr __UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
      ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse, TRequest request,
      ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin, ::System::Func_1<TResponse>* getFailureResponse, ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this,
      TResponse _response_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field tryGetResponse, offset: 0x20, size: 0x8, def value: None
  ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse;

  /// @brief Field request, offset: 0x28, size: 0x8, def value: None
  TRequest request;

  /// @brief Field origin, offset: 0x30, size: 0x10, def value: None
  ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin;

  /// @brief Field getFailureResponse, offset: 0x40, size: 0x8, def value: None
  ::System::Func_1<TResponse>* getFailureResponse;

  /// @brief Field <>4__this, offset: 0x48, size: 0x8, def value: None
  ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this;

  /// @brief Field <response>5__2, offset: 0x50, size: 0x8, def value: None
  TResponse _response_5__2;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
// Type: ::<GetAndSendUnreilableResponse>d__59`2
// SizeInfo { instance_size: 104, native_size: 120, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// cpp template
template <typename TRequest, typename TResponse>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(12994)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst:
// 1964 }), TypeDefinitionIndex(TypeDefinitionIndex(3389))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13000)) CS Name:
// ::UnconnectedMessageHandler::<GetAndSendUnreilableResponse>d__59`2<TRequest,TResponse>
struct CORDL_TYPE __UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "tryGetResponse", ty:
  // "::System::Func_3<TRequest,::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin,::System::Threading::Tasks::Task_1<TResponse>*>*", modifiers: "", def_value: None }, CppParam {
  // name: "request", ty: "TRequest", modifiers: "", def_value: None }, CppParam { name: "origin", ty: "::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin", modifiers: "", def_value:
  // None }, CppParam { name: "getFailureResponse", ty: "::System::Func_1<TResponse>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BGNet::Core::Messages::UnconnectedMessageHandler*", modifiers: "", def_value: None }, CppParam { name: "_response_5__2", ty: "TResponse", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>", modifiers: "", def_value: None }]
  constexpr __UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
      ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse, TRequest request,
      ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin, ::System::Func_1<TResponse>* getFailureResponse, ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this,
      TResponse _response_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field tryGetResponse, offset: 0x28, size: 0x8, def value: None
  ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse;

  /// @brief Field request, offset: 0x30, size: 0x8, def value: None
  TRequest request;

  /// @brief Field origin, offset: 0x38, size: 0x10, def value: None
  ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin;

  /// @brief Field getFailureResponse, offset: 0x48, size: 0x8, def value: None
  ::System::Func_1<TResponse>* getFailureResponse;

  /// @brief Field <>4__this, offset: 0x50, size: 0x8, def value: None
  ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this;

  /// @brief Field <response>5__2, offset: 0x58, size: 0x8, def value: None
  TResponse _response_5__2;

  /// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
// Type: ::<SendMessageWithRetry>d__72
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3388)), TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(2675))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13001))
// CS Name: ::UnconnectedMessageHandler::<SendMessageWithRetry>d__72
struct CORDL_TYPE __UnconnectedMessageHandler___SendMessageWithRetry_d__72 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xde6e20 size 0x2a8 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xde70c8 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::UnconnectedMessageHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty: "::System::Net::IPEndPoint*",
  // modifiers: "", def_value: None }, CppParam { name: "message", ty: "::BGNet::Core::Messages::IUnconnectedReliableRequest*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken",
  // ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None
  // }]
  constexpr __UnconnectedMessageHandler___SendMessageWithRetry_d__72(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                     ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this, uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint,
                                                                     ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::System::Threading::CancellationToken cancellationToken,
                                                                     ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler___SendMessageWithRetry_d__72();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this;

  /// @brief Field protocolVersion, offset: 0x30, size: 0x4, def value: None
  uint32_t protocolVersion;

  /// @brief Field remoteEndPoint, offset: 0x38, size: 0x8, def value: None
  ::System::Net::IPEndPoint* remoteEndPoint;

  /// @brief Field message, offset: 0x40, size: 0x8, def value: None
  ::BGNet::Core::Messages::IUnconnectedReliableRequest* message;

  /// @brief Field cancellationToken, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72, 0x58>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72, protocolVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72, remoteEndPoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72, message) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72, cancellationToken) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72, __u__1) == 0x50, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<>c__DisplayClass74_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13002))
// CS Name: ::UnconnectedMessageHandler::<>c__DisplayClass74_0*
class CORDL_TYPE __UnconnectedMessageHandler____c__DisplayClass74_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this;

  /// @brief Field protocolVersion, offset 0x18, size 0x4
  __declspec(property(get = __get_protocolVersion, put = __set_protocolVersion)) uint32_t protocolVersion;

  /// @brief Field remoteEndPoint, offset 0x20, size 0x8
  __declspec(property(get = __get_remoteEndPoint, put = __set_remoteEndPoint))::System::Net::IPEndPoint* remoteEndPoint;

  /// @brief Field cancellationToken, offset 0x28, size 0x8
  __declspec(property(get = __get_cancellationToken, put = __set_cancellationToken))::System::Threading::CancellationToken cancellationToken;

  constexpr ::BGNet::Core::Messages::UnconnectedMessageHandler*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::Messages::UnconnectedMessageHandler*> const& __get___4__this() const;

  constexpr void __set___4__this(::BGNet::Core::Messages::UnconnectedMessageHandler* value);

  constexpr uint32_t& __get_protocolVersion();

  constexpr uint32_t const& __get_protocolVersion() const;

  constexpr void __set_protocolVersion(uint32_t value);

  constexpr ::System::Net::IPEndPoint*& __get_remoteEndPoint();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& __get_remoteEndPoint() const;

  constexpr void __set_remoteEndPoint(::System::Net::IPEndPoint* value);

  constexpr ::System::Threading::CancellationToken& __get_cancellationToken();

  constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

  constexpr void __set_cancellationToken(::System::Threading::CancellationToken value);

  static inline ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0* New_ctor();

  /// @brief Method .ctor addr 0xde70d4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SendMultipartMessageWithRetryAsync>b__0 addr 0xde70dc size 0xf4 virtual false final false
  inline ::System::Threading::Tasks::Task* _SendMultipartMessageWithRetryAsync_b__0(::BGNet::Core::Messages::IUnconnectedReliableRequest* mm);

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler____c__DisplayClass74_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnconnectedMessageHandler____c__DisplayClass74_0(__UnconnectedMessageHandler____c__DisplayClass74_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler____c__DisplayClass74_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnconnectedMessageHandler____c__DisplayClass74_0(__UnconnectedMessageHandler____c__DisplayClass74_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler____c__DisplayClass74_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::BGNet::Core::Messages::UnconnectedMessageHandler* _____4__this;

  /// @brief Field protocolVersion, offset: 0x18, size: 0x4, def value: None
  uint32_t ___protocolVersion;

  /// @brief Field remoteEndPoint, offset: 0x20, size: 0x8, def value: None
  ::System::Net::IPEndPoint* ___remoteEndPoint;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0, ___protocolVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0, ___remoteEndPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0, ___cancellationToken) == 0x28, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<SendMultipartMessageWithRetryAsync>d__74
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3388)), TypeDefinitionIndex(TypeDefinitionIndex(3396)), TypeDefinitionIndex(TypeDefinitionIndex(2675))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13003))
// CS Name: ::UnconnectedMessageHandler::<SendMultipartMessageWithRetryAsync>d__74
struct CORDL_TYPE __UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xde71d0 size 0x800 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xde79d0 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::UnconnectedMessageHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty: "::System::Net::IPEndPoint*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "message", ty:
  // "::BGNet::Core::Messages::IUnconnectedReliableRequest*", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::LiteNetLib::Utils::NetDataWriter*", modifiers: "", def_value: None },
  // CppParam { name: "onSendFailed", ty:
  // "::System::Func_5<uint32_t,::System::Net::IPEndPoint*,::BGNet::Core::Messages::IUnconnectedReliableRequest*,::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*", modifiers:
  // "", def_value: None }, CppParam { name: "__8__1", ty: "::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0*", modifiers: "", def_value: None }, CppParam { name:
  // "_shouldReleaseMessage_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name:
  // "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                   ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this, uint32_t protocolVersion,
                                                                                   ::System::Net::IPEndPoint* remoteEndPoint, ::System::Threading::CancellationToken cancellationToken,
                                                                                   ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::LiteNetLib::Utils::NetDataWriter* data,
                                                                                   ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                                    ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* onSendFailed,
                                                                                   ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0* __8__1, bool _shouldReleaseMessage_5__2,
                                                                                   ::System::Object* __7__wrap2, int32_t __7__wrap3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this;

  /// @brief Field protocolVersion, offset: 0x28, size: 0x4, def value: None
  uint32_t protocolVersion;

  /// @brief Field remoteEndPoint, offset: 0x30, size: 0x8, def value: None
  ::System::Net::IPEndPoint* remoteEndPoint;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field message, offset: 0x40, size: 0x8, def value: None
  ::BGNet::Core::Messages::IUnconnectedReliableRequest* message;

  /// @brief Field data, offset: 0x48, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* data;

  /// @brief Field onSendFailed, offset: 0x50, size: 0x8, def value: None
  ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*
      onSendFailed;

  /// @brief Field <>8__1, offset: 0x58, size: 0x8, def value: None
  ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0* __8__1;

  /// @brief Field <shouldReleaseMessage>5__2, offset: 0x60, size: 0x1, def value: None
  bool _shouldReleaseMessage_5__2;

  /// @brief Field <>7__wrap2, offset: 0x68, size: 0x8, def value: None
  ::System::Object* __7__wrap2;

  /// @brief Field <>7__wrap3, offset: 0x70, size: 0x4, def value: None
  int32_t __7__wrap3;

  /// @brief Field <>u__1, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74, 0x80>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74, protocolVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74, remoteEndPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74, message) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74, data) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74, onSendFailed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74, __8__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74, _shouldReleaseMessage_5__2) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74, __7__wrap2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74, __7__wrap3) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74, __u__1) == 0x78, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<SendMessageWithRetryAsyncInternal>d__75
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(2783)),
// TypeDefinitionIndex(TypeDefinitionIndex(3388)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 396 }), TypeDefinitionIndex(TypeDefinitionIndex(3396)),
// TypeDefinitionIndex(TypeDefinitionIndex(12989))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13004)) CS Name: ::UnconnectedMessageHandler::<SendMessageWithRetryAsyncInternal>d__75
struct CORDL_TYPE __UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xde79dc size 0x98c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xde8368 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::UnconnectedMessageHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty:
  // "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::BGNet::Core::Messages::IUnconnectedReliableRequest*", modifiers: "", def_value: None }, CppParam
  // { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "onSendFailed", ty:
  // "::System::Func_5<uint32_t,::System::Net::IPEndPoint*,::BGNet::Core::Messages::IUnconnectedReliableRequest*,::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*", modifiers:
  // "", def_value: None }, CppParam { name: "_sentRequest_5__2", ty: "::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*", modifiers: "", def_value: None }, CppParam { name:
  // "_waiterId_5__3", ty: "::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId", modifiers: "", def_value: None }, CppParam { name: "_shouldReleaseMessage_5__4", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap5", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "_i_5__7", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this,
      ::System::Threading::CancellationToken cancellationToken, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, uint32_t protocolVersion,
      ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*
          onSendFailed,
      ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter* _sentRequest_5__2, ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId _waiterId_5__3,
      bool _shouldReleaseMessage_5__4, ::System::Object* __7__wrap4, int32_t __7__wrap5, int32_t _i_5__7, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field remoteEndPoint, offset: 0x30, size: 0x8, def value: None
  ::System::Net::IPEndPoint* remoteEndPoint;

  /// @brief Field message, offset: 0x38, size: 0x8, def value: None
  ::BGNet::Core::Messages::IUnconnectedReliableRequest* message;

  /// @brief Field protocolVersion, offset: 0x40, size: 0x4, def value: None
  uint32_t protocolVersion;

  /// @brief Field onSendFailed, offset: 0x48, size: 0x8, def value: None
  ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*
      onSendFailed;

  /// @brief Field <sentRequest>5__2, offset: 0x50, size: 0x8, def value: None
  ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter* _sentRequest_5__2;

  /// @brief Field <waiterId>5__3, offset: 0x58, size: 0x10, def value: None
  ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId _waiterId_5__3;

  /// @brief Field <shouldReleaseMessage>5__4, offset: 0x68, size: 0x1, def value: None
  bool _shouldReleaseMessage_5__4;

  /// @brief Field <>7__wrap4, offset: 0x70, size: 0x8, def value: None
  ::System::Object* __7__wrap4;

  /// @brief Field <>7__wrap5, offset: 0x78, size: 0x4, def value: None
  int32_t __7__wrap5;

  /// @brief Field <i>5__7, offset: 0x7c, size: 0x4, def value: None
  int32_t _i_5__7;

  /// @brief Field <>u__1, offset: 0x80, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1;

  /// @brief Field <>u__2, offset: 0x88, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, 0x90>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, remoteEndPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, message) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, protocolVersion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, onSendFailed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, _sentRequest_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, _waiterId_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, _shouldReleaseMessage_5__4) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, __7__wrap4) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, __7__wrap5) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, _i_5__7) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, __u__1) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, __u__2) == 0x88, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<SendMessageWithRetryAwaitResponseAsync>d__76`1
// SizeInfo { instance_size: 120, native_size: 136, calculated_instance_size: 120, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12989)), TypeDefinitionIndex(TypeDefinitionIndex(12979)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst:
// 105 }), TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3388)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 4957 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3389))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13005)) CS Name:
// ::UnconnectedMessageHandler::<SendMessageWithRetryAwaitResponseAsync>d__76`1<T>
struct CORDL_TYPE __UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::UnconnectedMessageHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty:
  // "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::BGNet::Core::Messages::IUnconnectedReliableRequest*", modifiers: "", def_value: None }, CppParam
  // { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "onSendFailedAwaitResponse", ty:
  // "::System::Func_5<uint32_t,::System::Net::IPEndPoint*,::BGNet::Core::Messages::IUnconnectedReliableRequest*,::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<T>*>*",
  // modifiers: "", def_value: None }, CppParam { name: "_request_5__2", ty: "::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*", modifiers: "", def_value: None }, CppParam
  // { name: "_waiterId_5__3", ty: "::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedMessage*>", modifiers: "", def_value: None }]
  constexpr __UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this,
      ::System::Threading::CancellationToken cancellationToken, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, uint32_t protocolVersion,
      ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>*
          onSendFailedAwaitResponse,
      ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter* _request_5__2, ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId _waiterId_5__3,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedMessage*> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field remoteEndPoint, offset: 0x30, size: 0x8, def value: None
  ::System::Net::IPEndPoint* remoteEndPoint;

  /// @brief Field message, offset: 0x38, size: 0x8, def value: None
  ::BGNet::Core::Messages::IUnconnectedReliableRequest* message;

  /// @brief Field protocolVersion, offset: 0x40, size: 0x4, def value: None
  uint32_t protocolVersion;

  /// @brief Field onSendFailedAwaitResponse, offset: 0x48, size: 0x8, def value: None
  ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>*
      onSendFailedAwaitResponse;

  /// @brief Field <request>5__2, offset: 0x50, size: 0x8, def value: None
  ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter* _request_5__2;

  /// @brief Field <waiterId>5__3, offset: 0x58, size: 0x10, def value: None
  ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId _waiterId_5__3;

  /// @brief Field <>u__1, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedMessage*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
// Type: ::<<WrapOnSendFailedAwaitResponse>b__0>d
// SizeInfo { instance_size: 88, native_size: 104, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 4 }), TypeDefinitionIndex(TypeDefinitionIndex(3396)),
// TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3389))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13006)) CS Name:
// ::UnconnectedMessageHandler::<>c__DisplayClass77_0`1::<<WrapOnSendFailedAwaitResponse>b__0>d<T>
struct CORDL_TYPE __UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>*", modifiers: "", def_value: None }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "remoteEndPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "message", ty:
  // "::BGNet::Core::Messages::IUnconnectedReliableRequest*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__7__wrap1", ty: "::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*", modifiers: "", def_value: None }, CppParam { name: "__u__1",
  // ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: None }]
  constexpr __UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>* __4__this,
      uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::System::Threading::CancellationToken cancellationToken,
      ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter* __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>* __4__this;

  /// @brief Field protocolVersion, offset: 0x28, size: 0x4, def value: None
  uint32_t protocolVersion;

  /// @brief Field remoteEndPoint, offset: 0x30, size: 0x8, def value: None
  ::System::Net::IPEndPoint* remoteEndPoint;

  /// @brief Field message, offset: 0x38, size: 0x8, def value: None
  ::BGNet::Core::Messages::IUnconnectedReliableRequest* message;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>7__wrap1, offset: 0x48, size: 0x8, def value: None
  ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter* __7__wrap1;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass77_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13007))
// CS Name: ::UnconnectedMessageHandler::<>c__DisplayClass77_0`1<T>*
class CORDL_TYPE __UnconnectedMessageHandler____c__DisplayClass77_0_1 : public ::System::Object {
public:
  // Declarations
  using __WrapOnSendFailedAwaitResponse_b__0_d = ::GlobalNamespace::__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d<T>;

  /// @brief Field waiter, offset 0x10, size 0x8
  __declspec(property(get = __get_waiter, put = __set_waiter))::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter* waiter;

  /// @brief Field onSendFailed, offset 0x18, size 0x8
  __declspec(property(get = __get_onSendFailed, put = __set_onSendFailed))::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                           ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>* onSendFailed;

  constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*& __get_waiter();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*> const& __get_waiter() const;

  constexpr void __set_waiter(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter* value);

  constexpr ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken,
                             ::System::Threading::Tasks::Task_1<T>*>*&
  __get_onSendFailed();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken,
                                                                 ::System::Threading::Tasks::Task_1<T>*>*> const&
  __get_onSendFailed() const;

  constexpr void __set_onSendFailed(::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken,
                                                     ::System::Threading::Tasks::Task_1<T>*>* value);

  static inline ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <WrapOnSendFailedAwaitResponse>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Threading::Tasks::Task* _WrapOnSendFailedAwaitResponse_b__0(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint,
                                                                               ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler____c__DisplayClass77_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnconnectedMessageHandler____c__DisplayClass77_0_1(__UnconnectedMessageHandler____c__DisplayClass77_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnconnectedMessageHandler____c__DisplayClass77_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnconnectedMessageHandler____c__DisplayClass77_0_1(__UnconnectedMessageHandler____c__DisplayClass77_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler____c__DisplayClass77_0_1();

public:
  /// @brief Field waiter, offset: 0x10, size: 0x8, def value: None
  ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter* ___waiter;

  /// @brief Field onSendFailed, offset: 0x18, size: 0x8, def value: None
  ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>*
      ___onSendFailed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
// Type: ::<AwaitResponseAsync>d__78`1
// SizeInfo { instance_size: 88, native_size: 104, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 74 }), TypeDefinitionIndex(TypeDefinitionIndex(3389)),
// TypeDefinitionIndex(TypeDefinitionIndex(2675)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 4957 }), TypeDefinitionIndex(TypeDefinitionIndex(3397)),
// TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(12989))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13008)) CS Name:
// ::UnconnectedMessageHandler::<AwaitResponseAsync>d__78`1<T>
struct CORDL_TYPE __UnconnectedMessageHandler___AwaitResponseAsync_d__78_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::UnconnectedMessageHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty:
  // "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "requestId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_waiterId_5__2", ty:
  // "::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedMessage*>", modifiers: "", def_value: None }]
  constexpr __UnconnectedMessageHandler___AwaitResponseAsync_d__78_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder,
                                                                     ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                     ::System::Net::IPEndPoint* remoteEndPoint, uint32_t requestId,
                                                                     ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId _waiterId_5__2,
                                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedMessage*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnconnectedMessageHandler___AwaitResponseAsync_d__78_1();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field remoteEndPoint, offset: 0x30, size: 0x8, def value: None
  ::System::Net::IPEndPoint* remoteEndPoint;

  /// @brief Field requestId, offset: 0x38, size: 0x4, def value: None
  uint32_t requestId;

  /// @brief Field <waiterId>5__2, offset: 0x40, size: 0x10, def value: None
  ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId _waiterId_5__2;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedMessage*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
// Type: BGNet.Core.Messages::UnconnectedMessageHandler
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13009))
// CS Name: ::BGNet.Core.Messages::UnconnectedMessageHandler*
class CORDL_TYPE UnconnectedMessageHandler : public ::System::Object {
public:
  // Declarations
  template <typename T> using _AwaitResponseAsync_d__78_1 = ::BGNet::Core::Messages::__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1<T>;

  template <typename T> using __c__DisplayClass77_0_1 = ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>;

  template <typename T> using _SendMessageWithRetryAwaitResponseAsync_d__76_1 = ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1<T>;

  using _SendMessageWithRetryAsyncInternal_d__75 = ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75;

  using _SendMultipartMessageWithRetryAsync_d__74 = ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74;

  using __c__DisplayClass74_0 = ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0;

  using _SendMessageWithRetry_d__72 = ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72;

  template <typename TRequest, typename TResponse>
  using _GetAndSendUnreilableResponse_d__59_2 = ::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2<TRequest, TResponse>;

  template <typename TRequest, typename TResponse> using _GetAndSendResponseAsync_d__58_2 = ::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2<TRequest, TResponse>;

  template <typename TRequest, typename TResponse> using _GetAndSendResponse_d__57_2 = ::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponse_d__57_2<TRequest, TResponse>;

  template <typename T> using __c__DisplayClass53_0_1 = ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>;

  template <typename T> using __c__DisplayClass52_0_1 = ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>;

  template <typename T> using __c__DisplayClass46_0_1 = ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass46_0_1<T>;

  using MessageOrigin = ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin;

  using MultipartMessageWaiter = ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter;

  using RequestResponseWaiter = ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter;

  using SentRequestWaiter = ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter;

  using RequestWaiter = ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter;

  using RequestWaiterId = ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId;

  using ConnectionState = ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState;

  /// @brief Field _serializers, offset 0x10, size 0x8
  __declspec(property(get = __get__serializers, put = __set__serializers))::System::Collections::Generic::Dictionary_2<
      uint32_t, ::GlobalNamespace::INetworkPacketSerializer_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*>* _serializers;

  /// @brief Field _multipartMessageRegistry, offset 0x18, size 0x8
  __declspec(property(
      get = __get__multipartMessageRegistry,
      put = __set__multipartMessageRegistry))::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Func_1<::BGNet::Core::Messages::BaseMultipartMessage*>*>* _multipartMessageRegistry;

  /// @brief Field _acknowledgeMessageRegistery, offset 0x20, size 0x8
  __declspec(property(get = __get__acknowledgeMessageRegistery, put = __set__acknowledgeMessageRegistery))::System::Collections::Generic::Dictionary_2<
      uint32_t, ::System::Func_1<::BGNet::Core::Messages::BaseAcknowledgeMessage*>*>* _acknowledgeMessageRegistery;

  /// @brief Field _dataWriter, offset 0x28, size 0x8
  __declspec(property(get = __get__dataWriter, put = __set__dataWriter))::LiteNetLib::Utils::NetDataWriter* _dataWriter;

  /// @brief Field _multipartReader, offset 0x30, size 0x8
  __declspec(property(get = __get__multipartReader, put = __set__multipartReader))::LiteNetLib::Utils::NetDataReader* _multipartReader;

  /// @brief Field _sender, offset 0x38, size 0x8
  __declspec(property(get = __get__sender, put = __set__sender))::GlobalNamespace::IUnconnectedMessageSender* _sender;

  /// @brief Field analytics, offset 0x40, size 0x8
  __declspec(property(get = __get_analytics, put = __set_analytics))::BGNet::Core::IAnalyticsManager* analytics;

  /// @brief Field _timeProvider, offset 0x48, size 0x8
  __declspec(property(get = __get__timeProvider, put = __set__timeProvider))::BGNet::Core::ITimeProvider* _timeProvider;

  /// @brief Field _taskUtility, offset 0x50, size 0x8
  __declspec(property(get = __get__taskUtility, put = __set__taskUtility))::BGNet::Core::ITaskUtility* _taskUtility;

  /// @brief Field _sentRequestWaiters, offset 0x58, size 0x8
  __declspec(property(get = __get__sentRequestWaiters,
                      put = __set__sentRequestWaiters))::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId,
                                                                                               ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>* _sentRequestWaiters;

  /// @brief Field _requestResponseWaiters, offset 0x60, size 0x8
  __declspec(property(get = __get__requestResponseWaiters, put = __set__requestResponseWaiters))::GlobalNamespace::ExpiringDictionary_2<
      ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>* _requestResponseWaiters;

  /// @brief Field _connectionStates, offset 0x68, size 0x8
  __declspec(property(
      get = __get__connectionStates,
      put = __set__connectionStates))::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>* _connectionStates;

  /// @brief Field _multipartMessageBuffer, offset 0x70, size 0x8
  __declspec(property(get = __get__multipartMessageBuffer, put = __set__multipartMessageBuffer))::GlobalNamespace::ExpiringDictionary_2<
      ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>* _multipartMessageBuffer;

  /// @brief Field _bufferPool, offset 0x78, size 0x8
  __declspec(property(get = __get__bufferPool, put = __set__bufferPool))::GlobalNamespace::SmallBufferPool* _bufferPool;

  /// @brief Field _disposedTokenSource, offset 0x80, size 0x8
  __declspec(property(get = __get__disposedTokenSource, put = __set__disposedTokenSource))::System::Threading::CancellationTokenSource* _disposedTokenSource;

  __declspec(property(get = get_encryptionLayer))::GlobalNamespace::PacketEncryptionLayer* encryptionLayer;

  __declspec(property(get = get_timeProvider))::BGNet::Core::ITimeProvider* timeProvider;

  /// @brief Convert operator to "::GlobalNamespace::IUnconnectedMessageReceiver"
  constexpr operator ::GlobalNamespace::IUnconnectedMessageReceiver*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::GlobalNamespace::INetworkPacketSerializer_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*>*&
  __get__serializers();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<uint32_t, ::GlobalNamespace::INetworkPacketSerializer_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*>*> const&
  __get__serializers() const;

  constexpr void __set__serializers(
      ::System::Collections::Generic::Dictionary_2<uint32_t, ::GlobalNamespace::INetworkPacketSerializer_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Func_1<::BGNet::Core::Messages::BaseMultipartMessage*>*>*& __get__multipartMessageRegistry();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Func_1<::BGNet::Core::Messages::BaseMultipartMessage*>*>*> const&
  __get__multipartMessageRegistry() const;

  constexpr void __set__multipartMessageRegistry(::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Func_1<::BGNet::Core::Messages::BaseMultipartMessage*>*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Func_1<::BGNet::Core::Messages::BaseAcknowledgeMessage*>*>*& __get__acknowledgeMessageRegistery();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Func_1<::BGNet::Core::Messages::BaseAcknowledgeMessage*>*>*> const&
  __get__acknowledgeMessageRegistery() const;

  constexpr void __set__acknowledgeMessageRegistery(::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Func_1<::BGNet::Core::Messages::BaseAcknowledgeMessage*>*>* value);

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __get__dataWriter();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __get__dataWriter() const;

  constexpr void __set__dataWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr ::LiteNetLib::Utils::NetDataReader*& __get__multipartReader();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataReader*> const& __get__multipartReader() const;

  constexpr void __set__multipartReader(::LiteNetLib::Utils::NetDataReader* value);

  constexpr ::GlobalNamespace::IUnconnectedMessageSender*& __get__sender();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnconnectedMessageSender*> const& __get__sender() const;

  constexpr void __set__sender(::GlobalNamespace::IUnconnectedMessageSender* value);

  constexpr ::BGNet::Core::IAnalyticsManager*& __get_analytics();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::IAnalyticsManager*> const& __get_analytics() const;

  constexpr void __set_analytics(::BGNet::Core::IAnalyticsManager* value);

  constexpr ::BGNet::Core::ITimeProvider*& __get__timeProvider();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITimeProvider*> const& __get__timeProvider() const;

  constexpr void __set__timeProvider(::BGNet::Core::ITimeProvider* value);

  constexpr ::BGNet::Core::ITaskUtility*& __get__taskUtility();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> const& __get__taskUtility() const;

  constexpr void __set__taskUtility(::BGNet::Core::ITaskUtility* value);

  constexpr ::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>*&
  __get__sentRequestWaiters();

  constexpr ::cordl_internals::to_const_pointer<
      ::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>*> const&
  __get__sentRequestWaiters() const;

  constexpr void __set__sentRequestWaiters(
      ::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>* value);

  constexpr ::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId,
                                                    ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>*&
  __get__requestResponseWaiters();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId,
                                                                                        ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>*> const&
  __get__requestResponseWaiters() const;

  constexpr void __set__requestResponseWaiters(::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId,
                                                                                       ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>* value);

  constexpr ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>*& __get__connectionStates();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>*> const&
  __get__connectionStates() const;

  constexpr void __set__connectionStates(::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>* value);

  constexpr ::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId,
                                                    ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>*&
  __get__multipartMessageBuffer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId,
                                                                                        ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>*> const&
  __get__multipartMessageBuffer() const;

  constexpr void __set__multipartMessageBuffer(::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId,
                                                                                       ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>* value);

  constexpr ::GlobalNamespace::SmallBufferPool*& __get__bufferPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SmallBufferPool*> const& __get__bufferPool() const;

  constexpr void __set__bufferPool(::GlobalNamespace::SmallBufferPool* value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__disposedTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__disposedTokenSource() const;

  constexpr void __set__disposedTokenSource(::System::Threading::CancellationTokenSource* value);

  /// @brief Method get_encryptionLayer addr 0xdddc54 size 0xa4 virtual false final false
  inline ::GlobalNamespace::PacketEncryptionLayer* get_encryptionLayer();

  /// @brief Method get_timeProvider addr 0xde3d8c size 0x8 virtual false final false
  inline ::BGNet::Core::ITimeProvider* get_timeProvider();

  static inline ::BGNet::Core::Messages::UnconnectedMessageHandler* New_ctor(::GlobalNamespace::IUnconnectedMessageSender* sender, ::BGNet::Core::ITimeProvider* timeProvider,
                                                                             ::BGNet::Core::ITaskUtility* taskUtility, ::BGNet::Core::IAnalyticsManager* analytics);

  /// @brief Method .ctor addr 0xddebbc size 0x3a0 virtual false final false
  inline void _ctor(::GlobalNamespace::IUnconnectedMessageSender* sender, ::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                    ::BGNet::Core::IAnalyticsManager* analytics);

  /// @brief Method RegisterSerializer addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TMultipartMessage, typename TAcknowledgeMessage>
  inline void RegisterSerializer(uint32_t messageType, ::GlobalNamespace::INetworkPacketSerializer_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>* serializer,
                                 ::System::Func_1<TMultipartMessage>* obtainMultipartMessage, ::System::Func_1<TAcknowledgeMessage>* obtainAcknowledgeMessage);

  /// @brief Method ShouldHandleMessage addr 0xddfd1c size 0x54 virtual true final false
  inline bool ShouldHandleMessage(::BGNet::Core::Messages::IUnconnectedMessage* packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin);

  /// @brief Method GetMessageType addr 0xddfb90 size 0x68 virtual true final false
  inline uint32_t GetMessageType(::BGNet::Core::Messages::IUnconnectedMessage* message);

  /// @brief Method GetMultipartMessage addr 0xde3d94 size 0x88 virtual false final false
  inline ::BGNet::Core::Messages::BaseMultipartMessage* GetMultipartMessage(::BGNet::Core::Messages::IUnconnectedMessage* message);

  /// @brief Method GetAcknowledgeMessage addr 0xde3e1c size 0x88 virtual false final false
  inline ::BGNet::Core::Messages::BaseAcknowledgeMessage* GetAcknowledgeMessage(::BGNet::Core::Messages::IUnconnectedMessage* message);

  /// @brief Method ObtainVersioned addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::System::Func_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, T>* ObtainVersioned(::System::Func_2<uint32_t, T>* obtain);

  /// @brief Method ObtainVersioned addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::System::Func_1<T>* ObtainVersioned(::System::Func_1<T>* obtain);

  /// @brief Method DefaultAcknowledgeHandler addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void DefaultAcknowledgeHandler(T packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin);

  /// @brief Method DefaultRequestHandler addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void DefaultRequestHandler(T packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin);

  /// @brief Method DefaultResponseHandler addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void DefaultResponseHandler(T packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin);

  /// @brief Method DefaultMultipartMessageHandler addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void DefaultMultipartMessageHandler(T packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin);

  /// @brief Method CustomResponseHandler addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline ::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*
  CustomResponseHandler(::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>* customHandler);

  /// @brief Method CustomUnreliableResponseHandler addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline ::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*
  CustomUnreliableResponseHandler(::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>* customHandler);

  /// @brief Method IsUnhandledMessage addr 0xde3ea4 size 0x31c virtual false final false
  inline bool IsUnhandledMessage(::BGNet::Core::Messages::IUnconnectedReliableRequest* packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin);

  /// @brief Method CompleteSend addr 0xde44fc size 0x18c virtual false final false
  inline void CompleteSend(::BGNet::Core::Messages::IUnconnectedResponse* packet, ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method CompleteRequest addr 0xde43f4 size 0x108 virtual false final false
  inline bool CompleteRequest(::BGNet::Core::Messages::IUnconnectedReliableResponse* packet, ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method GetAndSendResponse addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TRequest, typename TResponse>
  inline void GetAndSendResponse(TRequest request, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin,
                                 ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse,
                                 ::System::Func_1<TResponse>* getFailureResponse);

  /// @brief Method GetAndSendResponseAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TRequest, typename TResponse>
  inline ::System::Threading::Tasks::Task*
  GetAndSendResponseAsync(TRequest request, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin,
                          ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse,
                          ::System::Func_1<TResponse>* getFailureResponse);

  /// @brief Method GetAndSendUnreilableResponse addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TRequest, typename TResponse>
  inline void
  GetAndSendUnreilableResponse(TRequest request, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin,
                               ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse,
                               ::System::Func_1<TResponse>* getFailureResponse);

  /// @brief Method SendUnreliableMessage addr 0xde4840 size 0x8c virtual false final false
  inline void SendUnreliableMessage(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedUnreliableMessage* message);

  /// @brief Method SendUnreliableResponse addr 0xde0374 size 0x144 virtual false final false
  inline void SendUnreliableResponse(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* request,
                                     ::BGNet::Core::Messages::IUnconnectedResponse* response);

  /// @brief Method SendUnreliableResponse addr 0xde41c0 size 0x114 virtual false final false
  inline void SendUnreliableResponse(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, uint32_t responseId, ::BGNet::Core::Messages::IUnconnectedResponse* response);

  /// @brief Method SendReliableRequest addr 0xde4a38 size 0x128 virtual false final false
  inline void SendReliableRequest(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* request,
                                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendReliableRequestAsync addr 0xde4c24 size 0x130 virtual false final false
  inline ::System::Threading::Tasks::Task* SendReliableRequestAsync(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* request,
                                                                    ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                     ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* onSendFailed,
                                                                    ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendReliableResponse addr 0xde4de4 size 0x14c virtual false final false
  inline void SendReliableResponse(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* request,
                                   ::BGNet::Core::Messages::IUnconnectedReliableResponse* response, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendReliableResponse addr 0xde1ef4 size 0x12c virtual false final false
  inline void SendReliableResponse(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, uint32_t responseId, ::BGNet::Core::Messages::IUnconnectedReliableResponse* response,
                                   ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendReliableResponseAsync addr 0xde4f30 size 0x210 virtual false final false
  inline ::System::Threading::Tasks::Task* SendReliableResponseAsync(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* request,
                                                                     ::BGNet::Core::Messages::IUnconnectedReliableResponse* response, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendReliableRequestAndAwaitResponseAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline ::System::Threading::Tasks::Task_1<T>*
  SendReliableRequestAndAwaitResponseAsync(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* request,
                                           ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken,
                                                            ::System::Threading::Tasks::Task_1<T>*>* onSendFailedAwaitResponse,
                                           ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendReliableResponseAndAwaitResponseAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline ::System::Threading::Tasks::Task_1<T>*
  SendReliableResponseAndAwaitResponseAsync(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* request,
                                            ::BGNet::Core::Messages::IUnconnectedReliableResponse* response, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendReliableResponseAndAwaitResponseAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline ::System::Threading::Tasks::Task_1<T>* SendReliableResponseAndAwaitResponseAsync(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, uint32_t responseId,
                                                                                          ::BGNet::Core::Messages::IUnconnectedReliableResponse* response,
                                                                                          ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendMessage addr 0xde48cc size 0x16c virtual false final false
  inline void SendMessage(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedMessage* message);

  /// @brief Method SendMessageWithRetry addr 0xde4b60 size 0xc4 virtual false final false
  inline void SendMessageWithRetry(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message,
                                   ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendMessageWithRetryAsync addr 0xde4d54 size 0x90 virtual false final false
  inline ::System::Threading::Tasks::Task* SendMessageWithRetryAsync(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message,
                                                                     ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                      ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* onSendFailed,
                                                                     ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendMultipartMessageWithRetryAsync addr 0xde526c size 0x120 virtual false final false
  inline ::System::Threading::Tasks::Task* SendMultipartMessageWithRetryAsync(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint,
                                                                              ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::LiteNetLib::Utils::NetDataWriter* data,
                                                                              ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                               ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* onSendFailed,
                                                                              ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendMessageWithRetryAsyncInternal addr 0xde538c size 0x110 virtual false final false
  inline ::System::Threading::Tasks::Task* SendMessageWithRetryAsyncInternal(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint,
                                                                             ::BGNet::Core::Messages::IUnconnectedReliableRequest* message,
                                                                             ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                              ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* onSendFailed,
                                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendMessageWithRetryAwaitResponseAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline ::System::Threading::Tasks::Task_1<T>*
  SendMessageWithRetryAwaitResponseAsync(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message,
                                         ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken,
                                                          ::System::Threading::Tasks::Task_1<T>*>* onSendFailedAwaitResponse,
                                         ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WrapOnSendFailedAwaitResponse addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*
  WrapOnSendFailedAwaitResponse(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter* waiter,
                                ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken,
                                                 ::System::Threading::Tasks::Task_1<T>*>* onSendFailed);

  /// @brief Method AwaitResponseAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline ::System::Threading::Tasks::Task_1<T>* AwaitResponseAsync(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, uint32_t requestId,
                                                                   ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WaitForRetry addr 0xde549c size 0x17c virtual false final false
  inline ::System::Threading::Tasks::Task* WaitForRetry(int32_t retryAttempt, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Write addr 0xde5140 size 0x12c virtual false final false
  inline ::LiteNetLib::Utils::NetDataWriter* Write(uint32_t protocolVersion, ::BGNet::Core::Messages::IUnconnectedMessage* message);

  /// @brief Method PollUpdate addr 0xddf960 size 0xac virtual true final false
  inline void PollUpdate();

  /// @brief Method ReceiveUnconnectedMessage addr 0xde5754 size 0x1e4 virtual true final true
  inline void ReceiveUnconnectedMessage(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method ShouldHandleMessageFromEndPoint addr 0xde5944 size 0x8 virtual true final false
  inline bool ShouldHandleMessageFromEndPoint(::System::Net::IPEndPoint* endPoint);

  /// @brief Method ReceivedMessageException addr 0xde594c size 0x5c virtual true final false
  inline void ReceivedMessageException(::System::Net::IPEndPoint* endPoint, ::System::Exception* exception);

  /// @brief Method BeginSession addr 0xddc248 size 0x18 virtual false final false
  inline void BeginSession(::System::Net::IPEndPoint* endPoint);

  /// @brief Method BeginSession addr 0xde000c size 0x20 virtual false final false
  inline void BeginSession(::System::Net::IPEndPoint* endPoint, uint32_t requestId);

  /// @brief Method GetNextRequestId addr 0xdddab4 size 0x30 virtual false final false
  inline uint32_t GetNextRequestId(::System::Net::IPEndPoint* endPoint);

  /// @brief Method GetConnectionState addr 0xdddcf8 size 0xcc virtual false final false
  inline ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState* GetConnectionState(::System::Net::IPEndPoint* endPoint);

  /// @brief Method IsValidSessionStartRequestId addr 0xde0298 size 0xb4 virtual false final false
  inline bool IsValidSessionStartRequestId(::System::Net::IPEndPoint* endPoint, uint32_t requestId);

  /// @brief Method IsConnectionStateEncrypted addr 0xde5b14 size 0x8c virtual false final false
  inline bool IsConnectionStateEncrypted(::System::Net::IPEndPoint* endPoint);

  /// @brief Method GetSerializer addr 0xde5618 size 0x13c virtual false final false
  inline ::GlobalNamespace::INetworkPacketSerializer_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>* GetSerializer(uint32_t protocolVersion, uint32_t messageType,
                                                                                                                                           bool throwOnInvalidVersion);

  /// @brief Method Dispose addr 0xde5c4c size 0x148 virtual true final false
  inline void Dispose();

  /// @brief Method CreateHandshakeHeader addr 0xddf884 size 0xc4 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateHandshakeHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> packetHeader);

  // Ctor Parameters [CppParam { name: "", ty: "UnconnectedMessageHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnconnectedMessageHandler(UnconnectedMessageHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnconnectedMessageHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnconnectedMessageHandler(UnconnectedMessageHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnconnectedMessageHandler();

public:
  /// @brief Field _serializers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::GlobalNamespace::INetworkPacketSerializer_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*>* ____serializers;

  /// @brief Field _multipartMessageRegistry, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Func_1<::BGNet::Core::Messages::BaseMultipartMessage*>*>* ____multipartMessageRegistry;

  /// @brief Field _acknowledgeMessageRegistery, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Func_1<::BGNet::Core::Messages::BaseAcknowledgeMessage*>*>* ____acknowledgeMessageRegistery;

  /// @brief Field _dataWriter, offset: 0x28, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____dataWriter;

  /// @brief Field _multipartReader, offset: 0x30, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataReader* ____multipartReader;

  /// @brief Field _sender, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IUnconnectedMessageSender* ____sender;

  /// @brief Field analytics, offset: 0x40, size: 0x8, def value: None
  ::BGNet::Core::IAnalyticsManager* ___analytics;

  /// @brief Field _timeProvider, offset: 0x48, size: 0x8, def value: None
  ::BGNet::Core::ITimeProvider* ____timeProvider;

  /// @brief Field _taskUtility, offset: 0x50, size: 0x8, def value: None
  ::BGNet::Core::ITaskUtility* ____taskUtility;

  /// @brief Field _sentRequestWaiters, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>*
      ____sentRequestWaiters;

  /// @brief Field _requestResponseWaiters, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>*
      ____requestResponseWaiters;

  /// @brief Field _connectionStates, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>* ____connectionStates;

  /// @brief Field _multipartMessageBuffer, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>*
      ____multipartMessageBuffer;

  /// @brief Field _bufferPool, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::SmallBufferPool* ____bufferPool;

  /// @brief Field _disposedTokenSource, offset: 0x80, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____disposedTokenSource;

  /// @brief Field kProtocolVersion offset 0xffffffff size 0x4
  static constexpr uint32_t kProtocolVersion{ static_cast<uint32_t>(0x84008108u) };

  /// @brief Field kMinSignatureLength offset 0xffffffff size 0x4
  static constexpr int32_t kMinSignatureLength{ static_cast<int32_t>(0x80) };

  /// @brief Field kMaxSignatureLength offset 0xffffffff size 0x4
  static constexpr int32_t kMaxSignatureLength{ static_cast<int32_t>(0x200) };

  /// @brief Field kMaxPacketSize offset 0xffffffff size 0x4
  static constexpr int32_t kMaxPacketSize{ static_cast<int32_t>(0x19c) };

  /// @brief Field kRetryCount offset 0xffffffff size 0x4
  static constexpr int32_t kRetryCount{ static_cast<int32_t>(0x5) };

  /// @brief Field kRetryDelay0Ms offset 0xffffffff size 0x4
  static constexpr int32_t kRetryDelay0Ms{ static_cast<int32_t>(0xc8) };

  /// @brief Field kRetryDelay1Ms offset 0xffffffff size 0x4
  static constexpr int32_t kRetryDelay1Ms{ static_cast<int32_t>(0x12c) };

  /// @brief Field kRetryDelay2Ms offset 0xffffffff size 0x4
  static constexpr int32_t kRetryDelay2Ms{ static_cast<int32_t>(0x1c2) };

  /// @brief Field kRetryDelay3Ms offset 0xffffffff size 0x4
  static constexpr int32_t kRetryDelay3Ms{ static_cast<int32_t>(0x258) };

  /// @brief Field kRetryDelay4Ms offset 0xffffffff size 0x4
  static constexpr int32_t kRetryDelay4Ms{ static_cast<int32_t>(0x3e8) };

  /// @brief Field kConnectionStateTimeoutMs offset 0xffffffff size 0x8
  static constexpr int64_t kConnectionStateTimeoutMs{ static_cast<int64_t>(0x493e0) };

  /// @brief Field kSentRequestTimeoutMs offset 0xffffffff size 0x8
  static constexpr int64_t kSentRequestTimeoutMs{ static_cast<int64_t>(0x1388) };

  /// @brief Field kSentRequestWithResponseTimeoutMs offset 0xffffffff size 0x8
  static constexpr int64_t kSentRequestWithResponseTimeoutMs{ static_cast<int64_t>(0x3a98) };

  /// @brief Field kMultipartMessageTimeoutMs offset 0xffffffff size 0x8
  static constexpr int64_t kMultipartMessageTimeoutMs{ static_cast<int64_t>(0x3a98) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::UnconnectedMessageHandler, 0x88>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::UnconnectedMessageHandler, ____serializers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::UnconnectedMessageHandler, ____multipartMessageRegistry) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::UnconnectedMessageHandler, ____acknowledgeMessageRegistery) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::UnconnectedMessageHandler, ____dataWriter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::UnconnectedMessageHandler, ____multipartReader) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::UnconnectedMessageHandler, ____sender) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::UnconnectedMessageHandler, ___analytics) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::UnconnectedMessageHandler, ____timeProvider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::UnconnectedMessageHandler, ____taskUtility) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::UnconnectedMessageHandler, ____sentRequestWaiters) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::UnconnectedMessageHandler, ____requestResponseWaiters) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::UnconnectedMessageHandler, ____connectionStates) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::UnconnectedMessageHandler, ____multipartMessageBuffer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::UnconnectedMessageHandler, ____bufferPool) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::UnconnectedMessageHandler, ____disposedTokenSource) == 0x80, "Offset mismatch!");

} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::UnconnectedMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::UnconnectedMessageHandler*, "BGNet.Core.Messages", "UnconnectedMessageHandler");
NEED_NO_BOX(::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*, "BGNet.Core.Messages", "UnconnectedMessageHandler/ConnectionState");
NEED_NO_BOX(::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*, "BGNet.Core.Messages", "UnconnectedMessageHandler/MultipartMessageWaiter");
NEED_NO_BOX(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*, "BGNet.Core.Messages", "UnconnectedMessageHandler/RequestResponseWaiter");
NEED_NO_BOX(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter*, "BGNet.Core.Messages", "UnconnectedMessageHandler/RequestWaiter");
NEED_NO_BOX(::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*, "BGNet.Core.Messages", "UnconnectedMessageHandler/SentRequestWaiter");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass46_0_1, "BGNet.Core.Messages", "UnconnectedMessageHandler/<>c__DisplayClass46_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1, "BGNet.Core.Messages", "UnconnectedMessageHandler/<>c__DisplayClass52_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1, "BGNet.Core.Messages", "UnconnectedMessageHandler/<>c__DisplayClass53_0`1");
NEED_NO_BOX(::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0*, "BGNet.Core.Messages", "UnconnectedMessageHandler/<>c__DisplayClass74_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1, "BGNet.Core.Messages", "UnconnectedMessageHandler/<>c__DisplayClass77_0`1");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, "BGNet.Core.Messages", "UnconnectedMessageHandler/MessageOrigin");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, "BGNet.Core.Messages", "UnconnectedMessageHandler/RequestWaiterId");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGNet::Core::Messages::__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1, "BGNet.Core.Messages",
                                      "UnconnectedMessageHandler/<AwaitResponseAsync>d__78`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2, "BGNet.Core.Messages",
                                      "UnconnectedMessageHandler/<GetAndSendResponseAsync>d__58`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponse_d__57_2, "BGNet.Core.Messages",
                                      "UnconnectedMessageHandler/<GetAndSendResponse>d__57`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2, "BGNet.Core.Messages",
                                      "UnconnectedMessageHandler/<GetAndSendUnreilableResponse>d__59`2");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, "BGNet.Core.Messages",
                       "UnconnectedMessageHandler/<SendMessageWithRetryAsyncInternal>d__75");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1, "BGNet.Core.Messages",
                                      "UnconnectedMessageHandler/<SendMessageWithRetryAwaitResponseAsync>d__76`1");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72, "BGNet.Core.Messages", "UnconnectedMessageHandler/<SendMessageWithRetry>d__72");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74, "BGNet.Core.Messages",
                       "UnconnectedMessageHandler/<SendMultipartMessageWithRetryAsync>d__74");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d, "BGNet.Core.Messages",
                                      "UnconnectedMessageHandler/<>c__DisplayClass77_0`1/<<WrapOnSendFailedAwaitResponse>b__0>d");
