#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(TlsCredentials)
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsCredentials);
// Type: Org.BouncyCastle.Crypto.Tls::TlsCredentials
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsCredentials*
class CORDL_TYPE TlsCredentials {
public:
  // Declarations
  __declspec(property(get = get_Certificate))::Org::BouncyCastle::Crypto::Tls::Certificate* Certificate;

  /// @brief Method get_Certificate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::Certificate* get_Certificate();

  // Ctor Parameters [CppParam { name: "", ty: "TlsCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsCredentials(TlsCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsCredentials(TlsCredentials const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsCredentials*, "Org.BouncyCastle.Crypto.Tls", "TlsCredentials");
