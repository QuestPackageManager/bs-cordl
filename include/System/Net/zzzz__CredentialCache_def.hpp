#pragma once
// IWYU pragma private; include "System\Net\CredentialCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CredentialCache)
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class NetworkCredential;
}
// Forward declare root types
namespace System::Net {
class CredentialCache;
}
// Write type traits
MARK_REF_T(::System::Net::CredentialCache*);
DEFINE_IL2CPP_CLASS(::System::Net::CredentialCache*, "System.Net", "CredentialCache");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.CredentialCache
class CORDL_TYPE CredentialCache : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_DefaultCredentials, addr 0x640b968, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Net::ICredentials* get_DefaultCredentials();

  /// @brief Method get_DefaultNetworkCredentials, addr 0x640b9c4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Net::NetworkCredential* get_DefaultNetworkCredentials();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CredentialCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CredentialCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CredentialCache(CredentialCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CredentialCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CredentialCache(CredentialCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11483 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::CredentialCache) == 0x10, "Size mismatch!");

} // namespace System::Net
