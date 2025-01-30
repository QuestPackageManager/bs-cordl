#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Utilities/Pack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pack)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Utilities {
class Pack;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Utilities::Pack);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Utilities {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Utilities.Pack
class CORDL_TYPE Pack : public ::System::Object {
public:
  // Declarations
  /// @brief Method BE_To_UInt16, addr 0x2444eb4, size 0x34, virtual false, abstract: false, final false
  static inline uint16_t BE_To_UInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method BE_To_UInt16, addr 0x2444ee8, size 0x40, virtual false, abstract: false, final false
  static inline uint16_t BE_To_UInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method BE_To_UInt32, addr 0x24451d0, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t BE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method BE_To_UInt32, addr 0x2445228, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t BE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method BE_To_UInt32, addr 0x2445310, size 0x88, virtual false, abstract: false, final false
  static inline void BE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method BE_To_UInt32, addr 0x244529c, size 0x74, virtual false, abstract: false, final false
  static inline void BE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<uint32_t, ::Array<uint32_t>*> ns);

  /// @brief Method BE_To_UInt64, addr 0x2445614, size 0x34, virtual false, abstract: false, final false
  static inline uint64_t BE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method BE_To_UInt64, addr 0x2445648, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t BE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method BE_To_UInt64, addr 0x2445718, size 0xac, virtual false, abstract: false, final false
  static inline void BE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff, ::ArrayW<uint64_t, ::Array<uint64_t>*> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method BE_To_UInt64, addr 0x2445680, size 0x98, virtual false, abstract: false, final false
  static inline void BE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<uint64_t, ::Array<uint64_t>*> ns);

  /// @brief Method LE_To_UInt16, addr 0x2445840, size 0x2c, virtual false, abstract: false, final false
  static inline uint16_t LE_To_UInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method LE_To_UInt16, addr 0x244586c, size 0x40, virtual false, abstract: false, final false
  static inline uint16_t LE_To_UInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method LE_To_UInt32, addr 0x2445c94, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, int32_t count);

  /// @brief Method LE_To_UInt32, addr 0x2445acc, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method LE_To_UInt32, addr 0x2445b24, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method LE_To_UInt32, addr 0x2445c0c, size 0x88, virtual false, abstract: false, final false
  static inline void LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> ns, int32_t nOff, int32_t count);

  /// @brief Method LE_To_UInt32, addr 0x2445b98, size 0x74, virtual false, abstract: false, final false
  static inline void LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<uint32_t, ::Array<uint32_t>*> ns);

  /// @brief Method LE_To_UInt64, addr 0x2445fb8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t LE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method LE_To_UInt64, addr 0x2445ff0, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t LE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method LE_To_UInt64, addr 0x24460c4, size 0xac, virtual false, abstract: false, final false
  static inline void LE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff, ::ArrayW<uint64_t, ::Array<uint64_t>*> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method LE_To_UInt64, addr 0x244602c, size 0x98, virtual false, abstract: false, final false
  static inline void LE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<uint64_t, ::Array<uint64_t>*> ns);

  static inline ::Org::BouncyCastle::Crypto::Utilities::Pack* New_ctor();

  /// @brief Method UInt16_To_BE, addr 0x2444e38, size 0x34, virtual false, abstract: false, final false
  static inline void UInt16_To_BE(uint16_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt16_To_BE, addr 0x2444e6c, size 0x48, virtual false, abstract: false, final false
  static inline void UInt16_To_BE(uint16_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt16_To_LE, addr 0x24457c4, size 0x34, virtual false, abstract: false, final false
  static inline void UInt16_To_LE(uint16_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt16_To_LE, addr 0x24457f8, size 0x48, virtual false, abstract: false, final false
  static inline void UInt16_To_LE(uint16_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x2444f28, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt32_To_BE(uint32_t n);

  /// @brief Method UInt32_To_BE, addr 0x2445060, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt32_To_BE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns);

  /// @brief Method UInt32_To_BE, addr 0x244500c, size 0x54, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt32_To_BE, addr 0x2444f8c, size 0x80, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x24450d0, size 0x78, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x2445148, size 0x88, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff);

  /// @brief Method UInt32_To_LE, addr 0x24458ac, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt32_To_LE(uint32_t n);

  /// @brief Method UInt32_To_LE, addr 0x24459e4, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt32_To_LE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns);

  /// @brief Method UInt32_To_LE, addr 0x2445990, size 0x54, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt32_To_LE, addr 0x2445910, size 0x80, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt32_To_LE, addr 0x2445a54, size 0x78, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x2445398, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt64_To_BE(uint64_t n);

  /// @brief Method UInt64_To_BE, addr 0x2445470, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt64_To_BE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns);

  /// @brief Method UInt64_To_BE, addr 0x2445440, size 0x30, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt64_To_BE, addr 0x244540c, size 0x34, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x24454e0, size 0x94, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x2445574, size 0xa0, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff);

  /// @brief Method UInt64_To_LE, addr 0x2445d44, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt64_To_LE(uint64_t n);

  /// @brief Method UInt64_To_LE, addr 0x2445e14, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt64_To_LE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns);

  /// @brief Method UInt64_To_LE, addr 0x2445de8, size 0x2c, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt64_To_LE, addr 0x2445db8, size 0x30, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_LE, addr 0x2445e84, size 0x94, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_LE, addr 0x2445f18, size 0xa0, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff);

  /// @brief Method .ctor, addr 0x2444e30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pack(Pack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pack(Pack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1339 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Utilities::Pack, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Utilities::Pack);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Utilities::Pack*, "Org.BouncyCastle.Crypto.Utilities", "Pack");
