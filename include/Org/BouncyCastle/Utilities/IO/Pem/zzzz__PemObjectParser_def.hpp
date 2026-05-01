#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IO/Pem/PemObjectParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(PemObjectParser)
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObjectParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser);
// Dependencies
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.IO.Pem.PemObjectParser
class CORDL_TYPE PemObjectParser {
public:
  // Declarations
  /// @brief Method ParseObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ParseObject(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* obj);

  // Ctor Parameters [CppParam { name: "", ty: "PemObjectParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemObjectParser(PemObjectParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1807 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Utilities::IO::Pem
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser*, "Org.BouncyCastle.Utilities.IO.Pem", "PemObjectParser");
