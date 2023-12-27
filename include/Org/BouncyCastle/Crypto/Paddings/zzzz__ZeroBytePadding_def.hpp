#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZeroBytePadding)
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Paddings {
class ZeroBytePadding;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding);
// Type: Org.BouncyCastle.Crypto.Paddings::ZeroBytePadding
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Paddings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1012))
// CS Name: ::Org.BouncyCastle.Crypto.Paddings::ZeroBytePadding*
class CORDL_TYPE ZeroBytePadding : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_PaddingName))::StringW PaddingName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding"
  constexpr operator ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*() noexcept;

  /// @brief Method get_PaddingName addr 0xf2f4d4 size 0x40 virtual true final true
  inline ::StringW get_PaddingName();

  /// @brief Method Init addr 0xf2f514 size 0x4 virtual true final true
  inline void Init(::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method AddPadding addr 0xf2f518 size 0x48 virtual true final true
  inline int32_t AddPadding(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method PadCount addr 0xf2f560 size 0x54 virtual true final true
  inline int32_t PadCount(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  static inline ::Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding* New_ctor();

  /// @brief Method .ctor addr 0xf2f5b4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ZeroBytePadding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZeroBytePadding(ZeroBytePadding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZeroBytePadding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZeroBytePadding(ZeroBytePadding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZeroBytePadding();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Paddings
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding*, "Org.BouncyCastle.Crypto.Paddings", "ZeroBytePadding");
