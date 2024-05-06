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
// Type: Org.BouncyCastle.X509.Store::IX509Store
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// CS Name: ::Org.BouncyCastle.X509.Store::IX509Store*
class CORDL_TYPE IX509Store {
public:
  // Declarations
  /// @brief Method GetMatches, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::ICollection* GetMatches(::Org::BouncyCastle::X509::Store::IX509Selector* selector);

  // Ctor Parameters [CppParam { name: "", ty: "IX509Store", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IX509Store(IX509Store&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IX509Store", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IX509Store(IX509Store const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::IX509Store);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::IX509Store*, "Org.BouncyCastle.X509.Store", "IX509Store");
