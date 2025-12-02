#pragma once
// IWYU pragma private; include "System/Net/WebRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Security/zzzz__AuthenticationLevel_def.hpp"
#include "System/Security/Principal/zzzz__TokenImpersonationLevel_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebRequest)
namespace System::Collections {
class ArrayList;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Cache {
class RequestCacheBinding;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net::Cache {
class RequestCacheProtocol;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class IWebRequestCreate;
}
namespace System::Net {
class TimerThread_Queue;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class WebRequest_DesignerWebRequestCreate;
}
namespace System::Net {
class WebRequest___c__DisplayClass78_0;
}
namespace System::Net {
class WebRequest___c__DisplayClass79_0;
}
namespace System::Net {
class WebResponse;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Principal {
class WindowsIdentity;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class WebRequest_DesignerWebRequestCreate;
}
namespace System::Net {
class WebRequest___c__DisplayClass78_0;
}
namespace System::Net {
class WebRequest___c__DisplayClass79_0;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebRequest);
MARK_REF_PTR_T(::System::Net::WebRequest_DesignerWebRequestCreate);
MARK_REF_PTR_T(::System::Net::WebRequest___c__DisplayClass78_0);
MARK_REF_PTR_T(::System::Net::WebRequest___c__DisplayClass79_0);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebRequest/DesignerWebRequestCreate
class CORDL_TYPE WebRequest_DesignerWebRequestCreate : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Net::IWebRequestCreate"
  constexpr operator ::System::Net::IWebRequestCreate*() noexcept;

  /// @brief Method Create, addr 0x61f6b24, size 0x58, virtual true, abstract: false, final true
  inline ::System::Net::WebRequest* Create(::System::Uri* uri);

  static inline ::System::Net::WebRequest_DesignerWebRequestCreate* New_ctor();

  /// @brief Method .ctor, addr 0x61f68f8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Net::IWebRequestCreate"
  constexpr ::System::Net::IWebRequestCreate* i___System__Net__IWebRequestCreate() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequest_DesignerWebRequestCreate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebRequest_DesignerWebRequestCreate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRequest_DesignerWebRequestCreate(WebRequest_DesignerWebRequestCreate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRequest_DesignerWebRequestCreate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRequest_DesignerWebRequestCreate(WebRequest_DesignerWebRequestCreate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11488 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebRequest_DesignerWebRequestCreate, 0x10>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebRequest/<>c__DisplayClass78_0
class CORDL_TYPE WebRequest___c__DisplayClass78_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::System::Net::WebRequest* __4__this;

  /// @brief Field currentUser, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_currentUser, put = __cordl_internal_set_currentUser)) ::System::Security::Principal::WindowsIdentity* currentUser;

  static inline ::System::Net::WebRequest___c__DisplayClass78_0* New_ctor();

  /// @brief Method <GetRequestStreamAsync>b__1, addr 0x61f6b7c, size 0x308, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* _GetRequestStreamAsync_b__1();

  constexpr ::System::Net::WebRequest* const& __cordl_internal_get___4__this() const;

  constexpr ::System::Net::WebRequest*& __cordl_internal_get___4__this();

  constexpr ::System::Security::Principal::WindowsIdentity* const& __cordl_internal_get_currentUser() const;

  constexpr ::System::Security::Principal::WindowsIdentity*& __cordl_internal_get_currentUser();

  constexpr void __cordl_internal_set___4__this(::System::Net::WebRequest* value);

  constexpr void __cordl_internal_set_currentUser(::System::Security::Principal::WindowsIdentity* value);

  /// @brief Method .ctor, addr 0x61f60b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequest___c__DisplayClass78_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebRequest___c__DisplayClass78_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRequest___c__DisplayClass78_0(WebRequest___c__DisplayClass78_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRequest___c__DisplayClass78_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRequest___c__DisplayClass78_0(WebRequest___c__DisplayClass78_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11489 };

  /// @brief Field currentUser, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Principal::WindowsIdentity* ___currentUser;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::System::Net::WebRequest* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequest___c__DisplayClass78_0, ___currentUser) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequest___c__DisplayClass78_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebRequest___c__DisplayClass78_0, 0x20>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebRequest/<>c__DisplayClass79_0
class CORDL_TYPE WebRequest___c__DisplayClass79_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::System::Net::WebRequest* __4__this;

  /// @brief Field currentUser, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_currentUser, put = __cordl_internal_set_currentUser)) ::System::Security::Principal::WindowsIdentity* currentUser;

  static inline ::System::Net::WebRequest___c__DisplayClass79_0* New_ctor();

  /// @brief Method <GetResponseAsync>b__1, addr 0x61f6e84, size 0x308, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* _GetResponseAsync_b__1();

  constexpr ::System::Net::WebRequest* const& __cordl_internal_get___4__this() const;

  constexpr ::System::Net::WebRequest*& __cordl_internal_get___4__this();

  constexpr ::System::Security::Principal::WindowsIdentity* const& __cordl_internal_get_currentUser() const;

  constexpr ::System::Security::Principal::WindowsIdentity*& __cordl_internal_get_currentUser();

  constexpr void __cordl_internal_set___4__this(::System::Net::WebRequest* value);

  constexpr void __cordl_internal_set_currentUser(::System::Security::Principal::WindowsIdentity* value);

  /// @brief Method .ctor, addr 0x61f640c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequest___c__DisplayClass79_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebRequest___c__DisplayClass79_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRequest___c__DisplayClass79_0(WebRequest___c__DisplayClass79_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRequest___c__DisplayClass79_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRequest___c__DisplayClass79_0(WebRequest___c__DisplayClass79_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11490 };

  /// @brief Field currentUser, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Principal::WindowsIdentity* ___currentUser;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::System::Net::WebRequest* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequest___c__DisplayClass79_0, ___currentUser) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequest___c__DisplayClass79_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebRequest___c__DisplayClass79_0, 0x20>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.MarshalByRefObject, System.Net.Security.AuthenticationLevel, System.Security.Principal.TokenImpersonationLevel
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebRequest
class CORDL_TYPE WebRequest : public ::System::MarshalByRefObject {
public:
  // Declarations
  using DesignerWebRequestCreate = ::System::Net::WebRequest_DesignerWebRequestCreate;

  using __c__DisplayClass78_0 = ::System::Net::WebRequest___c__DisplayClass78_0;

  using __c__DisplayClass79_0 = ::System::Net::WebRequest___c__DisplayClass79_0;

  __declspec(property(put = set_CachePolicy)) ::System::Net::Cache::RequestCachePolicy* CachePolicy;

  __declspec(property(get = get_CacheProtocol, put = set_CacheProtocol)) ::System::Net::Cache::RequestCacheProtocol* CacheProtocol;

  __declspec(property(put = set_ConnectionGroupName)) ::StringW ConnectionGroupName;

  __declspec(property(get = get_ContentLength, put = set_ContentLength)) int64_t ContentLength;

  __declspec(property(get = get_Credentials, put = set_Credentials)) ::System::Net::ICredentials* Credentials;

  __declspec(property(get = get_Headers)) ::System::Net::WebHeaderCollection* Headers;

  __declspec(property(get = get_Method, put = set_Method)) ::StringW Method;

  __declspec(property(put = set_PreAuthenticate)) bool PreAuthenticate;

  __declspec(property(get = get_Proxy, put = set_Proxy)) ::System::Net::IWebProxy* Proxy;

  __declspec(property(get = get_RequestUri)) ::System::Uri* RequestUri;

  __declspec(property(get = get_Timeout, put = set_Timeout)) int32_t Timeout;

  __declspec(property(get = get_UseDefaultCredentials)) bool UseDefaultCredentials;

  /// @brief Field m_AuthenticationLevel, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AuthenticationLevel, put = __cordl_internal_set_m_AuthenticationLevel)) ::System::Net::Security::AuthenticationLevel m_AuthenticationLevel;

  /// @brief Field m_CacheBinding, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CacheBinding, put = __cordl_internal_set_m_CacheBinding)) ::System::Net::Cache::RequestCacheBinding* m_CacheBinding;

  /// @brief Field m_CachePolicy, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachePolicy, put = __cordl_internal_set_m_CachePolicy)) ::System::Net::Cache::RequestCachePolicy* m_CachePolicy;

  /// @brief Field m_CacheProtocol, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CacheProtocol, put = __cordl_internal_set_m_CacheProtocol)) ::System::Net::Cache::RequestCacheProtocol* m_CacheProtocol;

  /// @brief Field m_ImpersonationLevel, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ImpersonationLevel, put = __cordl_internal_set_m_ImpersonationLevel)) ::System::Security::Principal::TokenImpersonationLevel m_ImpersonationLevel;

  /// @brief Field s_DefaultTimerQueue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultTimerQueue, put = setStaticF_s_DefaultTimerQueue)) ::System::Net::TimerThread_Queue* s_DefaultTimerQueue;

  /// @brief Field s_DefaultWebProxy, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultWebProxy, put = setStaticF_s_DefaultWebProxy)) ::System::Net::IWebProxy* s_DefaultWebProxy;

  /// @brief Field s_DefaultWebProxyInitialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_DefaultWebProxyInitialized, put = setStaticF_s_DefaultWebProxyInitialized)) bool s_DefaultWebProxyInitialized;

  /// @brief Field s_InternalSyncObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InternalSyncObject, put = setStaticF_s_InternalSyncObject)) ::System::Object* s_InternalSyncObject;

  /// @brief Field s_PrefixList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PrefixList, put = setStaticF_s_PrefixList)) ::System::Collections::ArrayList* s_PrefixList;

  /// @brief Field webRequestCreate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_webRequestCreate, put = setStaticF_webRequestCreate)) ::System::Net::WebRequest_DesignerWebRequestCreate* webRequestCreate;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Abort, addr 0x61f6410, size 0x24, virtual true, abstract: false, final false
  inline void Abort();

  /// @brief Method BeginGetRequestStream, addr 0x61f5d74, size 0x24, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginGetResponse, addr 0x61f5d2c, size 0x24, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method Create, addr 0x61f5714, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Net::WebRequest* Create(::System::Uri* requestUri);

  /// @brief Method Create, addr 0x61f523c, size 0x270, virtual false, abstract: false, final false
  static inline ::System::Net::WebRequest* Create(::System::Uri* requestUri, bool useUriBase);

  /// @brief Method Create, addr 0x61f5638, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Net::WebRequest* Create(::StringW requestUriString);

  /// @brief Method EndGetRequestStream, addr 0x61f5d98, size 0x24, virtual true, abstract: false, final false
  inline ::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* asyncResult);

  /// @brief Method EndGetResponse, addr 0x61f5d50, size 0x24, virtual true, abstract: false, final false
  inline ::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* asyncResult);

  /// @brief Method GetObjectData, addr 0x61f59e4, size 0x4, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetRequestStreamAsync, addr 0x61f5dbc, size 0x2fc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetRequestStreamAsync();

  /// @brief Method GetResponse, addr 0x61f5d08, size 0x24, virtual true, abstract: false, final false
  inline ::System::Net::WebResponse* GetResponse();

  /// @brief Method GetResponseAsync, addr 0x61f6110, size 0x2fc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* GetResponseAsync();

  /// @brief Method InternalSetCachePolicy, addr 0x61f5a64, size 0x88, virtual false, abstract: false, final false
  inline void InternalSetCachePolicy(::System::Net::Cache::RequestCachePolicy* policy);

  static inline ::System::Net::WebRequest* New_ctor();

  static inline ::System::Net::WebRequest* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method PopulatePrefixList, addr 0x61f57e4, size 0x1f0, virtual false, abstract: false, final false
  static inline ::System::Collections::ArrayList* PopulatePrefixList();

  /// @brief Method SafeCaptureIdenity, addr 0x61f60bc, size 0x54, virtual false, abstract: false, final false
  inline ::System::Security::Principal::WindowsIdentity* SafeCaptureIdenity();

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x61f59d8, size 0xc, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method <GetRequestStreamAsync>b__78_0, addr 0x61f68fc, size 0x114, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* _GetRequestStreamAsync_b__78_0();

  /// @brief Method <GetResponseAsync>b__79_0, addr 0x61f6a10, size 0x114, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* _GetResponseAsync_b__79_0();

  constexpr ::System::Net::Security::AuthenticationLevel const& __cordl_internal_get_m_AuthenticationLevel() const;

  constexpr ::System::Net::Security::AuthenticationLevel& __cordl_internal_get_m_AuthenticationLevel();

  constexpr ::System::Net::Cache::RequestCacheBinding* const& __cordl_internal_get_m_CacheBinding() const;

  constexpr ::System::Net::Cache::RequestCacheBinding*& __cordl_internal_get_m_CacheBinding();

  constexpr ::System::Net::Cache::RequestCachePolicy* const& __cordl_internal_get_m_CachePolicy() const;

  constexpr ::System::Net::Cache::RequestCachePolicy*& __cordl_internal_get_m_CachePolicy();

  constexpr ::System::Net::Cache::RequestCacheProtocol* const& __cordl_internal_get_m_CacheProtocol() const;

  constexpr ::System::Net::Cache::RequestCacheProtocol*& __cordl_internal_get_m_CacheProtocol();

  constexpr ::System::Security::Principal::TokenImpersonationLevel const& __cordl_internal_get_m_ImpersonationLevel() const;

  constexpr ::System::Security::Principal::TokenImpersonationLevel& __cordl_internal_get_m_ImpersonationLevel();

  constexpr void __cordl_internal_set_m_AuthenticationLevel(::System::Net::Security::AuthenticationLevel value);

  constexpr void __cordl_internal_set_m_CacheBinding(::System::Net::Cache::RequestCacheBinding* value);

  constexpr void __cordl_internal_set_m_CachePolicy(::System::Net::Cache::RequestCachePolicy* value);

  constexpr void __cordl_internal_set_m_CacheProtocol(::System::Net::Cache::RequestCacheProtocol* value);

  constexpr void __cordl_internal_set_m_ImpersonationLevel(::System::Security::Principal::TokenImpersonationLevel value);

  /// @brief Method .ctor, addr 0x61e7464, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x61f59d4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  static inline ::System::Net::TimerThread_Queue* getStaticF_s_DefaultTimerQueue();

  static inline ::System::Net::IWebProxy* getStaticF_s_DefaultWebProxy();

  static inline bool getStaticF_s_DefaultWebProxyInitialized();

  static inline ::System::Object* getStaticF_s_InternalSyncObject();

  static inline ::System::Collections::ArrayList* getStaticF_s_PrefixList();

  static inline ::System::Net::WebRequest_DesignerWebRequestCreate* getStaticF_webRequestCreate();

  /// @brief Method get_CacheProtocol, addr 0x61f6434, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Cache::RequestCacheProtocol* get_CacheProtocol();

  /// @brief Method get_ContentLength, addr 0x61f5ba0, size 0x24, virtual true, abstract: false, final false
  inline int64_t get_ContentLength();

  /// @brief Method get_Credentials, addr 0x61f5be8, size 0x24, virtual true, abstract: false, final false
  inline ::System::Net::ICredentials* get_Credentials();

  /// @brief Method get_DefaultCachePolicy, addr 0x61f59e8, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Net::Cache::RequestCachePolicy* get_DefaultCachePolicy();

  /// @brief Method get_Headers, addr 0x61f5b7c, size 0x24, virtual true, abstract: false, final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method get_InternalDefaultWebProxy, addr 0x61f6444, size 0x1c0, virtual false, abstract: false, final false
  static inline ::System::Net::IWebProxy* get_InternalDefaultWebProxy();

  /// @brief Method get_InternalSyncObject, addr 0x61f516c, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Object* get_InternalSyncObject();

  /// @brief Method get_Method, addr 0x61f5aec, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_Method();

  /// @brief Method get_PrefixList, addr 0x61f54ac, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Collections::ArrayList* get_PrefixList();

  /// @brief Method get_Proxy, addr 0x61f5c54, size 0x24, virtual true, abstract: false, final false
  inline ::System::Net::IWebProxy* get_Proxy();

  /// @brief Method get_RequestUri, addr 0x61f5b34, size 0x24, virtual true, abstract: false, final false
  inline ::System::Uri* get_RequestUri();

  /// @brief Method get_Timeout, addr 0x61f5cc0, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_Timeout();

  /// @brief Method get_UseDefaultCredentials, addr 0x61f5c30, size 0x24, virtual true, abstract: false, final false
  inline bool get_UseDefaultCredentials();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_s_DefaultTimerQueue(::System::Net::TimerThread_Queue* value);

  static inline void setStaticF_s_DefaultWebProxy(::System::Net::IWebProxy* value);

  static inline void setStaticF_s_DefaultWebProxyInitialized(bool value);

  static inline void setStaticF_s_InternalSyncObject(::System::Object* value);

  static inline void setStaticF_s_PrefixList(::System::Collections::ArrayList* value);

  static inline void setStaticF_webRequestCreate(::System::Net::WebRequest_DesignerWebRequestCreate* value);

  /// @brief Method set_CachePolicy, addr 0x61f5a60, size 0x4, virtual true, abstract: false, final false
  inline void set_CachePolicy(::System::Net::Cache::RequestCachePolicy* value);

  /// @brief Method set_CacheProtocol, addr 0x61f643c, size 0x8, virtual false, abstract: false, final false
  inline void set_CacheProtocol(::System::Net::Cache::RequestCacheProtocol* value);

  /// @brief Method set_ConnectionGroupName, addr 0x61f5b58, size 0x24, virtual true, abstract: false, final false
  inline void set_ConnectionGroupName(::StringW value);

  /// @brief Method set_ContentLength, addr 0x61f5bc4, size 0x24, virtual true, abstract: false, final false
  inline void set_ContentLength(int64_t value);

  /// @brief Method set_Credentials, addr 0x61f5c0c, size 0x24, virtual true, abstract: false, final false
  inline void set_Credentials(::System::Net::ICredentials* value);

  /// @brief Method set_Method, addr 0x61f5b10, size 0x24, virtual true, abstract: false, final false
  inline void set_Method(::StringW value);

  /// @brief Method set_PreAuthenticate, addr 0x61f5c9c, size 0x24, virtual true, abstract: false, final false
  inline void set_PreAuthenticate(bool value);

  /// @brief Method set_Proxy, addr 0x61f5c78, size 0x24, virtual true, abstract: false, final false
  inline void set_Proxy(::System::Net::IWebProxy* value);

  /// @brief Method set_Timeout, addr 0x61f5ce4, size 0x24, virtual true, abstract: false, final false
  inline void set_Timeout(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRequest(WebRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRequest(WebRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11491 };

  /// @brief Field m_AuthenticationLevel, offset: 0x18, size: 0x4, def value: None
  ::System::Net::Security::AuthenticationLevel ___m_AuthenticationLevel;

  /// @brief Field m_ImpersonationLevel, offset: 0x1c, size: 0x4, def value: None
  ::System::Security::Principal::TokenImpersonationLevel ___m_ImpersonationLevel;

  /// @brief Field m_CachePolicy, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Cache::RequestCachePolicy* ___m_CachePolicy;

  /// @brief Field m_CacheProtocol, offset: 0x28, size: 0x8, def value: None
  ::System::Net::Cache::RequestCacheProtocol* ___m_CacheProtocol;

  /// @brief Field m_CacheBinding, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Cache::RequestCacheBinding* ___m_CacheBinding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequest, ___m_AuthenticationLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequest, ___m_ImpersonationLevel) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequest, ___m_CachePolicy) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequest, ___m_CacheProtocol) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequest, ___m_CacheBinding) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebRequest, 0x38>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebRequest);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequest*, "System.Net", "WebRequest");
NEED_NO_BOX(::System::Net::WebRequest_DesignerWebRequestCreate);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequest_DesignerWebRequestCreate*, "System.Net", "WebRequest/DesignerWebRequestCreate");
NEED_NO_BOX(::System::Net::WebRequest___c__DisplayClass78_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequest___c__DisplayClass78_0*, "System.Net", "WebRequest/<>c__DisplayClass78_0");
NEED_NO_BOX(::System::Net::WebRequest___c__DisplayClass79_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequest___c__DisplayClass79_0*, "System.Net", "WebRequest/<>c__DisplayClass79_0");
