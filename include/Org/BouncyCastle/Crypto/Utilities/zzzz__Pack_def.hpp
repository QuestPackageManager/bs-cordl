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
  /// @brief Method BE_To_UInt16, addr 0x2442778, size 0x34, virtual false, abstract: false, final false
  static inline uint16_t BE_To_UInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method BE_To_UInt16, addr 0x24427ac, size 0x40, virtual false, abstract: false, final false
  static inline uint16_t BE_To_UInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method BE_To_UInt32, addr 0x2442a94, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t BE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method BE_To_UInt32, addr 0x2442aec, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t BE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method BE_To_UInt32, addr 0x2442bd4, size 0x88, virtual false, abstract: false, final false
  static inline void BE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method BE_To_UInt32, addr 0x2442b60, size 0x74, virtual false, abstract: false, final false
  static inline void BE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<uint32_t, ::Array<uint32_t>*> ns);

  /// @brief Method BE_To_UInt64, addr 0x2442ed8, size 0x34, virtual false, abstract: false, final false
  static inline uint64_t BE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method BE_To_UInt64, addr 0x2442f0c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t BE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method BE_To_UInt64, addr 0x2442fdc, size 0xac, virtual false, abstract: false, final false
  static inline void BE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff, ::ArrayW<uint64_t, ::Array<uint64_t>*> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method BE_To_UInt64, addr 0x2442f44, size 0x98, virtual false, abstract: false, final false
  static inline void BE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<uint64_t, ::Array<uint64_t>*> ns);

  /// @brief Method LE_To_UInt16, addr 0x2443104, size 0x2c, virtual false, abstract: false, final false
  static inline uint16_t LE_To_UInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method LE_To_UInt16, addr 0x2443130, size 0x40, virtual false, abstract: false, final false
  static inline uint16_t LE_To_UInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method LE_To_UInt32, addr 0x2443558, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, int32_t count);

  /// @brief Method LE_To_UInt32, addr 0x2443390, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method LE_To_UInt32, addr 0x24433e8, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method LE_To_UInt32, addr 0x24434d0, size 0x88, virtual false, abstract: false, final false
  static inline void LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> ns, int32_t nOff, int32_t count);

  /// @brief Method LE_To_UInt32, addr 0x244345c, size 0x74, virtual false, abstract: false, final false
  static inline void LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<uint32_t, ::Array<uint32_t>*> ns);

  /// @brief Method LE_To_UInt64, addr 0x244387c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t LE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method LE_To_UInt64, addr 0x24438b4, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t LE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method LE_To_UInt64, addr 0x2443988, size 0xac, virtual false, abstract: false, final false
  static inline void LE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff, ::ArrayW<uint64_t, ::Array<uint64_t>*> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method LE_To_UInt64, addr 0x24438f0, size 0x98, virtual false, abstract: false, final false
  static inline void LE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<uint64_t, ::Array<uint64_t>*> ns);

  static inline ::Org::BouncyCastle::Crypto::Utilities::Pack* New_ctor();

  /// @brief Method UInt16_To_BE, addr 0x24426fc, size 0x34, virtual false, abstract: false, final false
  static inline void UInt16_To_BE(uint16_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt16_To_BE, addr 0x2442730, size 0x48, virtual false, abstract: false, final false
  static inline void UInt16_To_BE(uint16_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt16_To_LE, addr 0x2443088, size 0x34, virtual false, abstract: false, final false
  static inline void UInt16_To_LE(uint16_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt16_To_LE, addr 0x24430bc, size 0x48, virtual false, abstract: false, final false
  static inline void UInt16_To_LE(uint16_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x24427ec, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt32_To_BE(uint32_t n);

  /// @brief Method UInt32_To_BE, addr 0x2442924, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt32_To_BE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns);

  /// @brief Method UInt32_To_BE, addr 0x24428d0, size 0x54, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt32_To_BE, addr 0x2442850, size 0x80, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x2442994, size 0x78, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x2442a0c, size 0x88, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff);

  /// @brief Method UInt32_To_LE, addr 0x2443170, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt32_To_LE(uint32_t n);

  /// @brief Method UInt32_To_LE, addr 0x24432a8, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt32_To_LE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns);

  /// @brief Method UInt32_To_LE, addr 0x2443254, size 0x54, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt32_To_LE, addr 0x24431d4, size 0x80, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt32_To_LE, addr 0x2443318, size 0x78, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x2442c5c, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt64_To_BE(uint64_t n);

  /// @brief Method UInt64_To_BE, addr 0x2442d34, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt64_To_BE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns);

  /// @brief Method UInt64_To_BE, addr 0x2442d04, size 0x30, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt64_To_BE, addr 0x2442cd0, size 0x34, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x2442da4, size 0x94, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x2442e38, size 0xa0, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff);

  /// @brief Method UInt64_To_LE, addr 0x2443608, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt64_To_LE(uint64_t n);

  /// @brief Method UInt64_To_LE, addr 0x24436d8, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt64_To_LE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns);

  /// @brief Method UInt64_To_LE, addr 0x24436ac, size 0x2c, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt64_To_LE, addr 0x244367c, size 0x30, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_LE, addr 0x2443748, size 0x94, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_LE, addr 0x24437dc, size 0xa0, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff);

  /// @brief Method .ctor, addr 0x24426f4, size 0x8, virtual false, abstract: false, final false
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
