#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/IX509Store.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IX509Store)
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::IX509Store);
// Dependencies
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// CS Name: Org.BouncyCastle.X509.Store.IX509Store
class CORDL_TYPE IX509Store {
public:
  // Declarations
  /// @brief Method GetMatches, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* GetMatches(::Org::BouncyCastle::X509::Store::IX509Selector* selector);

  // Ctor Parameters [CppParam { name: "", ty: "IX509Store", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IX509Store(IX509Store const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1842 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::IX509Store);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::IX509Store*, "Org.BouncyCastle.X509.Store", "IX509Store");
