#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Paddings/IBlockCipherPadding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IBlockCipherPadding)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding);
// Type: Org.BouncyCastle.Crypto.Paddings::IBlockCipherPadding
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Paddings {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Paddings::IBlockCipherPadding*
class CORDL_TYPE IBlockCipherPadding {
public:
  // Declarations
  __declspec(property(get = get_PaddingName))::StringW PaddingName;

  /// @brief Method AddPadding, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t AddPadding(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Init(::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method PadCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t PadCount(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method get_PaddingName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_PaddingName();

  // Ctor Parameters [CppParam { name: "", ty: "IBlockCipherPadding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBlockCipherPadding(IBlockCipherPadding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBlockCipherPadding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBlockCipherPadding(IBlockCipherPadding const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Paddings
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*, "Org.BouncyCastle.Crypto.Paddings", "IBlockCipherPadding");
