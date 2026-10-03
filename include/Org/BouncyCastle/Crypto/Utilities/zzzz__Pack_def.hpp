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
  /// @brief Method BE_To_UInt16, addr 0x37241ec, size 0x34, virtual false, abstract: false, final false
  static inline uint16_t BE_To_UInt16(::ArrayW<uint8_t> bs);

  /// @brief Method BE_To_UInt16, addr 0x3724220, size 0x40, virtual false, abstract: false, final false
  static inline uint16_t BE_To_UInt16(::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method BE_To_UInt32, addr 0x3724510, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t BE_To_UInt32(::ArrayW<uint8_t> bs);

  /// @brief Method BE_To_UInt32, addr 0x3724568, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t BE_To_UInt32(::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method BE_To_UInt32, addr 0x3724650, size 0x88, virtual false, abstract: false, final false
  static inline void BE_To_UInt32(::ArrayW<uint8_t> bs, int32_t bsOff, ::ArrayW<uint32_t> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method BE_To_UInt32, addr 0x37245dc, size 0x74, virtual false, abstract: false, final false
  static inline void BE_To_UInt32(::ArrayW<uint8_t> bs, int32_t off, ::ArrayW<uint32_t> ns);

  /// @brief Method BE_To_UInt64, addr 0x3724960, size 0x34, virtual false, abstract: false, final false
  static inline uint64_t BE_To_UInt64(::ArrayW<uint8_t> bs);

  /// @brief Method BE_To_UInt64, addr 0x3724994, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t BE_To_UInt64(::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method BE_To_UInt64, addr 0x3724a68, size 0xac, virtual false, abstract: false, final false
  static inline void BE_To_UInt64(::ArrayW<uint8_t> bs, int32_t bsOff, ::ArrayW<uint64_t> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method BE_To_UInt64, addr 0x37249cc, size 0x9c, virtual false, abstract: false, final false
  static inline void BE_To_UInt64(::ArrayW<uint8_t> bs, int32_t off, ::ArrayW<uint64_t> ns);

  /// @brief Method LE_To_UInt16, addr 0x3724b90, size 0x2c, virtual false, abstract: false, final false
  static inline uint16_t LE_To_UInt16(::ArrayW<uint8_t> bs);

  /// @brief Method LE_To_UInt16, addr 0x3724bbc, size 0x40, virtual false, abstract: false, final false
  static inline uint16_t LE_To_UInt16(::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method LE_To_UInt32, addr 0x3724fe4, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t> LE_To_UInt32(::ArrayW<uint8_t> bs, int32_t off, int32_t count);

  /// @brief Method LE_To_UInt32, addr 0x3724e24, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t LE_To_UInt32(::ArrayW<uint8_t> bs);

  /// @brief Method LE_To_UInt32, addr 0x3724e78, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t LE_To_UInt32(::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method LE_To_UInt32, addr 0x3724f5c, size 0x88, virtual false, abstract: false, final false
  static inline void LE_To_UInt32(::ArrayW<uint8_t> bs, int32_t bOff, ::ArrayW<uint32_t> ns, int32_t nOff, int32_t count);

  /// @brief Method LE_To_UInt32, addr 0x3724ee8, size 0x74, virtual false, abstract: false, final false
  static inline void LE_To_UInt32(::ArrayW<uint8_t> bs, int32_t off, ::ArrayW<uint32_t> ns);

  /// @brief Method LE_To_UInt64, addr 0x3725314, size 0x34, virtual false, abstract: false, final false
  static inline uint64_t LE_To_UInt64(::ArrayW<uint8_t> bs);

  /// @brief Method LE_To_UInt64, addr 0x3725348, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t LE_To_UInt64(::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method LE_To_UInt64, addr 0x372541c, size 0xac, virtual false, abstract: false, final false
  static inline void LE_To_UInt64(::ArrayW<uint8_t> bs, int32_t bsOff, ::ArrayW<uint64_t> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method LE_To_UInt64, addr 0x3725380, size 0x9c, virtual false, abstract: false, final false
  static inline void LE_To_UInt64(::ArrayW<uint8_t> bs, int32_t off, ::ArrayW<uint64_t> ns);

  static inline ::Org::BouncyCastle::Crypto::Utilities::Pack* New_ctor();

  /// @brief Method UInt16_To_BE, addr 0x3724170, size 0x34, virtual false, abstract: false, final false
  static inline void UInt16_To_BE(uint16_t n, ::ArrayW<uint8_t> bs);

  /// @brief Method UInt16_To_BE, addr 0x37241a4, size 0x48, virtual false, abstract: false, final false
  static inline void UInt16_To_BE(uint16_t n, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt16_To_LE, addr 0x3724b14, size 0x34, virtual false, abstract: false, final false
  static inline void UInt16_To_LE(uint16_t n, ::ArrayW<uint8_t> bs);

  /// @brief Method UInt16_To_LE, addr 0x3724b48, size 0x48, virtual false, abstract: false, final false
  static inline void UInt16_To_LE(uint16_t n, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x3724260, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> UInt32_To_BE(uint32_t n);

  /// @brief Method UInt32_To_BE, addr 0x372439c, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> UInt32_To_BE(::ArrayW<uint32_t> ns);

  /// @brief Method UInt32_To_BE, addr 0x3724348, size 0x54, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(uint32_t n, ::ArrayW<uint8_t> bs);

  /// @brief Method UInt32_To_BE, addr 0x37242c8, size 0x80, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x3724410, size 0x78, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(::ArrayW<uint32_t> ns, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x3724488, size 0x88, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(::ArrayW<uint32_t> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t> bs, int32_t bsOff);

  /// @brief Method UInt32_To_LE, addr 0x3724bfc, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> UInt32_To_LE(uint32_t n);

  /// @brief Method UInt32_To_LE, addr 0x3724d38, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> UInt32_To_LE(::ArrayW<uint32_t> ns);

  /// @brief Method UInt32_To_LE, addr 0x3724ce4, size 0x54, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(uint32_t n, ::ArrayW<uint8_t> bs);

  /// @brief Method UInt32_To_LE, addr 0x3724c64, size 0x80, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt32_To_LE, addr 0x3724dac, size 0x78, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(::ArrayW<uint32_t> ns, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x37246d8, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> UInt64_To_BE(uint64_t n);

  /// @brief Method UInt64_To_BE, addr 0x37247b8, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> UInt64_To_BE(::ArrayW<uint64_t> ns);

  /// @brief Method UInt64_To_BE, addr 0x3724788, size 0x30, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(uint64_t n, ::ArrayW<uint8_t> bs);

  /// @brief Method UInt64_To_BE, addr 0x3724754, size 0x34, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(uint64_t n, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x372482c, size 0x94, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(::ArrayW<uint64_t> ns, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x37248c0, size 0xa0, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(::ArrayW<uint64_t> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t> bs, int32_t bsOff);

  /// @brief Method UInt64_To_LE, addr 0x3725098, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> UInt64_To_LE(uint64_t n);

  /// @brief Method UInt64_To_LE, addr 0x372516c, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> UInt64_To_LE(::ArrayW<uint64_t> ns);

  /// @brief Method UInt64_To_LE, addr 0x3725140, size 0x2c, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(uint64_t n, ::ArrayW<uint8_t> bs);

  /// @brief Method UInt64_To_LE, addr 0x3725110, size 0x30, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(uint64_t n, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt64_To_LE, addr 0x37251e0, size 0x94, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(::ArrayW<uint64_t> ns, ::ArrayW<uint8_t> bs, int32_t off);

  /// @brief Method UInt64_To_LE, addr 0x3725274, size 0xa0, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(::ArrayW<uint64_t> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t> bs, int32_t bsOff);

  /// @brief Method .ctor, addr 0x372416c, size 0x4, virtual false, abstract: false, final false
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
