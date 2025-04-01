#pragma once
// IWYU pragma private; include "Mono/Http/NtlmClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__IAuthenticationModule_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NtlmClient)
namespace Mono::Http {
class NtlmClient___c;
}
namespace Mono::Http {
class NtlmSession;
}
namespace System::Net {
class Authorization;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class WebRequest;
}
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class ConditionalWeakTable_2_CreateValueCallback;
}
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class ConditionalWeakTable_2;
}
// Forward declare root types
namespace Mono::Http {
class NtlmClient;
}
namespace Mono::Http {
class NtlmClient___c;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Http::NtlmClient);
MARK_REF_PTR_T(::Mono::Http::NtlmClient___c);
// Dependencies System.Object
namespace Mono::Http {
// Is value type: false
// CS Name: Mono.Http.NtlmClient/<>c
class CORDL_TYPE NtlmClient___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Mono::Http::NtlmClient___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0,
                      put = setStaticF___9__1_0)) ::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>* __9__1_0;

  static inline ::Mono::Http::NtlmClient___c* New_ctor();

  /// @brief Method <Authenticate>b__1_0, addr 0x4114450, size 0x54, virtual false, abstract: false, final false
  inline ::Mono::Http::NtlmSession* _Authenticate_b__1_0(::System::Net::HttpWebRequest* x);

  /// @brief Method .ctor, addr 0x4114448, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Mono::Http::NtlmClient___c* getStaticF___9();

  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>* getStaticF___9__1_0();

  static inline void setStaticF___9(::Mono::Http::NtlmClient___c* value);

  static inline void setStaticF___9__1_0(::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NtlmClient___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NtlmClient___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NtlmClient___c(NtlmClient___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NtlmClient___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NtlmClient___c(NtlmClient___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9171 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Http::NtlmClient___c, 0x10>, "Size mismatch!");

} // namespace Mono::Http
// Dependencies System.Net.IAuthenticationModule, System.Object
namespace Mono::Http {
// Is value type: false
// CS Name: Mono.Http.NtlmClient
class CORDL_TYPE NtlmClient : public ::System::Object {
public:
  // Declarations
  using __c = ::Mono::Http::NtlmClient___c;

  __declspec(property(get = get_AuthenticationType)) ::StringW AuthenticationType;

  /// @brief Field cache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_cache, put = setStaticF_cache)) ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>* cache;

  /// @brief Convert operator to "::System::Net::IAuthenticationModule"
  constexpr operator ::System::Net::IAuthenticationModule*() noexcept;

  /// @brief Method Authenticate, addr 0x4113fac, size 0x364, virtual true, abstract: false, final true
  inline ::System::Net::Authorization* Authenticate(::StringW challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials);

  static inline ::Mono::Http::NtlmClient* New_ctor();

  /// @brief Method PreAuthenticate, addr 0x4114310, size 0x8, virtual true, abstract: false, final true
  inline ::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials);

  /// @brief Method .ctor, addr 0x4114358, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>* getStaticF_cache();

  /// @brief Method get_AuthenticationType, addr 0x4114318, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_AuthenticationType();

  /// @brief Convert to "::System::Net::IAuthenticationModule"
  constexpr ::System::Net::IAuthenticationModule* i___System__Net__IAuthenticationModule() noexcept;

  static inline void setStaticF_cache(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NtlmClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NtlmClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NtlmClient(NtlmClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NtlmClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NtlmClient(NtlmClient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9172 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Http::NtlmClient, 0x10>, "Size mismatch!");

} // namespace Mono::Http
NEED_NO_BOX(::Mono::Http::NtlmClient);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Http::NtlmClient*, "Mono.Http", "NtlmClient");
NEED_NO_BOX(::Mono::Http::NtlmClient___c);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Http::NtlmClient___c*, "Mono.Http", "NtlmClient/<>c");
