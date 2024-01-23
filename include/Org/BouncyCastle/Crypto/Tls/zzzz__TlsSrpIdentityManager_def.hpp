#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsSrpIdentityManager)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpLoginParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpIdentityManager;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager);
// Type: Org.BouncyCastle.Crypto.Tls::TlsSrpIdentityManager
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1278))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsSrpIdentityManager*
class CORDL_TYPE TlsSrpIdentityManager {
public:
  // Declarations
  /// @brief Method GetLoginParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* GetLoginParameters(::ArrayW<uint8_t, ::Array<uint8_t>*> identity);

  // Ctor Parameters [CppParam { name: "", ty: "TlsSrpIdentityManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsSrpIdentityManager(TlsSrpIdentityManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsSrpIdentityManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsSrpIdentityManager(TlsSrpIdentityManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*, "Org.BouncyCastle.Crypto.Tls", "TlsSrpIdentityManager");
