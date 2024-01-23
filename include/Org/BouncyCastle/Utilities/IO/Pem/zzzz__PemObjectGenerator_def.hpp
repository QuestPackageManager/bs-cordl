#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(PemObjectGenerator)
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObjectGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator);
// Type: Org.BouncyCastle.Utilities.IO.Pem::PemObjectGenerator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1681))
// CS Name: ::Org.BouncyCastle.Utilities.IO.Pem::PemObjectGenerator*
class CORDL_TYPE PemObjectGenerator {
public:
  // Declarations
  /// @brief Method Generate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Generate();

  // Ctor Parameters [CppParam { name: "", ty: "PemObjectGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemObjectGenerator(PemObjectGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemObjectGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemObjectGenerator(PemObjectGenerator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Utilities::IO::Pem
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*, "Org.BouncyCastle.Utilities.IO.Pem", "PemObjectGenerator");
