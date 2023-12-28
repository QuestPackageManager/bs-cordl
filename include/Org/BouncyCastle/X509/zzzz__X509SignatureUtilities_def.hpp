#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(X509SignatureUtilities)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Null;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509SignatureUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509SignatureUtilities);
// Type: Org.BouncyCastle.X509::X509SignatureUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1868))
// CS Name: ::Org.BouncyCastle.X509::X509SignatureUtilities*
class CORDL_TYPE X509SignatureUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field derNull, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_derNull, put = setStaticF_derNull))::Org::BouncyCastle::Asn1::Asn1Null* derNull;

  static inline void setStaticF_derNull(::Org::BouncyCastle::Asn1::Asn1Null* value);

  static inline ::Org::BouncyCastle::Asn1::Asn1Null* getStaticF_derNull();

  /// @brief Method SetSignatureParameters addr 0x117ef4c size 0x7c virtual false final false
  static inline void SetSignatureParameters(::Org::BouncyCastle::Crypto::ISigner* signature, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method GetSignatureName addr 0x1177564 size 0x2e4 virtual false final false
  static inline ::StringW GetSignatureName(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId);

  /// @brief Method GetDigestAlgName addr 0x117efc8 size 0x370 virtual false final false
  static inline ::StringW GetDigestAlgName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestAlgOID);

  static inline ::Org::BouncyCastle::X509::X509SignatureUtilities* New_ctor();

  /// @brief Method .ctor addr 0x117f3b0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "X509SignatureUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509SignatureUtilities(X509SignatureUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509SignatureUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509SignatureUtilities(X509SignatureUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509SignatureUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509SignatureUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509SignatureUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509SignatureUtilities*, "Org.BouncyCastle.X509", "X509SignatureUtilities");
