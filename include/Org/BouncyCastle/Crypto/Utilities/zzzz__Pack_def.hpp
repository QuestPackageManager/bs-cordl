#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Utilities/Pack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pack)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Utilities {
class Pack;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Utilities::Pack*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Utilities::Pack*, "Org.BouncyCastle.Crypto.Utilities", "Pack");
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Utilities {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Utilities.Pack
class CORDL_TYPE Pack : public ::System::Object {
public:
  // Declarations
  /// @brief Method BE_To_UInt16, addr 0x3746b50, size 0x34, virtual false, abstract: false, final false
  static inline uint16_t BE_To_UInt16(::ArrayW<uint8_t> bs);

  /// @brief Method BE_To_UInt16, addr 0x3746b84, size 0x40, virtual false, abstract: false, final false
  static inline uint16_t BE_To_UInt16(::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method BE_To_UInt32, addr 0x3746e74, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t BE_To_UInt32(::ArrayW<uint8_t> bs);

  /// @brief Method BE_To_UInt32, addr 0x3746ecc, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t BE_To_UInt32(::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method BE_To_UInt32, addr 0x3746fb4, size 0x88, virtual false, abstract: false, final false
  static inline void BE_To_UInt32(::ArrayW<uint8_t> bs, int32_t bsOff, ::ArrayW<uint32_t> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method BE_To_UInt32, addr 0x3746f40, size 0x74, virtual false, abstract: false, final false
  static inline void BE_To_UInt32(::ArrayW<uint8_t> bs, int32_t off, ::ArrayW<uint32_t> ns);

  /// @brief Method BE_To_UInt64, addr 0x37472c4, size 0x34, virtual false, abstract: false, final false
  static inline uint64_t BE_To_UInt64(::ArrayW<uint8_t> bs);

  /// @brief Method BE_To_UInt64, addr 0x37472f8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t BE_To_UInt64(::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method BE_To_UInt64, addr 0x37473cc, size 0xac, virtual false, abstract: false, final false
  static inline void BE_To_UInt64(::ArrayW<uint8_t> bs, int32_t bsOff, ::ArrayW<uint64_t> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method BE_To_UInt64, addr 0x3747330, size 0x9c, virtual false, abstract: false, final false
  static inline void BE_To_UInt64(::ArrayW<uint8_t> bs, int32_t off, ::ArrayW<uint64_t> ns);

  /// @brief Method LE_To_UInt16, addr 0x37474f4, size 0x2c, virtual false, abstract: false, final false
  static inline uint16_t LE_To_UInt16(::ArrayW<uint8_t> bs);

  /// @brief Method LE_To_UInt16, addr 0x3747520, size 0x40, virtual false, abstract: false, final false
  static inline uint16_t LE_To_UInt16(::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method LE_To_UInt32, addr 0x3747948, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t> LE_To_UInt32(::ArrayW<uint8_t> bs, int32_t off, int32_t count);

  /// @brief Method LE_To_UInt32, addr 0x3747788, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t LE_To_UInt32(::ArrayW<uint8_t> bs);

  /// @brief Method LE_To_UInt32, addr 0x37477dc, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t LE_To_UInt32(::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method LE_To_UInt32, addr 0x37478c0, size 0x88, virtual false, abstract: false, final false
  static inline void LE_To_UInt32(::ArrayW<uint8_t> bs, int32_t bOff, ::ArrayW<uint32_t> ns, int32_t nOff, int32_t count);

  /// @brief Method LE_To_UInt32, addr 0x374784c, size 0x74, virtual false, abstract: false, final false
  static inline void LE_To_UInt32(::ArrayW<uint8_t> bs, int32_t off, ::ArrayW<uint32_t> ns);

  /// @brief Method LE_To_UInt64, addr 0x3747c78, size 0x34, virtual false, abstract: false, final false
  static inline uint64_t LE_To_UInt64(::ArrayW<uint8_t> bs);

  /// @brief Method LE_To_UInt64, addr 0x3747cac, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t LE_To_UInt64(::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method LE_To_UInt64, addr 0x3747d80, size 0xac, virtual false, abstract: false, final false
  static inline void LE_To_UInt64(::ArrayW<uint8_t> bs, int32_t bsOff, ::ArrayW<uint64_t> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method LE_To_UInt64, addr 0x3747ce4, size 0x9c, virtual false, abstract: false, final false
  static inline void LE_To_UInt64(::ArrayW<uint8_t> bs, int32_t off, ::ArrayW<uint64_t> ns);

  static inline ::Org::BouncyCastle::Crypto::Utilities::Pack* New_ctor();

  /// @brief Method UInt16_To_BE, addr 0x3746ad4, size 0x34, virtual false, abstract: false, final false
  static inline void UInt16_To_BE(uint16_t n, ::ArrayW<uint8_t> bs);

  /// @brief Method UInt16_To_BE, addr 0x3746b08, size 0x48, virtual false, abstract: false, final false
  static inline void UInt16_To_BE(uint16_t n, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt16_To_LE, addr 0x3747478, size 0x34, virtual false, abstract: false, final false
  static inline void UInt16_To_LE(uint16_t n, ::ArrayW<uint8_t> bs);

  /// @brief Method UInt16_To_LE, addr 0x37474ac, size 0x48, virtual false, abstract: false, final false
  static inline void UInt16_To_LE(uint16_t n, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x3746bc4, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> UInt32_To_BE(uint32_t n);

  /// @brief Method UInt32_To_BE, addr 0x3746d00, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> UInt32_To_BE(::ArrayW<uint32_t> ns);

  /// @brief Method UInt32_To_BE, addr 0x3746cac, size 0x54, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(uint32_t n, ::ArrayW<uint8_t> bs);

  /// @brief Method UInt32_To_BE, addr 0x3746c2c, size 0x80, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x3746d74, size 0x78, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(::ArrayW<uint32_t> ns, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x3746dec, size 0x88, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(::ArrayW<uint32_t> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t> bs, int32_t bsOff);

  /// @brief Method UInt32_To_LE, addr 0x3747560, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> UInt32_To_LE(uint32_t n);

  /// @brief Method UInt32_To_LE, addr 0x374769c, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> UInt32_To_LE(::ArrayW<uint32_t> ns);

  /// @brief Method UInt32_To_LE, addr 0x3747648, size 0x54, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(uint32_t n, ::ArrayW<uint8_t> bs);

  /// @brief Method UInt32_To_LE, addr 0x37475c8, size 0x80, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt32_To_LE, addr 0x3747710, size 0x78, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(::ArrayW<uint32_t> ns, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x374703c, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> UInt64_To_BE(uint64_t n);

  /// @brief Method UInt64_To_BE, addr 0x374711c, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> UInt64_To_BE(::ArrayW<uint64_t> ns);

  /// @brief Method UInt64_To_BE, addr 0x37470ec, size 0x30, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(uint64_t n, ::ArrayW<uint8_t> bs);

  /// @brief Method UInt64_To_BE, addr 0x37470b8, size 0x34, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(uint64_t n, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x3747190, size 0x94, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(::ArrayW<uint64_t> ns, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x3747224, size 0xa0, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(::ArrayW<uint64_t> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t> bs, int32_t bsOff);

  /// @brief Method UInt64_To_LE, addr 0x37479fc, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> UInt64_To_LE(uint64_t n);

  /// @brief Method UInt64_To_LE, addr 0x3747ad0, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> UInt64_To_LE(::ArrayW<uint64_t> ns);

  /// @brief Method UInt64_To_LE, addr 0x3747aa4, size 0x2c, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(uint64_t n, ::ArrayW<uint8_t> bs);

  /// @brief Method UInt64_To_LE, addr 0x3747a74, size 0x30, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(uint64_t n, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt64_To_LE, addr 0x3747b44, size 0x94, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(::ArrayW<uint64_t> ns, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt64_To_LE, addr 0x3747bd8, size 0xa0, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(::ArrayW<uint64_t> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t> bs, int32_t bsOff);

  /// @brief Method .ctor, addr 0x3746ad0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pack", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pack(Pack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pack", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pack(Pack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1339 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Crypto::Utilities::Pack) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Utilities
