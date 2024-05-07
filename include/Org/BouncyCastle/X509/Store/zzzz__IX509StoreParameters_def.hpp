#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/IX509StoreParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IX509StoreParameters)
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class IX509StoreParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::IX509StoreParameters);
// Type: Org.BouncyCastle.X509.Store::IX509StoreParameters
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// CS Name: ::Org.BouncyCastle.X509.Store::IX509StoreParameters*
class CORDL_TYPE IX509StoreParameters {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IX509StoreParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IX509StoreParameters(IX509StoreParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IX509StoreParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IX509StoreParameters(IX509StoreParameters const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::IX509StoreParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::IX509StoreParameters*, "Org.BouncyCastle.X509.Store", "IX509StoreParameters");
