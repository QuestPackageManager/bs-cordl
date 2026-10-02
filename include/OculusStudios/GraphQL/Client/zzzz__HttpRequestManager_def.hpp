#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/HttpRequestManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpRequestManager)
namespace OculusStudios::GraphQL::Client {
class HttpRequestManager_ByteArrayResultCallback;
}
namespace OculusStudios::GraphQL::Client {
struct HttpRequestManager_GlobalConfig;
}
namespace OculusStudios::GraphQL::Client {
struct HttpRequestManager_SessionConfig;
}
namespace OculusStudios::GraphQL::Client {
struct HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__37;
}
namespace OculusStudios::GraphQL::Client {
struct HttpRequestManager__CheckFastFallbackAsync_d__32;
}
namespace OculusStudios::GraphQL::Client {
struct HttpRequestManager__CheckFastFallbackNoWait_d__31;
}
namespace OculusStudios::GraphQL::Client {
struct HttpRequestManager__SendAsyncInternal_d__41;
}
namespace OculusStudios::GraphQL::Client {
struct HttpRequestManager__SendAsyncReceiveByteArray_d__43;
}
namespace OculusStudios::GraphQL::Client {
class HttpRequestManager___c__DisplayClass32_0;
}
namespace OculusStudios::GraphQL::Client {
struct HttpRequestManager_fastFallbackState;
}
namespace System::Net::Http {
class HttpClient;
}
namespace System::Net::Http {
class HttpMessageHandler;
}
namespace System::Net::Http {
class HttpMethod;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
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
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
struct HttpRequestManager_fastFallbackState;
}
namespace OculusStudios::GraphQL::Client {
class HttpRequestManager;
}
namespace OculusStudios::GraphQL::Client {
class HttpRequestManager_ByteArrayResultCallback;
}
namespace OculusStudios::GraphQL::Client {
class HttpRequestManager___c__DisplayClass32_0;
}
namespace OculusStudios::GraphQL::Client {
struct HttpRequestManager_GlobalConfig;
}
namespace OculusStudios::GraphQL::Client {
struct HttpRequestManager_SessionConfig;
}
namespace OculusStudios::GraphQL::Client {
struct HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__37;
}
namespace OculusStudios::GraphQL::Client {
struct HttpRequestManager__CheckFastFallbackAsync_d__32;
}
namespace OculusStudios::GraphQL::Client {
struct HttpRequestManager__CheckFastFallbackNoWait_d__31;
}
namespace OculusStudios::GraphQL::Client {
struct HttpRequestManager__SendAsyncInternal_d__41;
}
namespace OculusStudios::GraphQL::Client {
struct HttpRequestManager__SendAsyncReceiveByteArray_d__43;
}
// Write type traits
MARK_VAL_T(::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState);
MARK_REF_T(::OculusStudios::GraphQL::Client::HttpRequestManager*);
MARK_REF_T(::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*);
MARK_REF_T(::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass32_0*);
MARK_VAL_T(::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig);
MARK_VAL_T(::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig);
MARK_VAL_T(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__37);
MARK_VAL_T(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__32);
MARK_VAL_T(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__31);
MARK_VAL_T(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__41);
MARK_VAL_T(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__43);
DEFINE_IL2CPP_CLASS(::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState, "OculusStudios.GraphQL.Client", "HttpRequestManager/fastFallbackState");
DEFINE_IL2CPP_CLASS(::OculusStudios::GraphQL::Client::HttpRequestManager*, "OculusStudios.GraphQL.Client", "HttpRequestManager");
DEFINE_IL2CPP_CLASS(::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*, "OculusStudios.GraphQL.Client", "HttpRequestManager/ByteArrayResultCallback");
DEFINE_IL2CPP_CLASS(::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass32_0*, "OculusStudios.GraphQL.Client", "HttpRequestManager/<>c__DisplayClass32_0");
DEFINE_IL2CPP_CLASS(::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig, "OculusStudios.GraphQL.Client", "HttpRequestManager/GlobalConfig");
DEFINE_IL2CPP_CLASS(::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig, "OculusStudios.GraphQL.Client", "HttpRequestManager/SessionConfig");
DEFINE_IL2CPP_CLASS(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__37, "OculusStudios.GraphQL.Client",
                    "HttpRequestManager/<CheckAndConsiderFastFallbackAsync>d__37");
DEFINE_IL2CPP_CLASS(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__32, "OculusStudios.GraphQL.Client", "HttpRequestManager/<CheckFastFallbackAsync>d__32");
DEFINE_IL2CPP_CLASS(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__31, "OculusStudios.GraphQL.Client", "HttpRequestManager/<CheckFastFallbackNoWait>d__31");
DEFINE_IL2CPP_CLASS(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__41, "OculusStudios.GraphQL.Client", "HttpRequestManager/<SendAsyncInternal>d__41");
DEFINE_IL2CPP_CLASS(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__43, "OculusStudios.GraphQL.Client", "HttpRequestManager/<SendAsyncReceiveByteArray>d__43");
// Dependencies System.TimeSpan
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.HttpRequestManager/GlobalConfig
struct CORDL_TYPE HttpRequestManager_GlobalConfig {
public:
  // Declarations
  /// @brief Field DEFAULT, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_DEFAULT, put = setStaticF_DEFAULT)) ::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig DEFAULT;

  static inline ::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig getStaticF_DEFAULT();

  static inline void setStaticF_DEFAULT(::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestManager_GlobalConfig();

  // Ctor Parameters [CppParam { name: "connectionLimit", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "defaultRequestTimeout", ty: "::System::TimeSpan", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "forceIPV6", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr HttpRequestManager_GlobalConfig(int32_t connectionLimit, ::System::TimeSpan defaultRequestTimeout, bool forceIPV6) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21079 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field connectionLimit, offset: 0x0, size: 0x4, def value: None
  int32_t connectionLimit;

  /// @brief Field defaultRequestTimeout, offset: 0x8, size: 0x8, def value: None
  ::System::TimeSpan defaultRequestTimeout;

  /// @brief Field forceIPV6, offset: 0x10, size: 0x1, def value: None
  bool forceIPV6;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig, connectionLimit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig, defaultRequestTimeout) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig, forceIPV6) == 0x10, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig) == 0x18, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.TimeSpan
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.HttpRequestManager/SessionConfig
struct CORDL_TYPE HttpRequestManager_SessionConfig {
public:
  // Declarations
  /// @brief Field DEFAULT, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DEFAULT, put = setStaticF_DEFAULT)) ::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig DEFAULT;

  static inline ::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig getStaticF_DEFAULT();

  static inline void setStaticF_DEFAULT(::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestManager_SessionConfig();

  // Ctor Parameters [CppParam { name: "baseAddress", ty: "::System::Uri*", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestTimeout", ty: "::System::TimeSpan", modifiers: "",
  // def_value: None, comment: None }]
  constexpr HttpRequestManager_SessionConfig(::System::Uri* baseAddress, ::System::TimeSpan requestTimeout) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21080 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field baseAddress, offset: 0x0, size: 0x8, def value: None
  ::System::Uri* baseAddress;

  /// @brief Field requestTimeout, offset: 0x8, size: 0x8, def value: None
  ::System::TimeSpan requestTimeout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig, baseAddress) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig, requestTimeout) == 0x8, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig) == 0x10, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.HttpRequestManager/fastFallbackState
struct CORDL_TYPE HttpRequestManager_fastFallbackState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HttpRequestManager_fastFallbackState_Unwrapped
  enum struct __HttpRequestManager_fastFallbackState_Unwrapped : int32_t {
    __E_NEEDS_CHECK = static_cast<int32_t>(0x0),
    __E_CHECKING = static_cast<int32_t>(0x1),
    __E_NOT_REQUIRED_IPV6_OK = static_cast<int32_t>(0x2),
    __E_NOT_REQUIRED_DNS_ONLY_IPV4 = static_cast<int32_t>(0x3),
    __E_NOT_REQUIRED_DNS_ONLY_IPV6 = static_cast<int32_t>(0x4),
    __E_NOT_REQUIRED_NO_IPV6 = static_cast<int32_t>(0x5),
    __E_IPV4 = static_cast<int32_t>(0x6),
    __E_ERROR_DNS = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HttpRequestManager_fastFallbackState_Unwrapped() const noexcept {
    return static_cast<__HttpRequestManager_fastFallbackState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestManager_fastFallbackState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr HttpRequestManager_fastFallbackState(int32_t value__) noexcept;

  /// @brief Field CHECKING value: I32(1)
  static ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState const CHECKING;

  /// @brief Field ERROR_DNS value: I32(7)
  static ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState const ERROR_DNS;

  /// @brief Field IPV4 value: I32(6)
  static ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState const IPV4;

  /// @brief Field NEEDS_CHECK value: I32(0)
  static ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState const NEEDS_CHECK;

  /// @brief Field NOT_REQUIRED_DNS_ONLY_IPV4 value: I32(3)
  static ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState const NOT_REQUIRED_DNS_ONLY_IPV4;

  /// @brief Field NOT_REQUIRED_DNS_ONLY_IPV6 value: I32(4)
  static ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState const NOT_REQUIRED_DNS_ONLY_IPV6;

  /// @brief Field NOT_REQUIRED_IPV6_OK value: I32(2)
  static ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState const NOT_REQUIRED_IPV6_OK;

  /// @brief Field NOT_REQUIRED_NO_IPV6 value: I32(5)
  static ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState const NOT_REQUIRED_NO_IPV6;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21081 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState) == 0x4, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.MulticastDelegate
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.HttpRequestManager/ByteArrayResultCallback
class CORDL_TYPE HttpRequestManager_ByteArrayResultCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6343464, size 0xac, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t> result, ::System::Net::HttpStatusCode statusCode, ::StringW reasonPhrase, ::System::Exception* exception,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6343510, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6343450, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ArrayW<uint8_t> result, ::System::Net::HttpStatusCode statusCode, ::StringW reasonPhrase, ::System::Exception* exception);

  static inline ::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x63433d0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestManager_ByteArrayResultCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestManager_ByteArrayResultCallback", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpRequestManager_ByteArrayResultCallback(HttpRequestManager_ByteArrayResultCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestManager_ByteArrayResultCallback", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpRequestManager_ByteArrayResultCallback(HttpRequestManager_ByteArrayResultCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21082 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback) == 0x80, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// [CompilerGenerated]
// Dependencies OculusStudios.GraphQL.Client.HttpRequestManager::fastFallbackState, System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.HttpRequestManager/<>c__DisplayClass32_0
class CORDL_TYPE HttpRequestManager___c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tmpState, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_tmpState, put = __cordl_internal_set_tmpState)) ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState tmpState;

  static inline ::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass32_0* New_ctor();

  /// @brief Method <CheckFastFallbackAsync>b__0, addr 0x6343520, size 0x1dc, virtual false, abstract: false, final false
  inline void _CheckFastFallbackAsync_b__0(::System::IAsyncResult* a);

  constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState const& __cordl_internal_get_tmpState() const;

  constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState& __cordl_internal_get_tmpState();

  constexpr void __cordl_internal_set_tmpState(::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState value);

  /// @brief Method .ctor, addr 0x634351c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestManager___c__DisplayClass32_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestManager___c__DisplayClass32_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpRequestManager___c__DisplayClass32_0(HttpRequestManager___c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestManager___c__DisplayClass32_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpRequestManager___c__DisplayClass32_0(HttpRequestManager___c__DisplayClass32_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21083 };

  /// @brief Field tmpState, offset: 0x10, size: 0x4, def value: None
  ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState ___tmpState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass32_0, ___tmpState) == 0x10, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass32_0) == 0x18, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.HttpRequestManager/<CheckAndConsiderFastFallbackAsync>d__37
struct CORDL_TYPE HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__37 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x63436fc, size 0x210, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x634390c, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__37();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
  constexpr HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__37(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Uri* uri,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21084 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field uri, offset: 0x20, size: 0x8, def value: None
  ::System::Uri* uri;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__37, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__37, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__37, uri) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__37, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__37) == 0x30, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.HttpRequestManager/<CheckFastFallbackAsync>d__32
struct CORDL_TYPE HttpRequestManager__CheckFastFallbackAsync_d__32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x6343978, size 0xb94, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x634450c, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestManager__CheckFastFallbackAsync_d__32();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty:
  // "::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass32_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ipv4_5__2", ty: "::System::Net::IPAddress*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "_ipv6_5__3", ty: "::System::Net::IPAddress*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_socket_5__4", ty:
  // "::System::Net::Sockets::Socket*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None, comment: None }]
  constexpr HttpRequestManager__CheckFastFallbackAsync_d__32(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                             ::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass32_0* __8__1, ::System::Net::IPAddress* _ipv4_5__2,
                                                             ::System::Net::IPAddress* _ipv6_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>> __u__2,
                                                             ::System::Net::Sockets::Socket* _socket_5__4,
                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21085 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>8__1, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass32_0* __8__1;

  /// @brief Field <ipv4>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Net::IPAddress* _ipv4_5__2;

  /// @brief Field <ipv6>5__3, offset: 0x30, size: 0x8, def value: None
  ::System::Net::IPAddress* _ipv6_5__3;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>> __u__2;

  /// @brief Field <socket>5__4, offset: 0x48, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* _socket_5__4;

  /// @brief Field <>u__3, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__32, __8__1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__32, _ipv4_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__32, _ipv6_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__32, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__32, __u__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__32, _socket_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__32, __u__3) == 0x50, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__32) == 0x58, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.HttpRequestManager/<CheckFastFallbackNoWait>d__31
struct CORDL_TYPE HttpRequestManager__CheckFastFallbackNoWait_d__31 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x6344578, size 0x19c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x6344714, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestManager__CheckFastFallbackNoWait_d__31();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None, comment: None }]
  constexpr HttpRequestManager__CheckFastFallbackNoWait_d__31(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21086 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__31, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__31) == 0x30, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.HttpRequestManager/<SendAsyncInternal>d__41
struct CORDL_TYPE HttpRequestManager__SendAsyncInternal_d__41 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x634471c, size 0x430, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x6344b4c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestManager__SendAsyncInternal_d__41();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "request", ty:
  // "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None,
  // comment: None }]
  constexpr HttpRequestManager__SendAsyncInternal_d__41(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*> __t__builder,
                                                        ::System::Net::Http::HttpRequestMessage* request, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21087 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*> __t__builder;

  /// @brief Field request, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::HttpRequestMessage* request;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__41, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__41, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__41, request) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__41, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__41, __u__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__41) == 0x38, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// [CompilerGenerated]
// Dependencies System.Net.HttpStatusCode, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.HttpRequestManager/<SendAsyncReceiveByteArray>d__43
struct CORDL_TYPE HttpRequestManager__SendAsyncReceiveByteArray_d__43 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x6344bcc, size 0x6b4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x6345280, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestManager__SendAsyncReceiveByteArray_d__43();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "callback", ty:
  // "::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::OculusStudios::GraphQL::Client::HttpRequestManager*", modifiers: "", def_value: None, comment: None }, CppParam { name: "request", ty: "::System::Net::Http::HttpRequestMessage*", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "_responseTask_5__2", ty: "::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "_response_5__3", ty: "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_statusCode_5__4", ty:
  // "::System::Net::HttpStatusCode", modifiers: "", def_value: None, comment: None }, CppParam { name: "_reasonPhrase_5__5", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam
  // { name: "_exception_5__6", ty: "::System::Exception*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_resultTask_5__7", ty:
  // "::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>", modifiers: "", def_value: None, comment: None }]
  constexpr HttpRequestManager__SendAsyncReceiveByteArray_d__43(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                ::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback* callback,
                                                                ::OculusStudios::GraphQL::Client::HttpRequestManager* __4__this, ::System::Net::Http::HttpRequestMessage* request,
                                                                ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* _responseTask_5__2,
                                                                ::System::Net::Http::HttpResponseMessage* _response_5__3, ::System::Net::HttpStatusCode _statusCode_5__4, ::StringW _reasonPhrase_5__5,
                                                                ::System::Exception* _exception_5__6,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__1,
                                                                ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* _resultTask_5__7,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21088 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field callback, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback* callback;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::HttpRequestManager* __4__this;

  /// @brief Field request, offset: 0x38, size: 0x8, def value: None
  ::System::Net::Http::HttpRequestMessage* request;

  /// @brief Field <responseTask>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* _responseTask_5__2;

  /// @brief Field <response>5__3, offset: 0x48, size: 0x8, def value: None
  ::System::Net::Http::HttpResponseMessage* _response_5__3;

  /// @brief Field <statusCode>5__4, offset: 0x50, size: 0x4, def value: None
  ::System::Net::HttpStatusCode _statusCode_5__4;

  /// @brief Field <reasonPhrase>5__5, offset: 0x58, size: 0x8, def value: None
  ::StringW _reasonPhrase_5__5;

  /// @brief Field <exception>5__6, offset: 0x60, size: 0x8, def value: None
  ::System::Exception* _exception_5__6;

  /// @brief Field <>u__1, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__1;

  /// @brief Field <resultTask>5__7, offset: 0x70, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* _resultTask_5__7;

  /// @brief Field <>u__2, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__43, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__43, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__43, callback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__43, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__43, request) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__43, _responseTask_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__43, _response_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__43, _statusCode_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__43, _reasonPhrase_5__5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__43, _exception_5__6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__43, __u__1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__43, _resultTask_5__7) == 0x70, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__43, __u__2) == 0x78, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__43) == 0x80, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies OculusStudios.GraphQL.Client.HttpRequestManager::GlobalConfig, OculusStudios.GraphQL.Client.HttpRequestManager::SessionConfig,
// OculusStudios.GraphQL.Client.HttpRequestManager::fastFallbackState, System.Object, System.TimeSpan
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.HttpRequestManager
class CORDL_TYPE HttpRequestManager : public ::System::Object {
public:
  // Declarations
  using ByteArrayResultCallback = ::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback;

  using GlobalConfig = ::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig;

  using SessionConfig = ::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig;

  using _CheckAndConsiderFastFallbackAsync_d__37 = ::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__37;

  using _CheckFastFallbackAsync_d__32 = ::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__32;

  using _CheckFastFallbackNoWait_d__31 = ::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__31;

  using _SendAsyncInternal_d__41 = ::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__41;

  using _SendAsyncReceiveByteArray_d__43 = ::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__43;

  using __c__DisplayClass32_0 = ::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass32_0;

  using fastFallbackState = ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState;

  /// @brief Field _globalConfig, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF__globalConfig, put = setStaticF__globalConfig)) ::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig _globalConfig;

  /// @brief Field _httpClient, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__httpClient, put = setStaticF__httpClient)) ::System::Net::Http::HttpClient* _httpClient;

  /// @brief Field _queryTimeout, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__queryTimeout, put = setStaticF__queryTimeout)) ::System::TimeSpan _queryTimeout;

  /// @brief Field _queryTimeoutConfigured, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__queryTimeoutConfigured, put = setStaticF__queryTimeoutConfigured)) bool _queryTimeoutConfigured;

  /// @brief Field _sessionConfig, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__sessionConfig, put = __cordl_internal_set__sessionConfig)) ::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig _sessionConfig;

  /// @brief Field anyIPv4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_anyIPv4, put = setStaticF_anyIPv4)) ::System::Net::IPEndPoint* anyIPv4;

  /// @brief Field anyIPv6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_anyIPv6, put = setStaticF_anyIPv6)) ::System::Net::IPEndPoint* anyIPv6;

  /// @brief Field fastFallback, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_fastFallback, put = setStaticF_fastFallback)) ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState fastFallback;

  __declspec(property(get = get_sessionConfig)) ::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig sessionConfig;

  /// @brief Method BindTo, addr 0x63428e0, size 0x180, virtual false, abstract: false, final false
  static inline ::System::Net::IPEndPoint* BindTo(::System::Net::ServicePoint* servicePoint, ::System::Net::IPEndPoint* remoteEndPoint, int32_t retryCount);

  /// [AsyncStateMachine(typeof(OculusStudios.GraphQL.Client.HttpRequestManager::<CheckAndConsiderFastFallbackAsync>d__37))]
  /// @brief Method CheckAndConsiderFastFallbackAsync, addr 0x6342bdc, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* CheckAndConsiderFastFallbackAsync(::System::Uri* uri);

  /// [AsyncStateMachine(typeof(OculusStudios.GraphQL.Client.HttpRequestManager::<CheckFastFallbackAsync>d__32))]
  /// @brief Method CheckFastFallbackAsync, addr 0x634282c, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* CheckFastFallbackAsync();

  /// [AsyncStateMachine(typeof(OculusStudios.GraphQL.Client.HttpRequestManager::<CheckFastFallbackNoWait>d__31))]
  /// @brief Method CheckFastFallbackNoWait, addr 0x6342794, size 0x98, virtual false, abstract: false, final false
  static inline void CheckFastFallbackNoWait();

  /// @brief Method ConsiderFastFallback, addr 0x6342ac4, size 0x118, virtual false, abstract: false, final false
  static inline void ConsiderFastFallback(::System::Uri* uri);

  /// @brief Method CreateByteArrayRequest, addr 0x6342ddc, size 0x1bc, virtual false, abstract: false, final false
  inline ::System::Net::Http::HttpRequestMessage* CreateByteArrayRequest(::System::Net::Http::HttpMethod* method, ::System::Uri* uri, ::StringW accept, ::StringW contentType,
                                                                         ::ArrayW<uint8_t> content);

  /// @brief Method CreateHttpClient, addr 0x6342164, size 0x278, virtual false, abstract: false, final false
  static inline void CreateHttpClient();

  /// @brief Method CreateRequest, addr 0x6342c8c, size 0x150, virtual false, abstract: false, final false
  inline ::System::Net::Http::HttpRequestMessage* CreateRequest(::System::Net::Http::HttpMethod* method, ::System::Uri* uri);

  /// @brief Method MyCertHandler, addr 0x6342538, size 0x8, virtual false, abstract: false, final false
  static inline bool MyCertHandler(::System::Object* sender, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                   ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors error);

  static inline ::OculusStudios::GraphQL::Client::HttpRequestManager* New_ctor();

  static inline ::OculusStudios::GraphQL::Client::HttpRequestManager* New_ctor(::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig config);

  static inline ::OculusStudios::GraphQL::Client::HttpRequestManager* New_ctor(::System::Net::Http::HttpMessageHandler* handler);

  /// @brief Method OpenPersistentStream, addr 0x63411e8, size 0x4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* OpenPersistentStream(::System::Net::Http::HttpRequestMessage* request);

  /// @brief Method ResetFastFallback, addr 0x63423dc, size 0x7c, virtual false, abstract: false, final false
  static inline void ResetFastFallback();

  /// @brief Method SendAsync, addr 0x6342f98, size 0x4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* request);

  /// [AsyncStateMachine(typeof(OculusStudios.GraphQL.Client.HttpRequestManager::<SendAsyncInternal>d__41))]
  /// @brief Method SendAsyncInternal, addr 0x6342f9c, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsyncInternal(::System::Net::Http::HttpRequestMessage* request);

  /// [AsyncStateMachine(typeof(OculusStudios.GraphQL.Client.HttpRequestManager::<SendAsyncReceiveByteArray>d__43))]
  /// @brief Method SendAsyncReceiveByteArray, addr 0x634307c, size 0xbc, virtual false, abstract: false, final false
  inline void SendAsyncReceiveByteArray(::System::Net::Http::HttpRequestMessage* request, ::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback* callback);

  /// @brief Method SetQueryTimeout, addr 0x6339c74, size 0x24c, virtual false, abstract: false, final false
  static inline void SetQueryTimeout(::System::TimeSpan timeout);

  /// @brief Method UpdateGlobalConfig, addr 0x6342458, size 0xe0, virtual false, abstract: false, final false
  static inline void UpdateGlobalConfig(::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig config);

  /// @brief Method UpdateSessionConfig, addr 0x6342540, size 0xf0, virtual false, abstract: false, final false
  inline void UpdateSessionConfig(::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig config);

  constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig const& __cordl_internal_get__sessionConfig() const;

  constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig& __cordl_internal_get__sessionConfig();

  constexpr void __cordl_internal_set__sessionConfig(::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig value);

  /// @brief Method .ctor, addr 0x633ebf0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6342630, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig config);

  /// @brief Method .ctor, addr 0x63426b0, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::HttpMessageHandler* handler);

  static inline ::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig getStaticF__globalConfig();

  static inline ::System::Net::Http::HttpClient* getStaticF__httpClient();

  static inline ::System::TimeSpan getStaticF__queryTimeout();

  static inline bool getStaticF__queryTimeoutConfigured();

  static inline ::System::Net::IPEndPoint* getStaticF_anyIPv4();

  static inline ::System::Net::IPEndPoint* getStaticF_anyIPv6();

  static inline ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState getStaticF_fastFallback();

  /// @brief Method get_currentFastFallbackState, addr 0x6342090, size 0x5c, virtual false, abstract: false, final false
  static inline ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState get_currentFastFallbackState();

  /// @brief Method get_fastFallbackChecked, addr 0x6342a60, size 0x64, virtual false, abstract: false, final false
  static inline bool get_fastFallbackChecked();

  /// @brief Method get_globalConfig, addr 0x63420ec, size 0x6c, virtual false, abstract: false, final false
  static inline ::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig get_globalConfig();

  /// @brief Method get_sessionConfig, addr 0x6342158, size 0xc, virtual false, abstract: false, final false
  inline ::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig get_sessionConfig();

  static inline void setStaticF__globalConfig(::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig value);

  static inline void setStaticF__httpClient(::System::Net::Http::HttpClient* value);

  static inline void setStaticF__queryTimeout(::System::TimeSpan value);

  static inline void setStaticF__queryTimeoutConfigured(bool value);

  static inline void setStaticF_anyIPv4(::System::Net::IPEndPoint* value);

  static inline void setStaticF_anyIPv6(::System::Net::IPEndPoint* value);

  static inline void setStaticF_fastFallback(::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestManager", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpRequestManager(HttpRequestManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestManager", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpRequestManager(HttpRequestManager const&) = delete;

  /// @brief Field FAST_FALLBACK_TEST_HOST offset 0xffffffff size 0x8
  static constexpr ::ConstString FAST_FALLBACK_TEST_HOST{ u"graph.facebook.com" };

  /// @brief Field FAST_FALLBACK_TEST_PORT offset 0xffffffff size 0x4
  static constexpr int32_t FAST_FALLBACK_TEST_PORT{ static_cast<int32_t>(0x1bb) };

  /// @brief Field FAST_FALLBACK_TEST_THRESHOLD_MS offset 0xffffffff size 0x4
  static constexpr int32_t FAST_FALLBACK_TEST_THRESHOLD_MS{ static_cast<int32_t>(0xc8) };

  /// @brief Field FAST_FALLBACK_TEST_WAIT_INTERVAL_MS offset 0xffffffff size 0x4
  static constexpr int32_t FAST_FALLBACK_TEST_WAIT_INTERVAL_MS{ static_cast<int32_t>(0xc8) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21089 };

  /// @brief Field _sessionConfig, offset: 0x10, size: 0x10, def value: None
  ::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig ____sessionConfig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpRequestManager, ____sessionConfig) == 0x10, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::GraphQL::Client::HttpRequestManager) == 0x20, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
