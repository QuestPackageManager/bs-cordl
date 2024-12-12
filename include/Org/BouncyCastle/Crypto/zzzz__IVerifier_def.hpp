#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IVerifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IVerifier)
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IVerifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IVerifier);
// Dependencies
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.IVerifier
class CORDL_TYPE IVerifier {
public:
  // Declarations
  /// @brief Method IsVerified, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsVerified(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method IsVerified, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsVerified(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t off, int32_t length);

  // Ctor Parameters [CppParam { name: "", ty: "IVerifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVerifier(IVerifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1002 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IVerifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IVerifier*, "Org.BouncyCastle.Crypto", "IVerifier");
