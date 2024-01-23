#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IVerifier)
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IVerifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IVerifier);
// Type: Org.BouncyCastle.Crypto::IVerifier
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1002))
// CS Name: ::Org.BouncyCastle.Crypto::IVerifier*
class CORDL_TYPE IVerifier {
public:
  // Declarations
  /// @brief Method IsVerified, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsVerified(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method IsVerified, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsVerified(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t off, int32_t length);

  // Ctor Parameters [CppParam { name: "", ty: "IVerifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVerifier(IVerifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVerifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVerifier(IVerifier const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IVerifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IVerifier*, "Org.BouncyCastle.Crypto", "IVerifier");
