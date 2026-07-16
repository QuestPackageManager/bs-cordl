#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Paddings/TbcPadding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TbcPadding)
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Paddings {
class TbcPadding;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Paddings::TbcPadding*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Paddings::TbcPadding*, "Org.BouncyCastle.Crypto.Paddings", "TbcPadding");
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Paddings {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Paddings.TbcPadding
class CORDL_TYPE TbcPadding : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_PaddingName)) ::StringW PaddingName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding"
  constexpr operator ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*() noexcept;

  /// @brief Method AddPadding, addr 0x340a370, size 0x78, virtual true, abstract: false, final false
  inline int32_t AddPadding(::ArrayW<uint8_t> input, int32_t inOff);

  /// @brief Method Init, addr 0x340a36c, size 0x4, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Crypto::Paddings::TbcPadding* New_ctor();

  /// @brief Method PadCount, addr 0x340a3e8, size 0x70, virtual true, abstract: false, final false
  inline int32_t PadCount(::ArrayW<uint8_t> input);

  /// @brief Method .ctor, addr 0x340a458, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_PaddingName, addr 0x340a328, size 0x44, virtual true, abstract: false, final true
  inline ::StringW get_PaddingName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding"
  constexpr ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* i___Org__BouncyCastle__Crypto__Paddings__IBlockCipherPadding() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TbcPadding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TbcPadding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TbcPadding(TbcPadding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TbcPadding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TbcPadding(TbcPadding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1010 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Crypto::Paddings::TbcPadding) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Paddings
