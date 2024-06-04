#pragma once
// IWYU pragma private; include "System/Net/WebProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class ISerializable;
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
// Type: System.Net::WebProxy
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::WebProxy*
class CORDL_TYPE WebProxy : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Credentials))::System::Net::ICredentials* Credentials;

  __declspec(property(get = get_ScriptEngine))::System::Net::AutoWebProxyScriptEngine* ScriptEngine;

  __declspec(property(get = get_UseDefaultCredentials, put = set_UseDefaultCredentials)) bool UseDefaultCredentials;

  /// @brief Field _BypassList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__BypassList, put = __cordl_internal_set__BypassList))::System::Collections::ArrayList* _BypassList;

  /// @brief Field _BypassOnLocal, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__BypassOnLocal, put = __cordl_internal_set__BypassOnLocal)) bool _BypassOnLocal;

  /// @brief Field _Credentials, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Credentials, put = __cordl_internal_set__Credentials))::System::Net::ICredentials* _Credentials;

  /// @brief Field _ProxyAddress, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ProxyAddress, put = __cordl_internal_set__ProxyAddress))::System::Uri* _ProxyAddress;

  /// @brief Field _ProxyHostAddresses, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__ProxyHostAddresses, put = __cordl_internal_set__ProxyHostAddresses))::System::Collections::Hashtable* _ProxyHostAddresses;

  /// @brief Field _RegExBypassList, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__RegExBypassList,
                      put = __cordl_internal_set__RegExBypassList))::ArrayW<::System::Text::RegularExpressions::Regex*, ::Array<::System::Text::RegularExpressions::Regex*>*> _RegExBypassList;

  /// @brief Field _UseRegistry, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__UseRegistry, put = __cordl_internal_set__UseRegistry)) bool _UseRegistry;

  /// @brief Field m_EnableAutoproxy, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableAutoproxy, put = __cordl_internal_set_m_EnableAutoproxy)) bool m_EnableAutoproxy;

  /// @brief Field m_ScriptEngine, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScriptEngine, put = __cordl_internal_set_m_ScriptEngine))::System::Net::AutoWebProxyScriptEngine* m_ScriptEngine;

  /// @brief Convert operator to "::System::Net::IWebProxy"
  constexpr operator ::System::Net::IWebProxy*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method AreAllBypassed, addr 0x300a720, size 0x308, virtual false, abstract: false, final false
  static inline bool AreAllBypassed(::System::Collections::Generic::IEnumerable_1<::StringW>* proxies, bool checkFirstOnly);

  /// @brief Method CreateDefaultProxy, addr 0x300a688, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Net::IWebProxy* CreateDefaultProxy();

  /// @brief Method GetObjectData, addr 0x300a55c, size 0x124, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetProxy, addr 0x3009820, size 0x190, virtual true, abstract: false, final true
  inline ::System::Uri* GetProxy(::System::Uri* destination);

  /// @brief Method GetProxyAuto, addr 0x30099b0, size 0x188, virtual false, abstract: false, final false
  inline bool GetProxyAuto(::System::Uri* destination, ByRef<::System::Uri*> proxyUri);

  /// @brief Method IsBypassed, addr 0x3009fe8, size 0xf4, virtual true, abstract: false, final true
  inline bool IsBypassed(::System::Uri* host);

  /// @brief Method IsBypassedAuto, addr 0x300a0dc, size 0x108, virtual false, abstract: false, final false
  inline bool IsBypassedAuto(::System::Uri* destination, ByRef<bool> isBypassed);

  /// @brief Method IsBypassedManual, addr 0x3009b38, size 0xc8, virtual false, abstract: false, final false
  inline bool IsBypassedManual(::System::Uri* host);

  /// @brief Method IsLocal, addr 0x3009d98, size 0x160, virtual false, abstract: false, final false
  inline bool IsLocal(::System::Uri* host);

  /// @brief Method IsLocalInProxyHash, addr 0x3009ef8, size 0xf0, virtual false, abstract: false, final false
  inline bool IsLocalInProxyHash(::System::Uri* host);

  /// @brief Method IsMatchInBypassList, addr 0x3009c00, size 0x198, virtual false, abstract: false, final false
  inline bool IsMatchInBypassList(::System::Uri* input);

  static inline ::System::Net::WebProxy* New_ctor();

  static inline ::System::Net::WebProxy* New_ctor(::System::Uri* Address, bool BypassOnLocal, ::ArrayW<::StringW, ::Array<::StringW>*> BypassList, ::System::Net::ICredentials* Credentials);

  static inline ::System::Net::WebProxy* New_ctor(bool enableAutoproxy);

  static inline ::System::Net::WebProxy* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method ProxyUri, addr 0x300aa28, size 0x10a4, virtual false, abstract: false, final false
  static inline ::System::Uri* ProxyUri(::StringW proxyName);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x300a550, size 0xc, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method UnsafeUpdateFromRegistry, addr 0x300a544, size 0xc, virtual false, abstract: false, final false
  inline void UnsafeUpdateFromRegistry();

  /// @brief Method UpdateRegExList, addr 0x30094ec, size 0x238, virtual false, abstract: false, final false
  inline void UpdateRegExList(bool canThrow);

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__BypassList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__BypassList() const;

  constexpr bool const& __cordl_internal_get__BypassOnLocal() const;

  constexpr bool& __cordl_internal_get__BypassOnLocal();

  constexpr ::System::Net::ICredentials*& __cordl_internal_get__Credentials();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ICredentials*> const& __cordl_internal_get__Credentials() const;

  constexpr ::System::Uri*& __cordl_internal_get__ProxyAddress();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get__ProxyAddress() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__ProxyHostAddresses();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get__ProxyHostAddresses() const;

  constexpr ::ArrayW<::System::Text::RegularExpressions::Regex*, ::Array<::System::Text::RegularExpressions::Regex*>*> const& __cordl_internal_get__RegExBypassList() const;

  constexpr ::ArrayW<::System::Text::RegularExpressions::Regex*, ::Array<::System::Text::RegularExpressions::Regex*>*>& __cordl_internal_get__RegExBypassList();

  constexpr bool const& __cordl_internal_get__UseRegistry() const;

  constexpr bool& __cordl_internal_get__UseRegistry();

  constexpr bool const& __cordl_internal_get_m_EnableAutoproxy() const;

  constexpr bool& __cordl_internal_get_m_EnableAutoproxy();

  constexpr ::System::Net::AutoWebProxyScriptEngine*& __cordl_internal_get_m_ScriptEngine();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::AutoWebProxyScriptEngine*> const& __cordl_internal_get_m_ScriptEngine() const;

  constexpr void __cordl_internal_set__BypassList(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__BypassOnLocal(bool value);

  constexpr void __cordl_internal_set__Credentials(::System::Net::ICredentials* value);

  constexpr void __cordl_internal_set__ProxyAddress(::System::Uri* value);

  constexpr void __cordl_internal_set__ProxyHostAddresses(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__RegExBypassList(::ArrayW<::System::Text::RegularExpressions::Regex*, ::Array<::System::Text::RegularExpressions::Regex*>*> value);

  constexpr void __cordl_internal_set__UseRegistry(bool value);

  constexpr void __cordl_internal_set_m_EnableAutoproxy(bool value);

  constexpr void __cordl_internal_set_m_ScriptEngine(::System::Net::AutoWebProxyScriptEngine* value);

  /// @brief Method .ctor, addr 0x3009424, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3009438, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* Address, bool BypassOnLocal, ::ArrayW<::StringW, ::Array<::StringW>*> BypassList, ::System::Net::ICredentials* Credentials);

  /// @brief Method .ctor, addr 0x300a6f0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool enableAutoproxy);

  /// @brief Method .ctor, addr 0x300a1e4, size 0x360, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method get_Credentials, addr 0x3009724, size 0x8, virtual true, abstract: false, final true
  inline ::System::Net::ICredentials* get_Credentials();

  /// @brief Method get_ScriptEngine, addr 0x300a680, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::AutoWebProxyScriptEngine* get_ScriptEngine();

  /// @brief Method get_UseDefaultCredentials, addr 0x300972c, size 0x7c, virtual false, abstract: false, final false
  inline bool get_UseDefaultCredentials();

  /// @brief Convert to "::System::Net::IWebProxy"
  constexpr ::System::Net::IWebProxy* i___System__Net__IWebProxy() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method set_UseDefaultCredentials, addr 0x30097a8, size 0x78, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::System::Net::WebProxy, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____UseRegistry) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____BypassOnLocal) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ___m_EnableAutoproxy) == 0x12, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____ProxyAddress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____BypassList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____Credentials) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____RegExBypassList) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____ProxyHostAddresses) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ___m_ScriptEngine) == 0x40, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebProxy*, "System.Net", "WebProxy");
