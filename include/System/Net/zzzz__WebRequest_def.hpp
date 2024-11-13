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
class WebHeaderCollection;
}
namespace System::Net {
class WebResponse;
}
namespace System::Net {
class __TimerThread__Queue;
}
namespace System::Net {
class __WebRequest__DesignerWebRequestCreate;
}
namespace System::Net {
class __WebRequest____c__DisplayClass78_0;
}
namespace System::Net {
class __WebRequest____c__DisplayClass79_0;
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
class __WebRequest__DesignerWebRequestCreate;
}
namespace System::Net {
class __WebRequest____c__DisplayClass78_0;
}
namespace System::Net {
class __WebRequest____c__DisplayClass79_0;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebRequest);
MARK_REF_PTR_T(::System::Net::__WebRequest__DesignerWebRequestCreate);
MARK_REF_PTR_T(::System::Net::__WebRequest____c__DisplayClass78_0);
MARK_REF_PTR_T(::System::Net::__WebRequest____c__DisplayClass79_0);
// Type: ::DesignerWebRequestCreate
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::WebRequest::DesignerWebRequestCreate*
class CORDL_TYPE __WebRequest__DesignerWebRequestCreate : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Net::IWebRequestCreate"
  constexpr operator ::System::Net::IWebRequestCreate*() noexcept;

  /// @brief Method Create, addr 0x44447f8, size 0x54, virtual true, abstract: false, final true
  inline ::System::Net::WebRequest* Create(::System::Uri* uri);

  static inline ::System::Net::__WebRequest__DesignerWebRequestCreate* New_ctor();

  /// @brief Method .ctor, addr 0x4444608, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Net::IWebRequestCreate"
  constexpr ::System::Net::IWebRequestCreate* i___System__Net__IWebRequestCreate() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebRequest__DesignerWebRequestCreate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__WebRequest__DesignerWebRequestCreate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WebRequest__DesignerWebRequestCreate(__WebRequest__DesignerWebRequestCreate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WebRequest__DesignerWebRequestCreate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WebRequest__DesignerWebRequestCreate(__WebRequest__DesignerWebRequestCreate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9584 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebRequest__DesignerWebRequestCreate, 0x10>, "Size mismatch!");

} // namespace System::Net
// Type: ::<>c__DisplayClass78_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::WebRequest::<>c__DisplayClass78_0*
class CORDL_TYPE __WebRequest____c__DisplayClass78_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::System::Net::WebRequest* __4__this;

  /// @brief Field currentUser, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_currentUser, put = __cordl_internal_set_currentUser)) ::System::Security::Principal::WindowsIdentity* currentUser;

  static inline ::System::Net::__WebRequest____c__DisplayClass78_0* New_ctor();

  /// @brief Method <GetRequestStreamAsync>b__1, addr 0x444484c, size 0x398, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* _GetRequestStreamAsync_b__1();

  constexpr ::System::Net::WebRequest*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequest*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Security::Principal::WindowsIdentity*& __cordl_internal_get_currentUser();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::WindowsIdentity*> const& __cordl_internal_get_currentUser() const;

  constexpr void __cordl_internal_set___4__this(::System::Net::WebRequest* value);

  constexpr void __cordl_internal_set_currentUser(::System::Security::Principal::WindowsIdentity* value);

  /// @brief Method .ctor, addr 0x4443e3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebRequest____c__DisplayClass78_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__WebRequest____c__DisplayClass78_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WebRequest____c__DisplayClass78_0(__WebRequest____c__DisplayClass78_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WebRequest____c__DisplayClass78_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WebRequest____c__DisplayClass78_0(__WebRequest____c__DisplayClass78_0 const&) = delete;

  /// @brief Field currentUser, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Principal::WindowsIdentity* ___currentUser;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::System::Net::WebRequest* _____4__this;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9585 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebRequest____c__DisplayClass78_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::__WebRequest____c__DisplayClass78_0, ___currentUser) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebRequest____c__DisplayClass78_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace System::Net
// Type: ::<>c__DisplayClass79_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::WebRequest::<>c__DisplayClass79_0*
class CORDL_TYPE __WebRequest____c__DisplayClass79_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::System::Net::WebRequest* __4__this;

  /// @brief Field currentUser, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_currentUser, put = __cordl_internal_set_currentUser)) ::System::Security::Principal::WindowsIdentity* currentUser;

  static inline ::System::Net::__WebRequest____c__DisplayClass79_0* New_ctor();

  /// @brief Method <GetResponseAsync>b__1, addr 0x4444be4, size 0x398, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* _GetResponseAsync_b__1();

  constexpr ::System::Net::WebRequest*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequest*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Security::Principal::WindowsIdentity*& __cordl_internal_get_currentUser();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::WindowsIdentity*> const& __cordl_internal_get_currentUser() const;

  constexpr void __cordl_internal_set___4__this(::System::Net::WebRequest* value);

  constexpr void __cordl_internal_set_currentUser(::System::Security::Principal::WindowsIdentity* value);

  /// @brief Method .ctor, addr 0x4444118, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebRequest____c__DisplayClass79_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__WebRequest____c__DisplayClass79_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WebRequest____c__DisplayClass79_0(__WebRequest____c__DisplayClass79_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WebRequest____c__DisplayClass79_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WebRequest____c__DisplayClass79_0(__WebRequest____c__DisplayClass79_0 const&) = delete;

  /// @brief Field currentUser, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Principal::WindowsIdentity* ___currentUser;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::System::Net::WebRequest* _____4__this;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9586 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebRequest____c__DisplayClass79_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::__WebRequest____c__DisplayClass79_0, ___currentUser) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebRequest____c__DisplayClass79_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::WebRequest
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::WebRequest*
class CORDL_TYPE WebRequest : public ::System::MarshalByRefObject {
public:
  // Declarations
  using DesignerWebRequestCreate = ::System::Net::__WebRequest__DesignerWebRequestCreate;

  using __c__DisplayClass78_0 = ::System::Net::__WebRequest____c__DisplayClass78_0;

  using __c__DisplayClass79_0 = ::System::Net::__WebRequest____c__DisplayClass79_0;

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
  static __declspec(property(get = getStaticF_s_DefaultTimerQueue, put = setStaticF_s_DefaultTimerQueue)) ::System::Net::__TimerThread__Queue* s_DefaultTimerQueue;

  /// @brief Field s_DefaultWebProxy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultWebProxy, put = setStaticF_s_DefaultWebProxy)) ::System::Net::IWebProxy* s_DefaultWebProxy;

  /// @brief Field s_DefaultWebProxyInitialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_DefaultWebProxyInitialized, put = setStaticF_s_DefaultWebProxyInitialized)) bool s_DefaultWebProxyInitialized;

  /// @brief Field s_InternalSyncObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InternalSyncObject, put = setStaticF_s_InternalSyncObject)) ::System::Object* s_InternalSyncObject;

  /// @brief Field s_PrefixList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_PrefixList, put = setStaticF_s_PrefixList)) ::System::Collections::ArrayList* s_PrefixList;

  /// @brief Field webRequestCreate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_webRequestCreate, put = setStaticF_webRequestCreate)) ::System::Net::__WebRequest__DesignerWebRequestCreate* webRequestCreate;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Abort, addr 0x4444120, size 0x24, virtual true, abstract: false, final false
  inline void Abort();

  /// @brief Method BeginGetRequestStream, addr 0x4443b70, size 0x24, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginGetResponse, addr 0x4443b28, size 0x24, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method Create, addr 0x44434a0, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Net::WebRequest* Create(::System::Uri* requestUri);

  /// @brief Method Create, addr 0x4442fb4, size 0x288, virtual false, abstract: false, final false
  static inline ::System::Net::WebRequest* Create(::System::Uri* requestUri, bool useUriBase);

  /// @brief Method Create, addr 0x44433d0, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Net::WebRequest* Create(::StringW requestUriString);

  /// @brief Method EndGetRequestStream, addr 0x4443b94, size 0x24, virtual true, abstract: false, final false
  inline ::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* asyncResult);

  /// @brief Method EndGetResponse, addr 0x4443b4c, size 0x24, virtual true, abstract: false, final false
  inline ::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* asyncResult);

  /// @brief Method GetObjectData, addr 0x44437ac, size 0x4, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetRequestStreamAsync, addr 0x4443bb8, size 0x284, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetRequestStreamAsync();

  /// @brief Method GetResponse, addr 0x4443b04, size 0x24, virtual true, abstract: false, final false
  inline ::System::Net::WebResponse* GetResponse();

  /// @brief Method GetResponseAsync, addr 0x4443e94, size 0x284, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* GetResponseAsync();

  /// @brief Method InternalSetCachePolicy, addr 0x4443838, size 0xb0, virtual false, abstract: false, final false
  inline void InternalSetCachePolicy(::System::Net::Cache::RequestCachePolicy* policy);

  static inline ::System::Net::WebRequest* New_ctor();

  static inline ::System::Net::WebRequest* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method PopulatePrefixList, addr 0x4443578, size 0x220, virtual false, abstract: false, final false
  static inline ::System::Collections::ArrayList* PopulatePrefixList();

  /// @brief Method SafeCaptureIdenity, addr 0x4443e44, size 0x50, virtual false, abstract: false, final false
  inline ::System::Security::Principal::WindowsIdentity* SafeCaptureIdenity();

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x44437a0, size 0xc, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method <GetRequestStreamAsync>b__78_0, addr 0x4444610, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* _GetRequestStreamAsync_b__78_0();

  /// @brief Method <GetResponseAsync>b__79_0, addr 0x4444704, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* _GetResponseAsync_b__79_0();

  constexpr ::System::Net::Security::AuthenticationLevel const& __cordl_internal_get_m_AuthenticationLevel() const;

  constexpr ::System::Net::Security::AuthenticationLevel& __cordl_internal_get_m_AuthenticationLevel();

  constexpr ::System::Net::Cache::RequestCacheBinding*& __cordl_internal_get_m_CacheBinding();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCacheBinding*> const& __cordl_internal_get_m_CacheBinding() const;

  constexpr ::System::Net::Cache::RequestCachePolicy*& __cordl_internal_get_m_CachePolicy();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCachePolicy*> const& __cordl_internal_get_m_CachePolicy() const;

  constexpr ::System::Net::Cache::RequestCacheProtocol*& __cordl_internal_get_m_CacheProtocol();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCacheProtocol*> const& __cordl_internal_get_m_CacheProtocol() const;

  constexpr ::System::Security::Principal::TokenImpersonationLevel const& __cordl_internal_get_m_ImpersonationLevel() const;

  constexpr ::System::Security::Principal::TokenImpersonationLevel& __cordl_internal_get_m_ImpersonationLevel();

  constexpr void __cordl_internal_set_m_AuthenticationLevel(::System::Net::Security::AuthenticationLevel value);

  constexpr void __cordl_internal_set_m_CacheBinding(::System::Net::Cache::RequestCacheBinding* value);

  constexpr void __cordl_internal_set_m_CachePolicy(::System::Net::Cache::RequestCachePolicy* value);

  constexpr void __cordl_internal_set_m_CacheProtocol(::System::Net::Cache::RequestCacheProtocol* value);

  constexpr void __cordl_internal_set_m_ImpersonationLevel(::System::Security::Principal::TokenImpersonationLevel value);

  /// @brief Method .ctor, addr 0x4435048, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4443798, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  static inline ::System::Net::__TimerThread__Queue* getStaticF_s_DefaultTimerQueue();

  static inline ::System::Net::IWebProxy* getStaticF_s_DefaultWebProxy();

  static inline bool getStaticF_s_DefaultWebProxyInitialized();

  static inline ::System::Object* getStaticF_s_InternalSyncObject();

  static inline ::System::Collections::ArrayList* getStaticF_s_PrefixList();

  static inline ::System::Net::__WebRequest__DesignerWebRequestCreate* getStaticF_webRequestCreate();

  /// @brief Method get_CacheProtocol, addr 0x4444144, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Cache::RequestCacheProtocol* get_CacheProtocol();

  /// @brief Method get_ContentLength, addr 0x444399c, size 0x24, virtual true, abstract: false, final false
  inline int64_t get_ContentLength();

  /// @brief Method get_Credentials, addr 0x44439e4, size 0x24, virtual true, abstract: false, final false
  inline ::System::Net::ICredentials* get_Credentials();

  /// @brief Method get_DefaultCachePolicy, addr 0x44437b0, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Net::Cache::RequestCachePolicy* get_DefaultCachePolicy();

  /// @brief Method get_Headers, addr 0x4443978, size 0x24, virtual true, abstract: false, final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method get_InternalDefaultWebProxy, addr 0x4444154, size 0x1cc, virtual false, abstract: false, final false
  static inline ::System::Net::IWebProxy* get_InternalDefaultWebProxy();

  /// @brief Method get_InternalSyncObject, addr 0x4442ee8, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Object* get_InternalSyncObject();

  /// @brief Method get_Method, addr 0x44438e8, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_Method();

  /// @brief Method get_PrefixList, addr 0x444323c, size 0x194, virtual false, abstract: false, final false
  static inline ::System::Collections::ArrayList* get_PrefixList();

  /// @brief Method get_Proxy, addr 0x4443a50, size 0x24, virtual true, abstract: false, final false
  inline ::System::Net::IWebProxy* get_Proxy();

  /// @brief Method get_RequestUri, addr 0x4443930, size 0x24, virtual true, abstract: false, final false
  inline ::System::Uri* get_RequestUri();

  /// @brief Method get_Timeout, addr 0x4443abc, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_Timeout();

  /// @brief Method get_UseDefaultCredentials, addr 0x4443a2c, size 0x24, virtual true, abstract: false, final false
  inline bool get_UseDefaultCredentials();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_s_DefaultTimerQueue(::System::Net::__TimerThread__Queue* value);

  static inline void setStaticF_s_DefaultWebProxy(::System::Net::IWebProxy* value);

  static inline void setStaticF_s_DefaultWebProxyInitialized(bool value);

  static inline void setStaticF_s_InternalSyncObject(::System::Object* value);

  static inline void setStaticF_s_PrefixList(::System::Collections::ArrayList* value);

  static inline void setStaticF_webRequestCreate(::System::Net::__WebRequest__DesignerWebRequestCreate* value);

  /// @brief Method set_CachePolicy, addr 0x4443834, size 0x4, virtual true, abstract: false, final false
  inline void set_CachePolicy(::System::Net::Cache::RequestCachePolicy* value);

  /// @brief Method set_CacheProtocol, addr 0x444414c, size 0x8, virtual false, abstract: false, final false
  inline void set_CacheProtocol(::System::Net::Cache::RequestCacheProtocol* value);

  /// @brief Method set_ConnectionGroupName, addr 0x4443954, size 0x24, virtual true, abstract: false, final false
  inline void set_ConnectionGroupName(::StringW value);

  /// @brief Method set_ContentLength, addr 0x44439c0, size 0x24, virtual true, abstract: false, final false
  inline void set_ContentLength(int64_t value);

  /// @brief Method set_Credentials, addr 0x4443a08, size 0x24, virtual true, abstract: false, final false
  inline void set_Credentials(::System::Net::ICredentials* value);

  /// @brief Method set_Method, addr 0x444390c, size 0x24, virtual true, abstract: false, final false
  inline void set_Method(::StringW value);

  /// @brief Method set_PreAuthenticate, addr 0x4443a98, size 0x24, virtual true, abstract: false, final false
  inline void set_PreAuthenticate(bool value);

  /// @brief Method set_Proxy, addr 0x4443a74, size 0x24, virtual true, abstract: false, final false
  inline void set_Proxy(::System::Net::IWebProxy* value);

  /// @brief Method set_Timeout, addr 0x4443ae0, size 0x24, virtual true, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9587 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebRequest, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebRequest, ___m_AuthenticationLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequest, ___m_ImpersonationLevel) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequest, ___m_CachePolicy) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequest, ___m_CacheProtocol) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequest, ___m_CacheBinding) == 0x30, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebRequest);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequest*, "System.Net", "WebRequest");
NEED_NO_BOX(::System::Net::__WebRequest__DesignerWebRequestCreate);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebRequest__DesignerWebRequestCreate*, "System.Net", "WebRequest/DesignerWebRequestCreate");
NEED_NO_BOX(::System::Net::__WebRequest____c__DisplayClass78_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebRequest____c__DisplayClass78_0*, "System.Net", "WebRequest/<>c__DisplayClass78_0");
NEED_NO_BOX(::System::Net::__WebRequest____c__DisplayClass79_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebRequest____c__DisplayClass79_0*, "System.Net", "WebRequest/<>c__DisplayClass79_0");
