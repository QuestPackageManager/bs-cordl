#pragma once
// IWYU pragma private; include "System/Net/WebProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WebProxy)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Net {
class AutoWebProxyScriptEngine;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class WebProxy;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebProxy);
// Dependencies System.Net.IWebProxy, System.Object, System.Runtime.Serialization.ISerializable
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebProxy
class CORDL_TYPE WebProxy : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Credentials)) ::System::Net::ICredentials* Credentials;

  __declspec(property(get = get_ScriptEngine)) ::System::Net::AutoWebProxyScriptEngine* ScriptEngine;

  __declspec(property(get = get_UseDefaultCredentials, put = set_UseDefaultCredentials)) bool UseDefaultCredentials;

  /// @brief Field _BypassList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__BypassList, put = __cordl_internal_set__BypassList)) ::System::Collections::ArrayList* _BypassList;

  /// @brief Field _BypassOnLocal, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__BypassOnLocal, put = __cordl_internal_set__BypassOnLocal)) bool _BypassOnLocal;

  /// @brief Field _Credentials, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Credentials, put = __cordl_internal_set__Credentials)) ::System::Net::ICredentials* _Credentials;

  /// @brief Field _ProxyAddress, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ProxyAddress, put = __cordl_internal_set__ProxyAddress)) ::System::Uri* _ProxyAddress;

  /// @brief Field _ProxyHostAddresses, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__ProxyHostAddresses, put = __cordl_internal_set__ProxyHostAddresses)) ::System::Collections::Hashtable* _ProxyHostAddresses;

  /// @brief Field _RegExBypassList, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__RegExBypassList,
                      put = __cordl_internal_set__RegExBypassList)) ::ArrayW<::System::Text::RegularExpressions::Regex*, ::Array<::System::Text::RegularExpressions::Regex*>*>
      _RegExBypassList;

  /// @brief Field _UseRegistry, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__UseRegistry, put = __cordl_internal_set__UseRegistry)) bool _UseRegistry;

  /// @brief Field m_EnableAutoproxy, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableAutoproxy, put = __cordl_internal_set_m_EnableAutoproxy)) bool m_EnableAutoproxy;

  /// @brief Field m_ScriptEngine, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScriptEngine, put = __cordl_internal_set_m_ScriptEngine)) ::System::Net::AutoWebProxyScriptEngine* m_ScriptEngine;

  /// @brief Convert operator to "::System::Net::IWebProxy"
  constexpr operator ::System::Net::IWebProxy*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method AreAllBypassed, addr 0x44b9bb8, size 0x304, virtual false, abstract: false, final false
  static inline bool AreAllBypassed(::System::Collections::Generic::IEnumerable_1<::StringW>* proxies, bool checkFirstOnly);

  /// @brief Method CreateDefaultProxy, addr 0x44b9b1c, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Net::IWebProxy* CreateDefaultProxy();

  /// @brief Method GetObjectData, addr 0x44b99f0, size 0x124, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetProxy, addr 0x44b8ed0, size 0x198, virtual true, abstract: false, final true
  inline ::System::Uri* GetProxy(::System::Uri* destination);

  /// @brief Method GetProxyAuto, addr 0x44b9068, size 0x4c, virtual false, abstract: false, final false
  inline bool GetProxyAuto(::System::Uri* destination, ::ByRef<::System::Uri*> proxyUri);

  /// @brief Method IsBypassed, addr 0x44b9560, size 0xe0, virtual true, abstract: false, final true
  inline bool IsBypassed(::System::Uri* host);

  /// @brief Method IsBypassedAuto, addr 0x44b9640, size 0x44, virtual false, abstract: false, final false
  inline bool IsBypassedAuto(::System::Uri* destination, ::ByRef<bool> isBypassed);

  /// @brief Method IsBypassedManual, addr 0x44b90b4, size 0xc8, virtual false, abstract: false, final false
  inline bool IsBypassedManual(::System::Uri* host);

  /// @brief Method IsLocal, addr 0x44b9314, size 0x15c, virtual false, abstract: false, final false
  inline bool IsLocal(::System::Uri* host);

  /// @brief Method IsLocalInProxyHash, addr 0x44b9470, size 0xf0, virtual false, abstract: false, final false
  inline bool IsLocalInProxyHash(::System::Uri* host);

  /// @brief Method IsMatchInBypassList, addr 0x44b917c, size 0x198, virtual false, abstract: false, final false
  inline bool IsMatchInBypassList(::System::Uri* input);

  static inline ::System::Net::WebProxy* New_ctor();

  static inline ::System::Net::WebProxy* New_ctor(::System::Uri* Address, bool BypassOnLocal, ::ArrayW<::StringW, ::Array<::StringW>*> BypassList, ::System::Net::ICredentials* Credentials);

  static inline ::System::Net::WebProxy* New_ctor(bool enableAutoproxy);

  static inline ::System::Net::WebProxy* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method ProxyUri, addr 0x44b9ebc, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Uri* ProxyUri(::StringW proxyName);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x44b99e4, size 0xc, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method UnsafeUpdateFromRegistry, addr 0x44b99d8, size 0xc, virtual false, abstract: false, final false
  inline void UnsafeUpdateFromRegistry();

  /// @brief Method UpdateRegExList, addr 0x44b8ba4, size 0x234, virtual false, abstract: false, final false
  inline void UpdateRegExList(bool canThrow);

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__BypassList() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__BypassList();

  constexpr bool const& __cordl_internal_get__BypassOnLocal() const;

  constexpr bool& __cordl_internal_get__BypassOnLocal();

  constexpr ::System::Net::ICredentials* const& __cordl_internal_get__Credentials() const;

  constexpr ::System::Net::ICredentials*& __cordl_internal_get__Credentials();

  constexpr ::System::Uri* const& __cordl_internal_get__ProxyAddress() const;

  constexpr ::System::Uri*& __cordl_internal_get__ProxyAddress();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__ProxyHostAddresses() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__ProxyHostAddresses();

  constexpr ::ArrayW<::System::Text::RegularExpressions::Regex*, ::Array<::System::Text::RegularExpressions::Regex*>*> const& __cordl_internal_get__RegExBypassList() const;

  constexpr ::ArrayW<::System::Text::RegularExpressions::Regex*, ::Array<::System::Text::RegularExpressions::Regex*>*>& __cordl_internal_get__RegExBypassList();

  constexpr bool const& __cordl_internal_get__UseRegistry() const;

  constexpr bool& __cordl_internal_get__UseRegistry();

  constexpr bool const& __cordl_internal_get_m_EnableAutoproxy() const;

  constexpr bool& __cordl_internal_get_m_EnableAutoproxy();

  constexpr ::System::Net::AutoWebProxyScriptEngine* const& __cordl_internal_get_m_ScriptEngine() const;

  constexpr ::System::Net::AutoWebProxyScriptEngine*& __cordl_internal_get_m_ScriptEngine();

  constexpr void __cordl_internal_set__BypassList(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__BypassOnLocal(bool value);

  constexpr void __cordl_internal_set__Credentials(::System::Net::ICredentials* value);

  constexpr void __cordl_internal_set__ProxyAddress(::System::Uri* value);

  constexpr void __cordl_internal_set__ProxyHostAddresses(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__RegExBypassList(::ArrayW<::System::Text::RegularExpressions::Regex*, ::Array<::System::Text::RegularExpressions::Regex*>*> value);

  constexpr void __cordl_internal_set__UseRegistry(bool value);

  constexpr void __cordl_internal_set_m_EnableAutoproxy(bool value);

  constexpr void __cordl_internal_set_m_ScriptEngine(::System::Net::AutoWebProxyScriptEngine* value);

  /// @brief Method .ctor, addr 0x44b8ae4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x44b8af8, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* Address, bool BypassOnLocal, ::ArrayW<::StringW, ::Array<::StringW>*> BypassList, ::System::Net::ICredentials* Credentials);

  /// @brief Method .ctor, addr 0x44b9b7c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool enableAutoproxy);

  /// @brief Method .ctor, addr 0x44b9684, size 0x354, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method get_Credentials, addr 0x44b8dd8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Net::ICredentials* get_Credentials();

  /// @brief Method get_ScriptEngine, addr 0x44b9b14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::AutoWebProxyScriptEngine* get_ScriptEngine();

  /// @brief Method get_UseDefaultCredentials, addr 0x44b8de0, size 0x7c, virtual false, abstract: false, final false
  inline bool get_UseDefaultCredentials();

  /// @brief Convert to "::System::Net::IWebProxy"
  constexpr ::System::Net::IWebProxy* i___System__Net__IWebProxy() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method set_UseDefaultCredentials, addr 0x44b8e5c, size 0x74, virtual false, abstract: false, final false
  inline void set_UseDefaultCredentials(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebProxy(WebProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebProxy(WebProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9660 };

  /// @brief Field _UseRegistry, offset: 0x10, size: 0x1, def value: None
  bool ____UseRegistry;

  /// @brief Field _BypassOnLocal, offset: 0x11, size: 0x1, def value: None
  bool ____BypassOnLocal;

  /// @brief Field m_EnableAutoproxy, offset: 0x12, size: 0x1, def value: None
  bool ___m_EnableAutoproxy;

  /// @brief Field _ProxyAddress, offset: 0x18, size: 0x8, def value: None
  ::System::Uri* ____ProxyAddress;

  /// @brief Field _BypassList, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____BypassList;

  /// @brief Field _Credentials, offset: 0x28, size: 0x8, def value: None
  ::System::Net::ICredentials* ____Credentials;

  /// @brief Field _RegExBypassList, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Text::RegularExpressions::Regex*, ::Array<::System::Text::RegularExpressions::Regex*>*> ____RegExBypassList;

  /// @brief Field _ProxyHostAddresses, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____ProxyHostAddresses;

  /// @brief Field m_ScriptEngine, offset: 0x40, size: 0x8, def value: None
  ::System::Net::AutoWebProxyScriptEngine* ___m_ScriptEngine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebProxy, ____UseRegistry) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____BypassOnLocal) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ___m_EnableAutoproxy) == 0x12, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____ProxyAddress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____BypassList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____Credentials) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____RegExBypassList) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____ProxyHostAddresses) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ___m_ScriptEngine) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebProxy, 0x48>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebProxy*, "System.Net", "WebProxy");
