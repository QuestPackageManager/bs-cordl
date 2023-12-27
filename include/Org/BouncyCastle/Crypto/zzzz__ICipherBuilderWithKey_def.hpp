#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICipherBuilderWithKey)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilder;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class ICipherBuilderWithKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::ICipherBuilderWithKey);
// Type: Org.BouncyCastle.Crypto::ICipherBuilderWithKey
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(979))
// CS Name: ::Org.BouncyCastle.Crypto::ICipherBuilderWithKey*
class CORDL_TYPE ICipherBuilderWithKey {
public:
  // Declarations
  __declspec(property(get = get_Key))::Org::BouncyCastle::Crypto::ICipherParameters* Key;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherBuilder"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherBuilder*() noexcept;

  /// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* get_Key();

  // Ctor Parameters [CppParam { name: "", ty: "ICipherBuilderWithKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICipherBuilderWithKey(ICipherBuilderWithKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICipherBuilderWithKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICipherBuilderWithKey(ICipherBuilderWithKey const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::ICipherBuilderWithKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*, "Org.BouncyCastle.Crypto", "ICipherBuilderWithKey");
