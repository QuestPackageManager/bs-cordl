#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(TlsSrpGroupVerifier)
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpGroupVerifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier);
// Type: Org.BouncyCastle.Crypto.Tls::TlsSrpGroupVerifier
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsSrpGroupVerifier*
class CORDL_TYPE TlsSrpGroupVerifier {
public:
  // Declarations
  /// @brief Method Accept, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Accept(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group);

  // Ctor Parameters [CppParam { name: "", ty: "TlsSrpGroupVerifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsSrpGroupVerifier(TlsSrpGroupVerifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsSrpGroupVerifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsSrpGroupVerifier(TlsSrpGroupVerifier const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*, "Org.BouncyCastle.Crypto.Tls", "TlsSrpGroupVerifier");
