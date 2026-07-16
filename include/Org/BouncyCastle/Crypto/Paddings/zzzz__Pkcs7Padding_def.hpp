#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Paddings/Pkcs7Padding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs7Padding)
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Paddings {
class Pkcs7Padding;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding*, "Org.BouncyCastle.Crypto.Paddings", "Pkcs7Padding");
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Paddings {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Paddings.Pkcs7Padding
class CORDL_TYPE Pkcs7Padding : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_PaddingName)) ::StringW PaddingName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding"
  constexpr operator ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*() noexcept;

  /// @brief Method AddPadding, addr 0x340a220, size 0x4c, virtual true, abstract: false, final true
  inline int32_t AddPadding(::ArrayW<uint8_t> input, int32_t inOff);

  /// @brief Method Init, addr 0x340a1d8, size 0x4, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding* New_ctor();

  /// @brief Method PadCount, addr 0x340a26c, size 0xbc, virtual true, abstract: false, final true
  inline int32_t PadCount(::ArrayW<uint8_t> input);

  /// @brief Method .ctor, addr 0x34096e0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_PaddingName, addr 0x340a1dc, size 0x44, virtual true, abstract: false, final true
  inline ::StringW get_PaddingName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding"
  constexpr ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* i___Org__BouncyCastle__Crypto__Paddings__IBlockCipherPadding() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs7Padding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pkcs7Padding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs7Padding(Pkcs7Padding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs7Padding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs7Padding(Pkcs7Padding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1009 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Paddings
