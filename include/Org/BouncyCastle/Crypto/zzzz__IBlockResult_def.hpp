#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IBlockResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IBlockResult)
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IBlockResult);
// Type: Org.BouncyCastle.Crypto::IBlockResult
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::IBlockResult*
class CORDL_TYPE IBlockResult {
public:
  // Declarations
  /// @brief Method Collect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Collect();

  /// @brief Method Collect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Collect(::ArrayW<uint8_t, ::Array<uint8_t>*> destination, int32_t offset);

  // Ctor Parameters [CppParam { name: "", ty: "IBlockResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBlockResult(IBlockResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBlockResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBlockResult(IBlockResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 709 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IBlockResult);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IBlockResult*, "Org.BouncyCastle.Crypto", "IBlockResult");
