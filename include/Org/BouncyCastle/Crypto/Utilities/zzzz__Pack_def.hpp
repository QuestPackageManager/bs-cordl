#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pack)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Utilities {
class Pack;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Utilities::Pack);
// Type: Org.BouncyCastle.Crypto.Utilities::Pack
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Utilities {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Utilities::Pack*
class CORDL_TYPE Pack : public ::System::Object {
public:
  // Declarations
  /// @brief Method BE_To_UInt16, addr 0x103270c, size 0x34, virtual false, abstract: false, final false
  static inline uint16_t BE_To_UInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method BE_To_UInt16, addr 0x1032740, size 0x40, virtual false, abstract: false, final false
  static inline uint16_t BE_To_UInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method BE_To_UInt32, addr 0x1032a28, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t BE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method BE_To_UInt32, addr 0x1032a80, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t BE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method BE_To_UInt32, addr 0x1032b68, size 0x88, virtual false, abstract: false, final false
  static inline void BE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method BE_To_UInt32, addr 0x1032af4, size 0x74, virtual false, abstract: false, final false
  static inline void BE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<uint32_t, ::Array<uint32_t>*> ns);

  /// @brief Method BE_To_UInt64, addr 0x1032e6c, size 0x34, virtual false, abstract: false, final false
  static inline uint64_t BE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method BE_To_UInt64, addr 0x1032ea0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t BE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method BE_To_UInt64, addr 0x1032f70, size 0xac, virtual false, abstract: false, final false
  static inline void BE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff, ::ArrayW<uint64_t, ::Array<uint64_t>*> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method BE_To_UInt64, addr 0x1032ed8, size 0x98, virtual false, abstract: false, final false
  static inline void BE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<uint64_t, ::Array<uint64_t>*> ns);

  /// @brief Method LE_To_UInt16, addr 0x1033098, size 0x2c, virtual false, abstract: false, final false
  static inline uint16_t LE_To_UInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method LE_To_UInt16, addr 0x10330c4, size 0x40, virtual false, abstract: false, final false
  static inline uint16_t LE_To_UInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method LE_To_UInt32, addr 0x10334ec, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, int32_t count);

  /// @brief Method LE_To_UInt32, addr 0x1033324, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method LE_To_UInt32, addr 0x103337c, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method LE_To_UInt32, addr 0x1033464, size 0x88, virtual false, abstract: false, final false
  static inline void LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> ns, int32_t nOff, int32_t count);

  /// @brief Method LE_To_UInt32, addr 0x10333f0, size 0x74, virtual false, abstract: false, final false
  static inline void LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<uint32_t, ::Array<uint32_t>*> ns);

  /// @brief Method LE_To_UInt64, addr 0x1033810, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t LE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method LE_To_UInt64, addr 0x1033848, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t LE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method LE_To_UInt64, addr 0x103391c, size 0xac, virtual false, abstract: false, final false
  static inline void LE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff, ::ArrayW<uint64_t, ::Array<uint64_t>*> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method LE_To_UInt64, addr 0x1033884, size 0x98, virtual false, abstract: false, final false
  static inline void LE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<uint64_t, ::Array<uint64_t>*> ns);

  static inline ::Org::BouncyCastle::Crypto::Utilities::Pack* New_ctor();

  /// @brief Method UInt16_To_BE, addr 0x1032690, size 0x34, virtual false, abstract: false, final false
  static inline void UInt16_To_BE(uint16_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt16_To_BE, addr 0x10326c4, size 0x48, virtual false, abstract: false, final false
  static inline void UInt16_To_BE(uint16_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt16_To_LE, addr 0x103301c, size 0x34, virtual false, abstract: false, final false
  static inline void UInt16_To_LE(uint16_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt16_To_LE, addr 0x1033050, size 0x48, virtual false, abstract: false, final false
  static inline void UInt16_To_LE(uint16_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x1032780, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt32_To_BE(uint32_t n);

  /// @brief Method UInt32_To_BE, addr 0x10328b8, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt32_To_BE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns);

  /// @brief Method UInt32_To_BE, addr 0x1032864, size 0x54, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt32_To_BE, addr 0x10327e4, size 0x80, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x1032928, size 0x78, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x10329a0, size 0x88, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff);

  /// @brief Method UInt32_To_LE, addr 0x1033104, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt32_To_LE(uint32_t n);

  /// @brief Method UInt32_To_LE, addr 0x103323c, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt32_To_LE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns);

  /// @brief Method UInt32_To_LE, addr 0x10331e8, size 0x54, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt32_To_LE, addr 0x1033168, size 0x80, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt32_To_LE, addr 0x10332ac, size 0x78, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x1032bf0, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt64_To_BE(uint64_t n);

  /// @brief Method UInt64_To_BE, addr 0x1032cc8, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt64_To_BE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns);

  /// @brief Method UInt64_To_BE, addr 0x1032c98, size 0x30, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt64_To_BE, addr 0x1032c64, size 0x34, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x1032d38, size 0x94, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x1032dcc, size 0xa0, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff);

  /// @brief Method UInt64_To_LE, addr 0x103359c, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt64_To_LE(uint64_t n);

  /// @brief Method UInt64_To_LE, addr 0x103366c, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt64_To_LE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns);

  /// @brief Method UInt64_To_LE, addr 0x1033640, size 0x2c, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt64_To_LE, addr 0x1033610, size 0x30, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_LE, addr 0x10336dc, size 0x94, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_LE, addr 0x1033770, size 0xa0, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff);

  /// @brief Method .ctor, addr 0x1032688, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Utilities::Pack, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Utilities::Pack);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Utilities::Pack*, "Org.BouncyCastle.Crypto.Utilities", "Pack");
