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
  /// @brief Method BE_To_UInt16, addr 0x2446278, size 0x34, virtual false, abstract: false, final false
  static inline uint16_t BE_To_UInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method BE_To_UInt16, addr 0x24462ac, size 0x40, virtual false, abstract: false, final false
  static inline uint16_t BE_To_UInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method BE_To_UInt32, addr 0x2446594, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t BE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method BE_To_UInt32, addr 0x24465ec, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t BE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method BE_To_UInt32, addr 0x24466d4, size 0x88, virtual false, abstract: false, final false
  static inline void BE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method BE_To_UInt32, addr 0x2446660, size 0x74, virtual false, abstract: false, final false
  static inline void BE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<uint32_t, ::Array<uint32_t>*> ns);

  /// @brief Method BE_To_UInt64, addr 0x24469d8, size 0x34, virtual false, abstract: false, final false
  static inline uint64_t BE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method BE_To_UInt64, addr 0x2446a0c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t BE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method BE_To_UInt64, addr 0x2446adc, size 0xac, virtual false, abstract: false, final false
  static inline void BE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff, ::ArrayW<uint64_t, ::Array<uint64_t>*> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method BE_To_UInt64, addr 0x2446a44, size 0x98, virtual false, abstract: false, final false
  static inline void BE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<uint64_t, ::Array<uint64_t>*> ns);

  /// @brief Method LE_To_UInt16, addr 0x2446c04, size 0x2c, virtual false, abstract: false, final false
  static inline uint16_t LE_To_UInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method LE_To_UInt16, addr 0x2446c30, size 0x40, virtual false, abstract: false, final false
  static inline uint16_t LE_To_UInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method LE_To_UInt32, addr 0x2447058, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, int32_t count);

  /// @brief Method LE_To_UInt32, addr 0x2446e90, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method LE_To_UInt32, addr 0x2446ee8, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method LE_To_UInt32, addr 0x2446fd0, size 0x88, virtual false, abstract: false, final false
  static inline void LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> ns, int32_t nOff, int32_t count);

  /// @brief Method LE_To_UInt32, addr 0x2446f5c, size 0x74, virtual false, abstract: false, final false
  static inline void LE_To_UInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<uint32_t, ::Array<uint32_t>*> ns);

  /// @brief Method LE_To_UInt64, addr 0x244737c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t LE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method LE_To_UInt64, addr 0x24473b4, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t LE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method LE_To_UInt64, addr 0x2447488, size 0xac, virtual false, abstract: false, final false
  static inline void LE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff, ::ArrayW<uint64_t, ::Array<uint64_t>*> ns, int32_t nsOff, int32_t nsLen);

  /// @brief Method LE_To_UInt64, addr 0x24473f0, size 0x98, virtual false, abstract: false, final false
  static inline void LE_To_UInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<uint64_t, ::Array<uint64_t>*> ns);

  static inline ::Org::BouncyCastle::Crypto::Utilities::Pack* New_ctor();

  /// @brief Method UInt16_To_BE, addr 0x24461fc, size 0x34, virtual false, abstract: false, final false
  static inline void UInt16_To_BE(uint16_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt16_To_BE, addr 0x2446230, size 0x48, virtual false, abstract: false, final false
  static inline void UInt16_To_BE(uint16_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt16_To_LE, addr 0x2446b88, size 0x34, virtual false, abstract: false, final false
  static inline void UInt16_To_LE(uint16_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt16_To_LE, addr 0x2446bbc, size 0x48, virtual false, abstract: false, final false
  static inline void UInt16_To_LE(uint16_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x24462ec, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt32_To_BE(uint32_t n);

  /// @brief Method UInt32_To_BE, addr 0x2446424, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt32_To_BE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns);

  /// @brief Method UInt32_To_BE, addr 0x24463d0, size 0x54, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt32_To_BE, addr 0x2446350, size 0x80, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x2446494, size 0x78, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt32_To_BE, addr 0x244650c, size 0x88, virtual false, abstract: false, final false
  static inline void UInt32_To_BE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff);

  /// @brief Method UInt32_To_LE, addr 0x2446c70, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt32_To_LE(uint32_t n);

  /// @brief Method UInt32_To_LE, addr 0x2446da8, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt32_To_LE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns);

  /// @brief Method UInt32_To_LE, addr 0x2446d54, size 0x54, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt32_To_LE, addr 0x2446cd4, size 0x80, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt32_To_LE, addr 0x2446e18, size 0x78, virtual false, abstract: false, final false
  static inline void UInt32_To_LE(::ArrayW<uint32_t, ::Array<uint32_t>*> ns, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x244675c, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt64_To_BE(uint64_t n);

  /// @brief Method UInt64_To_BE, addr 0x2446834, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt64_To_BE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns);

  /// @brief Method UInt64_To_BE, addr 0x2446804, size 0x30, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt64_To_BE, addr 0x24467d0, size 0x34, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x24468a4, size 0x94, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_BE, addr 0x2446938, size 0xa0, virtual false, abstract: false, final false
  static inline void UInt64_To_BE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff);

  /// @brief Method UInt64_To_LE, addr 0x2447108, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt64_To_LE(uint64_t n);

  /// @brief Method UInt64_To_LE, addr 0x24471d8, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UInt64_To_LE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns);

  /// @brief Method UInt64_To_LE, addr 0x24471ac, size 0x2c, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method UInt64_To_LE, addr 0x244717c, size 0x30, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_LE, addr 0x2447248, size 0x94, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method UInt64_To_LE, addr 0x24472dc, size 0xa0, virtual false, abstract: false, final false
  static inline void UInt64_To_LE(::ArrayW<uint64_t, ::Array<uint64_t>*> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff);

  /// @brief Method .ctor, addr 0x24461f4, size 0x8, virtual false, abstract: false, final false
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
