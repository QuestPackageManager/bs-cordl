#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ISignerInfoGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class SignerInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class ISignerInfoGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::ISignerInfoGenerator);
// Type: Org.BouncyCastle.Cms::ISignerInfoGenerator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(657))
// CS Name: ::Org.BouncyCastle.Cms::ISignerInfoGenerator*
class CORDL_TYPE ISignerInfoGenerator {
public:
  // Declarations
  /// @brief Method Generate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Asn1::Cms::SignerInfo* Generate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm,
                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> calculatedDigest);

  // Ctor Parameters [CppParam { name: "", ty: "ISignerInfoGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISignerInfoGenerator(ISignerInfoGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISignerInfoGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISignerInfoGenerator(ISignerInfoGenerator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::ISignerInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::ISignerInfoGenerator*, "Org.BouncyCastle.Cms", "ISignerInfoGenerator");
