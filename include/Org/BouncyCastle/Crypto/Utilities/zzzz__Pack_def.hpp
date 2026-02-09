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
/// @brief Method BE_To_UInt16, addr 0x339f330, size 0x34, virtual false, abstract: false, final false
static inline uint16_t BE_To_UInt16(::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method BE_To_UInt16, addr 0x339f364, size 0x40, virtual false, abstract: false, final false
static inline uint16_t BE_To_UInt16(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method BE_To_UInt32, addr 0x339f654, size 0x58, virtual false, abstract: false, final false
static inline uint32_t BE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method BE_To_UInt32, addr 0x339f6ac, size 0x74, virtual false, abstract: false, final false
static inline uint32_t BE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method BE_To_UInt32, addr 0x339f794, size 0x88, virtual false, abstract: false, final false
static inline void BE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  bsOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  ns, int32_t  nsOff, int32_t  nsLen) ;

/// @brief Method BE_To_UInt32, addr 0x339f720, size 0x74, virtual false, abstract: false, final false
static inline void BE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off, ::ArrayW<uint32_t,::Array<uint32_t>*>  ns) ;

/// @brief Method BE_To_UInt64, addr 0x339faa4, size 0x34, virtual false, abstract: false, final false
static inline uint64_t BE_To_UInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method BE_To_UInt64, addr 0x339fad8, size 0x38, virtual false, abstract: false, final false
static inline uint64_t BE_To_UInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method BE_To_UInt64, addr 0x339fbac, size 0xac, virtual false, abstract: false, final false
static inline void BE_To_UInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  bsOff, ::ArrayW<uint64_t,::Array<uint64_t>*>  ns, int32_t  nsOff, int32_t  nsLen) ;

/// @brief Method BE_To_UInt64, addr 0x339fb10, size 0x9c, virtual false, abstract: false, final false
static inline void BE_To_UInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off, ::ArrayW<uint64_t,::Array<uint64_t>*>  ns) ;

/// @brief Method LE_To_UInt16, addr 0x339fcd4, size 0x2c, virtual false, abstract: false, final false
static inline uint16_t LE_To_UInt16(::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method LE_To_UInt16, addr 0x339fd00, size 0x40, virtual false, abstract: false, final false
static inline uint16_t LE_To_UInt16(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method LE_To_UInt32, addr 0x33a0128, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> LE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off, int32_t  count) ;

/// @brief Method LE_To_UInt32, addr 0x339ff68, size 0x54, virtual false, abstract: false, final false
static inline uint32_t LE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method LE_To_UInt32, addr 0x339ffbc, size 0x70, virtual false, abstract: false, final false
static inline uint32_t LE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method LE_To_UInt32, addr 0x33a00a0, size 0x88, virtual false, abstract: false, final false
static inline void LE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  bOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  ns, int32_t  nOff, int32_t  count) ;

/// @brief Method LE_To_UInt32, addr 0x33a002c, size 0x74, virtual false, abstract: false, final false
static inline void LE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off, ::ArrayW<uint32_t,::Array<uint32_t>*>  ns) ;

/// @brief Method LE_To_UInt64, addr 0x33a0458, size 0x34, virtual false, abstract: false, final false
static inline uint64_t LE_To_UInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method LE_To_UInt64, addr 0x33a048c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t LE_To_UInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method LE_To_UInt64, addr 0x33a0560, size 0xac, virtual false, abstract: false, final false
static inline void LE_To_UInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  bsOff, ::ArrayW<uint64_t,::Array<uint64_t>*>  ns, int32_t  nsOff, int32_t  nsLen) ;

/// @brief Method LE_To_UInt64, addr 0x33a04c4, size 0x9c, virtual false, abstract: false, final false
static inline void LE_To_UInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off, ::ArrayW<uint64_t,::Array<uint64_t>*>  ns) ;

static inline ::Org::BouncyCastle::Crypto::Utilities::Pack* New_ctor() ;

/// @brief Method UInt16_To_BE, addr 0x339f2b4, size 0x34, virtual false, abstract: false, final false
static inline void UInt16_To_BE(uint16_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method UInt16_To_BE, addr 0x339f2e8, size 0x48, virtual false, abstract: false, final false
static inline void UInt16_To_BE(uint16_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt16_To_LE, addr 0x339fc58, size 0x34, virtual false, abstract: false, final false
static inline void UInt16_To_LE(uint16_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method UInt16_To_LE, addr 0x339fc8c, size 0x48, virtual false, abstract: false, final false
static inline void UInt16_To_LE(uint16_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt32_To_BE, addr 0x339f3a4, size 0x68, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UInt32_To_BE(uint32_t  n) ;

/// @brief Method UInt32_To_BE, addr 0x339f4e0, size 0x74, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UInt32_To_BE(::ArrayW<uint32_t,::Array<uint32_t>*>  ns) ;

/// @brief Method UInt32_To_BE, addr 0x339f48c, size 0x54, virtual false, abstract: false, final false
static inline void UInt32_To_BE(uint32_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method UInt32_To_BE, addr 0x339f40c, size 0x80, virtual false, abstract: false, final false
static inline void UInt32_To_BE(uint32_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt32_To_BE, addr 0x339f554, size 0x78, virtual false, abstract: false, final false
static inline void UInt32_To_BE(::ArrayW<uint32_t,::Array<uint32_t>*>  ns, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt32_To_BE, addr 0x339f5cc, size 0x88, virtual false, abstract: false, final false
static inline void UInt32_To_BE(::ArrayW<uint32_t,::Array<uint32_t>*>  ns, int32_t  nsOff, int32_t  nsLen, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  bsOff) ;

/// @brief Method UInt32_To_LE, addr 0x339fd40, size 0x68, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UInt32_To_LE(uint32_t  n) ;

/// @brief Method UInt32_To_LE, addr 0x339fe7c, size 0x74, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UInt32_To_LE(::ArrayW<uint32_t,::Array<uint32_t>*>  ns) ;

/// @brief Method UInt32_To_LE, addr 0x339fe28, size 0x54, virtual false, abstract: false, final false
static inline void UInt32_To_LE(uint32_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method UInt32_To_LE, addr 0x339fda8, size 0x80, virtual false, abstract: false, final false
static inline void UInt32_To_LE(uint32_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt32_To_LE, addr 0x339fef0, size 0x78, virtual false, abstract: false, final false
static inline void UInt32_To_LE(::ArrayW<uint32_t,::Array<uint32_t>*>  ns, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt64_To_BE, addr 0x339f81c, size 0x7c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UInt64_To_BE(uint64_t  n) ;

/// @brief Method UInt64_To_BE, addr 0x339f8fc, size 0x74, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UInt64_To_BE(::ArrayW<uint64_t,::Array<uint64_t>*>  ns) ;

/// @brief Method UInt64_To_BE, addr 0x339f8cc, size 0x30, virtual false, abstract: false, final false
static inline void UInt64_To_BE(uint64_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method UInt64_To_BE, addr 0x339f898, size 0x34, virtual false, abstract: false, final false
static inline void UInt64_To_BE(uint64_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt64_To_BE, addr 0x339f970, size 0x94, virtual false, abstract: false, final false
static inline void UInt64_To_BE(::ArrayW<uint64_t,::Array<uint64_t>*>  ns, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt64_To_BE, addr 0x339fa04, size 0xa0, virtual false, abstract: false, final false
static inline void UInt64_To_BE(::ArrayW<uint64_t,::Array<uint64_t>*>  ns, int32_t  nsOff, int32_t  nsLen, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  bsOff) ;

/// @brief Method UInt64_To_LE, addr 0x33a01dc, size 0x78, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UInt64_To_LE(uint64_t  n) ;

/// @brief Method UInt64_To_LE, addr 0x33a02b0, size 0x74, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UInt64_To_LE(::ArrayW<uint64_t,::Array<uint64_t>*>  ns) ;

/// @brief Method UInt64_To_LE, addr 0x33a0284, size 0x2c, virtual false, abstract: false, final false
static inline void UInt64_To_LE(uint64_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method UInt64_To_LE, addr 0x33a0254, size 0x30, virtual false, abstract: false, final false
static inline void UInt64_To_LE(uint64_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt64_To_LE, addr 0x33a0324, size 0x94, virtual false, abstract: false, final false
static inline void UInt64_To_LE(::ArrayW<uint64_t,::Array<uint64_t>*>  ns, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt64_To_LE, addr 0x33a03b8, size 0xa0, virtual false, abstract: false, final false
static inline void UInt64_To_LE(::ArrayW<uint64_t,::Array<uint64_t>*>  ns, int32_t  nsOff, int32_t  nsLen, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  bsOff) ;

/// @brief Method .ctor, addr 0x339f2b0, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Pack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Pack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Pack(Pack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pack(Pack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1339};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Utilities::Pack, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Utilities::Pack);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Utilities::Pack*, "Org.BouncyCastle.Crypto.Utilities", "Pack");
