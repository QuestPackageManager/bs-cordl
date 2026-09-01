#pragma once
// IWYU pragma private; include "System\Net\HttpListenerBasicIdentity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Principal/zzzz__GenericIdentity_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HttpListenerBasicIdentity)
// Forward declare root types
namespace System::Net {
class HttpListenerBasicIdentity;
}
// Write type traits
MARK_REF_T(::System::Net::HttpListenerBasicIdentity*);
DEFINE_IL2CPP_CLASS(::System::Net::HttpListenerBasicIdentity*, "System.Net", "HttpListenerBasicIdentity");
// Dependencies System.Security.Principal.GenericIdentity
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpListenerBasicIdentity
class CORDL_TYPE HttpListenerBasicIdentity : public ::System::Security::Principal::GenericIdentity {
public:
  // Declarations
  /// @brief Field password, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_password, put = __cordl_internal_set_password)) ::StringW password;

  static inline ::System::Net::HttpListenerBasicIdentity* New_ctor(::StringW username, ::StringW password);

  constexpr ::StringW const& __cordl_internal_get_password() const;

  constexpr ::StringW& __cordl_internal_get_password();

  constexpr void __cordl_internal_set_password(::StringW value);

  /// @brief Method .ctor, addr 0x64355b0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW username, ::StringW password);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpListenerBasicIdentity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerBasicIdentity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpListenerBasicIdentity(HttpListenerBasicIdentity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerBasicIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpListenerBasicIdentity(HttpListenerBasicIdentity const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11596 };

  /// @brief Field password, offset: 0x88, size: 0x8, def value: None
  ::StringW ___password;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpListenerBasicIdentity, ___password) == 0x88, "Offset mismatch!");

static_assert(sizeof(::System::Net::HttpListenerBasicIdentity) == 0x90, "Size mismatch!");

} // namespace System::Net
