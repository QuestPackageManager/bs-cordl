#pragma once
// IWYU pragma private; include "System/Net/WebConnectionTunnel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebConnectionTunnel)
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
struct WebConnectionTunnel_NtlmAuthState;
}
namespace System::Net {
struct WebConnectionTunnel__Initialize_d__42;
}
namespace System::Net {
struct WebConnectionTunnel__ReadHeaders_d__43;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Uri;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System::Net {
struct WebConnectionTunnel_NtlmAuthState;
}
namespace System::Net {
class WebConnectionTunnel;
}
namespace System::Net {
struct WebConnectionTunnel__Initialize_d__42;
}
namespace System::Net {
struct WebConnectionTunnel__ReadHeaders_d__43;
}
// Write type traits
MARK_VAL_T(::System::Net::WebConnectionTunnel_NtlmAuthState);
MARK_REF_PTR_T(::System::Net::WebConnectionTunnel);
MARK_VAL_T(::System::Net::WebConnectionTunnel__Initialize_d__42);
MARK_VAL_T(::System::Net::WebConnectionTunnel__ReadHeaders_d__43);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebConnectionTunnel/NtlmAuthState
struct CORDL_TYPE WebConnectionTunnel_NtlmAuthState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WebConnectionTunnel_NtlmAuthState_Unwrapped
  enum struct __WebConnectionTunnel_NtlmAuthState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Challenge = static_cast<int32_t>(0x1),
    __E_Response = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WebConnectionTunnel_NtlmAuthState_Unwrapped() const noexcept {
    return static_cast<__WebConnectionTunnel_NtlmAuthState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebConnectionTunnel_NtlmAuthState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WebConnectionTunnel_NtlmAuthState(int32_t value__) noexcept;

  /// @brief Field Challenge value: I32(1)
  static ::System::Net::WebConnectionTunnel_NtlmAuthState const Challenge;

  /// @brief Field None value: I32(0)
  static ::System::Net::WebConnectionTunnel_NtlmAuthState const None;

  /// @brief Field Response value: I32(2)
  static ::System::Net::WebConnectionTunnel_NtlmAuthState const Response;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9742 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebConnectionTunnel_NtlmAuthState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebConnectionTunnel_NtlmAuthState, 0x4>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken,
// System.ValueTuple`3<T1, T2, T3>
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebConnectionTunnel/<Initialize>d__42
struct CORDL_TYPE WebConnectionTunnel__Initialize_d__42 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43eb580, size 0xd38, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43ec2b8, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebConnectionTunnel__Initialize_d__42();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebConnectionTunnel*", modifiers: "", def_value:
  // None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None }, CppParam { name: "_have_auth_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::ValueTuple_3<::System::Net::WebHeaderCollection*,::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t>>",
  // modifiers: "", def_value: None }]
  constexpr WebConnectionTunnel__Initialize_d__42(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebConnectionTunnel* __4__this, ::System::IO::Stream* stream,
      ::System::Threading::CancellationToken cancellationToken, bool _have_auth_5__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t>>
          __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9743 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebConnectionTunnel* __4__this;

  /// @brief Field stream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* stream;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <have_auth>5__2, offset: 0x38, size: 0x1, def value: None
  bool _have_auth_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t>>
      __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebConnectionTunnel__Initialize_d__42, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel__Initialize_d__42, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel__Initialize_d__42, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel__Initialize_d__42, stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel__Initialize_d__42, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel__Initialize_d__42, _have_auth_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel__Initialize_d__42, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel__Initialize_d__42, __u__2) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebConnectionTunnel__Initialize_d__42, 0x60>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken, System.ValueTuple`3<T1, T2, T3>
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebConnectionTunnel/<ReadHeaders>d__43
struct CORDL_TYPE WebConnectionTunnel__ReadHeaders_d__43 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43ec320, size 0x864, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43ecb84, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebConnectionTunnel__ReadHeaders_d__43();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*,::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t>>", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebConnectionTunnel*", modifiers: "", def_value: None }, CppParam { name: "_retBuffer_5__2", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "_status_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__4", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "_ms_5__5", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr WebConnectionTunnel__ReadHeaders_d__43(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t>> __t__builder,
      ::System::Threading::CancellationToken cancellationToken, ::System::IO::Stream* stream, ::System::Net::WebConnectionTunnel* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> _retBuffer_5__2,
      int32_t _status_5__3, ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__4, ::System::IO::MemoryStream* _ms_5__5,
      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9744 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t>> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field stream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* stream;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::System::Net::WebConnectionTunnel* __4__this;

  /// @brief Field <retBuffer>5__2, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _retBuffer_5__2;

  /// @brief Field <status>5__3, offset: 0x40, size: 0x4, def value: None
  int32_t _status_5__3;

  /// @brief Field <buffer>5__4, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__4;

  /// @brief Field <ms>5__5, offset: 0x50, size: 0x8, def value: None
  ::System::IO::MemoryStream* _ms_5__5;

  /// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebConnectionTunnel__ReadHeaders_d__43, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel__ReadHeaders_d__43, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel__ReadHeaders_d__43, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel__ReadHeaders_d__43, stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel__ReadHeaders_d__43, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel__ReadHeaders_d__43, _retBuffer_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel__ReadHeaders_d__43, _status_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel__ReadHeaders_d__43, _buffer_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel__ReadHeaders_d__43, _ms_5__5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel__ReadHeaders_d__43, __u__1) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebConnectionTunnel__ReadHeaders_d__43, 0x68>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.WebConnectionTunnel::NtlmAuthState, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebConnectionTunnel
class CORDL_TYPE WebConnectionTunnel : public ::System::Object {
public:
  // Declarations
  using NtlmAuthState = ::System::Net::WebConnectionTunnel_NtlmAuthState;

  using _Initialize_d__42 = ::System::Net::WebConnectionTunnel__Initialize_d__42;

  using _ReadHeaders_d__43 = ::System::Net::WebConnectionTunnel__ReadHeaders_d__43;

  __declspec(property(get = get_Challenge, put = set_Challenge)) ::ArrayW<::StringW, ::Array<::StringW>*> Challenge;

  __declspec(property(get = get_CloseConnection, put = set_CloseConnection)) bool CloseConnection;

  __declspec(property(get = get_ConnectUri)) ::System::Uri* ConnectUri;

  __declspec(property(get = get_Data, put = set_Data)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Data;

  __declspec(property(get = get_Headers, put = set_Headers)) ::System::Net::WebHeaderCollection* Headers;

  __declspec(property(get = get_ProxyVersion, put = set_ProxyVersion)) ::System::Version* ProxyVersion;

  __declspec(property(get = get_Request)) ::System::Net::HttpWebRequest* Request;

  __declspec(property(get = get_StatusCode, put = set_StatusCode)) int32_t StatusCode;

  __declspec(property(put = set_StatusDescription)) ::StringW StatusDescription;

  __declspec(property(get = get_Success, put = set_Success)) bool Success;

  /// @brief Field <Challenge>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Challenge_k__BackingField, put = __cordl_internal_set__Challenge_k__BackingField)) ::ArrayW<::StringW, ::Array<::StringW>*>
      _Challenge_k__BackingField;

  /// @brief Field <CloseConnection>k__BackingField, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get__CloseConnection_k__BackingField, put = __cordl_internal_set__CloseConnection_k__BackingField)) bool _CloseConnection_k__BackingField;

  /// @brief Field <ConnectUri>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ConnectUri_k__BackingField, put = __cordl_internal_set__ConnectUri_k__BackingField)) ::System::Uri* _ConnectUri_k__BackingField;

  /// @brief Field <Data>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__Data_k__BackingField, put = __cordl_internal_set__Data_k__BackingField)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _Data_k__BackingField;

  /// @brief Field <Headers>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Headers_k__BackingField, put = __cordl_internal_set__Headers_k__BackingField)) ::System::Net::WebHeaderCollection* _Headers_k__BackingField;

  /// @brief Field <ProxyVersion>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__ProxyVersion_k__BackingField, put = __cordl_internal_set__ProxyVersion_k__BackingField)) ::System::Version* _ProxyVersion_k__BackingField;

  /// @brief Field <Request>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Request_k__BackingField, put = __cordl_internal_set__Request_k__BackingField)) ::System::Net::HttpWebRequest* _Request_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__StatusCode_k__BackingField, put = __cordl_internal_set__StatusCode_k__BackingField)) int32_t _StatusCode_k__BackingField;

  /// @brief Field <StatusDescription>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__StatusDescription_k__BackingField, put = __cordl_internal_set__StatusDescription_k__BackingField)) ::StringW _StatusDescription_k__BackingField;

  /// @brief Field <Success>k__BackingField, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__Success_k__BackingField, put = __cordl_internal_set__Success_k__BackingField)) bool _Success_k__BackingField;

  /// @brief Field connectRequest, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_connectRequest, put = __cordl_internal_set_connectRequest)) ::System::Net::HttpWebRequest* connectRequest;

  /// @brief Field ntlmAuthState, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_ntlmAuthState, put = __cordl_internal_set_ntlmAuthState)) ::System::Net::WebConnectionTunnel_NtlmAuthState ntlmAuthState;

  /// @brief Method FlushContents, addr 0x43eb4ec, size 0x94, virtual false, abstract: false, final false
  inline void FlushContents(::System::IO::Stream* stream, int32_t contentLength);

  /// @brief Method Initialize, addr 0x43eb318, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* Initialize(::System::IO::Stream* stream, ::System::Threading::CancellationToken cancellationToken);

  static inline ::System::Net::WebConnectionTunnel* New_ctor(::System::Net::HttpWebRequest* request, ::System::Uri* connectUri);

  /// @brief Method ReadHeaders, addr 0x43eb3f4, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t>>*
  ReadHeaders(::System::IO::Stream* stream, ::System::Threading::CancellationToken cancellationToken);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__Challenge_k__BackingField() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__Challenge_k__BackingField();

  constexpr bool const& __cordl_internal_get__CloseConnection_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CloseConnection_k__BackingField();

  constexpr ::System::Uri* const& __cordl_internal_get__ConnectUri_k__BackingField() const;

  constexpr ::System::Uri*& __cordl_internal_get__ConnectUri_k__BackingField();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__Data_k__BackingField() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__Data_k__BackingField();

  constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get__Headers_k__BackingField() const;

  constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get__Headers_k__BackingField();

  constexpr ::System::Version* const& __cordl_internal_get__ProxyVersion_k__BackingField() const;

  constexpr ::System::Version*& __cordl_internal_get__ProxyVersion_k__BackingField();

  constexpr ::System::Net::HttpWebRequest* const& __cordl_internal_get__Request_k__BackingField() const;

  constexpr ::System::Net::HttpWebRequest*& __cordl_internal_get__Request_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__StatusCode_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__StatusCode_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__StatusDescription_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__StatusDescription_k__BackingField();

  constexpr bool const& __cordl_internal_get__Success_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Success_k__BackingField();

  constexpr ::System::Net::HttpWebRequest* const& __cordl_internal_get_connectRequest() const;

  constexpr ::System::Net::HttpWebRequest*& __cordl_internal_get_connectRequest();

  constexpr ::System::Net::WebConnectionTunnel_NtlmAuthState const& __cordl_internal_get_ntlmAuthState() const;

  constexpr ::System::Net::WebConnectionTunnel_NtlmAuthState& __cordl_internal_get_ntlmAuthState();

  constexpr void __cordl_internal_set__Challenge_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__CloseConnection_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ConnectUri_k__BackingField(::System::Uri* value);

  constexpr void __cordl_internal_set__Data_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__Headers_k__BackingField(::System::Net::WebHeaderCollection* value);

  constexpr void __cordl_internal_set__ProxyVersion_k__BackingField(::System::Version* value);

  constexpr void __cordl_internal_set__Request_k__BackingField(::System::Net::HttpWebRequest* value);

  constexpr void __cordl_internal_set__StatusCode_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__StatusDescription_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Success_k__BackingField(bool value);

  constexpr void __cordl_internal_set_connectRequest(::System::Net::HttpWebRequest* value);

  constexpr void __cordl_internal_set_ntlmAuthState(::System::Net::WebConnectionTunnel_NtlmAuthState value);

  /// @brief Method .ctor, addr 0x43eb26c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::HttpWebRequest* request, ::System::Uri* connectUri);

  /// @brief Method get_Challenge, addr 0x43eb2d8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Challenge();

  /// @brief Method get_CloseConnection, addr 0x43eb2ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_CloseConnection();

  /// @brief Method get_ConnectUri, addr 0x43eb264, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_ConnectUri();

  /// @brief Method get_Data, addr 0x43eb308, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Data();

  /// @brief Method get_Headers, addr 0x43eb2e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method get_ProxyVersion, addr 0x43eb2f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Version* get_ProxyVersion();

  /// @brief Method get_Request, addr 0x43eb25c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::HttpWebRequest* get_Request();

  /// @brief Method get_StatusCode, addr 0x43eb2c0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_StatusCode();

  /// @brief Method get_Success, addr 0x43eb298, size 0x8, virtual false, abstract: false, final false
  inline bool get_Success();

  /// @brief Method set_Challenge, addr 0x43eb2e0, size 0x8, virtual false, abstract: false, final false
  inline void set_Challenge(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_CloseConnection, addr 0x43eb2b4, size 0xc, virtual false, abstract: false, final false
  inline void set_CloseConnection(bool value);

  /// @brief Method set_Data, addr 0x43eb310, size 0x8, virtual false, abstract: false, final false
  inline void set_Data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_Headers, addr 0x43eb2f0, size 0x8, virtual false, abstract: false, final false
  inline void set_Headers(::System::Net::WebHeaderCollection* value);

  /// @brief Method set_ProxyVersion, addr 0x43eb300, size 0x8, virtual false, abstract: false, final false
  inline void set_ProxyVersion(::System::Version* value);

  /// @brief Method set_StatusCode, addr 0x43eb2c8, size 0x8, virtual false, abstract: false, final false
  inline void set_StatusCode(int32_t value);

  /// @brief Method set_StatusDescription, addr 0x43eb2d0, size 0x8, virtual false, abstract: false, final false
  inline void set_StatusDescription(::StringW value);

  /// @brief Method set_Success, addr 0x43eb2a0, size 0xc, virtual false, abstract: false, final false
  inline void set_Success(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebConnectionTunnel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebConnectionTunnel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebConnectionTunnel(WebConnectionTunnel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebConnectionTunnel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebConnectionTunnel(WebConnectionTunnel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9745 };

  /// @brief Field <Request>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Net::HttpWebRequest* ____Request_k__BackingField;

  /// @brief Field <ConnectUri>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Uri* ____ConnectUri_k__BackingField;

  /// @brief Field connectRequest, offset: 0x20, size: 0x8, def value: None
  ::System::Net::HttpWebRequest* ___connectRequest;

  /// @brief Field ntlmAuthState, offset: 0x28, size: 0x4, def value: None
  ::System::Net::WebConnectionTunnel_NtlmAuthState ___ntlmAuthState;

  /// @brief Field <Success>k__BackingField, offset: 0x2c, size: 0x1, def value: None
  bool ____Success_k__BackingField;

  /// @brief Field <CloseConnection>k__BackingField, offset: 0x2d, size: 0x1, def value: None
  bool ____CloseConnection_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____StatusCode_k__BackingField;

  /// @brief Field <StatusDescription>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____StatusDescription_k__BackingField;

  /// @brief Field <Challenge>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____Challenge_k__BackingField;

  /// @brief Field <Headers>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Net::WebHeaderCollection* ____Headers_k__BackingField;

  /// @brief Field <ProxyVersion>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::System::Version* ____ProxyVersion_k__BackingField;

  /// @brief Field <Data>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____Data_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebConnectionTunnel, ____Request_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____ConnectUri_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ___connectRequest) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ___ntlmAuthState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____Success_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____CloseConnection_k__BackingField) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____StatusCode_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____StatusDescription_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____Challenge_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____Headers_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____ProxyVersion_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____Data_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebConnectionTunnel, 0x60>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnectionTunnel_NtlmAuthState, "System.Net", "WebConnectionTunnel/NtlmAuthState");
NEED_NO_BOX(::System::Net::WebConnectionTunnel);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnectionTunnel*, "System.Net", "WebConnectionTunnel");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnectionTunnel__Initialize_d__42, "System.Net", "WebConnectionTunnel/<Initialize>d__42");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnectionTunnel__ReadHeaders_d__43, "System.Net", "WebConnectionTunnel/<ReadHeaders>d__43");
