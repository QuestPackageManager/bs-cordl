#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Principal/zzzz__GenericIdentity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HttpListenerBasicIdentity)
// Forward declare root types
namespace System::Net {
class HttpListenerBasicIdentity;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpListenerBasicIdentity);
// Type: System.Net::HttpListenerBasicIdentity
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2994))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9172))
// CS Name: ::System.Net::HttpListenerBasicIdentity*
class CORDL_TYPE HttpListenerBasicIdentity : public ::System::Security::Principal::GenericIdentity {
public:
  // Declarations
  /// @brief Field password, offset 0x88, size 0x8
  __declspec(property(get = __get_password, put = __set_password))::StringW password;

  constexpr ::StringW& __get_password();

  constexpr ::StringW const& __get_password() const;

  constexpr void __set_password(::StringW value);

  static inline ::System::Net::HttpListenerBasicIdentity* New_ctor(::StringW username, ::StringW password);

  /// @brief Method .ctor, addr 0x29c94d8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW username, ::StringW password);

  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerBasicIdentity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpListenerBasicIdentity(HttpListenerBasicIdentity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerBasicIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpListenerBasicIdentity(HttpListenerBasicIdentity const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpListenerBasicIdentity();

public:
  /// @brief Field password, offset: 0x88, size: 0x8, def value: None
  ::StringW ___password;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpListenerBasicIdentity, 0x90>, "Size mismatch!");

static_assert(offsetof(::System::Net::HttpListenerBasicIdentity, ___password) == 0x88, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HttpListenerBasicIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListenerBasicIdentity*, "System.Net", "HttpListenerBasicIdentity");
