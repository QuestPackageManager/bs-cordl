#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/Arm.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Arm)
namespace Unity::Burst::Intrinsics {
class Arm_Neon;
}
namespace Unity::Burst::Intrinsics {
struct v128;
}
namespace Unity::Burst::Intrinsics {
struct v64;
}
// Forward declare root types
namespace Unity::Burst::Intrinsics {
class Arm;
}
namespace Unity::Burst::Intrinsics {
class Arm_Neon;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::Arm);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::Arm_Neon);
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.Arm/Neon
class CORDL_TYPE Arm_Neon : public ::System::Object {
public:
// Declarations
static inline ::Unity::Burst::Intrinsics::Arm_Neon* New_ctor() ;

/// @brief Method __crc32b, addr 0x62dc730, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32b(uint32_t  a0, uint8_t  a1) ;

/// @brief Method __crc32cb, addr 0x62dc810, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32cb(uint32_t  a0, uint8_t  a1) ;

/// @brief Method __crc32cd, addr 0x62dc8b8, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32cd(uint32_t  a0, uint64_t  a1) ;

/// @brief Method __crc32ch, addr 0x62dc848, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32ch(uint32_t  a0, uint16_t  a1) ;

/// @brief Method __crc32cw, addr 0x62dc880, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32cw(uint32_t  a0, uint32_t  a1) ;

/// @brief Method __crc32d, addr 0x62dc7d8, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32d(uint32_t  a0, uint64_t  a1) ;

/// @brief Method __crc32h, addr 0x62dc768, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32h(uint32_t  a0, uint16_t  a1) ;

/// @brief Method __crc32w, addr 0x62dc7a0, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32w(uint32_t  a0, uint32_t  a1) ;

/// @brief Method .ctor, addr 0x62dd848, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsNeonArmv82FeaturesSupported, addr 0x62ce82c, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsNeonArmv82FeaturesSupported() ;

/// @brief Method get_IsNeonCryptoSupported, addr 0x62dc4f8, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsNeonCryptoSupported() ;

/// @brief Method get_IsNeonDotProdSupported, addr 0x62dc9d0, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsNeonDotProdSupported() ;

/// @brief Method get_IsNeonRDMASupported, addr 0x62dcc78, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsNeonRDMASupported() ;

/// @brief Method get_IsNeonSupported, addr 0x62c2604, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsNeonSupported() ;

/// @brief Method vaba_s16, addr 0x62c65fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_s32, addr 0x62c666c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_s8, addr 0x62c658c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_u16, addr 0x62c674c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_u32, addr 0x62c67bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_u8, addr 0x62c66dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_high_s16, addr 0x62d2fcc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_s32, addr 0x62d3004, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_s8, addr 0x62d2f94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_u16, addr 0x62d3074, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_u32, addr 0x62d30ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_u8, addr 0x62d303c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_s16, addr 0x62c6864, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_s32, addr 0x62c689c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_s8, addr 0x62c682c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_u16, addr 0x62c690c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_u32, addr 0x62c6944, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_u8, addr 0x62c68d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabaq_s16, addr 0x62c6634, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_s32, addr 0x62c66a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_s8, addr 0x62c65c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_u16, addr 0x62c6784, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_u32, addr 0x62c67f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_u8, addr 0x62c6714, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabd_f32, addr 0x62c63cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_f64, addr 0x62d2d64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_s16, addr 0x62c619c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_s32, addr 0x62c620c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_s8, addr 0x62c612c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_u16, addr 0x62c62ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_u32, addr 0x62c635c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_u8, addr 0x62c627c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdd_f64, addr 0x62d2e0c, size 0x38, virtual false, abstract: false, final false
static inline double_t vabdd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vabdl_high_s16, addr 0x62d2e7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_s32, addr 0x62d2eb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_s8, addr 0x62d2e44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_u16, addr 0x62d2f24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_u32, addr 0x62d2f5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_u8, addr 0x62d2eec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_s16, addr 0x62c6474, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_s32, addr 0x62c64ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_s8, addr 0x62c643c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_u16, addr 0x62c651c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_u32, addr 0x62c6554, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_u8, addr 0x62c64e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdq_f32, addr 0x62c6404, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_f64, addr 0x62d2d9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_s16, addr 0x62c61d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_s32, addr 0x62c6244, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_s8, addr 0x62c6164, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_u16, addr 0x62c6324, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_u32, addr 0x62c6394, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_u8, addr 0x62c62b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabds_f32, addr 0x62d2dd4, size 0x38, virtual false, abstract: false, final false
static inline float_t vabds_f32(float_t  a0, float_t  a1) ;

/// @brief Method vabs_f32, addr 0x62cbc54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_f64, addr 0x62d85d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_s16, addr 0x62cbb74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_s32, addr 0x62cbbe4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_s64, addr 0x62d8530, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_s8, addr 0x62cbb04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabsd_s64, addr 0x62d8568, size 0x38, virtual false, abstract: false, final false
static inline int64_t vabsd_s64(int64_t  a0) ;

/// @brief Method vabsq_f32, addr 0x62cbc8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_f64, addr 0x62d8610, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_s16, addr 0x62cbbac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_s32, addr 0x62cbc1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_s64, addr 0x62d85a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_s8, addr 0x62cbb3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vadd_f32, addr 0x62c280c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_f64, addr 0x62ce834, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_s16, addr 0x62c267c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_s32, addr 0x62c26ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_s64, addr 0x62c275c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_s8, addr 0x62c260c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_u16, addr 0x62c27dc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_u32, addr 0x62c27ec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_u64, addr 0x62c27fc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_u8, addr 0x62c27cc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddd_s64, addr 0x62ce8a4, size 0x38, virtual false, abstract: false, final false
static inline int64_t vaddd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vaddd_u64, addr 0x62ce8dc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vaddd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vaddhn_high_s16, addr 0x62cf2b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_s32, addr 0x62cf2ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_s64, addr 0x62cf324, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_u16, addr 0x62cf35c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_u32, addr 0x62cf364, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_u64, addr 0x62cf36c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_s16, addr 0x62c33dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_s32, addr 0x62c3414, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_s64, addr 0x62c344c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_u16, addr 0x62c3484, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_u32, addr 0x62c348c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_u64, addr 0x62c3494, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_s16, addr 0x62ce94c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_s32, addr 0x62ce984, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_s8, addr 0x62ce914, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_u16, addr 0x62ce9f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_u32, addr 0x62cea2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_u8, addr 0x62ce9bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_s16, addr 0x62c28b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_s32, addr 0x62c28ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_s8, addr 0x62c287c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_u16, addr 0x62c295c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_u32, addr 0x62c2994, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_u8, addr 0x62c2924, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddlv_s16, addr 0x62dac5c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vaddlv_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_s32, addr 0x62daccc, size 0x38, virtual false, abstract: false, final false
static inline int64_t vaddlv_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_s8, addr 0x62dabec, size 0x38, virtual false, abstract: false, final false
static inline int16_t vaddlv_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_u16, addr 0x62dadac, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vaddlv_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_u32, addr 0x62dae1c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vaddlv_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_u8, addr 0x62dad3c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vaddlv_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlvq_s16, addr 0x62dac94, size 0x38, virtual false, abstract: false, final false
static inline int32_t vaddlvq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_s32, addr 0x62dad04, size 0x38, virtual false, abstract: false, final false
static inline int64_t vaddlvq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_s8, addr 0x62dac24, size 0x38, virtual false, abstract: false, final false
static inline int16_t vaddlvq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_u16, addr 0x62dade4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vaddlvq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_u32, addr 0x62dae54, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vaddlvq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_u8, addr 0x62dad74, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vaddlvq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddq_f32, addr 0x62c2844, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_f64, addr 0x62ce86c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_s16, addr 0x62c26b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_s32, addr 0x62c2724, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_s64, addr 0x62c2794, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_s8, addr 0x62c2644, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_u16, addr 0x62c27e4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_u32, addr 0x62c27f4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_u64, addr 0x62c2804, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_u8, addr 0x62c27d4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddv_f32, addr 0x62dab44, size 0x38, virtual false, abstract: false, final false
static inline float_t vaddv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_s16, addr 0x62da8a4, size 0x38, virtual false, abstract: false, final false
static inline int16_t vaddv_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_s32, addr 0x62da914, size 0x38, virtual false, abstract: false, final false
static inline int32_t vaddv_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_s8, addr 0x62da834, size 0x38, virtual false, abstract: false, final false
static inline int8_t vaddv_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_u16, addr 0x62daa2c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vaddv_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_u32, addr 0x62daa9c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vaddv_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_u8, addr 0x62da9bc, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vaddv_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddvq_f32, addr 0x62dab7c, size 0x38, virtual false, abstract: false, final false
static inline float_t vaddvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_f64, addr 0x62dabb4, size 0x38, virtual false, abstract: false, final false
static inline double_t vaddvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_s16, addr 0x62da8dc, size 0x38, virtual false, abstract: false, final false
static inline int16_t vaddvq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_s32, addr 0x62da94c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vaddvq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_s64, addr 0x62da984, size 0x38, virtual false, abstract: false, final false
static inline int64_t vaddvq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_s8, addr 0x62da86c, size 0x38, virtual false, abstract: false, final false
static inline int8_t vaddvq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_u16, addr 0x62daa64, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vaddvq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_u32, addr 0x62daad4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vaddvq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_u64, addr 0x62dab0c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vaddvq_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_u8, addr 0x62da9f4, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vaddvq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddw_high_s16, addr 0x62cea9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_s32, addr 0x62cead4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_s8, addr 0x62cea64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_u16, addr 0x62ceb44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_u32, addr 0x62ceb7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_u8, addr 0x62ceb0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_s16, addr 0x62c2a04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_s32, addr 0x62c2a3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_s8, addr 0x62c29cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_u16, addr 0x62c2aac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_u32, addr 0x62c2ae4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_u8, addr 0x62c2a74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaesdq_u8, addr 0x62dc928, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaesdq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaeseq_u8, addr 0x62dc8f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaeseq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaesimcq_u8, addr 0x62dc998, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaesimcq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaesmcq_u8, addr 0x62dc960, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaesmcq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vand_s16, addr 0x62cc844, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_s32, addr 0x62cc854, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_s64, addr 0x62cc864, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_s8, addr 0x62cc7d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_u16, addr 0x62cc884, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_u32, addr 0x62cc894, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_u64, addr 0x62cc8a4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_u8, addr 0x62cc874, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vandq_s16, addr 0x62cc84c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_s32, addr 0x62cc85c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_s64, addr 0x62cc86c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_s8, addr 0x62cc80c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_u16, addr 0x62cc88c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_u32, addr 0x62cc89c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_u64, addr 0x62cc8ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_u8, addr 0x62cc87c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbic_s16, addr 0x62ccae4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_s32, addr 0x62ccaf4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_s64, addr 0x62ccb04, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_s8, addr 0x62cca74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_u16, addr 0x62ccb24, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_u32, addr 0x62ccb34, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_u64, addr 0x62ccb44, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_u8, addr 0x62ccb14, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbicq_s16, addr 0x62ccaec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_s32, addr 0x62ccafc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_s64, addr 0x62ccb0c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_s8, addr 0x62ccaac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_u16, addr 0x62ccb2c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_u32, addr 0x62ccb3c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_u64, addr 0x62ccb4c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_u8, addr 0x62ccb1c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbsl_f32, addr 0x62ccd14, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_f64, addr 0x62d8e60, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_s16, addr 0x62ccca4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_s32, addr 0x62cccb4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_s64, addr 0x62cccc4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_s8, addr 0x62ccc34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_u16, addr 0x62ccce4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_u32, addr 0x62cccf4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_u64, addr 0x62ccd04, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_u8, addr 0x62cccd4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbslq_f32, addr 0x62ccd1c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_f64, addr 0x62d8e68, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_s16, addr 0x62cccac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_s32, addr 0x62cccbc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_s64, addr 0x62ccccc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_s8, addr 0x62ccc6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_u16, addr 0x62cccec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_u32, addr 0x62cccfc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_u64, addr 0x62ccd0c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_u8, addr 0x62cccdc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vcage_f32, addr 0x62c5dec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcage_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcage_f64, addr 0x62d28f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcage_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcaged_f64, addr 0x62d299c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcaged_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcageq_f32, addr 0x62c5e24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcageq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcageq_f64, addr 0x62d292c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcageq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcages_f32, addr 0x62d2964, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcages_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcagt_f32, addr 0x62c5ecc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcagt_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcagt_f64, addr 0x62d2ab4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcagt_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcagtd_f64, addr 0x62d2b5c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcagtd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcagtq_f32, addr 0x62c5f04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcagtq_f64, addr 0x62d2aec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcagts_f32, addr 0x62d2b24, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcagts_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcale_f32, addr 0x62c5e5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcale_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcale_f64, addr 0x62d29d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcale_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcaled_f64, addr 0x62d2a7c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcaled_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcaleq_f32, addr 0x62c5e94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcaleq_f64, addr 0x62d2a0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcales_f32, addr 0x62d2a44, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcales_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcalt_f32, addr 0x62c5f3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcalt_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcalt_f64, addr 0x62d2b94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcalt_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcaltd_f64, addr 0x62d2c3c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcaltd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcaltq_f32, addr 0x62c5f74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcaltq_f64, addr 0x62d2bcc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcalts_f32, addr 0x62d2c04, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcalts_f32(float_t  a0, float_t  a1) ;

/// @brief Method vceq_f32, addr 0x62c513c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_f64, addr 0x62d0e04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_s16, addr 0x62c502c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_s32, addr 0x62c509c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_s64, addr 0x62d0d84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_s8, addr 0x62c4fbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_u16, addr 0x62c511c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_u32, addr 0x62c512c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_u64, addr 0x62d0df4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_u8, addr 0x62c510c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceqd_f64, addr 0x62d0f1c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vceqd_s64, addr 0x62d0e74, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vceqd_u64, addr 0x62d0eac, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vceqq_f32, addr 0x62c5174, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_f64, addr 0x62d0e3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_s16, addr 0x62c5064, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_s32, addr 0x62c50d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_s64, addr 0x62d0dbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_s8, addr 0x62c4ff4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_u16, addr 0x62c5124, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_u32, addr 0x62c5134, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_u64, addr 0x62d0dfc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_u8, addr 0x62c5114, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqs_f32, addr 0x62d0ee4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vceqs_f32(float_t  a0, float_t  a1) ;

/// @brief Method vceqz_f32, addr 0x62d10d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_f64, addr 0x62d11c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_s16, addr 0x62d0fc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_s32, addr 0x62d1034, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_s64, addr 0x62d1144, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_s8, addr 0x62d0f54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_u16, addr 0x62d10b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_u32, addr 0x62d10c4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_u64, addr 0x62d11b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_u64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_u8, addr 0x62d10a4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqzd_f64, addr 0x62d12dc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqzd_f64(double_t  a0) ;

/// @brief Method vceqzd_s64, addr 0x62d1234, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqzd_s64(int64_t  a0) ;

/// @brief Method vceqzd_u64, addr 0x62d126c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqzd_u64(uint64_t  a0) ;

/// @brief Method vceqzq_f32, addr 0x62d110c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_f64, addr 0x62d11fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_s16, addr 0x62d0ffc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_s32, addr 0x62d106c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_s64, addr 0x62d117c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_s8, addr 0x62d0f8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_u16, addr 0x62d10bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_u32, addr 0x62d10cc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_u64, addr 0x62d11bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_u8, addr 0x62d10ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzs_f32, addr 0x62d12a4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vceqzs_f32(float_t  a0) ;

/// @brief Method vcge_f32, addr 0x62c544c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_f64, addr 0x62d13f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_s16, addr 0x62c521c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_s32, addr 0x62c528c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_s64, addr 0x62d1314, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_s8, addr 0x62c51ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_u16, addr 0x62c536c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_u32, addr 0x62c53dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_u64, addr 0x62d1384, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_u8, addr 0x62c52fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcged_f64, addr 0x62d150c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcged_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcged_s64, addr 0x62d1464, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcged_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vcged_u64, addr 0x62d149c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcged_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vcgeq_f32, addr 0x62c5484, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_f64, addr 0x62d142c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_s16, addr 0x62c5254, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_s32, addr 0x62c52c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_s64, addr 0x62d134c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_s8, addr 0x62c51e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_u16, addr 0x62c53a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_u32, addr 0x62c5414, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_u64, addr 0x62d13bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_u8, addr 0x62c5334, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcges_f32, addr 0x62d14d4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcges_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcgez_f32, addr 0x62d1704, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_f64, addr 0x62d1774, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_s16, addr 0x62d15b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_s32, addr 0x62d1624, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_s64, addr 0x62d1694, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_s8, addr 0x62d1544, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgezd_f64, addr 0x62d1854, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgezd_f64(double_t  a0) ;

/// @brief Method vcgezd_s64, addr 0x62d17e4, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgezd_s64(int64_t  a0) ;

/// @brief Method vcgezq_f32, addr 0x62d173c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_f64, addr 0x62d17ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_s16, addr 0x62d15ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_s32, addr 0x62d165c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_s64, addr 0x62d16cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_s8, addr 0x62d157c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezs_f32, addr 0x62d181c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcgezs_f32(float_t  a0) ;

/// @brief Method vcgt_f32, addr 0x62c5a6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_f64, addr 0x62d1ee4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_s16, addr 0x62c583c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_s32, addr 0x62c58ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_s64, addr 0x62d1e04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_s8, addr 0x62c57cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_u16, addr 0x62c598c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_u32, addr 0x62c59fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_u64, addr 0x62d1e74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_u8, addr 0x62c591c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgtd_f64, addr 0x62d1ffc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgtd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcgtd_s64, addr 0x62d1f54, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgtd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vcgtd_u64, addr 0x62d1f8c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgtd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vcgtq_f32, addr 0x62c5aa4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_f64, addr 0x62d1f1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_s16, addr 0x62c5874, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_s32, addr 0x62c58e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_s64, addr 0x62d1e3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_s8, addr 0x62c5804, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_u16, addr 0x62c59c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_u32, addr 0x62c5a34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_u64, addr 0x62d1eac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_u8, addr 0x62c5954, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgts_f32, addr 0x62d1fc4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcgts_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcgtz_f32, addr 0x62d21f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_f64, addr 0x62d2264, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_s16, addr 0x62d20a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_s32, addr 0x62d2114, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_s64, addr 0x62d2184, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_s8, addr 0x62d2034, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtzd_f64, addr 0x62d2344, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgtzd_f64(double_t  a0) ;

/// @brief Method vcgtzd_s64, addr 0x62d22d4, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgtzd_s64(int64_t  a0) ;

/// @brief Method vcgtzq_f32, addr 0x62d222c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_f64, addr 0x62d229c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_s16, addr 0x62d20dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_s32, addr 0x62d214c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_s64, addr 0x62d21bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_s8, addr 0x62d206c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzs_f32, addr 0x62d230c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcgtzs_f32(float_t  a0) ;

/// @brief Method vcle_f32, addr 0x62c575c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_f64, addr 0x62d196c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_s16, addr 0x62c552c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_s32, addr 0x62c559c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_s64, addr 0x62d188c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_s8, addr 0x62c54bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_u16, addr 0x62c567c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_u32, addr 0x62c56ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_u64, addr 0x62d18fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_u8, addr 0x62c560c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcled_f64, addr 0x62d1a84, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcled_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcled_s64, addr 0x62d19dc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcled_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vcled_u64, addr 0x62d1a14, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcled_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vcleq_f32, addr 0x62c5794, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_f64, addr 0x62d19a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_s16, addr 0x62c5564, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_s32, addr 0x62c55d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_s64, addr 0x62d18c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_s8, addr 0x62c54f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_u16, addr 0x62c56b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_u32, addr 0x62c5724, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_u64, addr 0x62d1934, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_u8, addr 0x62c5644, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcles_f32, addr 0x62d1a4c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcles_f32(float_t  a0, float_t  a1) ;

/// @brief Method vclez_f32, addr 0x62d1c7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_f64, addr 0x62d1cec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_s16, addr 0x62d1b2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_s32, addr 0x62d1b9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_s64, addr 0x62d1c0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_s8, addr 0x62d1abc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclezd_f64, addr 0x62d1dcc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vclezd_f64(double_t  a0) ;

/// @brief Method vclezd_s64, addr 0x62d1d5c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vclezd_s64(int64_t  a0) ;

/// @brief Method vclezq_f32, addr 0x62d1cb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_f64, addr 0x62d1d24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_s16, addr 0x62d1b64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_s32, addr 0x62d1bd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_s64, addr 0x62d1c44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_s8, addr 0x62d1af4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezs_f32, addr 0x62d1d94, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vclezs_f32(float_t  a0) ;

/// @brief Method vcls_s16, addr 0x62cc194, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcls_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcls_s32, addr 0x62cc204, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcls_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcls_s8, addr 0x62cc124, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcls_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclsq_s16, addr 0x62cc1cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclsq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclsq_s32, addr 0x62cc23c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclsq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclsq_s8, addr 0x62cc15c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclsq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclt_f32, addr 0x62c5d7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_f64, addr 0x62d245c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_s16, addr 0x62c5b4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_s32, addr 0x62c5bbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_s64, addr 0x62d237c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_s8, addr 0x62c5adc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_u16, addr 0x62c5c9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_u32, addr 0x62c5d0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_u64, addr 0x62d23ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_u8, addr 0x62c5c2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcltd_f64, addr 0x62d2574, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcltd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcltd_s64, addr 0x62d24cc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcltd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vcltd_u64, addr 0x62d2504, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcltd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vcltq_f32, addr 0x62c5db4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_f64, addr 0x62d2494, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_s16, addr 0x62c5b84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_s32, addr 0x62c5bf4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_s64, addr 0x62d23b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_s8, addr 0x62c5b14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_u16, addr 0x62c5cd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_u32, addr 0x62c5d44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_u64, addr 0x62d2424, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_u8, addr 0x62c5c64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vclts_f32, addr 0x62d253c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vclts_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcltz_f32, addr 0x62d276c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_f64, addr 0x62d27dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_s16, addr 0x62d261c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_s32, addr 0x62d268c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_s64, addr 0x62d26fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_s8, addr 0x62d25ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltzd_f64, addr 0x62d28bc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcltzd_f64(double_t  a0) ;

/// @brief Method vcltzd_s64, addr 0x62d284c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcltzd_s64(int64_t  a0) ;

/// @brief Method vcltzq_f32, addr 0x62d27a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_f64, addr 0x62d2814, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_s16, addr 0x62d2654, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_s32, addr 0x62d26c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_s64, addr 0x62d2734, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_s8, addr 0x62d25e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzs_f32, addr 0x62d2884, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcltzs_f32(float_t  a0) ;

/// @brief Method vclz_s16, addr 0x62cc2e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_s32, addr 0x62cc354, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_s8, addr 0x62cc274, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_u16, addr 0x62cc3d4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_u32, addr 0x62cc3e4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_u8, addr 0x62cc3c4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclzq_s16, addr 0x62cc31c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_s32, addr 0x62cc38c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_s8, addr 0x62cc2ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_u16, addr 0x62cc3dc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_u32, addr 0x62cc3ec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_u8, addr 0x62cc3cc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcnt_s8, addr 0x62cc3f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcnt_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcnt_u8, addr 0x62cc464, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcnt_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcntq_s8, addr 0x62cc42c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcntq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcntq_u8, addr 0x62cc46c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcntq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcombine_f16, addr 0x62dd65c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_f16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_f32, addr 0x62dd660, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_f64, addr 0x62dd664, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_s16, addr 0x62dd640, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_s32, addr 0x62dd644, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_s64, addr 0x62dd648, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_s8, addr 0x62dd63c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_u16, addr 0x62dd650, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_u32, addr 0x62dd654, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_u64, addr 0x62dd658, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_u8, addr 0x62dd64c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcopy_lane_f32, addr 0x62d9190, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_f64, addr 0x62d9200, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_s16, addr 0x62d8ee0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_s32, addr 0x62d8f50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_s64, addr 0x62d8fc0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_s8, addr 0x62d8e70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_u16, addr 0x62d9070, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_u32, addr 0x62d90e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_u64, addr 0x62d9150, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_u8, addr 0x62d9000, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_f32, addr 0x62d95c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_f64, addr 0x62d9630, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_s16, addr 0x62d92b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_s32, addr 0x62d9320, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_s64, addr 0x62d9390, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_s8, addr 0x62d9240, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_u16, addr 0x62d9470, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_u32, addr 0x62d94e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_u64, addr 0x62d9550, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_u8, addr 0x62d9400, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_f32, addr 0x62d91c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_f64, addr 0x62d9208, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_s16, addr 0x62d8f18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_s32, addr 0x62d8f88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_s64, addr 0x62d8fc8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_s8, addr 0x62d8ea8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_u16, addr 0x62d90a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_u32, addr 0x62d9118, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_u64, addr 0x62d9158, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_u8, addr 0x62d9038, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_f32, addr 0x62d95f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_f64, addr 0x62d9668, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_s16, addr 0x62d92e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_s32, addr 0x62d9358, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_s64, addr 0x62d93c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_s8, addr 0x62d9278, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_u16, addr 0x62d94a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_u32, addr 0x62d9518, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_u64, addr 0x62d9588, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_u8, addr 0x62d9438, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcreate_f16, addr 0x62dd410, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_f16(uint64_t  a0) ;

/// @brief Method vcreate_f32, addr 0x62dd414, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_f32(uint64_t  a0) ;

/// @brief Method vcreate_f64, addr 0x62dd418, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_f64(uint64_t  a0) ;

/// @brief Method vcreate_s16, addr 0x62dd3f4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_s16(uint64_t  a0) ;

/// @brief Method vcreate_s32, addr 0x62dd3f8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_s32(uint64_t  a0) ;

/// @brief Method vcreate_s64, addr 0x62dd3fc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_s64(uint64_t  a0) ;

/// @brief Method vcreate_s8, addr 0x62dd3f0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_s8(uint64_t  a0) ;

/// @brief Method vcreate_u16, addr 0x62dd404, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_u16(uint64_t  a0) ;

/// @brief Method vcreate_u32, addr 0x62dd408, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_u32(uint64_t  a0) ;

/// @brief Method vcreate_u64, addr 0x62dd40c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_u64(uint64_t  a0) ;

/// @brief Method vcreate_u8, addr 0x62dd400, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_u8(uint64_t  a0) ;

/// @brief Method vcvt_f32_f64, addr 0x62d59cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvt_f32_s32, addr 0x62c9bfc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_f32_u32, addr 0x62c9c6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_f64_f32, addr 0x62d5a3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvt_f64_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_f64_s64, addr 0x62d56bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_f64_u64, addr 0x62d572c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_u64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_high_f32_f64, addr 0x62d5a04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f32_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcvt_high_f64_f32, addr 0x62d5a74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f64_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvt_n_f32_s32, addr 0x62c9cdc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_f32_u32, addr 0x62c9d4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_f64_s64, addr 0x62d587c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_f64_u64, addr 0x62d58ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_s32_f32, addr 0x62c9b1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s32_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_s64_f64, addr 0x62d54fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s64_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_u32_f32, addr 0x62c9b8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u32_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_u64_f64, addr 0x62d556c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u64_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_s32_f32, addr 0x62c9a3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_s64_f64, addr 0x62d4dfc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_u32_f32, addr 0x62c9aac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_u64_f64, addr 0x62d4e6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvta_s32_f32, addr 0x62d4aec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvta_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvta_s64_f64, addr 0x62d517c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvta_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvta_u32_f32, addr 0x62d4b5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvta_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvta_u64_f64, addr 0x62d51ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvta_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtad_s64_f64, addr 0x62d541c, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtad_s64_f64(double_t  a0) ;

/// @brief Method vcvtad_u64_f64, addr 0x62d5454, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtad_u64_f64(double_t  a0) ;

/// @brief Method vcvtaq_s32_f32, addr 0x62d4b24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtaq_s64_f64, addr 0x62d51b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtaq_u32_f32, addr 0x62d4b94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtaq_u64_f64, addr 0x62d5224, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtas_s32_f32, addr 0x62d4d8c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvtas_s32_f32(float_t  a0) ;

/// @brief Method vcvtas_u32_f32, addr 0x62d4dc4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvtas_u32_f32(float_t  a0) ;

/// @brief Method vcvtd_f64_s64, addr 0x62d579c, size 0x38, virtual false, abstract: false, final false
static inline double_t vcvtd_f64_s64(int64_t  a0) ;

/// @brief Method vcvtd_f64_u64, addr 0x62d57d4, size 0x38, virtual false, abstract: false, final false
static inline double_t vcvtd_f64_u64(uint64_t  a0) ;

/// @brief Method vcvtd_n_f64_s64, addr 0x62d595c, size 0x38, virtual false, abstract: false, final false
static inline double_t vcvtd_n_f64_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vcvtd_n_f64_u64, addr 0x62d5994, size 0x38, virtual false, abstract: false, final false
static inline double_t vcvtd_n_f64_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vcvtd_n_s64_f64, addr 0x62d55dc, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtd_n_s64_f64(double_t  a0, int32_t  a1) ;

/// @brief Method vcvtd_n_u64_f64, addr 0x62d5614, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtd_n_u64_f64(double_t  a0, int32_t  a1) ;

/// @brief Method vcvtd_s64_f64, addr 0x62d525c, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtd_s64_f64(double_t  a0) ;

/// @brief Method vcvtd_u64_f64, addr 0x62d5294, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtd_u64_f64(double_t  a0) ;

/// @brief Method vcvtm_s32_f32, addr 0x62d492c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtm_s64_f64, addr 0x62d4fbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtm_u32_f32, addr 0x62d499c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtm_u64_f64, addr 0x62d502c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtmd_s64_f64, addr 0x62d533c, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtmd_s64_f64(double_t  a0) ;

/// @brief Method vcvtmd_u64_f64, addr 0x62d5374, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtmd_u64_f64(double_t  a0) ;

/// @brief Method vcvtmq_s32_f32, addr 0x62d4964, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtmq_s64_f64, addr 0x62d4ff4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtmq_u32_f32, addr 0x62d49d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtmq_u64_f64, addr 0x62d5064, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtms_s32_f32, addr 0x62d4cac, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvtms_s32_f32(float_t  a0) ;

/// @brief Method vcvtms_u32_f32, addr 0x62d4ce4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvtms_u32_f32(float_t  a0) ;

/// @brief Method vcvtn_s32_f32, addr 0x62d484c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtn_s64_f64, addr 0x62d4edc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtn_u32_f32, addr 0x62d48bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtn_u64_f64, addr 0x62d4f4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtnd_s64_f64, addr 0x62d52cc, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtnd_s64_f64(double_t  a0) ;

/// @brief Method vcvtnd_u64_f64, addr 0x62d5304, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtnd_u64_f64(double_t  a0) ;

/// @brief Method vcvtnq_s32_f32, addr 0x62d4884, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtnq_s64_f64, addr 0x62d4f14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtnq_u32_f32, addr 0x62d48f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtnq_u64_f64, addr 0x62d4f84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtns_s32_f32, addr 0x62d4c3c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvtns_s32_f32(float_t  a0) ;

/// @brief Method vcvtns_u32_f32, addr 0x62d4c74, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvtns_u32_f32(float_t  a0) ;

/// @brief Method vcvtp_s32_f32, addr 0x62d4a0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtp_s64_f64, addr 0x62d509c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtp_u32_f32, addr 0x62d4a7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtp_u64_f64, addr 0x62d510c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtpd_s64_f64, addr 0x62d53ac, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtpd_s64_f64(double_t  a0) ;

/// @brief Method vcvtpd_u64_f64, addr 0x62d53e4, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtpd_u64_f64(double_t  a0) ;

/// @brief Method vcvtpq_s32_f32, addr 0x62d4a44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtpq_s64_f64, addr 0x62d50d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtpq_u32_f32, addr 0x62d4ab4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtpq_u64_f64, addr 0x62d5144, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtps_s32_f32, addr 0x62d4d1c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvtps_s32_f32(float_t  a0) ;

/// @brief Method vcvtps_u32_f32, addr 0x62d4d54, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvtps_u32_f32(float_t  a0) ;

/// @brief Method vcvtq_f32_s32, addr 0x62c9c34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_f32_u32, addr 0x62c9ca4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_f64_s64, addr 0x62d56f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_f64_u64, addr 0x62d5764, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_n_f32_s32, addr 0x62c9d14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_f32_u32, addr 0x62c9d84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_f64_s64, addr 0x62d58b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_f64_u64, addr 0x62d5924, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_s32_f32, addr 0x62c9b54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s32_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_s64_f64, addr 0x62d5534, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s64_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_u32_f32, addr 0x62c9bc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u32_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_u64_f64, addr 0x62d55a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u64_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_s32_f32, addr 0x62c9a74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_s64_f64, addr 0x62d4e34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_u32_f32, addr 0x62c9ae4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_u64_f64, addr 0x62d4ea4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvts_f32_s32, addr 0x62d564c, size 0x38, virtual false, abstract: false, final false
static inline float_t vcvts_f32_s32(int32_t  a0) ;

/// @brief Method vcvts_f32_u32, addr 0x62d5684, size 0x38, virtual false, abstract: false, final false
static inline float_t vcvts_f32_u32(uint32_t  a0) ;

/// @brief Method vcvts_n_f32_s32, addr 0x62d580c, size 0x38, virtual false, abstract: false, final false
static inline float_t vcvts_n_f32_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vcvts_n_f32_u32, addr 0x62d5844, size 0x38, virtual false, abstract: false, final false
static inline float_t vcvts_n_f32_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vcvts_n_s32_f32, addr 0x62d548c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvts_n_s32_f32(float_t  a0, int32_t  a1) ;

/// @brief Method vcvts_n_u32_f32, addr 0x62d54c4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvts_n_u32_f32(float_t  a0, int32_t  a1) ;

/// @brief Method vcvts_s32_f32, addr 0x62d4bcc, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvts_s32_f32(float_t  a0) ;

/// @brief Method vcvts_u32_f32, addr 0x62d4c04, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvts_u32_f32(float_t  a0) ;

/// @brief Method vcvtx_f32_f64, addr 0x62d5aac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtx_f32_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtx_high_f32_f64, addr 0x62d5b1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtx_high_f32_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcvtxd_f32_f64, addr 0x62d5ae4, size 0x38, virtual false, abstract: false, final false
static inline float_t vcvtxd_f32_f64(double_t  a0) ;

/// @brief Method vdiv_f32, addr 0x62cf834, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdiv_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vdiv_f64, addr 0x62cf8a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdiv_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vdivq_f32, addr 0x62cf86c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdivq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vdivq_f64, addr 0x62cf8dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdivq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vdot_lane_s32, addr 0x62dcaf0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vdot_lane_u32, addr 0x62dcab8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vdot_laneq_s32, addr 0x62dcbd0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vdot_laneq_u32, addr 0x62dcb98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vdot_s32, addr 0x62dca10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vdot_u32, addr 0x62dc9d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vdotq_lane_s32, addr 0x62dcc40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vdotq_lane_u32, addr 0x62dcc08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vdotq_laneq_s32, addr 0x62dcb60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vdotq_laneq_u32, addr 0x62dcb28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vdotq_s32, addr 0x62dca80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vdotq_u32, addr 0x62dca48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vdup_lane_f32, addr 0x62ccfdc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_f64, addr 0x62d9720, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_s16, addr 0x62ccd94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_s32, addr 0x62cce04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_s64, addr 0x62cce74, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_s8, addr 0x62ccd24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_u16, addr 0x62ccef0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_u32, addr 0x62ccf60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_u64, addr 0x62ccfd0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_u8, addr 0x62cce80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_f32, addr 0x62d9aac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_f64, addr 0x62d9b1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_s16, addr 0x62d979c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_s32, addr 0x62d980c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_s64, addr 0x62d987c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_s8, addr 0x62d972c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_u16, addr 0x62d995c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_u32, addr 0x62d99cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_u64, addr 0x62d9a3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_u8, addr 0x62d98ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_n_f32, addr 0x62dd4fc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f32(float_t  a0) ;

/// @brief Method vdup_n_f64, addr 0x62dd518, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f64(double_t  a0) ;

/// @brief Method vdup_n_s16, addr 0x62dd440, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s16(int16_t  a0) ;

/// @brief Method vdup_n_s32, addr 0x62dd464, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s32(int32_t  a0) ;

/// @brief Method vdup_n_s64, addr 0x62dd480, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s64(int64_t  a0) ;

/// @brief Method vdup_n_s8, addr 0x62dd41c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s8(int8_t  a0) ;

/// @brief Method vdup_n_u16, addr 0x62dd4b0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u16(uint16_t  a0) ;

/// @brief Method vdup_n_u32, addr 0x62dd4d4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u32(uint32_t  a0) ;

/// @brief Method vdup_n_u64, addr 0x62dd4f0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u64(uint64_t  a0) ;

/// @brief Method vdup_n_u8, addr 0x62dd48c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u8(uint8_t  a0) ;

/// @brief Method vdupb_lane_s8, addr 0x62d9b8c, size 0x38, virtual false, abstract: false, final false
static inline int8_t vdupb_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupb_lane_u8, addr 0x62d9c38, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vdupb_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupb_laneq_s8, addr 0x62d9d24, size 0x38, virtual false, abstract: false, final false
static inline int8_t vdupb_laneq_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupb_laneq_u8, addr 0x62d9e04, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vdupb_laneq_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupd_lane_f64, addr 0x62d9d1c, size 0x8, virtual false, abstract: false, final false
static inline double_t vdupd_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupd_lane_s64, addr 0x62d9c34, size 0x4, virtual false, abstract: false, final false
static inline int64_t vdupd_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupd_lane_u64, addr 0x62d9ce0, size 0x4, virtual false, abstract: false, final false
static inline uint64_t vdupd_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupd_laneq_f64, addr 0x62d9f1c, size 0x38, virtual false, abstract: false, final false
static inline double_t vdupd_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupd_laneq_s64, addr 0x62d9dcc, size 0x38, virtual false, abstract: false, final false
static inline int64_t vdupd_laneq_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupd_laneq_u64, addr 0x62d9eac, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vdupd_laneq_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vduph_lane_s16, addr 0x62d9bc4, size 0x38, virtual false, abstract: false, final false
static inline int16_t vduph_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vduph_lane_u16, addr 0x62d9c70, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vduph_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vduph_laneq_s16, addr 0x62d9d5c, size 0x38, virtual false, abstract: false, final false
static inline int16_t vduph_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vduph_laneq_u16, addr 0x62d9e3c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vduph_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_f32, addr 0x62cd014, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_f64, addr 0x62d9724, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_s16, addr 0x62ccdcc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_s32, addr 0x62cce3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_s64, addr 0x62cce78, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_s8, addr 0x62ccd5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_u16, addr 0x62ccf28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_u32, addr 0x62ccf98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_u64, addr 0x62ccfd4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_u8, addr 0x62cceb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_f32, addr 0x62d9ae4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_f64, addr 0x62d9b54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_s16, addr 0x62d97d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_s32, addr 0x62d9844, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_s64, addr 0x62d98b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_s8, addr 0x62d9764, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_u16, addr 0x62d9994, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_u32, addr 0x62d9a04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_u64, addr 0x62d9a74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_u8, addr 0x62d9924, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_n_f32, addr 0x62dd508, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f32(float_t  a0) ;

/// @brief Method vdupq_n_f64, addr 0x62dd520, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f64(double_t  a0) ;

/// @brief Method vdupq_n_s16, addr 0x62dd450, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s16(int16_t  a0) ;

/// @brief Method vdupq_n_s32, addr 0x62dd470, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s32(int32_t  a0) ;

/// @brief Method vdupq_n_s64, addr 0x62dd484, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s64(int64_t  a0) ;

/// @brief Method vdupq_n_s8, addr 0x62dd42c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s8(int8_t  a0) ;

/// @brief Method vdupq_n_u16, addr 0x62dd4c0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u16(uint16_t  a0) ;

/// @brief Method vdupq_n_u32, addr 0x62dd4e0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u32(uint32_t  a0) ;

/// @brief Method vdupq_n_u64, addr 0x62dd4f4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u64(uint64_t  a0) ;

/// @brief Method vdupq_n_u8, addr 0x62dd49c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u8(uint8_t  a0) ;

/// @brief Method vdups_lane_f32, addr 0x62d9ce4, size 0x38, virtual false, abstract: false, final false
static inline float_t vdups_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdups_lane_s32, addr 0x62d9bfc, size 0x38, virtual false, abstract: false, final false
static inline int32_t vdups_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdups_lane_u32, addr 0x62d9ca8, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vdups_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdups_laneq_f32, addr 0x62d9ee4, size 0x38, virtual false, abstract: false, final false
static inline float_t vdups_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdups_laneq_s32, addr 0x62d9d94, size 0x38, virtual false, abstract: false, final false
static inline int32_t vdups_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdups_laneq_u32, addr 0x62d9e74, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vdups_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method veor_s16, addr 0x62cca04, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_s32, addr 0x62cca14, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_s64, addr 0x62cca24, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_s8, addr 0x62cc994, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_u16, addr 0x62cca44, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_u32, addr 0x62cca54, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_u64, addr 0x62cca64, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_u8, addr 0x62cca34, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veorq_s16, addr 0x62cca0c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_s32, addr 0x62cca1c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_s64, addr 0x62cca2c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_s8, addr 0x62cc9cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_u16, addr 0x62cca4c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_u32, addr 0x62cca5c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_u64, addr 0x62cca6c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_u8, addr 0x62cca3c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vext_f32, addr 0x62cdcac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_f64, addr 0x62db66c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_s16, addr 0x62cda04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_s32, addr 0x62cda74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_s64, addr 0x62cdae4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_s8, addr 0x62cd994, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_u16, addr 0x62cdb90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_u32, addr 0x62cdc00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_u64, addr 0x62cdc70, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_u8, addr 0x62cdb20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vextq_f32, addr 0x62cdce4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_f64, addr 0x62db670, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_s16, addr 0x62cda3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_s32, addr 0x62cdaac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_s64, addr 0x62cdae8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_s8, addr 0x62cd9cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_u16, addr 0x62cdbc8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_u32, addr 0x62cdc38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_u64, addr 0x62cdc74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_u8, addr 0x62cdb58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vfma_f32, addr 0x62c3dcc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vfma_f64, addr 0x62cfc94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vfma_lane_f32, addr 0x62cfd04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfma_lane_f64, addr 0x62cfd74, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfma_laneq_f32, addr 0x62cfdf4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfma_laneq_f64, addr 0x62cfe64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfma_n_f32, addr 0x62ce7bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, float_t  a2) ;

/// @brief Method vfma_n_f64, addr 0x62dc418, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, double_t  a2) ;

/// @brief Method vfmad_lane_f64, addr 0x62cfdec, size 0x8, virtual false, abstract: false, final false
static inline double_t vfmad_lane_f64(double_t  a0, double_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmad_laneq_f64, addr 0x62cff0c, size 0x38, virtual false, abstract: false, final false
static inline double_t vfmad_laneq_f64(double_t  a0, double_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmaq_f32, addr 0x62c3e04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vfmaq_f64, addr 0x62cfccc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vfmaq_lane_f32, addr 0x62cfd3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmaq_lane_f64, addr 0x62cfd7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmaq_laneq_f32, addr 0x62cfe2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmaq_laneq_f64, addr 0x62cfe9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmaq_n_f32, addr 0x62ce7f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, float_t  a2) ;

/// @brief Method vfmaq_n_f64, addr 0x62dc450, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, double_t  a2) ;

/// @brief Method vfmas_lane_f32, addr 0x62cfdb4, size 0x38, virtual false, abstract: false, final false
static inline float_t vfmas_lane_f32(float_t  a0, float_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmas_laneq_f32, addr 0x62cfed4, size 0x38, virtual false, abstract: false, final false
static inline float_t vfmas_laneq_f32(float_t  a0, float_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfms_f32, addr 0x62c3e3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vfms_f64, addr 0x62cff44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vfms_lane_f32, addr 0x62cffb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfms_lane_f64, addr 0x62d0024, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfms_laneq_f32, addr 0x62d00a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfms_laneq_f64, addr 0x62d0114, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfms_n_f32, addr 0x62dc3a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, float_t  a2) ;

/// @brief Method vfms_n_f64, addr 0x62dc488, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, double_t  a2) ;

/// @brief Method vfmsd_lane_f64, addr 0x62d009c, size 0x8, virtual false, abstract: false, final false
static inline double_t vfmsd_lane_f64(double_t  a0, double_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmsd_laneq_f64, addr 0x62d01bc, size 0x38, virtual false, abstract: false, final false
static inline double_t vfmsd_laneq_f64(double_t  a0, double_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmsq_f32, addr 0x62c3e74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vfmsq_f64, addr 0x62cff7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vfmsq_lane_f32, addr 0x62cffec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmsq_lane_f64, addr 0x62d002c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmsq_laneq_f32, addr 0x62d00dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmsq_laneq_f64, addr 0x62d014c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmsq_n_f32, addr 0x62dc3e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, float_t  a2) ;

/// @brief Method vfmsq_n_f64, addr 0x62dc4c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, double_t  a2) ;

/// @brief Method vfmss_lane_f32, addr 0x62d0064, size 0x38, virtual false, abstract: false, final false
static inline float_t vfmss_lane_f32(float_t  a0, float_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmss_laneq_f32, addr 0x62d0184, size 0x38, virtual false, abstract: false, final false
static inline float_t vfmss_laneq_f32(float_t  a0, float_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vget_high_f32, addr 0x62dd6a8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_f64, addr 0x62dd6b0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_s16, addr 0x62dd670, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_s32, addr 0x62dd678, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_s64, addr 0x62dd680, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_s8, addr 0x62dd668, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_u16, addr 0x62dd690, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_u32, addr 0x62dd698, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_u64, addr 0x62dd6a0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_u8, addr 0x62dd688, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_lane_f32, addr 0x62ce204, size 0x38, virtual false, abstract: false, final false
static inline float_t vget_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_f64, addr 0x62dc2b8, size 0x8, virtual false, abstract: false, final false
static inline double_t vget_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_s16, addr 0x62ce190, size 0x38, virtual false, abstract: false, final false
static inline int16_t vget_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_s32, addr 0x62ce1c8, size 0x38, virtual false, abstract: false, final false
static inline int32_t vget_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_s64, addr 0x62ce200, size 0x4, virtual false, abstract: false, final false
static inline int64_t vget_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_s8, addr 0x62ce158, size 0x38, virtual false, abstract: false, final false
static inline int8_t vget_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_u16, addr 0x62ce0e4, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vget_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_u32, addr 0x62ce11c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vget_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_u64, addr 0x62ce154, size 0x4, virtual false, abstract: false, final false
static inline uint64_t vget_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_u8, addr 0x62ce0ac, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vget_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_low_f32, addr 0x62dd6d8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_f64, addr 0x62dd6dc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_s16, addr 0x62dd6bc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_s32, addr 0x62dd6c0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_s64, addr 0x62dd6c4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_s8, addr 0x62dd6b8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_u16, addr 0x62dd6cc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_u32, addr 0x62dd6d0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_u64, addr 0x62dd6d4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_u8, addr 0x62dd6c8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vgetq_lane_f32, addr 0x62ce3fc, size 0x38, virtual false, abstract: false, final false
static inline float_t vgetq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_f64, addr 0x62dc2c0, size 0x38, virtual false, abstract: false, final false
static inline double_t vgetq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_s16, addr 0x62ce354, size 0x38, virtual false, abstract: false, final false
static inline int16_t vgetq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_s32, addr 0x62ce38c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vgetq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_s64, addr 0x62ce3c4, size 0x38, virtual false, abstract: false, final false
static inline int64_t vgetq_lane_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_s8, addr 0x62ce31c, size 0x38, virtual false, abstract: false, final false
static inline int8_t vgetq_lane_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_u16, addr 0x62ce274, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vgetq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_u32, addr 0x62ce2ac, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vgetq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_u64, addr 0x62ce2e4, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vgetq_lane_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_u8, addr 0x62ce23c, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vgetq_lane_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vhadd_s16, addr 0x62c2b8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_s32, addr 0x62c2bfc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_s8, addr 0x62c2b1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_u16, addr 0x62c2cdc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_u32, addr 0x62c2d4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_u8, addr 0x62c2c6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhaddq_s16, addr 0x62c2bc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_s32, addr 0x62c2c34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_s8, addr 0x62c2b54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_u16, addr 0x62c2d14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_u32, addr 0x62c2d84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_u8, addr 0x62c2ca4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsub_s16, addr 0x62c488c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_s32, addr 0x62c48fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_s8, addr 0x62c481c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_u16, addr 0x62c49dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_u32, addr 0x62c4a4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_u8, addr 0x62c496c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsubq_s16, addr 0x62c48c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_s32, addr 0x62c4934, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_s8, addr 0x62c4854, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_u16, addr 0x62c4a14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_u32, addr 0x62c4a84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_u8, addr 0x62c49a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vld1_f32, addr 0x62dd780, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_f32(float_t*  a0) ;

/// @brief Method vld1_f64, addr 0x62dd794, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_f64(double_t*  a0) ;

/// @brief Method vld1_s16, addr 0x62dd6f4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_s16(int16_t*  a0) ;

/// @brief Method vld1_s32, addr 0x62dd708, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_s32(int32_t*  a0) ;

/// @brief Method vld1_s64, addr 0x62dd71c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_s64(int64_t*  a0) ;

/// @brief Method vld1_s8, addr 0x62dd6e0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_s8(int8_t*  a0) ;

/// @brief Method vld1_u16, addr 0x62dd744, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_u16(uint16_t*  a0) ;

/// @brief Method vld1_u32, addr 0x62dd758, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_u32(uint32_t*  a0) ;

/// @brief Method vld1_u64, addr 0x62dd76c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_u64(uint64_t*  a0) ;

/// @brief Method vld1_u8, addr 0x62dd730, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_u8(uint8_t*  a0) ;

/// @brief Method vld1q_f32, addr 0x62dd788, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_f32(float_t*  a0) ;

/// @brief Method vld1q_f64, addr 0x62dd79c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_f64(double_t*  a0) ;

/// @brief Method vld1q_s16, addr 0x62dd6fc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_s16(int16_t*  a0) ;

/// @brief Method vld1q_s32, addr 0x62dd710, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_s32(int32_t*  a0) ;

/// @brief Method vld1q_s64, addr 0x62dd724, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_s64(int64_t*  a0) ;

/// @brief Method vld1q_s8, addr 0x62dd6e8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_s8(int8_t*  a0) ;

/// @brief Method vld1q_u16, addr 0x62dd74c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_u16(uint16_t*  a0) ;

/// @brief Method vld1q_u32, addr 0x62dd760, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_u32(uint32_t*  a0) ;

/// @brief Method vld1q_u64, addr 0x62dd774, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_u64(uint64_t*  a0) ;

/// @brief Method vld1q_u8, addr 0x62dd738, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_u8(uint8_t*  a0) ;

/// @brief Method vmax_f32, addr 0x62c6c1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_f64, addr 0x62d30e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_s16, addr 0x62c69ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_s32, addr 0x62c6a5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_s8, addr 0x62c697c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_u16, addr 0x62c6b3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_u32, addr 0x62c6bac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_u8, addr 0x62c6acc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmaxnm_f32, addr 0x62d31c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmaxnm_f64, addr 0x62d3234, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmaxnmq_f32, addr 0x62d31fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxnmq_f64, addr 0x62d326c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxnmv_f32, addr 0x62db51c, size 0x38, virtual false, abstract: false, final false
static inline float_t vmaxnmv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxnmvq_f32, addr 0x62db554, size 0x38, virtual false, abstract: false, final false
static inline float_t vmaxnmvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxnmvq_f64, addr 0x62db58c, size 0x38, virtual false, abstract: false, final false
static inline double_t vmaxnmvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxq_f32, addr 0x62c6c54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_f64, addr 0x62d311c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_s16, addr 0x62c6a24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_s32, addr 0x62c6a94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_s8, addr 0x62c69b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_u16, addr 0x62c6b74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_u32, addr 0x62c6be4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_u8, addr 0x62c6b04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxv_f32, addr 0x62db12c, size 0x38, virtual false, abstract: false, final false
static inline float_t vmaxv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_s16, addr 0x62daefc, size 0x38, virtual false, abstract: false, final false
static inline int16_t vmaxv_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_s32, addr 0x62daf6c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vmaxv_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_s8, addr 0x62dae8c, size 0x38, virtual false, abstract: false, final false
static inline int8_t vmaxv_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_u16, addr 0x62db04c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vmaxv_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_u32, addr 0x62db0bc, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vmaxv_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_u8, addr 0x62dafdc, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vmaxv_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxvq_f32, addr 0x62db164, size 0x38, virtual false, abstract: false, final false
static inline float_t vmaxvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_f64, addr 0x62db19c, size 0x38, virtual false, abstract: false, final false
static inline double_t vmaxvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_s16, addr 0x62daf34, size 0x38, virtual false, abstract: false, final false
static inline int16_t vmaxvq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_s32, addr 0x62dafa4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vmaxvq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_s8, addr 0x62daec4, size 0x38, virtual false, abstract: false, final false
static inline int8_t vmaxvq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_u16, addr 0x62db084, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vmaxvq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_u32, addr 0x62db0f4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vmaxvq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_u8, addr 0x62db014, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vmaxvq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmin_f32, addr 0x62c6f2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_f64, addr 0x62d3154, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_s16, addr 0x62c6cfc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_s32, addr 0x62c6d6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_s8, addr 0x62c6c8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_u16, addr 0x62c6e4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_u32, addr 0x62c6ebc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_u8, addr 0x62c6ddc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vminnm_f32, addr 0x62d32a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vminnm_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vminnm_f64, addr 0x62d3314, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vminnm_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vminnmq_f32, addr 0x62d32dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminnmq_f64, addr 0x62d334c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminnmv_f32, addr 0x62db5c4, size 0x38, virtual false, abstract: false, final false
static inline float_t vminnmv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminnmvq_f32, addr 0x62db5fc, size 0x38, virtual false, abstract: false, final false
static inline float_t vminnmvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminnmvq_f64, addr 0x62db634, size 0x38, virtual false, abstract: false, final false
static inline double_t vminnmvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminq_f32, addr 0x62c6f64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_f64, addr 0x62d318c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_s16, addr 0x62c6d34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_s32, addr 0x62c6da4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_s8, addr 0x62c6cc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_u16, addr 0x62c6e84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_u32, addr 0x62c6ef4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_u8, addr 0x62c6e14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminv_f32, addr 0x62db474, size 0x38, virtual false, abstract: false, final false
static inline float_t vminv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_s16, addr 0x62db244, size 0x38, virtual false, abstract: false, final false
static inline int16_t vminv_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_s32, addr 0x62db2b4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vminv_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_s8, addr 0x62db1d4, size 0x38, virtual false, abstract: false, final false
static inline int8_t vminv_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_u16, addr 0x62db394, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vminv_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_u32, addr 0x62db404, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vminv_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_u8, addr 0x62db324, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vminv_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminvq_f32, addr 0x62db4ac, size 0x38, virtual false, abstract: false, final false
static inline float_t vminvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_f64, addr 0x62db4e4, size 0x38, virtual false, abstract: false, final false
static inline double_t vminvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_s16, addr 0x62db27c, size 0x38, virtual false, abstract: false, final false
static inline int16_t vminvq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_s32, addr 0x62db2ec, size 0x38, virtual false, abstract: false, final false
static inline int32_t vminvq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_s8, addr 0x62db20c, size 0x38, virtual false, abstract: false, final false
static inline int8_t vminvq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_u16, addr 0x62db3cc, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vminvq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_u32, addr 0x62db43c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vminvq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_u8, addr 0x62db35c, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vminvq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmla_f32, addr 0x62c38cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_f64, addr 0x62cf914, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_lane_f32, addr 0x62ca444, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_lane_s16, addr 0x62ca284, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_lane_s32, addr 0x62ca2f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_lane_u16, addr 0x62ca364, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_lane_u32, addr 0x62ca3d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_f32, addr 0x62d68ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_s16, addr 0x62d66ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_s32, addr 0x62d675c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_u16, addr 0x62d67cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_u32, addr 0x62d683c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_n_f32, addr 0x62cb5c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, float_t  a2) ;

/// @brief Method vmla_n_s16, addr 0x62cb404, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vmla_n_s32, addr 0x62cb474, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmla_n_u16, addr 0x62cb4e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, uint16_t  a2) ;

/// @brief Method vmla_n_u32, addr 0x62cb554, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, uint32_t  a2) ;

/// @brief Method vmla_s16, addr 0x62c37bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_s32, addr 0x62c382c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_s8, addr 0x62c374c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_u16, addr 0x62c38ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_u32, addr 0x62c38bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_u8, addr 0x62c389c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_high_lane_s16, addr 0x62d691c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_high_lane_s32, addr 0x62d6954, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_high_lane_u16, addr 0x62d698c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_high_lane_u32, addr 0x62d69c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_high_laneq_s16, addr 0x62d6adc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_high_laneq_s32, addr 0x62d6b14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_high_laneq_u16, addr 0x62d6b4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_high_laneq_u32, addr 0x62d6b84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_high_n_s16, addr 0x62d8290, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vmlal_high_n_s32, addr 0x62d82c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmlal_high_n_u16, addr 0x62d8300, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint16_t  a2) ;

/// @brief Method vmlal_high_n_u32, addr 0x62d8338, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint32_t  a2) ;

/// @brief Method vmlal_high_s16, addr 0x62cf9bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_s32, addr 0x62cf9f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_s8, addr 0x62cf984, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_u16, addr 0x62cfa64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_u32, addr 0x62cfa9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_u8, addr 0x62cfa2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_lane_s16, addr 0x62ca4b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_lane_s32, addr 0x62ca4ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_lane_u16, addr 0x62ca524, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_lane_u32, addr 0x62ca55c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_laneq_s16, addr 0x62d69fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_laneq_s32, addr 0x62d6a34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_laneq_u16, addr 0x62d6a6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_laneq_u32, addr 0x62d6aa4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_n_s16, addr 0x62cb634, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vmlal_n_s32, addr 0x62cb66c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmlal_n_u16, addr 0x62cb6a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, uint16_t  a2) ;

/// @brief Method vmlal_n_u32, addr 0x62cb6dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, uint32_t  a2) ;

/// @brief Method vmlal_s16, addr 0x62c3974, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_s32, addr 0x62c39ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_s8, addr 0x62c393c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_u16, addr 0x62c3a1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_u32, addr 0x62c3a54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_u8, addr 0x62c39e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlaq_f32, addr 0x62c3904, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_f64, addr 0x62cf94c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_lane_f32, addr 0x62ca47c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_lane_s16, addr 0x62ca2bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_lane_s32, addr 0x62ca32c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_lane_u16, addr 0x62ca39c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_lane_u32, addr 0x62ca40c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_f32, addr 0x62d68e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_s16, addr 0x62d6724, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_s32, addr 0x62d6794, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_u16, addr 0x62d6804, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_u32, addr 0x62d6874, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_n_f32, addr 0x62cb5fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, float_t  a2) ;

/// @brief Method vmlaq_n_s16, addr 0x62cb43c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vmlaq_n_s32, addr 0x62cb4ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmlaq_n_u16, addr 0x62cb51c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint16_t  a2) ;

/// @brief Method vmlaq_n_u32, addr 0x62cb58c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint32_t  a2) ;

/// @brief Method vmlaq_s16, addr 0x62c37f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_s32, addr 0x62c3864, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_s8, addr 0x62c3784, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_u16, addr 0x62c38b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_u32, addr 0x62c38c4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_u8, addr 0x62c38a4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmls_f32, addr 0x62c3c0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_f64, addr 0x62cfad4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_lane_f32, addr 0x62ca7c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_lane_s16, addr 0x62ca604, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_lane_s32, addr 0x62ca674, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_lane_u16, addr 0x62ca6e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_lane_u32, addr 0x62ca754, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_f32, addr 0x62d6fac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_s16, addr 0x62d6dec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_s32, addr 0x62d6e5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_u16, addr 0x62d6ecc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_u32, addr 0x62d6f3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_n_f32, addr 0x62cb944, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, float_t  a2) ;

/// @brief Method vmls_n_s16, addr 0x62cb784, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vmls_n_s32, addr 0x62cb7f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmls_n_u16, addr 0x62cb864, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, uint16_t  a2) ;

/// @brief Method vmls_n_u32, addr 0x62cb8d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, uint32_t  a2) ;

/// @brief Method vmls_s16, addr 0x62c3afc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_s32, addr 0x62c3b6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_s8, addr 0x62c3a8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_u16, addr 0x62c3bec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_u32, addr 0x62c3bfc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_u8, addr 0x62c3bdc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_high_lane_s16, addr 0x62d701c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_lane_s32, addr 0x62d7054, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_lane_u16, addr 0x62d708c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_lane_u32, addr 0x62d70c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_laneq_s16, addr 0x62d71dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_laneq_s32, addr 0x62d7214, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_laneq_u16, addr 0x62d724c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_laneq_u32, addr 0x62d7284, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_n_s16, addr 0x62d83e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vmlsl_high_n_s32, addr 0x62d8418, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmlsl_high_n_u16, addr 0x62d8450, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint16_t  a2) ;

/// @brief Method vmlsl_high_n_u32, addr 0x62d8488, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint32_t  a2) ;

/// @brief Method vmlsl_high_s16, addr 0x62cfb7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_s32, addr 0x62cfbb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_s8, addr 0x62cfb44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_u16, addr 0x62cfc24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_u32, addr 0x62cfc5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_u8, addr 0x62cfbec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_lane_s16, addr 0x62ca834, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_lane_s32, addr 0x62ca86c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_lane_u16, addr 0x62ca8a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_lane_u32, addr 0x62ca8dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_laneq_s16, addr 0x62d70fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_laneq_s32, addr 0x62d7134, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_laneq_u16, addr 0x62d716c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_laneq_u32, addr 0x62d71a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_n_s16, addr 0x62cb9b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vmlsl_n_s32, addr 0x62cb9ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmlsl_n_u16, addr 0x62cba24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, uint16_t  a2) ;

/// @brief Method vmlsl_n_u32, addr 0x62cba5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, uint32_t  a2) ;

/// @brief Method vmlsl_s16, addr 0x62c3cb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_s32, addr 0x62c3cec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_s8, addr 0x62c3c7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_u16, addr 0x62c3d5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_u32, addr 0x62c3d94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_u8, addr 0x62c3d24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsq_f32, addr 0x62c3c44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_f64, addr 0x62cfb0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_lane_f32, addr 0x62ca7fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_lane_s16, addr 0x62ca63c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_lane_s32, addr 0x62ca6ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_lane_u16, addr 0x62ca71c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_lane_u32, addr 0x62ca78c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_f32, addr 0x62d6fe4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_s16, addr 0x62d6e24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_s32, addr 0x62d6e94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_u16, addr 0x62d6f04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_u32, addr 0x62d6f74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_n_f32, addr 0x62cb97c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, float_t  a2) ;

/// @brief Method vmlsq_n_s16, addr 0x62cb7bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vmlsq_n_s32, addr 0x62cb82c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmlsq_n_u16, addr 0x62cb89c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint16_t  a2) ;

/// @brief Method vmlsq_n_u32, addr 0x62cb90c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint32_t  a2) ;

/// @brief Method vmlsq_s16, addr 0x62c3b34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_s32, addr 0x62c3ba4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_s8, addr 0x62c3ac4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_u16, addr 0x62c3bf4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_u32, addr 0x62c3c04, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_u8, addr 0x62c3be4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmov_n_f32, addr 0x62dd60c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f32(float_t  a0) ;

/// @brief Method vmov_n_f64, addr 0x62dd628, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f64(double_t  a0) ;

/// @brief Method vmov_n_s16, addr 0x62dd550, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s16(int16_t  a0) ;

/// @brief Method vmov_n_s32, addr 0x62dd574, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s32(int32_t  a0) ;

/// @brief Method vmov_n_s64, addr 0x62dd590, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s64(int64_t  a0) ;

/// @brief Method vmov_n_s8, addr 0x62dd52c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s8(int8_t  a0) ;

/// @brief Method vmov_n_u16, addr 0x62dd5c0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u16(uint16_t  a0) ;

/// @brief Method vmov_n_u32, addr 0x62dd5e4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u32(uint32_t  a0) ;

/// @brief Method vmov_n_u64, addr 0x62dd600, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u64(uint64_t  a0) ;

/// @brief Method vmov_n_u8, addr 0x62dd59c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u8(uint8_t  a0) ;

/// @brief Method vmovl_high_s16, addr 0x62d61e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_s32, addr 0x62d621c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_s8, addr 0x62d61ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_u16, addr 0x62d628c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_u32, addr 0x62d62c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_u8, addr 0x62d6254, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_s16, addr 0x62c9f74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_s32, addr 0x62c9fac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_s8, addr 0x62c9f3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_u16, addr 0x62ca01c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_u32, addr 0x62ca054, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_u8, addr 0x62c9fe4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovn_high_s16, addr 0x62c9e7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_s32, addr 0x62c9eb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_s64, addr 0x62c9eec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_u16, addr 0x62c9f24, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_u32, addr 0x62c9f2c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_u64, addr 0x62c9f34, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_s16, addr 0x62c9dbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_s32, addr 0x62c9df4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_s64, addr 0x62c9e2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_u16, addr 0x62c9e64, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_u32, addr 0x62c9e6c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_u64, addr 0x62c9e74, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovq_n_f32, addr 0x62dd618, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f32(float_t  a0) ;

/// @brief Method vmovq_n_f64, addr 0x62dd630, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f64(double_t  a0) ;

/// @brief Method vmovq_n_s16, addr 0x62dd560, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s16(int16_t  a0) ;

/// @brief Method vmovq_n_s32, addr 0x62dd580, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s32(int32_t  a0) ;

/// @brief Method vmovq_n_s64, addr 0x62dd594, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s64(int64_t  a0) ;

/// @brief Method vmovq_n_s8, addr 0x62dd53c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s8(int8_t  a0) ;

/// @brief Method vmovq_n_u16, addr 0x62dd5d0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u16(uint16_t  a0) ;

/// @brief Method vmovq_n_u32, addr 0x62dd5f0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u32(uint32_t  a0) ;

/// @brief Method vmovq_n_u64, addr 0x62dd604, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u64(uint64_t  a0) ;

/// @brief Method vmovq_n_u8, addr 0x62dd5ac, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u8(uint8_t  a0) ;

/// @brief Method vmul_f32, addr 0x62c36dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_f64, addr 0x62cf434, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_lane_f32, addr 0x62cad74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_f64, addr 0x62d755c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_s16, addr 0x62cabb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_s32, addr 0x62cac24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_u16, addr 0x62cac94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_u32, addr 0x62cad04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_f32, addr 0x62d77a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_f64, addr 0x62d7810, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_s16, addr 0x62d75e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_s32, addr 0x62d7650, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_u16, addr 0x62d76c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_u32, addr 0x62d7730, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_n_f32, addr 0x62cab44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f32(::Unity::Burst::Intrinsics::v64  a0, float_t  a1) ;

/// @brief Method vmul_n_f64, addr 0x62d74ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f64(::Unity::Burst::Intrinsics::v64  a0, double_t  a1) ;

/// @brief Method vmul_n_s16, addr 0x62ca984, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vmul_n_s32, addr 0x62ca9f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vmul_n_u16, addr 0x62caa64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u16(::Unity::Burst::Intrinsics::v64  a0, uint16_t  a1) ;

/// @brief Method vmul_n_u32, addr 0x62caad4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u32(::Unity::Burst::Intrinsics::v64  a0, uint32_t  a1) ;

/// @brief Method vmul_s16, addr 0x62c35cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_s32, addr 0x62c363c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_s8, addr 0x62c355c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_u16, addr 0x62c36bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_u32, addr 0x62c36cc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_u8, addr 0x62c36ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmuld_lane_f64, addr 0x62d75d4, size 0xc, virtual false, abstract: false, final false
static inline double_t vmuld_lane_f64(double_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmuld_laneq_f64, addr 0x62d78b8, size 0x38, virtual false, abstract: false, final false
static inline double_t vmuld_laneq_f64(double_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_lane_s16, addr 0x62d79d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_high_lane_s32, addr 0x62d7a08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_high_lane_u16, addr 0x62d7a40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_high_lane_u32, addr 0x62d7a78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_high_laneq_s16, addr 0x62d7b90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_laneq_s32, addr 0x62d7bc8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_laneq_u16, addr 0x62d7c00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_laneq_u32, addr 0x62d7c38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_n_s16, addr 0x62d78f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vmull_high_n_s32, addr 0x62d7928, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vmull_high_n_u16, addr 0x62d7960, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u16(::Unity::Burst::Intrinsics::v128  a0, uint16_t  a1) ;

/// @brief Method vmull_high_n_u32, addr 0x62d7998, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1) ;

/// @brief Method vmull_high_s16, addr 0x62d04cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_s32, addr 0x62d0504, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_s8, addr 0x62d0494, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_u16, addr 0x62d0574, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_u32, addr 0x62d05ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_u8, addr 0x62d053c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_lane_s16, addr 0x62caec4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_lane_s32, addr 0x62caefc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_lane_u16, addr 0x62caf34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_lane_u32, addr 0x62caf6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_laneq_s16, addr 0x62d7ab0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_laneq_s32, addr 0x62d7ae8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_laneq_u16, addr 0x62d7b20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_laneq_u32, addr 0x62d7b58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_n_s16, addr 0x62cade4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vmull_n_s32, addr 0x62cae1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vmull_n_u16, addr 0x62cae54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u16(::Unity::Burst::Intrinsics::v64  a0, uint16_t  a1) ;

/// @brief Method vmull_n_u32, addr 0x62cae8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u32(::Unity::Burst::Intrinsics::v64  a0, uint32_t  a1) ;

/// @brief Method vmull_s16, addr 0x62c4184, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_s32, addr 0x62c41bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_s8, addr 0x62c414c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_u16, addr 0x62c422c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_u32, addr 0x62c4264, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_u8, addr 0x62c41f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmulq_f32, addr 0x62c3714, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_f64, addr 0x62cf46c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_lane_f32, addr 0x62cadac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_f64, addr 0x62d7564, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_s16, addr 0x62cabec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_s32, addr 0x62cac5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_u16, addr 0x62caccc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_u32, addr 0x62cad3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_f32, addr 0x62d77d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_f64, addr 0x62d7848, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_s16, addr 0x62d7618, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_s32, addr 0x62d7688, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_u16, addr 0x62d76f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_u32, addr 0x62d7768, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_n_f32, addr 0x62cab7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f32(::Unity::Burst::Intrinsics::v128  a0, float_t  a1) ;

/// @brief Method vmulq_n_f64, addr 0x62d7524, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f64(::Unity::Burst::Intrinsics::v128  a0, double_t  a1) ;

/// @brief Method vmulq_n_s16, addr 0x62ca9bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vmulq_n_s32, addr 0x62caa2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vmulq_n_u16, addr 0x62caa9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u16(::Unity::Burst::Intrinsics::v128  a0, uint16_t  a1) ;

/// @brief Method vmulq_n_u32, addr 0x62cab0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1) ;

/// @brief Method vmulq_s16, addr 0x62c3604, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_s32, addr 0x62c3674, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_s8, addr 0x62c3594, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_u16, addr 0x62c36c4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_u32, addr 0x62c36d4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_u8, addr 0x62c36b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmuls_lane_f32, addr 0x62d759c, size 0x38, virtual false, abstract: false, final false
static inline float_t vmuls_lane_f32(float_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmuls_laneq_f32, addr 0x62d7880, size 0x38, virtual false, abstract: false, final false
static inline float_t vmuls_laneq_f32(float_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulx_f32, addr 0x62cf4a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmulx_f64, addr 0x62cf514, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmulx_lane_f32, addr 0x62cf5f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulx_lane_f64, addr 0x62cf664, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulx_laneq_f32, addr 0x62cf6e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulx_laneq_f64, addr 0x62cf754, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulxd_f64, addr 0x62cf5bc, size 0x38, virtual false, abstract: false, final false
static inline double_t vmulxd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vmulxd_lane_f64, addr 0x62cf6dc, size 0x8, virtual false, abstract: false, final false
static inline double_t vmulxd_lane_f64(double_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulxd_laneq_f64, addr 0x62cf7fc, size 0x38, virtual false, abstract: false, final false
static inline double_t vmulxd_laneq_f64(double_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulxq_f32, addr 0x62cf4dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulxq_f64, addr 0x62cf54c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulxq_lane_f32, addr 0x62cf62c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulxq_lane_f64, addr 0x62cf66c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulxq_laneq_f32, addr 0x62cf71c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulxq_laneq_f64, addr 0x62cf78c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulxs_f32, addr 0x62cf584, size 0x38, virtual false, abstract: false, final false
static inline float_t vmulxs_f32(float_t  a0, float_t  a1) ;

/// @brief Method vmulxs_lane_f32, addr 0x62cf6a4, size 0x38, virtual false, abstract: false, final false
static inline float_t vmulxs_lane_f32(float_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulxs_laneq_f32, addr 0x62cf7c4, size 0x38, virtual false, abstract: false, final false
static inline float_t vmulxs_laneq_f32(float_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmvn_s16, addr 0x62cc784, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_s32, addr 0x62cc794, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_s8, addr 0x62cc714, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_u16, addr 0x62cc7b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_u32, addr 0x62cc7c4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_u8, addr 0x62cc7a4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvnq_s16, addr 0x62cc78c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_s32, addr 0x62cc79c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_s8, addr 0x62cc74c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_u16, addr 0x62cc7bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_u32, addr 0x62cc7cc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_u8, addr 0x62cc7ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vneg_f32, addr 0x62cbf64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_f64, addr 0x62d8840, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_s16, addr 0x62cbe84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_s32, addr 0x62cbef4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_s64, addr 0x62d8798, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_s8, addr 0x62cbe14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vnegd_s64, addr 0x62d87d0, size 0x38, virtual false, abstract: false, final false
static inline int64_t vnegd_s64(int64_t  a0) ;

/// @brief Method vnegq_f32, addr 0x62cbf9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_f64, addr 0x62d8878, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_s16, addr 0x62cbebc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_s32, addr 0x62cbf2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_s64, addr 0x62d8808, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_s8, addr 0x62cbe4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vorn_s16, addr 0x62ccbc4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_s32, addr 0x62ccbd4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_s64, addr 0x62ccbe4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_s8, addr 0x62ccb54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_u16, addr 0x62ccc04, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_u32, addr 0x62ccc14, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_u64, addr 0x62ccc24, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_u8, addr 0x62ccbf4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vornq_s16, addr 0x62ccbcc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_s32, addr 0x62ccbdc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_s64, addr 0x62ccbec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_s8, addr 0x62ccb8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_u16, addr 0x62ccc0c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_u32, addr 0x62ccc1c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_u64, addr 0x62ccc2c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_u8, addr 0x62ccbfc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorr_s16, addr 0x62cc924, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_s32, addr 0x62cc934, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_s64, addr 0x62cc944, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_s8, addr 0x62cc8b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_u16, addr 0x62cc964, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_u32, addr 0x62cc974, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_u64, addr 0x62cc984, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_u8, addr 0x62cc954, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorrq_s16, addr 0x62cc92c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_s32, addr 0x62cc93c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_s64, addr 0x62cc94c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_s8, addr 0x62cc8ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_u16, addr 0x62cc96c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_u32, addr 0x62cc97c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_u64, addr 0x62cc98c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_u8, addr 0x62cc95c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadal_s16, addr 0x62cd454, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_s32, addr 0x62cd4c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_s8, addr 0x62cd3e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_u16, addr 0x62cd5a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_u32, addr 0x62cd614, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_u8, addr 0x62cd534, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadalq_s16, addr 0x62cd48c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_s32, addr 0x62cd4fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_s8, addr 0x62cd41c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_u16, addr 0x62cd5dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_u32, addr 0x62cd64c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_u8, addr 0x62cd56c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadd_f32, addr 0x62cd10c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_s16, addr 0x62cd084, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_s32, addr 0x62cd0bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_s8, addr 0x62cd04c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_u16, addr 0x62cd0fc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_u32, addr 0x62cd104, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_u8, addr 0x62cd0f4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpaddd_f64, addr 0x62da63c, size 0x38, virtual false, abstract: false, final false
static inline double_t vpaddd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddd_s64, addr 0x62da594, size 0x38, virtual false, abstract: false, final false
static inline int64_t vpaddd_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddd_u64, addr 0x62da5cc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vpaddd_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddl_s16, addr 0x62cd1b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_s32, addr 0x62cd224, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_s8, addr 0x62cd144, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_u16, addr 0x62cd304, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_u32, addr 0x62cd374, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_u8, addr 0x62cd294, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddlq_s16, addr 0x62cd1ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_s32, addr 0x62cd25c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_s8, addr 0x62cd17c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_u16, addr 0x62cd33c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_u32, addr 0x62cd3ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_u8, addr 0x62cd2cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddq_f32, addr 0x62da054, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_f64, addr 0x62da08c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_s16, addr 0x62d9f8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_s32, addr 0x62d9fc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_s64, addr 0x62d9ffc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_s8, addr 0x62d9f54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_u16, addr 0x62da03c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_u32, addr 0x62da044, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_u64, addr 0x62da04c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_u8, addr 0x62da034, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadds_f32, addr 0x62da604, size 0x38, virtual false, abstract: false, final false
static inline float_t vpadds_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpmax_f32, addr 0x62cd7d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_s16, addr 0x62cd6bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_s32, addr 0x62cd6f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_s8, addr 0x62cd684, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_u16, addr 0x62cd764, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_u32, addr 0x62cd79c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_u8, addr 0x62cd72c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmaxnm_f32, addr 0x62da444, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmaxnm_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmaxnmq_f32, addr 0x62da47c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxnmq_f64, addr 0x62da4b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxnmqd_f64, addr 0x62da78c, size 0x38, virtual false, abstract: false, final false
static inline double_t vpmaxnmqd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpmaxnms_f32, addr 0x62da754, size 0x38, virtual false, abstract: false, final false
static inline float_t vpmaxnms_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpmaxq_f32, addr 0x62da214, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_f64, addr 0x62da24c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_s16, addr 0x62da0fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_s32, addr 0x62da134, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_s8, addr 0x62da0c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_u16, addr 0x62da1a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_u32, addr 0x62da1dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_u8, addr 0x62da16c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxqd_f64, addr 0x62da6ac, size 0x38, virtual false, abstract: false, final false
static inline double_t vpmaxqd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpmaxs_f32, addr 0x62da674, size 0x38, virtual false, abstract: false, final false
static inline float_t vpmaxs_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpmin_f32, addr 0x62cd95c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_s16, addr 0x62cd844, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_s32, addr 0x62cd87c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_s8, addr 0x62cd80c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_u16, addr 0x62cd8ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_u32, addr 0x62cd924, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_u8, addr 0x62cd8b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpminnm_f32, addr 0x62da4ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpminnm_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpminnmq_f32, addr 0x62da524, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminnmq_f64, addr 0x62da55c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminnmqd_f64, addr 0x62da7fc, size 0x38, virtual false, abstract: false, final false
static inline double_t vpminnmqd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpminnms_f32, addr 0x62da7c4, size 0x38, virtual false, abstract: false, final false
static inline float_t vpminnms_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpminq_f32, addr 0x62da3d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_f64, addr 0x62da40c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_s16, addr 0x62da2bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_s32, addr 0x62da2f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_s8, addr 0x62da284, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_u16, addr 0x62da364, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_u32, addr 0x62da39c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_u8, addr 0x62da32c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminqd_f64, addr 0x62da71c, size 0x38, virtual false, abstract: false, final false
static inline double_t vpminqd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpmins_f32, addr 0x62da6e4, size 0x38, virtual false, abstract: false, final false
static inline float_t vpmins_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabs_s16, addr 0x62cbd34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqabs_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabs_s32, addr 0x62cbda4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqabs_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabs_s64, addr 0x62d8648, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqabs_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabs_s8, addr 0x62cbcc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqabs_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabsb_s8, addr 0x62d86b8, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqabsb_s8(int8_t  a0) ;

/// @brief Method vqabsd_s64, addr 0x62d8760, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqabsd_s64(int64_t  a0) ;

/// @brief Method vqabsh_s16, addr 0x62d86f0, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqabsh_s16(int16_t  a0) ;

/// @brief Method vqabsq_s16, addr 0x62cbd6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqabsq_s32, addr 0x62cbddc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqabsq_s64, addr 0x62d8680, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqabsq_s8, addr 0x62cbcfc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqabss_s32, addr 0x62d8728, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqabss_s32(int32_t  a0) ;

/// @brief Method vqadd_s16, addr 0x62c30cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_s32, addr 0x62c313c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_s64, addr 0x62c31ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_s8, addr 0x62c305c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_u16, addr 0x62c328c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_u32, addr 0x62c32fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_u64, addr 0x62c336c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_u8, addr 0x62c321c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqaddb_s8, addr 0x62cebb4, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqaddb_s8(int8_t  a0, int8_t  a1) ;

/// @brief Method vqaddb_u8, addr 0x62cec94, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqaddb_u8(uint8_t  a0, uint8_t  a1) ;

/// @brief Method vqaddd_s64, addr 0x62cec5c, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqaddd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vqaddd_u64, addr 0x62ced3c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqaddd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vqaddh_s16, addr 0x62cebec, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqaddh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqaddh_u16, addr 0x62ceccc, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqaddh_u16(uint16_t  a0, uint16_t  a1) ;

/// @brief Method vqaddq_s16, addr 0x62c3104, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_s32, addr 0x62c3174, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_s64, addr 0x62c31e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_s8, addr 0x62c3094, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_u16, addr 0x62c32c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_u32, addr 0x62c3334, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_u64, addr 0x62c33a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_u8, addr 0x62c3254, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqadds_s32, addr 0x62cec24, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqadds_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqadds_u32, addr 0x62ced04, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqadds_u32(uint32_t  a0, uint32_t  a1) ;

/// @brief Method vqdmlal_high_lane_s16, addr 0x62d6c2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlal_high_lane_s32, addr 0x62d6c64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlal_high_laneq_s16, addr 0x62d6d7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlal_high_laneq_s32, addr 0x62d6db4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlal_high_n_s16, addr 0x62d8370, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vqdmlal_high_n_s32, addr 0x62d83a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmlal_high_s16, addr 0x62d0344, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqdmlal_high_s32, addr 0x62d037c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqdmlal_lane_s16, addr 0x62ca594, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlal_lane_s32, addr 0x62ca5cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlal_laneq_s16, addr 0x62d6c9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlal_laneq_s32, addr 0x62d6cd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlal_n_s16, addr 0x62cb714, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vqdmlal_n_s32, addr 0x62cb74c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmlal_s16, addr 0x62c406c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqdmlal_s32, addr 0x62c40a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqdmlalh_lane_s16, addr 0x62d6bbc, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlalh_lane_s16(int32_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlalh_laneq_s16, addr 0x62d6d0c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlalh_laneq_s16(int32_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlalh_s16, addr 0x62d02d4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlalh_s16(int32_t  a0, int16_t  a1, int16_t  a2) ;

/// @brief Method vqdmlals_lane_s32, addr 0x62d6bf4, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlals_lane_s32(int64_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlals_laneq_s32, addr 0x62d6d44, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlals_laneq_s32(int64_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlals_s32, addr 0x62d030c, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlals_s32(int64_t  a0, int32_t  a1, int32_t  a2) ;

/// @brief Method vqdmlsl_high_lane_s16, addr 0x62d732c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_high_lane_s32, addr 0x62d7364, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_high_laneq_s16, addr 0x62d747c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_high_laneq_s32, addr 0x62d74b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_high_n_s16, addr 0x62d84c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vqdmlsl_high_n_s32, addr 0x62d84f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmlsl_high_s16, addr 0x62d0424, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqdmlsl_high_s32, addr 0x62d045c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqdmlsl_lane_s16, addr 0x62ca914, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_lane_s32, addr 0x62ca94c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_laneq_s16, addr 0x62d739c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_laneq_s32, addr 0x62d73d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_n_s16, addr 0x62cba94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vqdmlsl_n_s32, addr 0x62cbacc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmlsl_s16, addr 0x62c40dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqdmlsl_s32, addr 0x62c4114, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqdmlslh_lane_s16, addr 0x62d72bc, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlslh_lane_s16(int32_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlslh_laneq_s16, addr 0x62d740c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlslh_laneq_s16(int32_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlslh_s16, addr 0x62d03b4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlslh_s16(int32_t  a0, int16_t  a1, int16_t  a2) ;

/// @brief Method vqdmlsls_lane_s32, addr 0x62d72f4, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlsls_lane_s32(int64_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsls_laneq_s32, addr 0x62d7444, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlsls_laneq_s32(int64_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsls_s32, addr 0x62d03ec, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlsls_s32(int64_t  a0, int32_t  a1, int32_t  a2) ;

/// @brief Method vqdmulh_lane_s16, addr 0x62cb164, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulh_lane_s32, addr 0x62cb1d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulh_laneq_s16, addr 0x62d7f80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulh_laneq_s32, addr 0x62d7ff0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulh_n_s16, addr 0x62cb084, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vqdmulh_n_s32, addr 0x62cb0f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqdmulh_s16, addr 0x62c3eac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqdmulh_s32, addr 0x62c3f1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqdmulhh_lane_s16, addr 0x62d7f10, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqdmulhh_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulhh_laneq_s16, addr 0x62d8060, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqdmulhh_laneq_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulhh_s16, addr 0x62d01f4, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqdmulhh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqdmulhq_lane_s16, addr 0x62cb19c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulhq_lane_s32, addr 0x62cb20c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulhq_laneq_s16, addr 0x62d7fb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulhq_laneq_s32, addr 0x62d8028, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulhq_n_s16, addr 0x62cb0bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vqdmulhq_n_s32, addr 0x62cb12c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqdmulhq_s16, addr 0x62c3ee4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqdmulhq_s32, addr 0x62c3f54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqdmulhs_lane_s32, addr 0x62d7f48, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmulhs_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulhs_laneq_s32, addr 0x62d8098, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmulhs_laneq_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulhs_s32, addr 0x62d022c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmulhs_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqdmull_high_lane_s16, addr 0x62d7d50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmull_high_lane_s32, addr 0x62d7d88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmull_high_laneq_s16, addr 0x62d7ea0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmull_high_laneq_s32, addr 0x62d7ed8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmull_high_n_s16, addr 0x62d7c70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vqdmull_high_n_s32, addr 0x62d7ca8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqdmull_high_s16, addr 0x62d0654, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqdmull_high_s32, addr 0x62d068c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqdmull_lane_s16, addr 0x62cb014, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmull_lane_s32, addr 0x62cb04c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmull_laneq_s16, addr 0x62d7dc0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmull_laneq_s32, addr 0x62d7df8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmull_n_s16, addr 0x62cafa4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vqdmull_n_s32, addr 0x62cafdc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqdmull_s16, addr 0x62c429c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqdmull_s32, addr 0x62c42d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqdmullh_lane_s16, addr 0x62d7ce0, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmullh_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmullh_laneq_s16, addr 0x62d7e30, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmullh_laneq_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmullh_s16, addr 0x62d05e4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmullh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqdmulls_lane_s32, addr 0x62d7d18, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmulls_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulls_laneq_s32, addr 0x62d7e68, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmulls_laneq_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulls_s32, addr 0x62d061c, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmulls_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqmovn_high_s16, addr 0x62d644c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_s32, addr 0x62d6484, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_s64, addr 0x62d64bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_u16, addr 0x62d64f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_u32, addr 0x62d652c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_u64, addr 0x62d6564, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_s16, addr 0x62ca08c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_s32, addr 0x62ca0c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_s64, addr 0x62ca0fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_u16, addr 0x62ca134, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_u32, addr 0x62ca16c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_u64, addr 0x62ca1a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovnd_s64, addr 0x62d636c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqmovnd_s64(int64_t  a0) ;

/// @brief Method vqmovnd_u64, addr 0x62d6414, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqmovnd_u64(uint64_t  a0) ;

/// @brief Method vqmovnh_s16, addr 0x62d62fc, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqmovnh_s16(int16_t  a0) ;

/// @brief Method vqmovnh_u16, addr 0x62d63a4, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqmovnh_u16(uint16_t  a0) ;

/// @brief Method vqmovns_s32, addr 0x62d6334, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqmovns_s32(int32_t  a0) ;

/// @brief Method vqmovns_u32, addr 0x62d63dc, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqmovns_u32(uint32_t  a0) ;

/// @brief Method vqmovun_high_s16, addr 0x62d6644, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovun_high_s32, addr 0x62d667c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovun_high_s64, addr 0x62d66b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovun_s16, addr 0x62ca1dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovun_s32, addr 0x62ca214, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovun_s64, addr 0x62ca24c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovund_s64, addr 0x62d660c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqmovund_s64(int64_t  a0) ;

/// @brief Method vqmovunh_s16, addr 0x62d659c, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqmovunh_s16(int16_t  a0) ;

/// @brief Method vqmovuns_s32, addr 0x62d65d4, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqmovuns_s32(int32_t  a0) ;

/// @brief Method vqneg_s16, addr 0x62cc044, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqneg_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqneg_s32, addr 0x62cc0b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqneg_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqneg_s64, addr 0x62d88b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqneg_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqneg_s8, addr 0x62cbfd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqneg_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqnegb_s8, addr 0x62d8920, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqnegb_s8(int8_t  a0) ;

/// @brief Method vqnegd_s64, addr 0x62d89c8, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqnegd_s64(int64_t  a0) ;

/// @brief Method vqnegh_s16, addr 0x62d8958, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqnegh_s16(int16_t  a0) ;

/// @brief Method vqnegq_s16, addr 0x62cc07c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqnegq_s32, addr 0x62cc0ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqnegq_s64, addr 0x62d88e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqnegq_s8, addr 0x62cc00c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqnegs_s32, addr 0x62d8990, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqnegs_s32(int32_t  a0) ;

/// @brief Method vqrdmlah_lane_s16, addr 0x62dce40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlah_lane_s32, addr 0x62dcf20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlah_laneq_s16, addr 0x62dceb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlah_laneq_s32, addr 0x62dcf90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlah_s16, addr 0x62dcc80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqrdmlah_s32, addr 0x62dccb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqrdmlahh_lane_s16, addr 0x62dd2a0, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlahh_lane_s16(int16_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlahh_laneq_s16, addr 0x62dd2d8, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlahh_laneq_s16(int16_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlahh_s16, addr 0x62dd1c0, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlahh_s16(int16_t  a0, int16_t  a1, int16_t  a2) ;

/// @brief Method vqrdmlahq_lane_s16, addr 0x62dce78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlahq_lane_s32, addr 0x62dcf58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlahq_laneq_s16, addr 0x62dcee8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlahq_laneq_s32, addr 0x62dcfc8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlahq_s16, addr 0x62dccf0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqrdmlahq_s32, addr 0x62dcd28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqrdmlahs_lane_s32, addr 0x62dd310, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmlahs_lane_s32(int32_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlahs_s32, addr 0x62dd1f8, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmlahs_s32(int32_t  a0, int32_t  a1, int32_t  a2) ;

/// @brief Method vqrdmlsh_lane_s16, addr 0x62dd000, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlsh_lane_s32, addr 0x62dd0e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlsh_laneq_s16, addr 0x62dd070, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlsh_laneq_s32, addr 0x62dd150, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlsh_s16, addr 0x62dcd60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqrdmlsh_s32, addr 0x62dcd98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqrdmlshh_lane_s16, addr 0x62dd348, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlshh_lane_s16(int16_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlshh_laneq_s16, addr 0x62dd380, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlshh_laneq_s16(int16_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlshh_s16, addr 0x62dd230, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlshh_s16(int16_t  a0, int16_t  a1, int16_t  a2) ;

/// @brief Method vqrdmlshq_lane_s16, addr 0x62dd038, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlshq_lane_s32, addr 0x62dd118, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlshq_laneq_s16, addr 0x62dd0a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlshq_laneq_s32, addr 0x62dd188, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlshq_s16, addr 0x62dcdd0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqrdmlshq_s32, addr 0x62dce08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqrdmlshs_lane_s32, addr 0x62dd3b8, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmlshs_lane_s32(int32_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlshs_s32, addr 0x62dd268, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmlshs_s32(int32_t  a0, int32_t  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_lane_s16, addr 0x62cb324, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_lane_s32, addr 0x62cb394, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_laneq_s16, addr 0x62d8140, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_laneq_s32, addr 0x62d81b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_n_s16, addr 0x62cb244, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vqrdmulh_n_s32, addr 0x62cb2b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqrdmulh_s16, addr 0x62c3f8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrdmulh_s32, addr 0x62c3ffc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrdmulhh_lane_s16, addr 0x62d80d0, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmulhh_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulhh_laneq_s16, addr 0x62d8220, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmulhh_laneq_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulhh_s16, addr 0x62d0264, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmulhh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqrdmulhq_lane_s16, addr 0x62cb35c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulhq_lane_s32, addr 0x62cb3cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulhq_laneq_s16, addr 0x62d8178, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulhq_laneq_s32, addr 0x62d81e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulhq_n_s16, addr 0x62cb27c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vqrdmulhq_n_s32, addr 0x62cb2ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrdmulhq_s16, addr 0x62c3fc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrdmulhq_s32, addr 0x62c4034, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrdmulhs_lane_s32, addr 0x62d8108, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmulhs_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulhs_laneq_s32, addr 0x62d8258, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmulhs_laneq_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulhs_s32, addr 0x62d029c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmulhs_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqrshl_s16, addr 0x62c7a8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_s32, addr 0x62c7afc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_s64, addr 0x62c7b6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_s8, addr 0x62c7a1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_u16, addr 0x62c7c4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_u32, addr 0x62c7cbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_u64, addr 0x62c7d2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_u8, addr 0x62c7bdc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshlb_s8, addr 0x62d3624, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqrshlb_s8(int8_t  a0, int8_t  a1) ;

/// @brief Method vqrshlb_u8, addr 0x62d3704, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqrshlb_u8(uint8_t  a0, int8_t  a1) ;

/// @brief Method vqrshld_s64, addr 0x62d36cc, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqrshld_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vqrshld_u64, addr 0x62d37ac, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqrshld_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vqrshlh_s16, addr 0x62d365c, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrshlh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqrshlh_u16, addr 0x62d373c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqrshlh_u16(uint16_t  a0, int16_t  a1) ;

/// @brief Method vqrshlq_s16, addr 0x62c7ac4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_s32, addr 0x62c7b34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_s64, addr 0x62c7ba4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_s8, addr 0x62c7a54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_u16, addr 0x62c7c84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_u32, addr 0x62c7cf4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_u64, addr 0x62c7d64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_u8, addr 0x62c7c14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshls_s32, addr 0x62d3694, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrshls_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqrshls_u32, addr 0x62d3774, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqrshls_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqrshrn_high_n_s16, addr 0x62d44cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_s32, addr 0x62d4504, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_s64, addr 0x62d453c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_u16, addr 0x62d4574, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_u32, addr 0x62d45ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_u64, addr 0x62d45e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_n_s16, addr 0x62c909c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_s32, addr 0x62c90d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_s64, addr 0x62c910c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_u16, addr 0x62c9144, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_u32, addr 0x62c917c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_u64, addr 0x62c91b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrnd_n_s64, addr 0x62d43ec, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrshrnd_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqrshrnd_n_u64, addr 0x62d4494, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqrshrnd_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vqrshrnh_n_s16, addr 0x62d437c, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqrshrnh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqrshrnh_n_u16, addr 0x62d4424, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqrshrnh_n_u16(uint16_t  a0, int32_t  a1) ;

/// @brief Method vqrshrns_n_s32, addr 0x62d43b4, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrshrns_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqrshrns_n_u32, addr 0x62d445c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqrshrns_n_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqrshrun_high_n_s16, addr 0x62d3ee4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrun_high_n_s32, addr 0x62d3f1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrun_high_n_s64, addr 0x62d3f54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrun_n_s16, addr 0x62c8d54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrun_n_s32, addr 0x62c8d8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrun_n_s64, addr 0x62c8dc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrund_n_s64, addr 0x62d3eac, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqrshrund_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqrshrunh_n_s16, addr 0x62d3e3c, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqrshrunh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqrshruns_n_s32, addr 0x62d3e74, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqrshruns_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshl_n_s16, addr 0x62c892c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_s32, addr 0x62c893c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_s64, addr 0x62c894c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_s8, addr 0x62c891c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_u16, addr 0x62c896c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_u32, addr 0x62c897c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_u64, addr 0x62c898c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_u8, addr 0x62c895c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_s16, addr 0x62c738c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_s32, addr 0x62c73fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_s64, addr 0x62c746c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_s8, addr 0x62c731c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_u16, addr 0x62c754c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_u32, addr 0x62c75bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_u64, addr 0x62c762c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_u8, addr 0x62c74dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshlb_n_s8, addr 0x62d38fc, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqshlb_n_s8(int8_t  a0, int32_t  a1) ;

/// @brief Method vqshlb_n_u8, addr 0x62d39dc, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqshlb_n_u8(uint8_t  a0, int32_t  a1) ;

/// @brief Method vqshlb_s8, addr 0x62d33f4, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqshlb_s8(int8_t  a0, int8_t  a1) ;

/// @brief Method vqshlb_u8, addr 0x62d34d4, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqshlb_u8(uint8_t  a0, int8_t  a1) ;

/// @brief Method vqshld_n_s64, addr 0x62d39a4, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqshld_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqshld_n_u64, addr 0x62d3a84, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqshld_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vqshld_s64, addr 0x62d349c, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqshld_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vqshld_u64, addr 0x62d357c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqshld_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vqshlh_n_s16, addr 0x62d3934, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqshlh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqshlh_n_u16, addr 0x62d3a14, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqshlh_n_u16(uint16_t  a0, int32_t  a1) ;

/// @brief Method vqshlh_s16, addr 0x62d342c, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqshlh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqshlh_u16, addr 0x62d350c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqshlh_u16(uint16_t  a0, int16_t  a1) ;

/// @brief Method vqshlq_n_s16, addr 0x62c8934, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_s32, addr 0x62c8944, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_s64, addr 0x62c8954, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_s8, addr 0x62c8924, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_u16, addr 0x62c8974, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_u32, addr 0x62c8984, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_u64, addr 0x62c8994, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_u8, addr 0x62c8964, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_s16, addr 0x62c73c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_s32, addr 0x62c7434, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_s64, addr 0x62c74a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_s8, addr 0x62c7354, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_u16, addr 0x62c7584, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_u32, addr 0x62c75f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_u64, addr 0x62c7664, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_u8, addr 0x62c7514, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshls_n_s32, addr 0x62d396c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqshls_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshls_n_u32, addr 0x62d3a4c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqshls_n_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqshls_s32, addr 0x62d3464, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqshls_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshls_u32, addr 0x62d3544, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqshls_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqshlu_n_s16, addr 0x62c8a0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshlu_n_s32, addr 0x62c8a7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshlu_n_s64, addr 0x62c8aec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshlu_n_s8, addr 0x62c899c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshlub_n_s8, addr 0x62d3abc, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqshlub_n_s8(int8_t  a0, int32_t  a1) ;

/// @brief Method vqshlud_n_s64, addr 0x62d3b64, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqshlud_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqshluh_n_s16, addr 0x62d3af4, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqshluh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqshluq_n_s16, addr 0x62c8a44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshluq_n_s32, addr 0x62c8ab4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshluq_n_s64, addr 0x62c8b24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshluq_n_s8, addr 0x62c89d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlus_n_s32, addr 0x62d3b2c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqshlus_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshrn_high_n_s16, addr 0x62d40dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_s32, addr 0x62d4114, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_s64, addr 0x62d414c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_u16, addr 0x62d4184, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_u32, addr 0x62d41bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_u64, addr 0x62d41f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_n_s16, addr 0x62c8dfc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_s32, addr 0x62c8e34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_s64, addr 0x62c8e6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_u16, addr 0x62c8ea4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_u32, addr 0x62c8edc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_u64, addr 0x62c8f14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrnd_n_s64, addr 0x62d3ffc, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqshrnd_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqshrnd_n_u64, addr 0x62d40a4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqshrnd_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vqshrnh_n_s16, addr 0x62d3f8c, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqshrnh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqshrnh_n_u16, addr 0x62d4034, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqshrnh_n_u16(uint16_t  a0, int32_t  a1) ;

/// @brief Method vqshrns_n_s32, addr 0x62d3fc4, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqshrns_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshrns_n_u32, addr 0x62d406c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqshrns_n_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqshrun_high_n_s16, addr 0x62d3d94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrun_high_n_s32, addr 0x62d3dcc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrun_high_n_s64, addr 0x62d3e04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrun_n_s16, addr 0x62c8cac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrun_n_s32, addr 0x62c8ce4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrun_n_s64, addr 0x62c8d1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrund_n_s64, addr 0x62d3d5c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqshrund_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqshrunh_n_s16, addr 0x62d3cec, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqshrunh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqshruns_n_s32, addr 0x62d3d24, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqshruns_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqsub_s16, addr 0x62c4b2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_s32, addr 0x62c4b9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_s64, addr 0x62c4c0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_s8, addr 0x62c4abc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_u16, addr 0x62c4cec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_u32, addr 0x62c4d5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_u64, addr 0x62c4dcc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_u8, addr 0x62c4c7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsubb_s8, addr 0x62d0a44, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqsubb_s8(int8_t  a0, int8_t  a1) ;

/// @brief Method vqsubb_u8, addr 0x62d0b24, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqsubb_u8(uint8_t  a0, uint8_t  a1) ;

/// @brief Method vqsubd_s64, addr 0x62d0aec, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqsubd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vqsubd_u64, addr 0x62d0bcc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqsubd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vqsubh_s16, addr 0x62d0a7c, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqsubh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqsubh_u16, addr 0x62d0b5c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqsubh_u16(uint16_t  a0, uint16_t  a1) ;

/// @brief Method vqsubq_s16, addr 0x62c4b64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_s32, addr 0x62c4bd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_s64, addr 0x62c4c44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_s8, addr 0x62c4af4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_u16, addr 0x62c4d24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_u32, addr 0x62c4d94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_u64, addr 0x62c4e04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_u8, addr 0x62c4cb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubs_s32, addr 0x62d0ab4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqsubs_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqsubs_u32, addr 0x62d0b94, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqsubs_u32(uint32_t  a0, uint32_t  a1) ;

/// @brief Method vqtbl1_s8, addr 0x62dc1b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqtbl1_u8, addr 0x62dc228, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqtbl1q_s8, addr 0x62dc1f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqtbl1q_u8, addr 0x62dc230, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqtbx1_s8, addr 0x62dc238, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqtbx1_u8, addr 0x62dc2a8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqtbx1q_s8, addr 0x62dc270, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqtbx1q_u8, addr 0x62dc2b0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_s16, addr 0x62cf374, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_s32, addr 0x62cf3ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_s64, addr 0x62cf3e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_u16, addr 0x62cf41c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_u32, addr 0x62cf424, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_u64, addr 0x62cf42c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_s16, addr 0x62c349c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_s32, addr 0x62c34d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_s64, addr 0x62c350c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_u16, addr 0x62c3544, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_u32, addr 0x62c354c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_u64, addr 0x62c3554, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrbit_s8, addr 0x62d96a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrbit_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrbit_u8, addr 0x62d9710, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrbit_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrbitq_s8, addr 0x62d96d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrbitq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrbitq_u8, addr 0x62d9718, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrbitq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrecpe_f32, addr 0x62cc4e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrecpe_f64, addr 0x62d8a00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrecpe_u32, addr 0x62cc474, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecpe_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrecped_f64, addr 0x62d8aa8, size 0x38, virtual false, abstract: false, final false
static inline double_t vrecped_f64(double_t  a0) ;

/// @brief Method vrecpeq_f32, addr 0x62cc51c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrecpeq_f64, addr 0x62d8a38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrecpeq_u32, addr 0x62cc4ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrecpes_f32, addr 0x62d8a70, size 0x38, virtual false, abstract: false, final false
static inline float_t vrecpes_f32(float_t  a0) ;

/// @brief Method vrecps_f32, addr 0x62cc554, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecps_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrecps_f64, addr 0x62d8ae0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecps_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrecpsd_f64, addr 0x62d8b88, size 0x38, virtual false, abstract: false, final false
static inline double_t vrecpsd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vrecpsq_f32, addr 0x62cc58c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrecpsq_f64, addr 0x62d8b18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrecpss_f32, addr 0x62d8b50, size 0x38, virtual false, abstract: false, final false
static inline float_t vrecpss_f32(float_t  a0, float_t  a1) ;

/// @brief Method vrecpxd_f64, addr 0x62dc370, size 0x38, virtual false, abstract: false, final false
static inline double_t vrecpxd_f64(double_t  a0) ;

/// @brief Method vrecpxs_f32, addr 0x62dc338, size 0x38, virtual false, abstract: false, final false
static inline float_t vrecpxs_f32(float_t  a0) ;

/// @brief Method vrev16_s8, addr 0x62cdfac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev16_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev16_u8, addr 0x62ce01c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev16_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev16q_s8, addr 0x62cdfe4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev16q_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev16q_u8, addr 0x62ce024, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev16q_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev32_s16, addr 0x62cdf1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev32_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev32_s8, addr 0x62cdeac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev32_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev32_u16, addr 0x62cdf9c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev32_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev32_u8, addr 0x62cdf8c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev32_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev32q_s16, addr 0x62cdf54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev32q_s8, addr 0x62cdee4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev32q_u16, addr 0x62cdfa4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev32q_u8, addr 0x62cdf94, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64_f32, addr 0x62cde9c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_s16, addr 0x62cdd8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_s32, addr 0x62cddfc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_s8, addr 0x62cdd1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_u16, addr 0x62cde7c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_u32, addr 0x62cde8c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_u8, addr 0x62cde6c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64q_f32, addr 0x62cdea4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_s16, addr 0x62cddc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_s32, addr 0x62cde34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_s8, addr 0x62cdd54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_u16, addr 0x62cde84, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_u32, addr 0x62cde94, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_u8, addr 0x62cde74, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrhadd_s16, addr 0x62c2e2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_s32, addr 0x62c2e9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_s8, addr 0x62c2dbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_u16, addr 0x62c2f7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_u32, addr 0x62c2fec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_u8, addr 0x62c2f0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhaddq_s16, addr 0x62c2e64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_s32, addr 0x62c2ed4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_s8, addr 0x62c2df4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_u16, addr 0x62c2fb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_u32, addr 0x62c3024, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_u8, addr 0x62c2f44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrnd_f32, addr 0x62d5b54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrnd_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrnd_f64, addr 0x62d5bc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrnd_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrnda_f32, addr 0x62d5f0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrnda_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrnda_f64, addr 0x62d5f7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrnda_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndaq_f32, addr 0x62d5f44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndaq_f64, addr 0x62d5fb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndi_f32, addr 0x62d5fec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndi_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndi_f64, addr 0x62d605c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndi_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndiq_f32, addr 0x62d6024, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndiq_f64, addr 0x62d6094, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndm_f32, addr 0x62d5d4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndm_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndm_f64, addr 0x62d5dbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndm_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndmq_f32, addr 0x62d5d84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndmq_f64, addr 0x62d5df4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndn_f32, addr 0x62d5c34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndn_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndn_f64, addr 0x62d5ca4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndn_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndnq_f32, addr 0x62d5c6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndnq_f64, addr 0x62d5cdc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndns_f32, addr 0x62d5d14, size 0x38, virtual false, abstract: false, final false
static inline float_t vrndns_f32(float_t  a0) ;

/// @brief Method vrndp_f32, addr 0x62d5e2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndp_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndp_f64, addr 0x62d5e9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndp_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndpq_f32, addr 0x62d5e64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndpq_f64, addr 0x62d5ed4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndq_f32, addr 0x62d5b8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndq_f64, addr 0x62d5bfc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndx_f32, addr 0x62d60cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndx_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndx_f64, addr 0x62d613c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndx_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndxq_f32, addr 0x62d6104, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndxq_f64, addr 0x62d6174, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrshl_s16, addr 0x62c770c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_s32, addr 0x62c777c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_s64, addr 0x62c77ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_s8, addr 0x62c769c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_u16, addr 0x62c78cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_u32, addr 0x62c793c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_u64, addr 0x62c79ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_u8, addr 0x62c785c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshld_s64, addr 0x62d35b4, size 0x38, virtual false, abstract: false, final false
static inline int64_t vrshld_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vrshld_u64, addr 0x62d35ec, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vrshld_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vrshlq_s16, addr 0x62c7744, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_s32, addr 0x62c77b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_s64, addr 0x62c7824, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_s8, addr 0x62c76d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_u16, addr 0x62c7904, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_u32, addr 0x62c7974, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_u64, addr 0x62c79e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_u8, addr 0x62c7894, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshr_n_s16, addr 0x62c84ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_s32, addr 0x62c84bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_s64, addr 0x62c84cc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_s8, addr 0x62c849c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_u16, addr 0x62c84ec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_u32, addr 0x62c84fc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_u64, addr 0x62c850c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_u8, addr 0x62c84dc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshrd_n_s64, addr 0x62d3804, size 0x38, virtual false, abstract: false, final false
static inline int64_t vrshrd_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vrshrd_n_u64, addr 0x62d383c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vrshrd_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vrshrn_high_n_s16, addr 0x62d422c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_s32, addr 0x62d4264, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_s64, addr 0x62d429c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_u16, addr 0x62d42d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_u32, addr 0x62d430c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_u64, addr 0x62d4344, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_n_s16, addr 0x62c8f4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_s32, addr 0x62c8f84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_s64, addr 0x62c8fbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_u16, addr 0x62c8ff4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_u32, addr 0x62c902c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_u64, addr 0x62c9064, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_s16, addr 0x62c84b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_s32, addr 0x62c84c4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_s64, addr 0x62c84d4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_s8, addr 0x62c84a4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_u16, addr 0x62c84f4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_u32, addr 0x62c8504, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_u64, addr 0x62c8514, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_u8, addr 0x62c84e4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrsqrte_f32, addr 0x62cc634, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrsqrte_f64, addr 0x62d8ca0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrsqrte_u32, addr 0x62cc5c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrsqrted_f64, addr 0x62d8d48, size 0x38, virtual false, abstract: false, final false
static inline double_t vrsqrted_f64(double_t  a0) ;

/// @brief Method vrsqrteq_f32, addr 0x62cc66c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrsqrteq_f64, addr 0x62d8cd8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrsqrteq_u32, addr 0x62cc5fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrsqrtes_f32, addr 0x62d8d10, size 0x38, virtual false, abstract: false, final false
static inline float_t vrsqrtes_f32(float_t  a0) ;

/// @brief Method vrsqrts_f32, addr 0x62cc6a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrsqrts_f64, addr 0x62d8d80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrsqrtsd_f64, addr 0x62d8e28, size 0x38, virtual false, abstract: false, final false
static inline double_t vrsqrtsd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vrsqrtsq_f32, addr 0x62cc6dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsqrtsq_f64, addr 0x62d8db8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsqrtss_f32, addr 0x62d8df0, size 0x38, virtual false, abstract: false, final false
static inline float_t vrsqrtss_f32(float_t  a0, float_t  a1) ;

/// @brief Method vrsra_n_s16, addr 0x62c88ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_s32, addr 0x62c88bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_s64, addr 0x62c88cc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_s8, addr 0x62c889c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_u16, addr 0x62c88ec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_u32, addr 0x62c88fc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_u64, addr 0x62c890c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_u8, addr 0x62c88dc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsrad_n_s64, addr 0x62d388c, size 0x38, virtual false, abstract: false, final false
static inline int64_t vrsrad_n_s64(int64_t  a0, int64_t  a1, int32_t  a2) ;

/// @brief Method vrsrad_n_u64, addr 0x62d38c4, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vrsrad_n_u64(uint64_t  a0, uint64_t  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_s16, addr 0x62c88b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_s32, addr 0x62c88c4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_s64, addr 0x62c88d4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_s8, addr 0x62c88a4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_u16, addr 0x62c88f4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_u32, addr 0x62c8904, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_u64, addr 0x62c8914, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_u8, addr 0x62c88e4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsubhn_high_s16, addr 0x62d0cc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_s32, addr 0x62d0cfc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_s64, addr 0x62d0d34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_u16, addr 0x62d0d6c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_u32, addr 0x62d0d74, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_u64, addr 0x62d0d7c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_s16, addr 0x62c4efc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_s32, addr 0x62c4f34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_s64, addr 0x62c4f6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_u16, addr 0x62c4fa4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_u32, addr 0x62c4fac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_u64, addr 0x62c4fb4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vset_lane_f32, addr 0x62ce58c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f32(float_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_f64, addr 0x62dc2f8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f64(double_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_s16, addr 0x62ce518, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_s32, addr 0x62ce550, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_s64, addr 0x62ce588, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s64(int64_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_s8, addr 0x62ce4e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s8(int8_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_u16, addr 0x62ce46c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u16(uint16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_u32, addr 0x62ce4a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u32(uint32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_u64, addr 0x62ce4dc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u64(uint64_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_u8, addr 0x62ce434, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u8(uint8_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_f32, addr 0x62ce784, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f32(float_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_f64, addr 0x62dc300, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f64(double_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_s16, addr 0x62ce6dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_s32, addr 0x62ce714, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_s64, addr 0x62ce74c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s64(int64_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_s8, addr 0x62ce6a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s8(int8_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_u16, addr 0x62ce5fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u16(uint16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_u32, addr 0x62ce634, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u32(uint32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_u64, addr 0x62ce66c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u64(uint64_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_u8, addr 0x62ce5c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u8(uint8_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsha1cq_u32, addr 0x62dc500, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1cq_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha1h_u32, addr 0x62dc5a8, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vsha1h_u32(uint32_t  a0) ;

/// @brief Method vsha1mq_u32, addr 0x62dc570, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1mq_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha1pq_u32, addr 0x62dc538, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1pq_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha1su0q_u32, addr 0x62dc5e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1su0q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha1su1q_u32, addr 0x62dc618, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1su1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsha256h2q_u32, addr 0x62dc688, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha256h2q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha256hq_u32, addr 0x62dc650, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha256hq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha256su0q_u32, addr 0x62dc6c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha256su0q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsha256su1q_u32, addr 0x62dc6f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha256su1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vshl_n_s16, addr 0x62c818c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_s32, addr 0x62c81fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_s64, addr 0x62c826c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_s8, addr 0x62c811c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_u16, addr 0x62c834c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_u32, addr 0x62c83bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_u64, addr 0x62c842c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_u8, addr 0x62c82dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_s16, addr 0x62c700c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_s32, addr 0x62c707c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_s64, addr 0x62c70ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_s8, addr 0x62c6f9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_u16, addr 0x62c71cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_u32, addr 0x62c723c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_u64, addr 0x62c72ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_u8, addr 0x62c715c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshld_n_s64, addr 0x62d37f4, size 0x8, virtual false, abstract: false, final false
static inline int64_t vshld_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vshld_n_u64, addr 0x62d37fc, size 0x8, virtual false, abstract: false, final false
static inline uint64_t vshld_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vshld_s64, addr 0x62d3384, size 0x38, virtual false, abstract: false, final false
static inline int64_t vshld_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vshld_u64, addr 0x62d33bc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vshld_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vshll_high_n_s16, addr 0x62d4654, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_s32, addr 0x62d468c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_s8, addr 0x62d461c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_u16, addr 0x62d46fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_u32, addr 0x62d4734, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_u8, addr 0x62d46c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_n_s16, addr 0x62c9224, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_s32, addr 0x62c925c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_s8, addr 0x62c91ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_u16, addr 0x62c92cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_u32, addr 0x62c9304, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_u8, addr 0x62c9294, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshlq_n_s16, addr 0x62c81c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_s32, addr 0x62c8234, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_s64, addr 0x62c82a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_s8, addr 0x62c8154, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_u16, addr 0x62c8384, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_u32, addr 0x62c83f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_u64, addr 0x62c8464, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_u8, addr 0x62c8314, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_s16, addr 0x62c7044, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_s32, addr 0x62c70b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_s64, addr 0x62c7124, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_s8, addr 0x62c6fd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_u16, addr 0x62c7204, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_u32, addr 0x62c7274, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_u64, addr 0x62c72e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_u8, addr 0x62c7194, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshr_n_s16, addr 0x62c7e0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_s32, addr 0x62c7e7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_s64, addr 0x62c7eec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_s8, addr 0x62c7d9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_u16, addr 0x62c7fcc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_u32, addr 0x62c803c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_u64, addr 0x62c80ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_u8, addr 0x62c7f5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshrd_n_s64, addr 0x62d37e4, size 0x8, virtual false, abstract: false, final false
static inline int64_t vshrd_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vshrd_n_u64, addr 0x62d37ec, size 0x8, virtual false, abstract: false, final false
static inline uint64_t vshrd_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vshrn_high_n_s16, addr 0x62d3b9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_s32, addr 0x62d3bd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_s64, addr 0x62d3c0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_u16, addr 0x62d3c44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_u32, addr 0x62d3c7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_u64, addr 0x62d3cb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_n_s16, addr 0x62c8b5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_s32, addr 0x62c8b94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_s64, addr 0x62c8bcc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_u16, addr 0x62c8c04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_u32, addr 0x62c8c3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_u64, addr 0x62c8c74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_s16, addr 0x62c7e44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_s32, addr 0x62c7eb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_s64, addr 0x62c7f24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_s8, addr 0x62c7dd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_u16, addr 0x62c8004, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_u32, addr 0x62c8074, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_u64, addr 0x62c80e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_u8, addr 0x62c7f94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vsli_n_s16, addr 0x62c972c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_s32, addr 0x62c979c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_s64, addr 0x62c980c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_s8, addr 0x62c96bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_u16, addr 0x62c98ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_u32, addr 0x62c995c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_u64, addr 0x62c99cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_u8, addr 0x62c987c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vslid_n_s64, addr 0x62d47dc, size 0x38, virtual false, abstract: false, final false
static inline int64_t vslid_n_s64(int64_t  a0, int64_t  a1, int32_t  a2) ;

/// @brief Method vslid_n_u64, addr 0x62d4814, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vslid_n_u64(uint64_t  a0, uint64_t  a1, int32_t  a2) ;

/// @brief Method vsliq_n_s16, addr 0x62c9764, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_s32, addr 0x62c97d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_s64, addr 0x62c9844, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_s8, addr 0x62c96f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_u16, addr 0x62c9924, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_u32, addr 0x62c9994, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_u64, addr 0x62c9a04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_u8, addr 0x62c98b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsqadd_u16, addr 0x62cf084, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsqadd_u32, addr 0x62cf0f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsqadd_u64, addr 0x62cf164, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsqadd_u8, addr 0x62cf014, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsqaddb_u8, addr 0x62cf1d4, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vsqaddb_u8(uint8_t  a0, int8_t  a1) ;

/// @brief Method vsqaddd_u64, addr 0x62cf27c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vsqaddd_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vsqaddh_u16, addr 0x62cf20c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vsqaddh_u16(uint16_t  a0, int16_t  a1) ;

/// @brief Method vsqaddq_u16, addr 0x62cf0bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsqaddq_u32, addr 0x62cf12c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsqaddq_u64, addr 0x62cf19c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsqaddq_u8, addr 0x62cf04c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsqadds_u32, addr 0x62cf244, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vsqadds_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vsqrt_f32, addr 0x62d8bc0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vsqrt_f64, addr 0x62d8c30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vsqrtq_f32, addr 0x62d8bf8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vsqrtq_f64, addr 0x62d8c68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vsra_n_s16, addr 0x62c858c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_s32, addr 0x62c85fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_s64, addr 0x62c866c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_s8, addr 0x62c851c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_u16, addr 0x62c874c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_u32, addr 0x62c87bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_u64, addr 0x62c882c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_u8, addr 0x62c86dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsrad_n_s64, addr 0x62d3874, size 0xc, virtual false, abstract: false, final false
static inline int64_t vsrad_n_s64(int64_t  a0, int64_t  a1, int32_t  a2) ;

/// @brief Method vsrad_n_u64, addr 0x62d3880, size 0xc, virtual false, abstract: false, final false
static inline uint64_t vsrad_n_u64(uint64_t  a0, uint64_t  a1, int32_t  a2) ;

/// @brief Method vsraq_n_s16, addr 0x62c85c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_s32, addr 0x62c8634, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_s64, addr 0x62c86a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_s8, addr 0x62c8554, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_u16, addr 0x62c8784, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_u32, addr 0x62c87f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_u64, addr 0x62c8864, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_u8, addr 0x62c8714, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsri_n_s16, addr 0x62c93ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_s32, addr 0x62c941c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_s64, addr 0x62c948c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_s8, addr 0x62c933c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_u16, addr 0x62c956c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_u32, addr 0x62c95dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_u64, addr 0x62c964c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_u8, addr 0x62c94fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsrid_n_s64, addr 0x62d476c, size 0x38, virtual false, abstract: false, final false
static inline int64_t vsrid_n_s64(int64_t  a0, int64_t  a1, int32_t  a2) ;

/// @brief Method vsrid_n_u64, addr 0x62d47a4, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vsrid_n_u64(uint64_t  a0, uint64_t  a1, int32_t  a2) ;

/// @brief Method vsriq_n_s16, addr 0x62c93e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_s32, addr 0x62c9454, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_s64, addr 0x62c94c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_s8, addr 0x62c9374, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_u16, addr 0x62c95a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_u32, addr 0x62c9614, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_u64, addr 0x62c9684, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_u8, addr 0x62c9534, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vst1_f32, addr 0x62dd828, size 0x8, virtual false, abstract: false, final false
static inline void vst1_f32(float_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_f64, addr 0x62dd838, size 0x8, virtual false, abstract: false, final false
static inline void vst1_f64(double_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_s16, addr 0x62dd7b8, size 0x8, virtual false, abstract: false, final false
static inline void vst1_s16(int16_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_s32, addr 0x62dd7c8, size 0x8, virtual false, abstract: false, final false
static inline void vst1_s32(int32_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_s64, addr 0x62dd7d8, size 0x8, virtual false, abstract: false, final false
static inline void vst1_s64(int64_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_s8, addr 0x62dd7a8, size 0x8, virtual false, abstract: false, final false
static inline void vst1_s8(int8_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_u16, addr 0x62dd7f8, size 0x8, virtual false, abstract: false, final false
static inline void vst1_u16(uint16_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_u32, addr 0x62dd808, size 0x8, virtual false, abstract: false, final false
static inline void vst1_u32(uint32_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_u64, addr 0x62dd818, size 0x8, virtual false, abstract: false, final false
static inline void vst1_u64(uint64_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_u8, addr 0x62dd7e8, size 0x8, virtual false, abstract: false, final false
static inline void vst1_u8(uint8_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1q_f32, addr 0x62dd830, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_f32(float_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_f64, addr 0x62dd840, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_f64(double_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_s16, addr 0x62dd7c0, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_s16(int16_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_s32, addr 0x62dd7d0, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_s32(int32_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_s64, addr 0x62dd7e0, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_s64(int64_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_s8, addr 0x62dd7b0, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_s8(int8_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_u16, addr 0x62dd800, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_u16(uint16_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_u32, addr 0x62dd810, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_u32(uint32_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_u64, addr 0x62dd820, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_u64(uint64_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_u8, addr 0x62dd7f0, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_u8(uint8_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsub_f32, addr 0x62c450c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_f64, addr 0x62d06c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_s16, addr 0x62c437c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_s32, addr 0x62c43ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_s64, addr 0x62c445c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_s8, addr 0x62c430c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_u16, addr 0x62c44dc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_u32, addr 0x62c44ec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_u64, addr 0x62c44fc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_u8, addr 0x62c44cc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubd_s64, addr 0x62d0734, size 0x38, virtual false, abstract: false, final false
static inline int64_t vsubd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vsubd_u64, addr 0x62d076c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vsubd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vsubhn_high_s16, addr 0x62d0c04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_s32, addr 0x62d0c3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_s64, addr 0x62d0c74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_u16, addr 0x62d0cac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_u32, addr 0x62d0cb4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_u64, addr 0x62d0cbc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_s16, addr 0x62c4e3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_s32, addr 0x62c4e74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_s64, addr 0x62c4eac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_u16, addr 0x62c4ee4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_u32, addr 0x62c4eec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_u64, addr 0x62c4ef4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_s16, addr 0x62d07dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_s32, addr 0x62d0814, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_s8, addr 0x62d07a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_u16, addr 0x62d0884, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_u32, addr 0x62d08bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_u8, addr 0x62d084c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_s16, addr 0x62c45b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_s32, addr 0x62c45ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_s8, addr 0x62c457c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_u16, addr 0x62c465c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_u32, addr 0x62c4694, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_u8, addr 0x62c4624, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubq_f32, addr 0x62c4544, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_f64, addr 0x62d06fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_s16, addr 0x62c43b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_s32, addr 0x62c4424, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_s64, addr 0x62c4494, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_s8, addr 0x62c4344, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_u16, addr 0x62c44e4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_u32, addr 0x62c44f4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_u64, addr 0x62c4504, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_u8, addr 0x62c44d4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_s16, addr 0x62d092c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_s32, addr 0x62d0964, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_s8, addr 0x62d08f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_u16, addr 0x62d09d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_u32, addr 0x62d0a0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_u8, addr 0x62d099c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_s16, addr 0x62c4704, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_s32, addr 0x62c473c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_s8, addr 0x62c46cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_u16, addr 0x62c47ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_u32, addr 0x62c47e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_u8, addr 0x62c4774, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtbl1_s8, addr 0x62ce02c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtbl1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtbl1_u8, addr 0x62ce064, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtbl1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtbx1_s8, addr 0x62ce06c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtbx1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vtbx1_u8, addr 0x62ce0a4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtbx1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vtrn1_f32, addr 0x62dbfc8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_s16, addr 0x62dbe78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_s32, addr 0x62dbee8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_s8, addr 0x62dbe08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_u16, addr 0x62dbfa0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_u32, addr 0x62dbfb0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_u8, addr 0x62dbf90, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1q_f32, addr 0x62dbfd0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_f64, addr 0x62dbfd8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_s16, addr 0x62dbeb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_s32, addr 0x62dbf20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_s64, addr 0x62dbf58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_s8, addr 0x62dbe40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_u16, addr 0x62dbfa8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_u32, addr 0x62dbfb8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_u64, addr 0x62dbfc0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_u8, addr 0x62dbf98, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2_f32, addr 0x62dc1a0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_s16, addr 0x62dc050, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_s32, addr 0x62dc0c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_s8, addr 0x62dbfe0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_u16, addr 0x62dc178, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_u32, addr 0x62dc188, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_u8, addr 0x62dc168, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2q_f32, addr 0x62dc1a8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_f64, addr 0x62dc1b0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_s16, addr 0x62dc088, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_s32, addr 0x62dc0f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_s64, addr 0x62dc130, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_s8, addr 0x62dc018, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_u16, addr 0x62dc180, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_u32, addr 0x62dc190, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_u64, addr 0x62dc198, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_u8, addr 0x62dc170, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtst_s16, addr 0x62c601c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_s32, addr 0x62c608c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_s64, addr 0x62d2c74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_s8, addr 0x62c5fac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_u16, addr 0x62c610c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_u32, addr 0x62c611c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_u64, addr 0x62d2ce4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_u8, addr 0x62c60fc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtstd_s64, addr 0x62d2cf4, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vtstd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vtstd_u64, addr 0x62d2d2c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vtstd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vtstq_s16, addr 0x62c6054, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_s32, addr 0x62c60c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_s64, addr 0x62d2cac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_s8, addr 0x62c5fe4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_u16, addr 0x62c6114, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_u32, addr 0x62c6124, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_u64, addr 0x62d2cec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_u8, addr 0x62c6104, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqadd_s16, addr 0x62cede4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuqadd_s32, addr 0x62cee54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuqadd_s64, addr 0x62ceec4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuqadd_s8, addr 0x62ced74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuqaddb_s8, addr 0x62cef34, size 0x38, virtual false, abstract: false, final false
static inline int8_t vuqaddb_s8(int8_t  a0, uint8_t  a1) ;

/// @brief Method vuqaddd_s64, addr 0x62cefdc, size 0x38, virtual false, abstract: false, final false
static inline int64_t vuqaddd_s64(int64_t  a0, uint64_t  a1) ;

/// @brief Method vuqaddh_s16, addr 0x62cef6c, size 0x38, virtual false, abstract: false, final false
static inline int16_t vuqaddh_s16(int16_t  a0, uint16_t  a1) ;

/// @brief Method vuqaddq_s16, addr 0x62cee1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqaddq_s32, addr 0x62cee8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqaddq_s64, addr 0x62ceefc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqaddq_s8, addr 0x62cedac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqadds_s32, addr 0x62cefa4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vuqadds_s32(int32_t  a0, uint32_t  a1) ;

/// @brief Method vuzp1_f32, addr 0x62dbc18, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_s16, addr 0x62dbac8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_s32, addr 0x62dbb38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_s8, addr 0x62dba58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_u16, addr 0x62dbbf0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_u32, addr 0x62dbc00, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_u8, addr 0x62dbbe0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1q_f32, addr 0x62dbc20, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_f64, addr 0x62dbc28, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_s16, addr 0x62dbb00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_s32, addr 0x62dbb70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_s64, addr 0x62dbba8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_s8, addr 0x62dba90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_u16, addr 0x62dbbf8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_u32, addr 0x62dbc08, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_u64, addr 0x62dbc10, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_u8, addr 0x62dbbe8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2_f32, addr 0x62dbdf0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_s16, addr 0x62dbca0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_s32, addr 0x62dbd10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_s8, addr 0x62dbc30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_u16, addr 0x62dbdc8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_u32, addr 0x62dbdd8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_u8, addr 0x62dbdb8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2q_f32, addr 0x62dbdf8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_f64, addr 0x62dbe00, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_s16, addr 0x62dbcd8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_s32, addr 0x62dbd48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_s64, addr 0x62dbd80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_s8, addr 0x62dbc68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_u16, addr 0x62dbdd0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_u32, addr 0x62dbde0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_u64, addr 0x62dbde8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_u8, addr 0x62dbdc0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1_f32, addr 0x62db868, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_s16, addr 0x62db718, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_s32, addr 0x62db788, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_s8, addr 0x62db6a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_u16, addr 0x62db840, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_u32, addr 0x62db850, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_u8, addr 0x62db830, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1q_f32, addr 0x62db870, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_f64, addr 0x62db878, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_s16, addr 0x62db750, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_s32, addr 0x62db7c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_s64, addr 0x62db7f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_s8, addr 0x62db6e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_u16, addr 0x62db848, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_u32, addr 0x62db858, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_u64, addr 0x62db860, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_u8, addr 0x62db838, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2_f32, addr 0x62dba40, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_s16, addr 0x62db8f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_s32, addr 0x62db960, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_s8, addr 0x62db880, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_u16, addr 0x62dba18, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_u32, addr 0x62dba28, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_u8, addr 0x62dba08, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2q_f32, addr 0x62dba48, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_f64, addr 0x62dba50, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_s16, addr 0x62db928, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_s32, addr 0x62db998, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_s64, addr 0x62db9d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_s8, addr 0x62db8b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_u16, addr 0x62dba20, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_u32, addr 0x62dba30, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_u64, addr 0x62dba38, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_u8, addr 0x62dba10, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Arm_Neon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Arm_Neon", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Arm_Neon(Arm_Neon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Arm_Neon", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Arm_Neon(Arm_Neon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17308};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::Arm_Neon, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.Arm
class CORDL_TYPE Arm : public ::System::Object {
public:
// Declarations
using Neon = ::Unity::Burst::Intrinsics::Arm_Neon;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Arm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Arm", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Arm(Arm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Arm", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Arm(Arm const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17309};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::Arm, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
NEED_NO_BOX(::Unity::Burst::Intrinsics::Arm);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::Arm*, "Unity.Burst.Intrinsics", "Arm");
NEED_NO_BOX(::Unity::Burst::Intrinsics::Arm_Neon);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::Arm_Neon*, "Unity.Burst.Intrinsics", "Arm/Neon");
