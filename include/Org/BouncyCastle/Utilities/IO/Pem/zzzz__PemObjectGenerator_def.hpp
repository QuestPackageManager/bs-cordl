#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IO/Pem/PemObjectGenerator.hpp"
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
// Dependencies
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.IO.Pem.PemObjectGenerator
class CORDL_TYPE PemObjectGenerator {
public:
  // Declarations
  /// @brief Method Generate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Generate();

  // Ctor Parameters [CppParam { name: "", ty: "PemObjectGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemObjectGenerator(PemObjectGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1681 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Utilities::IO::Pem
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*, "Org.BouncyCastle.Utilities.IO.Pem", "PemObjectGenerator");
