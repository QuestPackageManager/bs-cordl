#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DigestClient)
namespace System::Net {
class IAuthenticationModule;
}
namespace System::Net {
class Authorization;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class WebRequest;
}
namespace System::Collections {
class Hashtable;
}
// Forward declare root types
namespace System::Net {
class DigestClient;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::DigestClient);
// Type: System.Net::DigestClient
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9161))
// CS Name: ::System.Net::DigestClient*
class CORDL_TYPE DigestClient : public ::System::Object {
public:
  // Declarations
  /// @brief Field cache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cache, put = setStaticF_cache))::System::Collections::Hashtable* cache;

  __declspec(property(get = get_AuthenticationType))::StringW AuthenticationType;

  /// @brief Convert operator to "::System::Net::IAuthenticationModule"
  constexpr operator ::System::Net::IAuthenticationModule*() noexcept;

  static inline void setStaticF_cache(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF_cache();

  /// @brief Method get_Cache addr 0x29beaac size 0x168 virtual false final false
  static inline ::System::Collections::Hashtable* get_Cache();

  /// @brief Method CheckExpired addr 0x29bec14 size 0x848 virtual false final false
  static inline void CheckExpired(int32_t count);

  /// @brief Method Authenticate addr 0x29bf45c size 0x2a8 virtual true final true
  inline ::System::Net::Authorization* Authenticate(::StringW challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials);

  /// @brief Method PreAuthenticate addr 0x29bf704 size 0x194 virtual true final true
  inline ::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials);

  /// @brief Method get_AuthenticationType addr 0x29bf898 size 0x40 virtual true final true
  inline ::StringW get_AuthenticationType();

  static inline ::System::Net::DigestClient* New_ctor();

  /// @brief Method .ctor addr 0x29badb8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DigestClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DigestClient(DigestClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DigestClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DigestClient(DigestClient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DigestClient();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::DigestClient, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::DigestClient);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::DigestClient*, "System.Net", "DigestClient");
