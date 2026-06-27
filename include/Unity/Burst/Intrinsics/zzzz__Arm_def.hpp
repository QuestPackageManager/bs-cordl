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

/// @brief Method __crc32b, addr 0x63502b4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32b(uint32_t  a0, uint8_t  a1) ;

/// @brief Method __crc32cb, addr 0x6350394, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32cb(uint32_t  a0, uint8_t  a1) ;

/// @brief Method __crc32cd, addr 0x635043c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32cd(uint32_t  a0, uint64_t  a1) ;

/// @brief Method __crc32ch, addr 0x63503cc, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32ch(uint32_t  a0, uint16_t  a1) ;

/// @brief Method __crc32cw, addr 0x6350404, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32cw(uint32_t  a0, uint32_t  a1) ;

/// @brief Method __crc32d, addr 0x635035c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32d(uint32_t  a0, uint64_t  a1) ;

/// @brief Method __crc32h, addr 0x63502ec, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32h(uint32_t  a0, uint16_t  a1) ;

/// @brief Method __crc32w, addr 0x6350324, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32w(uint32_t  a0, uint32_t  a1) ;

/// @brief Method .ctor, addr 0x63513cc, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsNeonArmv82FeaturesSupported, addr 0x63423b0, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsNeonArmv82FeaturesSupported() ;

/// @brief Method get_IsNeonCryptoSupported, addr 0x635007c, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsNeonCryptoSupported() ;

/// @brief Method get_IsNeonDotProdSupported, addr 0x6350554, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsNeonDotProdSupported() ;

/// @brief Method get_IsNeonRDMASupported, addr 0x63507fc, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsNeonRDMASupported() ;

/// @brief Method get_IsNeonSupported, addr 0x6336188, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsNeonSupported() ;

/// @brief Method vaba_s16, addr 0x633a180, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_s32, addr 0x633a1f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_s8, addr 0x633a110, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_u16, addr 0x633a2d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_u32, addr 0x633a340, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_u8, addr 0x633a260, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_high_s16, addr 0x6346b50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_s32, addr 0x6346b88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_s8, addr 0x6346b18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_u16, addr 0x6346bf8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_u32, addr 0x6346c30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_u8, addr 0x6346bc0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_s16, addr 0x633a3e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_s32, addr 0x633a420, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_s8, addr 0x633a3b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_u16, addr 0x633a490, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_u32, addr 0x633a4c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_u8, addr 0x633a458, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabaq_s16, addr 0x633a1b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_s32, addr 0x633a228, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_s8, addr 0x633a148, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_u16, addr 0x633a308, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_u32, addr 0x633a378, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_u8, addr 0x633a298, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabd_f32, addr 0x6339f50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_f64, addr 0x63468e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_s16, addr 0x6339d20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_s32, addr 0x6339d90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_s8, addr 0x6339cb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_u16, addr 0x6339e70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_u32, addr 0x6339ee0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_u8, addr 0x6339e00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdd_f64, addr 0x6346990, size 0x38, virtual false, abstract: false, final false
static inline double_t vabdd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vabdl_high_s16, addr 0x6346a00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_s32, addr 0x6346a38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_s8, addr 0x63469c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_u16, addr 0x6346aa8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_u32, addr 0x6346ae0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_u8, addr 0x6346a70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_s16, addr 0x6339ff8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_s32, addr 0x633a030, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_s8, addr 0x6339fc0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_u16, addr 0x633a0a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_u32, addr 0x633a0d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_u8, addr 0x633a068, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdq_f32, addr 0x6339f88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_f64, addr 0x6346920, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_s16, addr 0x6339d58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_s32, addr 0x6339dc8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_s8, addr 0x6339ce8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_u16, addr 0x6339ea8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_u32, addr 0x6339f18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_u8, addr 0x6339e38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabds_f32, addr 0x6346958, size 0x38, virtual false, abstract: false, final false
static inline float_t vabds_f32(float_t  a0, float_t  a1) ;

/// @brief Method vabs_f32, addr 0x633f7d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_f64, addr 0x634c15c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_s16, addr 0x633f6f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_s32, addr 0x633f768, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_s64, addr 0x634c0b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_s8, addr 0x633f688, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabsd_s64, addr 0x634c0ec, size 0x38, virtual false, abstract: false, final false
static inline int64_t vabsd_s64(int64_t  a0) ;

/// @brief Method vabsq_f32, addr 0x633f810, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_f64, addr 0x634c194, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_s16, addr 0x633f730, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_s32, addr 0x633f7a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_s64, addr 0x634c124, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_s8, addr 0x633f6c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vadd_f32, addr 0x6336390, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_f64, addr 0x63423b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_s16, addr 0x6336200, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_s32, addr 0x6336270, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_s64, addr 0x63362e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_s8, addr 0x6336190, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_u16, addr 0x6336360, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_u32, addr 0x6336370, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_u64, addr 0x6336380, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_u8, addr 0x6336350, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddd_s64, addr 0x6342428, size 0x38, virtual false, abstract: false, final false
static inline int64_t vaddd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vaddd_u64, addr 0x6342460, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vaddd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vaddhn_high_s16, addr 0x6342e38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_s32, addr 0x6342e70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_s64, addr 0x6342ea8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_u16, addr 0x6342ee0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_u32, addr 0x6342ee8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_u64, addr 0x6342ef0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_s16, addr 0x6336f60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_s32, addr 0x6336f98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_s64, addr 0x6336fd0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_u16, addr 0x6337008, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_u32, addr 0x6337010, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_u64, addr 0x6337018, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_s16, addr 0x63424d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_s32, addr 0x6342508, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_s8, addr 0x6342498, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_u16, addr 0x6342578, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_u32, addr 0x63425b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_u8, addr 0x6342540, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_s16, addr 0x6336438, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_s32, addr 0x6336470, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_s8, addr 0x6336400, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_u16, addr 0x63364e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_u32, addr 0x6336518, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_u8, addr 0x63364a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddlv_s16, addr 0x634e7e0, size 0x38, virtual false, abstract: false, final false
static inline int32_t vaddlv_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_s32, addr 0x634e850, size 0x38, virtual false, abstract: false, final false
static inline int64_t vaddlv_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_s8, addr 0x634e770, size 0x38, virtual false, abstract: false, final false
static inline int16_t vaddlv_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_u16, addr 0x634e930, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vaddlv_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_u32, addr 0x634e9a0, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vaddlv_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_u8, addr 0x634e8c0, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vaddlv_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlvq_s16, addr 0x634e818, size 0x38, virtual false, abstract: false, final false
static inline int32_t vaddlvq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_s32, addr 0x634e888, size 0x38, virtual false, abstract: false, final false
static inline int64_t vaddlvq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_s8, addr 0x634e7a8, size 0x38, virtual false, abstract: false, final false
static inline int16_t vaddlvq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_u16, addr 0x634e968, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vaddlvq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_u32, addr 0x634e9d8, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vaddlvq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_u8, addr 0x634e8f8, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vaddlvq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddq_f32, addr 0x63363c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_f64, addr 0x63423f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_s16, addr 0x6336238, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_s32, addr 0x63362a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_s64, addr 0x6336318, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_s8, addr 0x63361c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_u16, addr 0x6336368, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_u32, addr 0x6336378, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_u64, addr 0x6336388, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_u8, addr 0x6336358, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddv_f32, addr 0x634e6c8, size 0x38, virtual false, abstract: false, final false
static inline float_t vaddv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_s16, addr 0x634e428, size 0x38, virtual false, abstract: false, final false
static inline int16_t vaddv_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_s32, addr 0x634e498, size 0x38, virtual false, abstract: false, final false
static inline int32_t vaddv_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_s8, addr 0x634e3b8, size 0x38, virtual false, abstract: false, final false
static inline int8_t vaddv_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_u16, addr 0x634e5b0, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vaddv_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_u32, addr 0x634e620, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vaddv_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_u8, addr 0x634e540, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vaddv_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddvq_f32, addr 0x634e700, size 0x38, virtual false, abstract: false, final false
static inline float_t vaddvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_f64, addr 0x634e738, size 0x38, virtual false, abstract: false, final false
static inline double_t vaddvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_s16, addr 0x634e460, size 0x38, virtual false, abstract: false, final false
static inline int16_t vaddvq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_s32, addr 0x634e4d0, size 0x38, virtual false, abstract: false, final false
static inline int32_t vaddvq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_s64, addr 0x634e508, size 0x38, virtual false, abstract: false, final false
static inline int64_t vaddvq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_s8, addr 0x634e3f0, size 0x38, virtual false, abstract: false, final false
static inline int8_t vaddvq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_u16, addr 0x634e5e8, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vaddvq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_u32, addr 0x634e658, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vaddvq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_u64, addr 0x634e690, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vaddvq_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_u8, addr 0x634e578, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vaddvq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddw_high_s16, addr 0x6342620, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_s32, addr 0x6342658, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_s8, addr 0x63425e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_u16, addr 0x63426c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_u32, addr 0x6342700, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_u8, addr 0x6342690, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_s16, addr 0x6336588, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_s32, addr 0x63365c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_s8, addr 0x6336550, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_u16, addr 0x6336630, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_u32, addr 0x6336668, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_u8, addr 0x63365f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaesdq_u8, addr 0x63504ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaesdq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaeseq_u8, addr 0x6350474, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaeseq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaesimcq_u8, addr 0x635051c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaesimcq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaesmcq_u8, addr 0x63504e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaesmcq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vand_s16, addr 0x63403c8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_s32, addr 0x63403d8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_s64, addr 0x63403e8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_s8, addr 0x6340358, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_u16, addr 0x6340408, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_u32, addr 0x6340418, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_u64, addr 0x6340428, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_u8, addr 0x63403f8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vandq_s16, addr 0x63403d0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_s32, addr 0x63403e0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_s64, addr 0x63403f0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_s8, addr 0x6340390, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_u16, addr 0x6340410, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_u32, addr 0x6340420, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_u64, addr 0x6340430, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_u8, addr 0x6340400, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbic_s16, addr 0x6340668, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_s32, addr 0x6340678, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_s64, addr 0x6340688, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_s8, addr 0x63405f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_u16, addr 0x63406a8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_u32, addr 0x63406b8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_u64, addr 0x63406c8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_u8, addr 0x6340698, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbicq_s16, addr 0x6340670, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_s32, addr 0x6340680, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_s64, addr 0x6340690, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_s8, addr 0x6340630, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_u16, addr 0x63406b0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_u32, addr 0x63406c0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_u64, addr 0x63406d0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_u8, addr 0x63406a0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbsl_f32, addr 0x6340898, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_f64, addr 0x634c9e4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_s16, addr 0x6340828, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_s32, addr 0x6340838, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_s64, addr 0x6340848, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_s8, addr 0x63407b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_u16, addr 0x6340868, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_u32, addr 0x6340878, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_u64, addr 0x6340888, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_u8, addr 0x6340858, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbslq_f32, addr 0x63408a0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_f64, addr 0x634c9ec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_s16, addr 0x6340830, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_s32, addr 0x6340840, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_s64, addr 0x6340850, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_s8, addr 0x63407f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_u16, addr 0x6340870, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_u32, addr 0x6340880, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_u64, addr 0x6340890, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_u8, addr 0x6340860, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vcage_f32, addr 0x6339970, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcage_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcage_f64, addr 0x6346478, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcage_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcaged_f64, addr 0x6346520, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcaged_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcageq_f32, addr 0x63399a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcageq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcageq_f64, addr 0x63464b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcageq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcages_f32, addr 0x63464e8, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcages_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcagt_f32, addr 0x6339a50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcagt_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcagt_f64, addr 0x6346638, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcagt_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcagtd_f64, addr 0x63466e0, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcagtd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcagtq_f32, addr 0x6339a88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcagtq_f64, addr 0x6346670, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcagts_f32, addr 0x63466a8, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcagts_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcale_f32, addr 0x63399e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcale_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcale_f64, addr 0x6346558, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcale_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcaled_f64, addr 0x6346600, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcaled_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcaleq_f32, addr 0x6339a18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcaleq_f64, addr 0x6346590, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcales_f32, addr 0x63465c8, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcales_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcalt_f32, addr 0x6339ac0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcalt_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcalt_f64, addr 0x6346718, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcalt_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcaltd_f64, addr 0x63467c0, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcaltd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcaltq_f32, addr 0x6339af8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcaltq_f64, addr 0x6346750, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcalts_f32, addr 0x6346788, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcalts_f32(float_t  a0, float_t  a1) ;

/// @brief Method vceq_f32, addr 0x6338cc0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_f64, addr 0x6344988, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_s16, addr 0x6338bb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_s32, addr 0x6338c20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_s64, addr 0x6344908, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_s8, addr 0x6338b40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_u16, addr 0x6338ca0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_u32, addr 0x6338cb0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_u64, addr 0x6344978, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_u8, addr 0x6338c90, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceqd_f64, addr 0x6344aa0, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vceqd_s64, addr 0x63449f8, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vceqd_u64, addr 0x6344a30, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vceqq_f32, addr 0x6338cf8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_f64, addr 0x63449c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_s16, addr 0x6338be8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_s32, addr 0x6338c58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_s64, addr 0x6344940, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_s8, addr 0x6338b78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_u16, addr 0x6338ca8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_u32, addr 0x6338cb8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_u64, addr 0x6344980, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_u8, addr 0x6338c98, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqs_f32, addr 0x6344a68, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vceqs_f32(float_t  a0, float_t  a1) ;

/// @brief Method vceqz_f32, addr 0x6344c58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_f64, addr 0x6344d48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_s16, addr 0x6344b48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_s32, addr 0x6344bb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_s64, addr 0x6344cc8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_s8, addr 0x6344ad8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_u16, addr 0x6344c38, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_u32, addr 0x6344c48, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_u64, addr 0x6344d38, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_u64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_u8, addr 0x6344c28, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqzd_f64, addr 0x6344e60, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqzd_f64(double_t  a0) ;

/// @brief Method vceqzd_s64, addr 0x6344db8, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqzd_s64(int64_t  a0) ;

/// @brief Method vceqzd_u64, addr 0x6344df0, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqzd_u64(uint64_t  a0) ;

/// @brief Method vceqzq_f32, addr 0x6344c90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_f64, addr 0x6344d80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_s16, addr 0x6344b80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_s32, addr 0x6344bf0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_s64, addr 0x6344d00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_s8, addr 0x6344b10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_u16, addr 0x6344c40, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_u32, addr 0x6344c50, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_u64, addr 0x6344d40, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_u8, addr 0x6344c30, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzs_f32, addr 0x6344e28, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vceqzs_f32(float_t  a0) ;

/// @brief Method vcge_f32, addr 0x6338fd0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_f64, addr 0x6344f78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_s16, addr 0x6338da0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_s32, addr 0x6338e10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_s64, addr 0x6344e98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_s8, addr 0x6338d30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_u16, addr 0x6338ef0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_u32, addr 0x6338f60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_u64, addr 0x6344f08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_u8, addr 0x6338e80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcged_f64, addr 0x6345090, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcged_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcged_s64, addr 0x6344fe8, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcged_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vcged_u64, addr 0x6345020, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcged_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vcgeq_f32, addr 0x6339008, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_f64, addr 0x6344fb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_s16, addr 0x6338dd8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_s32, addr 0x6338e48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_s64, addr 0x6344ed0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_s8, addr 0x6338d68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_u16, addr 0x6338f28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_u32, addr 0x6338f98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_u64, addr 0x6344f40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_u8, addr 0x6338eb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcges_f32, addr 0x6345058, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcges_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcgez_f32, addr 0x6345288, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_f64, addr 0x63452f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_s16, addr 0x6345138, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_s32, addr 0x63451a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_s64, addr 0x6345218, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_s8, addr 0x63450c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgezd_f64, addr 0x63453d8, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgezd_f64(double_t  a0) ;

/// @brief Method vcgezd_s64, addr 0x6345368, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgezd_s64(int64_t  a0) ;

/// @brief Method vcgezq_f32, addr 0x63452c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_f64, addr 0x6345330, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_s16, addr 0x6345170, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_s32, addr 0x63451e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_s64, addr 0x6345250, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_s8, addr 0x6345100, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezs_f32, addr 0x63453a0, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcgezs_f32(float_t  a0) ;

/// @brief Method vcgt_f32, addr 0x63395f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_f64, addr 0x6345a68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_s16, addr 0x63393c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_s32, addr 0x6339430, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_s64, addr 0x6345988, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_s8, addr 0x6339350, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_u16, addr 0x6339510, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_u32, addr 0x6339580, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_u64, addr 0x63459f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_u8, addr 0x63394a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgtd_f64, addr 0x6345b80, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgtd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcgtd_s64, addr 0x6345ad8, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgtd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vcgtd_u64, addr 0x6345b10, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgtd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vcgtq_f32, addr 0x6339628, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_f64, addr 0x6345aa0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_s16, addr 0x63393f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_s32, addr 0x6339468, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_s64, addr 0x63459c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_s8, addr 0x6339388, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_u16, addr 0x6339548, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_u32, addr 0x63395b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_u64, addr 0x6345a30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_u8, addr 0x63394d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgts_f32, addr 0x6345b48, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcgts_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcgtz_f32, addr 0x6345d78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_f64, addr 0x6345de8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_s16, addr 0x6345c28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_s32, addr 0x6345c98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_s64, addr 0x6345d08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_s8, addr 0x6345bb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtzd_f64, addr 0x6345ec8, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgtzd_f64(double_t  a0) ;

/// @brief Method vcgtzd_s64, addr 0x6345e58, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgtzd_s64(int64_t  a0) ;

/// @brief Method vcgtzq_f32, addr 0x6345db0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_f64, addr 0x6345e20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_s16, addr 0x6345c60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_s32, addr 0x6345cd0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_s64, addr 0x6345d40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_s8, addr 0x6345bf0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzs_f32, addr 0x6345e90, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcgtzs_f32(float_t  a0) ;

/// @brief Method vcle_f32, addr 0x63392e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_f64, addr 0x63454f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_s16, addr 0x63390b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_s32, addr 0x6339120, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_s64, addr 0x6345410, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_s8, addr 0x6339040, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_u16, addr 0x6339200, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_u32, addr 0x6339270, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_u64, addr 0x6345480, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_u8, addr 0x6339190, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcled_f64, addr 0x6345608, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcled_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcled_s64, addr 0x6345560, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcled_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vcled_u64, addr 0x6345598, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcled_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vcleq_f32, addr 0x6339318, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_f64, addr 0x6345528, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_s16, addr 0x63390e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_s32, addr 0x6339158, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_s64, addr 0x6345448, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_s8, addr 0x6339078, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_u16, addr 0x6339238, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_u32, addr 0x63392a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_u64, addr 0x63454b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_u8, addr 0x63391c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcles_f32, addr 0x63455d0, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcles_f32(float_t  a0, float_t  a1) ;

/// @brief Method vclez_f32, addr 0x6345800, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_f64, addr 0x6345870, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_s16, addr 0x63456b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_s32, addr 0x6345720, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_s64, addr 0x6345790, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_s8, addr 0x6345640, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclezd_f64, addr 0x6345950, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vclezd_f64(double_t  a0) ;

/// @brief Method vclezd_s64, addr 0x63458e0, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vclezd_s64(int64_t  a0) ;

/// @brief Method vclezq_f32, addr 0x6345838, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_f64, addr 0x63458a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_s16, addr 0x63456e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_s32, addr 0x6345758, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_s64, addr 0x63457c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_s8, addr 0x6345678, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezs_f32, addr 0x6345918, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vclezs_f32(float_t  a0) ;

/// @brief Method vcls_s16, addr 0x633fd18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcls_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcls_s32, addr 0x633fd88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcls_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcls_s8, addr 0x633fca8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcls_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclsq_s16, addr 0x633fd50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclsq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclsq_s32, addr 0x633fdc0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclsq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclsq_s8, addr 0x633fce0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclsq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclt_f32, addr 0x6339900, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_f64, addr 0x6345fe0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_s16, addr 0x63396d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_s32, addr 0x6339740, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_s64, addr 0x6345f00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_s8, addr 0x6339660, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_u16, addr 0x6339820, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_u32, addr 0x6339890, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_u64, addr 0x6345f70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_u8, addr 0x63397b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcltd_f64, addr 0x63460f8, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcltd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcltd_s64, addr 0x6346050, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcltd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vcltd_u64, addr 0x6346088, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcltd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vcltq_f32, addr 0x6339938, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_f64, addr 0x6346018, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_s16, addr 0x6339708, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_s32, addr 0x6339778, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_s64, addr 0x6345f38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_s8, addr 0x6339698, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_u16, addr 0x6339858, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_u32, addr 0x63398c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_u64, addr 0x6345fa8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_u8, addr 0x63397e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vclts_f32, addr 0x63460c0, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vclts_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcltz_f32, addr 0x63462f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_f64, addr 0x6346360, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_s16, addr 0x63461a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_s32, addr 0x6346210, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_s64, addr 0x6346280, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_s8, addr 0x6346130, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltzd_f64, addr 0x6346440, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcltzd_f64(double_t  a0) ;

/// @brief Method vcltzd_s64, addr 0x63463d0, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcltzd_s64(int64_t  a0) ;

/// @brief Method vcltzq_f32, addr 0x6346328, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_f64, addr 0x6346398, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_s16, addr 0x63461d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_s32, addr 0x6346248, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_s64, addr 0x63462b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_s8, addr 0x6346168, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzs_f32, addr 0x6346408, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcltzs_f32(float_t  a0) ;

/// @brief Method vclz_s16, addr 0x633fe68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_s32, addr 0x633fed8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_s8, addr 0x633fdf8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_u16, addr 0x633ff58, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_u32, addr 0x633ff68, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_u8, addr 0x633ff48, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclzq_s16, addr 0x633fea0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_s32, addr 0x633ff10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_s8, addr 0x633fe30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_u16, addr 0x633ff60, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_u32, addr 0x633ff70, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_u8, addr 0x633ff50, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcnt_s8, addr 0x633ff78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcnt_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcnt_u8, addr 0x633ffe8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcnt_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcntq_s8, addr 0x633ffb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcntq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcntq_u8, addr 0x633fff0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcntq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcombine_f16, addr 0x63511e0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_f16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_f32, addr 0x63511e4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_f64, addr 0x63511e8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_s16, addr 0x63511c4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_s32, addr 0x63511c8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_s64, addr 0x63511cc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_s8, addr 0x63511c0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_u16, addr 0x63511d4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_u32, addr 0x63511d8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_u64, addr 0x63511dc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_u8, addr 0x63511d0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcopy_lane_f32, addr 0x634cd14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_f64, addr 0x634cd84, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_s16, addr 0x634ca64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_s32, addr 0x634cad4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_s64, addr 0x634cb44, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_s8, addr 0x634c9f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_u16, addr 0x634cbf4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_u32, addr 0x634cc64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_u64, addr 0x634ccd4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_u8, addr 0x634cb84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_f32, addr 0x634d144, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_f64, addr 0x634d1b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_s16, addr 0x634ce34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_s32, addr 0x634cea4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_s64, addr 0x634cf14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_s8, addr 0x634cdc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_u16, addr 0x634cff4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_u32, addr 0x634d064, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_u64, addr 0x634d0d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_u8, addr 0x634cf84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_f32, addr 0x634cd4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_f64, addr 0x634cd8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_s16, addr 0x634ca9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_s32, addr 0x634cb0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_s64, addr 0x634cb4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_s8, addr 0x634ca2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_u16, addr 0x634cc2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_u32, addr 0x634cc9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_u64, addr 0x634ccdc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_u8, addr 0x634cbbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_f32, addr 0x634d17c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_f64, addr 0x634d1ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_s16, addr 0x634ce6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_s32, addr 0x634cedc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_s64, addr 0x634cf4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_s8, addr 0x634cdfc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_u16, addr 0x634d02c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_u32, addr 0x634d09c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_u64, addr 0x634d10c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_u8, addr 0x634cfbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcreate_f16, addr 0x6350f94, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_f16(uint64_t  a0) ;

/// @brief Method vcreate_f32, addr 0x6350f98, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_f32(uint64_t  a0) ;

/// @brief Method vcreate_f64, addr 0x6350f9c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_f64(uint64_t  a0) ;

/// @brief Method vcreate_s16, addr 0x6350f78, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_s16(uint64_t  a0) ;

/// @brief Method vcreate_s32, addr 0x6350f7c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_s32(uint64_t  a0) ;

/// @brief Method vcreate_s64, addr 0x6350f80, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_s64(uint64_t  a0) ;

/// @brief Method vcreate_s8, addr 0x6350f74, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_s8(uint64_t  a0) ;

/// @brief Method vcreate_u16, addr 0x6350f88, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_u16(uint64_t  a0) ;

/// @brief Method vcreate_u32, addr 0x6350f8c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_u32(uint64_t  a0) ;

/// @brief Method vcreate_u64, addr 0x6350f90, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_u64(uint64_t  a0) ;

/// @brief Method vcreate_u8, addr 0x6350f84, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_u8(uint64_t  a0) ;

/// @brief Method vcvt_f32_f64, addr 0x6349550, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvt_f32_s32, addr 0x633d780, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_f32_u32, addr 0x633d7f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_f64_f32, addr 0x63495c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvt_f64_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_f64_s64, addr 0x6349240, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_f64_u64, addr 0x63492b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_u64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_high_f32_f64, addr 0x6349588, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f32_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcvt_high_f64_f32, addr 0x63495f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f64_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvt_n_f32_s32, addr 0x633d860, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_f32_u32, addr 0x633d8d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_f64_s64, addr 0x6349400, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_f64_u64, addr 0x6349470, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_s32_f32, addr 0x633d6a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s32_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_s64_f64, addr 0x6349080, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s64_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_u32_f32, addr 0x633d710, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u32_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_u64_f64, addr 0x63490f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u64_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_s32_f32, addr 0x633d5c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_s64_f64, addr 0x6348980, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_u32_f32, addr 0x633d630, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_u64_f64, addr 0x63489f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvta_s32_f32, addr 0x6348670, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvta_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvta_s64_f64, addr 0x6348d00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvta_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvta_u32_f32, addr 0x63486e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvta_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvta_u64_f64, addr 0x6348d70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvta_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtad_s64_f64, addr 0x6348fa0, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtad_s64_f64(double_t  a0) ;

/// @brief Method vcvtad_u64_f64, addr 0x6348fd8, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtad_u64_f64(double_t  a0) ;

/// @brief Method vcvtaq_s32_f32, addr 0x63486a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtaq_s64_f64, addr 0x6348d38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtaq_u32_f32, addr 0x6348718, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtaq_u64_f64, addr 0x6348da8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtas_s32_f32, addr 0x6348910, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvtas_s32_f32(float_t  a0) ;

/// @brief Method vcvtas_u32_f32, addr 0x6348948, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvtas_u32_f32(float_t  a0) ;

/// @brief Method vcvtd_f64_s64, addr 0x6349320, size 0x38, virtual false, abstract: false, final false
static inline double_t vcvtd_f64_s64(int64_t  a0) ;

/// @brief Method vcvtd_f64_u64, addr 0x6349358, size 0x38, virtual false, abstract: false, final false
static inline double_t vcvtd_f64_u64(uint64_t  a0) ;

/// @brief Method vcvtd_n_f64_s64, addr 0x63494e0, size 0x38, virtual false, abstract: false, final false
static inline double_t vcvtd_n_f64_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vcvtd_n_f64_u64, addr 0x6349518, size 0x38, virtual false, abstract: false, final false
static inline double_t vcvtd_n_f64_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vcvtd_n_s64_f64, addr 0x6349160, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtd_n_s64_f64(double_t  a0, int32_t  a1) ;

/// @brief Method vcvtd_n_u64_f64, addr 0x6349198, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtd_n_u64_f64(double_t  a0, int32_t  a1) ;

/// @brief Method vcvtd_s64_f64, addr 0x6348de0, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtd_s64_f64(double_t  a0) ;

/// @brief Method vcvtd_u64_f64, addr 0x6348e18, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtd_u64_f64(double_t  a0) ;

/// @brief Method vcvtm_s32_f32, addr 0x63484b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtm_s64_f64, addr 0x6348b40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtm_u32_f32, addr 0x6348520, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtm_u64_f64, addr 0x6348bb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtmd_s64_f64, addr 0x6348ec0, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtmd_s64_f64(double_t  a0) ;

/// @brief Method vcvtmd_u64_f64, addr 0x6348ef8, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtmd_u64_f64(double_t  a0) ;

/// @brief Method vcvtmq_s32_f32, addr 0x63484e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtmq_s64_f64, addr 0x6348b78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtmq_u32_f32, addr 0x6348558, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtmq_u64_f64, addr 0x6348be8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtms_s32_f32, addr 0x6348830, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvtms_s32_f32(float_t  a0) ;

/// @brief Method vcvtms_u32_f32, addr 0x6348868, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvtms_u32_f32(float_t  a0) ;

/// @brief Method vcvtn_s32_f32, addr 0x63483d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtn_s64_f64, addr 0x6348a60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtn_u32_f32, addr 0x6348440, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtn_u64_f64, addr 0x6348ad0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtnd_s64_f64, addr 0x6348e50, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtnd_s64_f64(double_t  a0) ;

/// @brief Method vcvtnd_u64_f64, addr 0x6348e88, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtnd_u64_f64(double_t  a0) ;

/// @brief Method vcvtnq_s32_f32, addr 0x6348408, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtnq_s64_f64, addr 0x6348a98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtnq_u32_f32, addr 0x6348478, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtnq_u64_f64, addr 0x6348b08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtns_s32_f32, addr 0x63487c0, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvtns_s32_f32(float_t  a0) ;

/// @brief Method vcvtns_u32_f32, addr 0x63487f8, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvtns_u32_f32(float_t  a0) ;

/// @brief Method vcvtp_s32_f32, addr 0x6348590, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtp_s64_f64, addr 0x6348c20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtp_u32_f32, addr 0x6348600, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtp_u64_f64, addr 0x6348c90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtpd_s64_f64, addr 0x6348f30, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtpd_s64_f64(double_t  a0) ;

/// @brief Method vcvtpd_u64_f64, addr 0x6348f68, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtpd_u64_f64(double_t  a0) ;

/// @brief Method vcvtpq_s32_f32, addr 0x63485c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtpq_s64_f64, addr 0x6348c58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtpq_u32_f32, addr 0x6348638, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtpq_u64_f64, addr 0x6348cc8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtps_s32_f32, addr 0x63488a0, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvtps_s32_f32(float_t  a0) ;

/// @brief Method vcvtps_u32_f32, addr 0x63488d8, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvtps_u32_f32(float_t  a0) ;

/// @brief Method vcvtq_f32_s32, addr 0x633d7b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_f32_u32, addr 0x633d828, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_f64_s64, addr 0x6349278, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_f64_u64, addr 0x63492e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_n_f32_s32, addr 0x633d898, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_f32_u32, addr 0x633d908, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_f64_s64, addr 0x6349438, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_f64_u64, addr 0x63494a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_s32_f32, addr 0x633d6d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s32_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_s64_f64, addr 0x63490b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s64_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_u32_f32, addr 0x633d748, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u32_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_u64_f64, addr 0x6349128, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u64_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_s32_f32, addr 0x633d5f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_s64_f64, addr 0x63489b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_u32_f32, addr 0x633d668, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_u64_f64, addr 0x6348a28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvts_f32_s32, addr 0x63491d0, size 0x38, virtual false, abstract: false, final false
static inline float_t vcvts_f32_s32(int32_t  a0) ;

/// @brief Method vcvts_f32_u32, addr 0x6349208, size 0x38, virtual false, abstract: false, final false
static inline float_t vcvts_f32_u32(uint32_t  a0) ;

/// @brief Method vcvts_n_f32_s32, addr 0x6349390, size 0x38, virtual false, abstract: false, final false
static inline float_t vcvts_n_f32_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vcvts_n_f32_u32, addr 0x63493c8, size 0x38, virtual false, abstract: false, final false
static inline float_t vcvts_n_f32_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vcvts_n_s32_f32, addr 0x6349010, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvts_n_s32_f32(float_t  a0, int32_t  a1) ;

/// @brief Method vcvts_n_u32_f32, addr 0x6349048, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvts_n_u32_f32(float_t  a0, int32_t  a1) ;

/// @brief Method vcvts_s32_f32, addr 0x6348750, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvts_s32_f32(float_t  a0) ;

/// @brief Method vcvts_u32_f32, addr 0x6348788, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvts_u32_f32(float_t  a0) ;

/// @brief Method vcvtx_f32_f64, addr 0x6349630, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtx_f32_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtx_high_f32_f64, addr 0x63496a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtx_high_f32_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcvtxd_f32_f64, addr 0x6349668, size 0x38, virtual false, abstract: false, final false
static inline float_t vcvtxd_f32_f64(double_t  a0) ;

/// @brief Method vdiv_f32, addr 0x63433b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdiv_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vdiv_f64, addr 0x6343428, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdiv_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vdivq_f32, addr 0x63433f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdivq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vdivq_f64, addr 0x6343460, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdivq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vdot_lane_s32, addr 0x6350674, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vdot_lane_u32, addr 0x635063c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vdot_laneq_s32, addr 0x6350754, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vdot_laneq_u32, addr 0x635071c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vdot_s32, addr 0x6350594, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vdot_u32, addr 0x635055c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vdotq_lane_s32, addr 0x63507c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vdotq_lane_u32, addr 0x635078c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vdotq_laneq_s32, addr 0x63506e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vdotq_laneq_u32, addr 0x63506ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vdotq_s32, addr 0x6350604, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vdotq_u32, addr 0x63505cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vdup_lane_f32, addr 0x6340b60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_f64, addr 0x634d2a4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_s16, addr 0x6340918, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_s32, addr 0x6340988, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_s64, addr 0x63409f8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_s8, addr 0x63408a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_u16, addr 0x6340a74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_u32, addr 0x6340ae4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_u64, addr 0x6340b54, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_u8, addr 0x6340a04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_f32, addr 0x634d630, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_f64, addr 0x634d6a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_s16, addr 0x634d320, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_s32, addr 0x634d390, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_s64, addr 0x634d400, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_s8, addr 0x634d2b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_u16, addr 0x634d4e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_u32, addr 0x634d550, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_u64, addr 0x634d5c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_u8, addr 0x634d470, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_n_f32, addr 0x6351080, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f32(float_t  a0) ;

/// @brief Method vdup_n_f64, addr 0x635109c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f64(double_t  a0) ;

/// @brief Method vdup_n_s16, addr 0x6350fc4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s16(int16_t  a0) ;

/// @brief Method vdup_n_s32, addr 0x6350fe8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s32(int32_t  a0) ;

/// @brief Method vdup_n_s64, addr 0x6351004, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s64(int64_t  a0) ;

/// @brief Method vdup_n_s8, addr 0x6350fa0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s8(int8_t  a0) ;

/// @brief Method vdup_n_u16, addr 0x6351034, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u16(uint16_t  a0) ;

/// @brief Method vdup_n_u32, addr 0x6351058, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u32(uint32_t  a0) ;

/// @brief Method vdup_n_u64, addr 0x6351074, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u64(uint64_t  a0) ;

/// @brief Method vdup_n_u8, addr 0x6351010, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u8(uint8_t  a0) ;

/// @brief Method vdupb_lane_s8, addr 0x634d710, size 0x38, virtual false, abstract: false, final false
static inline int8_t vdupb_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupb_lane_u8, addr 0x634d7bc, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vdupb_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupb_laneq_s8, addr 0x634d8a8, size 0x38, virtual false, abstract: false, final false
static inline int8_t vdupb_laneq_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupb_laneq_u8, addr 0x634d988, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vdupb_laneq_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupd_lane_f64, addr 0x634d8a0, size 0x8, virtual false, abstract: false, final false
static inline double_t vdupd_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupd_lane_s64, addr 0x634d7b8, size 0x4, virtual false, abstract: false, final false
static inline int64_t vdupd_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupd_lane_u64, addr 0x634d864, size 0x4, virtual false, abstract: false, final false
static inline uint64_t vdupd_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupd_laneq_f64, addr 0x634daa0, size 0x38, virtual false, abstract: false, final false
static inline double_t vdupd_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupd_laneq_s64, addr 0x634d950, size 0x38, virtual false, abstract: false, final false
static inline int64_t vdupd_laneq_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupd_laneq_u64, addr 0x634da30, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vdupd_laneq_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vduph_lane_s16, addr 0x634d748, size 0x38, virtual false, abstract: false, final false
static inline int16_t vduph_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vduph_lane_u16, addr 0x634d7f4, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vduph_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vduph_laneq_s16, addr 0x634d8e0, size 0x38, virtual false, abstract: false, final false
static inline int16_t vduph_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vduph_laneq_u16, addr 0x634d9c0, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vduph_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_f32, addr 0x6340b98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_f64, addr 0x634d2a8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_s16, addr 0x6340950, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_s32, addr 0x63409c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_s64, addr 0x63409fc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_s8, addr 0x63408e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_u16, addr 0x6340aac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_u32, addr 0x6340b1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_u64, addr 0x6340b58, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_u8, addr 0x6340a3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_f32, addr 0x634d668, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_f64, addr 0x634d6d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_s16, addr 0x634d358, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_s32, addr 0x634d3c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_s64, addr 0x634d438, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_s8, addr 0x634d2e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_u16, addr 0x634d518, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_u32, addr 0x634d588, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_u64, addr 0x634d5f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_u8, addr 0x634d4a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_n_f32, addr 0x635108c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f32(float_t  a0) ;

/// @brief Method vdupq_n_f64, addr 0x63510a4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f64(double_t  a0) ;

/// @brief Method vdupq_n_s16, addr 0x6350fd4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s16(int16_t  a0) ;

/// @brief Method vdupq_n_s32, addr 0x6350ff4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s32(int32_t  a0) ;

/// @brief Method vdupq_n_s64, addr 0x6351008, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s64(int64_t  a0) ;

/// @brief Method vdupq_n_s8, addr 0x6350fb0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s8(int8_t  a0) ;

/// @brief Method vdupq_n_u16, addr 0x6351044, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u16(uint16_t  a0) ;

/// @brief Method vdupq_n_u32, addr 0x6351064, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u32(uint32_t  a0) ;

/// @brief Method vdupq_n_u64, addr 0x6351078, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u64(uint64_t  a0) ;

/// @brief Method vdupq_n_u8, addr 0x6351020, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u8(uint8_t  a0) ;

/// @brief Method vdups_lane_f32, addr 0x634d868, size 0x38, virtual false, abstract: false, final false
static inline float_t vdups_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdups_lane_s32, addr 0x634d780, size 0x38, virtual false, abstract: false, final false
static inline int32_t vdups_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdups_lane_u32, addr 0x634d82c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vdups_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdups_laneq_f32, addr 0x634da68, size 0x38, virtual false, abstract: false, final false
static inline float_t vdups_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdups_laneq_s32, addr 0x634d918, size 0x38, virtual false, abstract: false, final false
static inline int32_t vdups_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdups_laneq_u32, addr 0x634d9f8, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vdups_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method veor_s16, addr 0x6340588, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_s32, addr 0x6340598, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_s64, addr 0x63405a8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_s8, addr 0x6340518, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_u16, addr 0x63405c8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_u32, addr 0x63405d8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_u64, addr 0x63405e8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_u8, addr 0x63405b8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veorq_s16, addr 0x6340590, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_s32, addr 0x63405a0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_s64, addr 0x63405b0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_s8, addr 0x6340550, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_u16, addr 0x63405d0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_u32, addr 0x63405e0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_u64, addr 0x63405f0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_u8, addr 0x63405c0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vext_f32, addr 0x6341830, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_f64, addr 0x634f1f0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_s16, addr 0x6341588, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_s32, addr 0x63415f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_s64, addr 0x6341668, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_s8, addr 0x6341518, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_u16, addr 0x6341714, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_u32, addr 0x6341784, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_u64, addr 0x63417f4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_u8, addr 0x63416a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vextq_f32, addr 0x6341868, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_f64, addr 0x634f1f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_s16, addr 0x63415c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_s32, addr 0x6341630, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_s64, addr 0x634166c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_s8, addr 0x6341550, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_u16, addr 0x634174c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_u32, addr 0x63417bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_u64, addr 0x63417f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_u8, addr 0x63416dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vfma_f32, addr 0x6337950, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vfma_f64, addr 0x6343818, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vfma_lane_f32, addr 0x6343888, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfma_lane_f64, addr 0x63438f8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfma_laneq_f32, addr 0x6343978, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfma_laneq_f64, addr 0x63439e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfma_n_f32, addr 0x6342340, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, float_t  a2) ;

/// @brief Method vfma_n_f64, addr 0x634ff9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, double_t  a2) ;

/// @brief Method vfmad_lane_f64, addr 0x6343970, size 0x8, virtual false, abstract: false, final false
static inline double_t vfmad_lane_f64(double_t  a0, double_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmad_laneq_f64, addr 0x6343a90, size 0x38, virtual false, abstract: false, final false
static inline double_t vfmad_laneq_f64(double_t  a0, double_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmaq_f32, addr 0x6337988, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vfmaq_f64, addr 0x6343850, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vfmaq_lane_f32, addr 0x63438c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmaq_lane_f64, addr 0x6343900, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmaq_laneq_f32, addr 0x63439b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmaq_laneq_f64, addr 0x6343a20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmaq_n_f32, addr 0x6342378, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, float_t  a2) ;

/// @brief Method vfmaq_n_f64, addr 0x634ffd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, double_t  a2) ;

/// @brief Method vfmas_lane_f32, addr 0x6343938, size 0x38, virtual false, abstract: false, final false
static inline float_t vfmas_lane_f32(float_t  a0, float_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmas_laneq_f32, addr 0x6343a58, size 0x38, virtual false, abstract: false, final false
static inline float_t vfmas_laneq_f32(float_t  a0, float_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfms_f32, addr 0x63379c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vfms_f64, addr 0x6343ac8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vfms_lane_f32, addr 0x6343b38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfms_lane_f64, addr 0x6343ba8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfms_laneq_f32, addr 0x6343c28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfms_laneq_f64, addr 0x6343c98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfms_n_f32, addr 0x634ff2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, float_t  a2) ;

/// @brief Method vfms_n_f64, addr 0x635000c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, double_t  a2) ;

/// @brief Method vfmsd_lane_f64, addr 0x6343c20, size 0x8, virtual false, abstract: false, final false
static inline double_t vfmsd_lane_f64(double_t  a0, double_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmsd_laneq_f64, addr 0x6343d40, size 0x38, virtual false, abstract: false, final false
static inline double_t vfmsd_laneq_f64(double_t  a0, double_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmsq_f32, addr 0x63379f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vfmsq_f64, addr 0x6343b00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vfmsq_lane_f32, addr 0x6343b70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmsq_lane_f64, addr 0x6343bb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmsq_laneq_f32, addr 0x6343c60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmsq_laneq_f64, addr 0x6343cd0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmsq_n_f32, addr 0x634ff64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, float_t  a2) ;

/// @brief Method vfmsq_n_f64, addr 0x6350044, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, double_t  a2) ;

/// @brief Method vfmss_lane_f32, addr 0x6343be8, size 0x38, virtual false, abstract: false, final false
static inline float_t vfmss_lane_f32(float_t  a0, float_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmss_laneq_f32, addr 0x6343d08, size 0x38, virtual false, abstract: false, final false
static inline float_t vfmss_laneq_f32(float_t  a0, float_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vget_high_f32, addr 0x635122c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_f64, addr 0x6351234, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_s16, addr 0x63511f4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_s32, addr 0x63511fc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_s64, addr 0x6351204, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_s8, addr 0x63511ec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_u16, addr 0x6351214, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_u32, addr 0x635121c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_u64, addr 0x6351224, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_u8, addr 0x635120c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_lane_f32, addr 0x6341d88, size 0x38, virtual false, abstract: false, final false
static inline float_t vget_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_f64, addr 0x634fe3c, size 0x8, virtual false, abstract: false, final false
static inline double_t vget_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_s16, addr 0x6341d14, size 0x38, virtual false, abstract: false, final false
static inline int16_t vget_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_s32, addr 0x6341d4c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vget_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_s64, addr 0x6341d84, size 0x4, virtual false, abstract: false, final false
static inline int64_t vget_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_s8, addr 0x6341cdc, size 0x38, virtual false, abstract: false, final false
static inline int8_t vget_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_u16, addr 0x6341c68, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vget_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_u32, addr 0x6341ca0, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vget_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_u64, addr 0x6341cd8, size 0x4, virtual false, abstract: false, final false
static inline uint64_t vget_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_u8, addr 0x6341c30, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vget_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_low_f32, addr 0x635125c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_f64, addr 0x6351260, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_s16, addr 0x6351240, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_s32, addr 0x6351244, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_s64, addr 0x6351248, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_s8, addr 0x635123c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_u16, addr 0x6351250, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_u32, addr 0x6351254, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_u64, addr 0x6351258, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_u8, addr 0x635124c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vgetq_lane_f32, addr 0x6341f80, size 0x38, virtual false, abstract: false, final false
static inline float_t vgetq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_f64, addr 0x634fe44, size 0x38, virtual false, abstract: false, final false
static inline double_t vgetq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_s16, addr 0x6341ed8, size 0x38, virtual false, abstract: false, final false
static inline int16_t vgetq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_s32, addr 0x6341f10, size 0x38, virtual false, abstract: false, final false
static inline int32_t vgetq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_s64, addr 0x6341f48, size 0x38, virtual false, abstract: false, final false
static inline int64_t vgetq_lane_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_s8, addr 0x6341ea0, size 0x38, virtual false, abstract: false, final false
static inline int8_t vgetq_lane_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_u16, addr 0x6341df8, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vgetq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_u32, addr 0x6341e30, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vgetq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_u64, addr 0x6341e68, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vgetq_lane_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_u8, addr 0x6341dc0, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vgetq_lane_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vhadd_s16, addr 0x6336710, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_s32, addr 0x6336780, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_s8, addr 0x63366a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_u16, addr 0x6336860, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_u32, addr 0x63368d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_u8, addr 0x63367f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhaddq_s16, addr 0x6336748, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_s32, addr 0x63367b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_s8, addr 0x63366d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_u16, addr 0x6336898, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_u32, addr 0x6336908, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_u8, addr 0x6336828, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsub_s16, addr 0x6338410, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_s32, addr 0x6338480, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_s8, addr 0x63383a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_u16, addr 0x6338560, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_u32, addr 0x63385d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_u8, addr 0x63384f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsubq_s16, addr 0x6338448, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_s32, addr 0x63384b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_s8, addr 0x63383d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_u16, addr 0x6338598, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_u32, addr 0x6338608, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_u8, addr 0x6338528, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vld1_f32, addr 0x6351304, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_f32(float_t*  a0) ;

/// @brief Method vld1_f64, addr 0x6351318, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_f64(double_t*  a0) ;

/// @brief Method vld1_s16, addr 0x6351278, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_s16(int16_t*  a0) ;

/// @brief Method vld1_s32, addr 0x635128c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_s32(int32_t*  a0) ;

/// @brief Method vld1_s64, addr 0x63512a0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_s64(int64_t*  a0) ;

/// @brief Method vld1_s8, addr 0x6351264, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_s8(int8_t*  a0) ;

/// @brief Method vld1_u16, addr 0x63512c8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_u16(uint16_t*  a0) ;

/// @brief Method vld1_u32, addr 0x63512dc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_u32(uint32_t*  a0) ;

/// @brief Method vld1_u64, addr 0x63512f0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_u64(uint64_t*  a0) ;

/// @brief Method vld1_u8, addr 0x63512b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_u8(uint8_t*  a0) ;

/// @brief Method vld1q_f32, addr 0x635130c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_f32(float_t*  a0) ;

/// @brief Method vld1q_f64, addr 0x6351320, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_f64(double_t*  a0) ;

/// @brief Method vld1q_s16, addr 0x6351280, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_s16(int16_t*  a0) ;

/// @brief Method vld1q_s32, addr 0x6351294, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_s32(int32_t*  a0) ;

/// @brief Method vld1q_s64, addr 0x63512a8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_s64(int64_t*  a0) ;

/// @brief Method vld1q_s8, addr 0x635126c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_s8(int8_t*  a0) ;

/// @brief Method vld1q_u16, addr 0x63512d0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_u16(uint16_t*  a0) ;

/// @brief Method vld1q_u32, addr 0x63512e4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_u32(uint32_t*  a0) ;

/// @brief Method vld1q_u64, addr 0x63512f8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_u64(uint64_t*  a0) ;

/// @brief Method vld1q_u8, addr 0x63512bc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_u8(uint8_t*  a0) ;

/// @brief Method vmax_f32, addr 0x633a7a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_f64, addr 0x6346c68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_s16, addr 0x633a570, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_s32, addr 0x633a5e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_s8, addr 0x633a500, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_u16, addr 0x633a6c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_u32, addr 0x633a730, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_u8, addr 0x633a650, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmaxnm_f32, addr 0x6346d48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmaxnm_f64, addr 0x6346db8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmaxnmq_f32, addr 0x6346d80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxnmq_f64, addr 0x6346df0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxnmv_f32, addr 0x634f0a0, size 0x38, virtual false, abstract: false, final false
static inline float_t vmaxnmv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxnmvq_f32, addr 0x634f0d8, size 0x38, virtual false, abstract: false, final false
static inline float_t vmaxnmvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxnmvq_f64, addr 0x634f110, size 0x38, virtual false, abstract: false, final false
static inline double_t vmaxnmvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxq_f32, addr 0x633a7d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_f64, addr 0x6346ca0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_s16, addr 0x633a5a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_s32, addr 0x633a618, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_s8, addr 0x633a538, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_u16, addr 0x633a6f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_u32, addr 0x633a768, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_u8, addr 0x633a688, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxv_f32, addr 0x634ecb0, size 0x38, virtual false, abstract: false, final false
static inline float_t vmaxv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_s16, addr 0x634ea80, size 0x38, virtual false, abstract: false, final false
static inline int16_t vmaxv_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_s32, addr 0x634eaf0, size 0x38, virtual false, abstract: false, final false
static inline int32_t vmaxv_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_s8, addr 0x634ea10, size 0x38, virtual false, abstract: false, final false
static inline int8_t vmaxv_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_u16, addr 0x634ebd0, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vmaxv_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_u32, addr 0x634ec40, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vmaxv_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_u8, addr 0x634eb60, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vmaxv_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxvq_f32, addr 0x634ece8, size 0x38, virtual false, abstract: false, final false
static inline float_t vmaxvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_f64, addr 0x634ed20, size 0x38, virtual false, abstract: false, final false
static inline double_t vmaxvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_s16, addr 0x634eab8, size 0x38, virtual false, abstract: false, final false
static inline int16_t vmaxvq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_s32, addr 0x634eb28, size 0x38, virtual false, abstract: false, final false
static inline int32_t vmaxvq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_s8, addr 0x634ea48, size 0x38, virtual false, abstract: false, final false
static inline int8_t vmaxvq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_u16, addr 0x634ec08, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vmaxvq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_u32, addr 0x634ec78, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vmaxvq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_u8, addr 0x634eb98, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vmaxvq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmin_f32, addr 0x633aab0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_f64, addr 0x6346cd8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_s16, addr 0x633a880, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_s32, addr 0x633a8f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_s8, addr 0x633a810, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_u16, addr 0x633a9d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_u32, addr 0x633aa40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_u8, addr 0x633a960, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vminnm_f32, addr 0x6346e28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vminnm_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vminnm_f64, addr 0x6346e98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vminnm_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vminnmq_f32, addr 0x6346e60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminnmq_f64, addr 0x6346ed0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminnmv_f32, addr 0x634f148, size 0x38, virtual false, abstract: false, final false
static inline float_t vminnmv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminnmvq_f32, addr 0x634f180, size 0x38, virtual false, abstract: false, final false
static inline float_t vminnmvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminnmvq_f64, addr 0x634f1b8, size 0x38, virtual false, abstract: false, final false
static inline double_t vminnmvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminq_f32, addr 0x633aae8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_f64, addr 0x6346d10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_s16, addr 0x633a8b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_s32, addr 0x633a928, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_s8, addr 0x633a848, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_u16, addr 0x633aa08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_u32, addr 0x633aa78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_u8, addr 0x633a998, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminv_f32, addr 0x634eff8, size 0x38, virtual false, abstract: false, final false
static inline float_t vminv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_s16, addr 0x634edc8, size 0x38, virtual false, abstract: false, final false
static inline int16_t vminv_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_s32, addr 0x634ee38, size 0x38, virtual false, abstract: false, final false
static inline int32_t vminv_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_s8, addr 0x634ed58, size 0x38, virtual false, abstract: false, final false
static inline int8_t vminv_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_u16, addr 0x634ef18, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vminv_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_u32, addr 0x634ef88, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vminv_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_u8, addr 0x634eea8, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vminv_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminvq_f32, addr 0x634f030, size 0x38, virtual false, abstract: false, final false
static inline float_t vminvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_f64, addr 0x634f068, size 0x38, virtual false, abstract: false, final false
static inline double_t vminvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_s16, addr 0x634ee00, size 0x38, virtual false, abstract: false, final false
static inline int16_t vminvq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_s32, addr 0x634ee70, size 0x38, virtual false, abstract: false, final false
static inline int32_t vminvq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_s8, addr 0x634ed90, size 0x38, virtual false, abstract: false, final false
static inline int8_t vminvq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_u16, addr 0x634ef50, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vminvq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_u32, addr 0x634efc0, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vminvq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_u8, addr 0x634eee0, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vminvq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmla_f32, addr 0x6337450, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_f64, addr 0x6343498, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_lane_f32, addr 0x633dfc8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_lane_s16, addr 0x633de08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_lane_s32, addr 0x633de78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_lane_u16, addr 0x633dee8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_lane_u32, addr 0x633df58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_f32, addr 0x634a430, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_s16, addr 0x634a270, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_s32, addr 0x634a2e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_u16, addr 0x634a350, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_u32, addr 0x634a3c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_n_f32, addr 0x633f148, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, float_t  a2) ;

/// @brief Method vmla_n_s16, addr 0x633ef88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vmla_n_s32, addr 0x633eff8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmla_n_u16, addr 0x633f068, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, uint16_t  a2) ;

/// @brief Method vmla_n_u32, addr 0x633f0d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, uint32_t  a2) ;

/// @brief Method vmla_s16, addr 0x6337340, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_s32, addr 0x63373b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_s8, addr 0x63372d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_u16, addr 0x6337430, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_u32, addr 0x6337440, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_u8, addr 0x6337420, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_high_lane_s16, addr 0x634a4a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_high_lane_s32, addr 0x634a4d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_high_lane_u16, addr 0x634a510, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_high_lane_u32, addr 0x634a548, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_high_laneq_s16, addr 0x634a660, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_high_laneq_s32, addr 0x634a698, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_high_laneq_u16, addr 0x634a6d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_high_laneq_u32, addr 0x634a708, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_high_n_s16, addr 0x634be14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vmlal_high_n_s32, addr 0x634be4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmlal_high_n_u16, addr 0x634be84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint16_t  a2) ;

/// @brief Method vmlal_high_n_u32, addr 0x634bebc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint32_t  a2) ;

/// @brief Method vmlal_high_s16, addr 0x6343540, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_s32, addr 0x6343578, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_s8, addr 0x6343508, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_u16, addr 0x63435e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_u32, addr 0x6343620, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_u8, addr 0x63435b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_lane_s16, addr 0x633e038, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_lane_s32, addr 0x633e070, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_lane_u16, addr 0x633e0a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_lane_u32, addr 0x633e0e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_laneq_s16, addr 0x634a580, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_laneq_s32, addr 0x634a5b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_laneq_u16, addr 0x634a5f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_laneq_u32, addr 0x634a628, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_n_s16, addr 0x633f1b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vmlal_n_s32, addr 0x633f1f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmlal_n_u16, addr 0x633f228, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, uint16_t  a2) ;

/// @brief Method vmlal_n_u32, addr 0x633f260, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, uint32_t  a2) ;

/// @brief Method vmlal_s16, addr 0x63374f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_s32, addr 0x6337530, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_s8, addr 0x63374c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_u16, addr 0x63375a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_u32, addr 0x63375d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_u8, addr 0x6337568, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlaq_f32, addr 0x6337488, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_f64, addr 0x63434d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_lane_f32, addr 0x633e000, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_lane_s16, addr 0x633de40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_lane_s32, addr 0x633deb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_lane_u16, addr 0x633df20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_lane_u32, addr 0x633df90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_f32, addr 0x634a468, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_s16, addr 0x634a2a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_s32, addr 0x634a318, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_u16, addr 0x634a388, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_u32, addr 0x634a3f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_n_f32, addr 0x633f180, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, float_t  a2) ;

/// @brief Method vmlaq_n_s16, addr 0x633efc0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vmlaq_n_s32, addr 0x633f030, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmlaq_n_u16, addr 0x633f0a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint16_t  a2) ;

/// @brief Method vmlaq_n_u32, addr 0x633f110, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint32_t  a2) ;

/// @brief Method vmlaq_s16, addr 0x6337378, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_s32, addr 0x63373e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_s8, addr 0x6337308, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_u16, addr 0x6337438, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_u32, addr 0x6337448, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_u8, addr 0x6337428, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmls_f32, addr 0x6337790, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_f64, addr 0x6343658, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_lane_f32, addr 0x633e348, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_lane_s16, addr 0x633e188, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_lane_s32, addr 0x633e1f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_lane_u16, addr 0x633e268, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_lane_u32, addr 0x633e2d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_f32, addr 0x634ab30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_s16, addr 0x634a970, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_s32, addr 0x634a9e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_u16, addr 0x634aa50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_u32, addr 0x634aac0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_n_f32, addr 0x633f4c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, float_t  a2) ;

/// @brief Method vmls_n_s16, addr 0x633f308, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vmls_n_s32, addr 0x633f378, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmls_n_u16, addr 0x633f3e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, uint16_t  a2) ;

/// @brief Method vmls_n_u32, addr 0x633f458, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, uint32_t  a2) ;

/// @brief Method vmls_s16, addr 0x6337680, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_s32, addr 0x63376f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_s8, addr 0x6337610, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_u16, addr 0x6337770, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_u32, addr 0x6337780, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_u8, addr 0x6337760, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_high_lane_s16, addr 0x634aba0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_lane_s32, addr 0x634abd8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_lane_u16, addr 0x634ac10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_lane_u32, addr 0x634ac48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_laneq_s16, addr 0x634ad60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_laneq_s32, addr 0x634ad98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_laneq_u16, addr 0x634add0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_laneq_u32, addr 0x634ae08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_n_s16, addr 0x634bf64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vmlsl_high_n_s32, addr 0x634bf9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmlsl_high_n_u16, addr 0x634bfd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint16_t  a2) ;

/// @brief Method vmlsl_high_n_u32, addr 0x634c00c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint32_t  a2) ;

/// @brief Method vmlsl_high_s16, addr 0x6343700, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_s32, addr 0x6343738, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_s8, addr 0x63436c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_u16, addr 0x63437a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_u32, addr 0x63437e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_u8, addr 0x6343770, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_lane_s16, addr 0x633e3b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_lane_s32, addr 0x633e3f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_lane_u16, addr 0x633e428, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_lane_u32, addr 0x633e460, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_laneq_s16, addr 0x634ac80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_laneq_s32, addr 0x634acb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_laneq_u16, addr 0x634acf0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_laneq_u32, addr 0x634ad28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_n_s16, addr 0x633f538, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vmlsl_n_s32, addr 0x633f570, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmlsl_n_u16, addr 0x633f5a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, uint16_t  a2) ;

/// @brief Method vmlsl_n_u32, addr 0x633f5e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, uint32_t  a2) ;

/// @brief Method vmlsl_s16, addr 0x6337838, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_s32, addr 0x6337870, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_s8, addr 0x6337800, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_u16, addr 0x63378e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_u32, addr 0x6337918, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_u8, addr 0x63378a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsq_f32, addr 0x63377c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_f64, addr 0x6343690, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_lane_f32, addr 0x633e380, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_lane_s16, addr 0x633e1c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_lane_s32, addr 0x633e230, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_lane_u16, addr 0x633e2a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_lane_u32, addr 0x633e310, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_f32, addr 0x634ab68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_s16, addr 0x634a9a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_s32, addr 0x634aa18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_u16, addr 0x634aa88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_u32, addr 0x634aaf8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_n_f32, addr 0x633f500, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, float_t  a2) ;

/// @brief Method vmlsq_n_s16, addr 0x633f340, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vmlsq_n_s32, addr 0x633f3b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmlsq_n_u16, addr 0x633f420, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint16_t  a2) ;

/// @brief Method vmlsq_n_u32, addr 0x633f490, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint32_t  a2) ;

/// @brief Method vmlsq_s16, addr 0x63376b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_s32, addr 0x6337728, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_s8, addr 0x6337648, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_u16, addr 0x6337778, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_u32, addr 0x6337788, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_u8, addr 0x6337768, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmov_n_f32, addr 0x6351190, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f32(float_t  a0) ;

/// @brief Method vmov_n_f64, addr 0x63511ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f64(double_t  a0) ;

/// @brief Method vmov_n_s16, addr 0x63510d4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s16(int16_t  a0) ;

/// @brief Method vmov_n_s32, addr 0x63510f8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s32(int32_t  a0) ;

/// @brief Method vmov_n_s64, addr 0x6351114, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s64(int64_t  a0) ;

/// @brief Method vmov_n_s8, addr 0x63510b0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s8(int8_t  a0) ;

/// @brief Method vmov_n_u16, addr 0x6351144, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u16(uint16_t  a0) ;

/// @brief Method vmov_n_u32, addr 0x6351168, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u32(uint32_t  a0) ;

/// @brief Method vmov_n_u64, addr 0x6351184, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u64(uint64_t  a0) ;

/// @brief Method vmov_n_u8, addr 0x6351120, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u8(uint8_t  a0) ;

/// @brief Method vmovl_high_s16, addr 0x6349d68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_s32, addr 0x6349da0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_s8, addr 0x6349d30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_u16, addr 0x6349e10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_u32, addr 0x6349e48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_u8, addr 0x6349dd8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_s16, addr 0x633daf8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_s32, addr 0x633db30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_s8, addr 0x633dac0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_u16, addr 0x633dba0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_u32, addr 0x633dbd8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_u8, addr 0x633db68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovn_high_s16, addr 0x633da00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_s32, addr 0x633da38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_s64, addr 0x633da70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_u16, addr 0x633daa8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_u32, addr 0x633dab0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_u64, addr 0x633dab8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_s16, addr 0x633d940, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_s32, addr 0x633d978, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_s64, addr 0x633d9b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_u16, addr 0x633d9e8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_u32, addr 0x633d9f0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_u64, addr 0x633d9f8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovq_n_f32, addr 0x635119c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f32(float_t  a0) ;

/// @brief Method vmovq_n_f64, addr 0x63511b4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f64(double_t  a0) ;

/// @brief Method vmovq_n_s16, addr 0x63510e4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s16(int16_t  a0) ;

/// @brief Method vmovq_n_s32, addr 0x6351104, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s32(int32_t  a0) ;

/// @brief Method vmovq_n_s64, addr 0x6351118, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s64(int64_t  a0) ;

/// @brief Method vmovq_n_s8, addr 0x63510c0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s8(int8_t  a0) ;

/// @brief Method vmovq_n_u16, addr 0x6351154, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u16(uint16_t  a0) ;

/// @brief Method vmovq_n_u32, addr 0x6351174, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u32(uint32_t  a0) ;

/// @brief Method vmovq_n_u64, addr 0x6351188, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u64(uint64_t  a0) ;

/// @brief Method vmovq_n_u8, addr 0x6351130, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u8(uint8_t  a0) ;

/// @brief Method vmul_f32, addr 0x6337260, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_f64, addr 0x6342fb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_lane_f32, addr 0x633e8f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_f64, addr 0x634b0e0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_s16, addr 0x633e738, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_s32, addr 0x633e7a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_u16, addr 0x633e818, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_u32, addr 0x633e888, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_f32, addr 0x634b324, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_f64, addr 0x634b394, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_s16, addr 0x634b164, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_s32, addr 0x634b1d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_u16, addr 0x634b244, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_u32, addr 0x634b2b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_n_f32, addr 0x633e6c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f32(::Unity::Burst::Intrinsics::v64  a0, float_t  a1) ;

/// @brief Method vmul_n_f64, addr 0x634b070, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f64(::Unity::Burst::Intrinsics::v64  a0, double_t  a1) ;

/// @brief Method vmul_n_s16, addr 0x633e508, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vmul_n_s32, addr 0x633e578, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vmul_n_u16, addr 0x633e5e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u16(::Unity::Burst::Intrinsics::v64  a0, uint16_t  a1) ;

/// @brief Method vmul_n_u32, addr 0x633e658, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u32(::Unity::Burst::Intrinsics::v64  a0, uint32_t  a1) ;

/// @brief Method vmul_s16, addr 0x6337150, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_s32, addr 0x63371c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_s8, addr 0x63370e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_u16, addr 0x6337240, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_u32, addr 0x6337250, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_u8, addr 0x6337230, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmuld_lane_f64, addr 0x634b158, size 0xc, virtual false, abstract: false, final false
static inline double_t vmuld_lane_f64(double_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmuld_laneq_f64, addr 0x634b43c, size 0x38, virtual false, abstract: false, final false
static inline double_t vmuld_laneq_f64(double_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_lane_s16, addr 0x634b554, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_high_lane_s32, addr 0x634b58c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_high_lane_u16, addr 0x634b5c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_high_lane_u32, addr 0x634b5fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_high_laneq_s16, addr 0x634b714, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_laneq_s32, addr 0x634b74c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_laneq_u16, addr 0x634b784, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_laneq_u32, addr 0x634b7bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_n_s16, addr 0x634b474, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vmull_high_n_s32, addr 0x634b4ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vmull_high_n_u16, addr 0x634b4e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u16(::Unity::Burst::Intrinsics::v128  a0, uint16_t  a1) ;

/// @brief Method vmull_high_n_u32, addr 0x634b51c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1) ;

/// @brief Method vmull_high_s16, addr 0x6344050, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_s32, addr 0x6344088, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_s8, addr 0x6344018, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_u16, addr 0x63440f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_u32, addr 0x6344130, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_u8, addr 0x63440c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_lane_s16, addr 0x633ea48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_lane_s32, addr 0x633ea80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_lane_u16, addr 0x633eab8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_lane_u32, addr 0x633eaf0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_laneq_s16, addr 0x634b634, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_laneq_s32, addr 0x634b66c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_laneq_u16, addr 0x634b6a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_laneq_u32, addr 0x634b6dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_n_s16, addr 0x633e968, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vmull_n_s32, addr 0x633e9a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vmull_n_u16, addr 0x633e9d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u16(::Unity::Burst::Intrinsics::v64  a0, uint16_t  a1) ;

/// @brief Method vmull_n_u32, addr 0x633ea10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u32(::Unity::Burst::Intrinsics::v64  a0, uint32_t  a1) ;

/// @brief Method vmull_s16, addr 0x6337d08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_s32, addr 0x6337d40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_s8, addr 0x6337cd0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_u16, addr 0x6337db0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_u32, addr 0x6337de8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_u8, addr 0x6337d78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmulq_f32, addr 0x6337298, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_f64, addr 0x6342ff0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_lane_f32, addr 0x633e930, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_f64, addr 0x634b0e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_s16, addr 0x633e770, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_s32, addr 0x633e7e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_u16, addr 0x633e850, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_u32, addr 0x633e8c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_f32, addr 0x634b35c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_f64, addr 0x634b3cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_s16, addr 0x634b19c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_s32, addr 0x634b20c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_u16, addr 0x634b27c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_u32, addr 0x634b2ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_n_f32, addr 0x633e700, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f32(::Unity::Burst::Intrinsics::v128  a0, float_t  a1) ;

/// @brief Method vmulq_n_f64, addr 0x634b0a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f64(::Unity::Burst::Intrinsics::v128  a0, double_t  a1) ;

/// @brief Method vmulq_n_s16, addr 0x633e540, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vmulq_n_s32, addr 0x633e5b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vmulq_n_u16, addr 0x633e620, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u16(::Unity::Burst::Intrinsics::v128  a0, uint16_t  a1) ;

/// @brief Method vmulq_n_u32, addr 0x633e690, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1) ;

/// @brief Method vmulq_s16, addr 0x6337188, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_s32, addr 0x63371f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_s8, addr 0x6337118, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_u16, addr 0x6337248, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_u32, addr 0x6337258, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_u8, addr 0x6337238, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmuls_lane_f32, addr 0x634b120, size 0x38, virtual false, abstract: false, final false
static inline float_t vmuls_lane_f32(float_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmuls_laneq_f32, addr 0x634b404, size 0x38, virtual false, abstract: false, final false
static inline float_t vmuls_laneq_f32(float_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulx_f32, addr 0x6343028, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmulx_f64, addr 0x6343098, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmulx_lane_f32, addr 0x6343178, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulx_lane_f64, addr 0x63431e8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulx_laneq_f32, addr 0x6343268, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulx_laneq_f64, addr 0x63432d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulxd_f64, addr 0x6343140, size 0x38, virtual false, abstract: false, final false
static inline double_t vmulxd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vmulxd_lane_f64, addr 0x6343260, size 0x8, virtual false, abstract: false, final false
static inline double_t vmulxd_lane_f64(double_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulxd_laneq_f64, addr 0x6343380, size 0x38, virtual false, abstract: false, final false
static inline double_t vmulxd_laneq_f64(double_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulxq_f32, addr 0x6343060, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulxq_f64, addr 0x63430d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulxq_lane_f32, addr 0x63431b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulxq_lane_f64, addr 0x63431f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulxq_laneq_f32, addr 0x63432a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulxq_laneq_f64, addr 0x6343310, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulxs_f32, addr 0x6343108, size 0x38, virtual false, abstract: false, final false
static inline float_t vmulxs_f32(float_t  a0, float_t  a1) ;

/// @brief Method vmulxs_lane_f32, addr 0x6343228, size 0x38, virtual false, abstract: false, final false
static inline float_t vmulxs_lane_f32(float_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulxs_laneq_f32, addr 0x6343348, size 0x38, virtual false, abstract: false, final false
static inline float_t vmulxs_laneq_f32(float_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmvn_s16, addr 0x6340308, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_s32, addr 0x6340318, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_s8, addr 0x6340298, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_u16, addr 0x6340338, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_u32, addr 0x6340348, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_u8, addr 0x6340328, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvnq_s16, addr 0x6340310, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_s32, addr 0x6340320, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_s8, addr 0x63402d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_u16, addr 0x6340340, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_u32, addr 0x6340350, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_u8, addr 0x6340330, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vneg_f32, addr 0x633fae8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_f64, addr 0x634c3c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_s16, addr 0x633fa08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_s32, addr 0x633fa78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_s64, addr 0x634c31c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_s8, addr 0x633f998, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vnegd_s64, addr 0x634c354, size 0x38, virtual false, abstract: false, final false
static inline int64_t vnegd_s64(int64_t  a0) ;

/// @brief Method vnegq_f32, addr 0x633fb20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_f64, addr 0x634c3fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_s16, addr 0x633fa40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_s32, addr 0x633fab0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_s64, addr 0x634c38c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_s8, addr 0x633f9d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vorn_s16, addr 0x6340748, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_s32, addr 0x6340758, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_s64, addr 0x6340768, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_s8, addr 0x63406d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_u16, addr 0x6340788, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_u32, addr 0x6340798, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_u64, addr 0x63407a8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_u8, addr 0x6340778, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vornq_s16, addr 0x6340750, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_s32, addr 0x6340760, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_s64, addr 0x6340770, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_s8, addr 0x6340710, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_u16, addr 0x6340790, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_u32, addr 0x63407a0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_u64, addr 0x63407b0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_u8, addr 0x6340780, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorr_s16, addr 0x63404a8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_s32, addr 0x63404b8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_s64, addr 0x63404c8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_s8, addr 0x6340438, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_u16, addr 0x63404e8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_u32, addr 0x63404f8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_u64, addr 0x6340508, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_u8, addr 0x63404d8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorrq_s16, addr 0x63404b0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_s32, addr 0x63404c0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_s64, addr 0x63404d0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_s8, addr 0x6340470, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_u16, addr 0x63404f0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_u32, addr 0x6340500, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_u64, addr 0x6340510, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_u8, addr 0x63404e0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadal_s16, addr 0x6340fd8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_s32, addr 0x6341048, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_s8, addr 0x6340f68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_u16, addr 0x6341128, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_u32, addr 0x6341198, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_u8, addr 0x63410b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadalq_s16, addr 0x6341010, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_s32, addr 0x6341080, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_s8, addr 0x6340fa0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_u16, addr 0x6341160, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_u32, addr 0x63411d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_u8, addr 0x63410f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadd_f32, addr 0x6340c90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_s16, addr 0x6340c08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_s32, addr 0x6340c40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_s8, addr 0x6340bd0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_u16, addr 0x6340c80, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_u32, addr 0x6340c88, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_u8, addr 0x6340c78, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpaddd_f64, addr 0x634e1c0, size 0x38, virtual false, abstract: false, final false
static inline double_t vpaddd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddd_s64, addr 0x634e118, size 0x38, virtual false, abstract: false, final false
static inline int64_t vpaddd_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddd_u64, addr 0x634e150, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vpaddd_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddl_s16, addr 0x6340d38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_s32, addr 0x6340da8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_s8, addr 0x6340cc8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_u16, addr 0x6340e88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_u32, addr 0x6340ef8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_u8, addr 0x6340e18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddlq_s16, addr 0x6340d70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_s32, addr 0x6340de0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_s8, addr 0x6340d00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_u16, addr 0x6340ec0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_u32, addr 0x6340f30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_u8, addr 0x6340e50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddq_f32, addr 0x634dbd8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_f64, addr 0x634dc10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_s16, addr 0x634db10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_s32, addr 0x634db48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_s64, addr 0x634db80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_s8, addr 0x634dad8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_u16, addr 0x634dbc0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_u32, addr 0x634dbc8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_u64, addr 0x634dbd0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_u8, addr 0x634dbb8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadds_f32, addr 0x634e188, size 0x38, virtual false, abstract: false, final false
static inline float_t vpadds_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpmax_f32, addr 0x6341358, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_s16, addr 0x6341240, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_s32, addr 0x6341278, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_s8, addr 0x6341208, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_u16, addr 0x63412e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_u32, addr 0x6341320, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_u8, addr 0x63412b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmaxnm_f32, addr 0x634dfc8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmaxnm_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmaxnmq_f32, addr 0x634e000, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxnmq_f64, addr 0x634e038, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxnmqd_f64, addr 0x634e310, size 0x38, virtual false, abstract: false, final false
static inline double_t vpmaxnmqd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpmaxnms_f32, addr 0x634e2d8, size 0x38, virtual false, abstract: false, final false
static inline float_t vpmaxnms_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpmaxq_f32, addr 0x634dd98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_f64, addr 0x634ddd0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_s16, addr 0x634dc80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_s32, addr 0x634dcb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_s8, addr 0x634dc48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_u16, addr 0x634dd28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_u32, addr 0x634dd60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_u8, addr 0x634dcf0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxqd_f64, addr 0x634e230, size 0x38, virtual false, abstract: false, final false
static inline double_t vpmaxqd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpmaxs_f32, addr 0x634e1f8, size 0x38, virtual false, abstract: false, final false
static inline float_t vpmaxs_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpmin_f32, addr 0x63414e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_s16, addr 0x63413c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_s32, addr 0x6341400, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_s8, addr 0x6341390, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_u16, addr 0x6341470, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_u32, addr 0x63414a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_u8, addr 0x6341438, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpminnm_f32, addr 0x634e070, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpminnm_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpminnmq_f32, addr 0x634e0a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminnmq_f64, addr 0x634e0e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminnmqd_f64, addr 0x634e380, size 0x38, virtual false, abstract: false, final false
static inline double_t vpminnmqd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpminnms_f32, addr 0x634e348, size 0x38, virtual false, abstract: false, final false
static inline float_t vpminnms_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpminq_f32, addr 0x634df58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_f64, addr 0x634df90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_s16, addr 0x634de40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_s32, addr 0x634de78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_s8, addr 0x634de08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_u16, addr 0x634dee8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_u32, addr 0x634df20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_u8, addr 0x634deb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminqd_f64, addr 0x634e2a0, size 0x38, virtual false, abstract: false, final false
static inline double_t vpminqd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpmins_f32, addr 0x634e268, size 0x38, virtual false, abstract: false, final false
static inline float_t vpmins_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabs_s16, addr 0x633f8b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqabs_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabs_s32, addr 0x633f928, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqabs_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabs_s64, addr 0x634c1cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqabs_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabs_s8, addr 0x633f848, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqabs_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabsb_s8, addr 0x634c23c, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqabsb_s8(int8_t  a0) ;

/// @brief Method vqabsd_s64, addr 0x634c2e4, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqabsd_s64(int64_t  a0) ;

/// @brief Method vqabsh_s16, addr 0x634c274, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqabsh_s16(int16_t  a0) ;

/// @brief Method vqabsq_s16, addr 0x633f8f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqabsq_s32, addr 0x633f960, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqabsq_s64, addr 0x634c204, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqabsq_s8, addr 0x633f880, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqabss_s32, addr 0x634c2ac, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqabss_s32(int32_t  a0) ;

/// @brief Method vqadd_s16, addr 0x6336c50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_s32, addr 0x6336cc0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_s64, addr 0x6336d30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_s8, addr 0x6336be0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_u16, addr 0x6336e10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_u32, addr 0x6336e80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_u64, addr 0x6336ef0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_u8, addr 0x6336da0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqaddb_s8, addr 0x6342738, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqaddb_s8(int8_t  a0, int8_t  a1) ;

/// @brief Method vqaddb_u8, addr 0x6342818, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqaddb_u8(uint8_t  a0, uint8_t  a1) ;

/// @brief Method vqaddd_s64, addr 0x63427e0, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqaddd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vqaddd_u64, addr 0x63428c0, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqaddd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vqaddh_s16, addr 0x6342770, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqaddh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqaddh_u16, addr 0x6342850, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqaddh_u16(uint16_t  a0, uint16_t  a1) ;

/// @brief Method vqaddq_s16, addr 0x6336c88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_s32, addr 0x6336cf8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_s64, addr 0x6336d68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_s8, addr 0x6336c18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_u16, addr 0x6336e48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_u32, addr 0x6336eb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_u64, addr 0x6336f28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_u8, addr 0x6336dd8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqadds_s32, addr 0x63427a8, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqadds_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqadds_u32, addr 0x6342888, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqadds_u32(uint32_t  a0, uint32_t  a1) ;

/// @brief Method vqdmlal_high_lane_s16, addr 0x634a7b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlal_high_lane_s32, addr 0x634a7e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlal_high_laneq_s16, addr 0x634a900, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlal_high_laneq_s32, addr 0x634a938, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlal_high_n_s16, addr 0x634bef4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vqdmlal_high_n_s32, addr 0x634bf2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmlal_high_s16, addr 0x6343ec8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqdmlal_high_s32, addr 0x6343f00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqdmlal_lane_s16, addr 0x633e118, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlal_lane_s32, addr 0x633e150, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlal_laneq_s16, addr 0x634a820, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlal_laneq_s32, addr 0x634a858, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlal_n_s16, addr 0x633f298, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vqdmlal_n_s32, addr 0x633f2d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmlal_s16, addr 0x6337bf0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqdmlal_s32, addr 0x6337c28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqdmlalh_lane_s16, addr 0x634a740, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlalh_lane_s16(int32_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlalh_laneq_s16, addr 0x634a890, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlalh_laneq_s16(int32_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlalh_s16, addr 0x6343e58, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlalh_s16(int32_t  a0, int16_t  a1, int16_t  a2) ;

/// @brief Method vqdmlals_lane_s32, addr 0x634a778, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlals_lane_s32(int64_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlals_laneq_s32, addr 0x634a8c8, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlals_laneq_s32(int64_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlals_s32, addr 0x6343e90, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlals_s32(int64_t  a0, int32_t  a1, int32_t  a2) ;

/// @brief Method vqdmlsl_high_lane_s16, addr 0x634aeb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_high_lane_s32, addr 0x634aee8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_high_laneq_s16, addr 0x634b000, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_high_laneq_s32, addr 0x634b038, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_high_n_s16, addr 0x634c044, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vqdmlsl_high_n_s32, addr 0x634c07c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmlsl_high_s16, addr 0x6343fa8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqdmlsl_high_s32, addr 0x6343fe0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqdmlsl_lane_s16, addr 0x633e498, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_lane_s32, addr 0x633e4d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_laneq_s16, addr 0x634af20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_laneq_s32, addr 0x634af58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_n_s16, addr 0x633f618, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vqdmlsl_n_s32, addr 0x633f650, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmlsl_s16, addr 0x6337c60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqdmlsl_s32, addr 0x6337c98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqdmlslh_lane_s16, addr 0x634ae40, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlslh_lane_s16(int32_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlslh_laneq_s16, addr 0x634af90, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlslh_laneq_s16(int32_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlslh_s16, addr 0x6343f38, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlslh_s16(int32_t  a0, int16_t  a1, int16_t  a2) ;

/// @brief Method vqdmlsls_lane_s32, addr 0x634ae78, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlsls_lane_s32(int64_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsls_laneq_s32, addr 0x634afc8, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlsls_laneq_s32(int64_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsls_s32, addr 0x6343f70, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlsls_s32(int64_t  a0, int32_t  a1, int32_t  a2) ;

/// @brief Method vqdmulh_lane_s16, addr 0x633ece8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulh_lane_s32, addr 0x633ed58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulh_laneq_s16, addr 0x634bb04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulh_laneq_s32, addr 0x634bb74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulh_n_s16, addr 0x633ec08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vqdmulh_n_s32, addr 0x633ec78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqdmulh_s16, addr 0x6337a30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqdmulh_s32, addr 0x6337aa0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqdmulhh_lane_s16, addr 0x634ba94, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqdmulhh_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulhh_laneq_s16, addr 0x634bbe4, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqdmulhh_laneq_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulhh_s16, addr 0x6343d78, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqdmulhh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqdmulhq_lane_s16, addr 0x633ed20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulhq_lane_s32, addr 0x633ed90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulhq_laneq_s16, addr 0x634bb3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulhq_laneq_s32, addr 0x634bbac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulhq_n_s16, addr 0x633ec40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vqdmulhq_n_s32, addr 0x633ecb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqdmulhq_s16, addr 0x6337a68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqdmulhq_s32, addr 0x6337ad8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqdmulhs_lane_s32, addr 0x634bacc, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmulhs_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulhs_laneq_s32, addr 0x634bc1c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmulhs_laneq_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulhs_s32, addr 0x6343db0, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmulhs_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqdmull_high_lane_s16, addr 0x634b8d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmull_high_lane_s32, addr 0x634b90c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmull_high_laneq_s16, addr 0x634ba24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmull_high_laneq_s32, addr 0x634ba5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmull_high_n_s16, addr 0x634b7f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vqdmull_high_n_s32, addr 0x634b82c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqdmull_high_s16, addr 0x63441d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqdmull_high_s32, addr 0x6344210, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqdmull_lane_s16, addr 0x633eb98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmull_lane_s32, addr 0x633ebd0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmull_laneq_s16, addr 0x634b944, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmull_laneq_s32, addr 0x634b97c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmull_n_s16, addr 0x633eb28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vqdmull_n_s32, addr 0x633eb60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqdmull_s16, addr 0x6337e20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqdmull_s32, addr 0x6337e58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqdmullh_lane_s16, addr 0x634b864, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmullh_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmullh_laneq_s16, addr 0x634b9b4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmullh_laneq_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmullh_s16, addr 0x6344168, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmullh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqdmulls_lane_s32, addr 0x634b89c, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmulls_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulls_laneq_s32, addr 0x634b9ec, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmulls_laneq_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulls_s32, addr 0x63441a0, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmulls_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqmovn_high_s16, addr 0x6349fd0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_s32, addr 0x634a008, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_s64, addr 0x634a040, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_u16, addr 0x634a078, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_u32, addr 0x634a0b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_u64, addr 0x634a0e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_s16, addr 0x633dc10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_s32, addr 0x633dc48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_s64, addr 0x633dc80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_u16, addr 0x633dcb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_u32, addr 0x633dcf0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_u64, addr 0x633dd28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovnd_s64, addr 0x6349ef0, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqmovnd_s64(int64_t  a0) ;

/// @brief Method vqmovnd_u64, addr 0x6349f98, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqmovnd_u64(uint64_t  a0) ;

/// @brief Method vqmovnh_s16, addr 0x6349e80, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqmovnh_s16(int16_t  a0) ;

/// @brief Method vqmovnh_u16, addr 0x6349f28, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqmovnh_u16(uint16_t  a0) ;

/// @brief Method vqmovns_s32, addr 0x6349eb8, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqmovns_s32(int32_t  a0) ;

/// @brief Method vqmovns_u32, addr 0x6349f60, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqmovns_u32(uint32_t  a0) ;

/// @brief Method vqmovun_high_s16, addr 0x634a1c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovun_high_s32, addr 0x634a200, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovun_high_s64, addr 0x634a238, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovun_s16, addr 0x633dd60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovun_s32, addr 0x633dd98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovun_s64, addr 0x633ddd0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovund_s64, addr 0x634a190, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqmovund_s64(int64_t  a0) ;

/// @brief Method vqmovunh_s16, addr 0x634a120, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqmovunh_s16(int16_t  a0) ;

/// @brief Method vqmovuns_s32, addr 0x634a158, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqmovuns_s32(int32_t  a0) ;

/// @brief Method vqneg_s16, addr 0x633fbc8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqneg_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqneg_s32, addr 0x633fc38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqneg_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqneg_s64, addr 0x634c434, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqneg_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqneg_s8, addr 0x633fb58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqneg_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqnegb_s8, addr 0x634c4a4, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqnegb_s8(int8_t  a0) ;

/// @brief Method vqnegd_s64, addr 0x634c54c, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqnegd_s64(int64_t  a0) ;

/// @brief Method vqnegh_s16, addr 0x634c4dc, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqnegh_s16(int16_t  a0) ;

/// @brief Method vqnegq_s16, addr 0x633fc00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqnegq_s32, addr 0x633fc70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqnegq_s64, addr 0x634c46c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqnegq_s8, addr 0x633fb90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqnegs_s32, addr 0x634c514, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqnegs_s32(int32_t  a0) ;

/// @brief Method vqrdmlah_lane_s16, addr 0x63509c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlah_lane_s32, addr 0x6350aa4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlah_laneq_s16, addr 0x6350a34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlah_laneq_s32, addr 0x6350b14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlah_s16, addr 0x6350804, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqrdmlah_s32, addr 0x635083c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqrdmlahh_lane_s16, addr 0x6350e24, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlahh_lane_s16(int16_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlahh_laneq_s16, addr 0x6350e5c, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlahh_laneq_s16(int16_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlahh_s16, addr 0x6350d44, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlahh_s16(int16_t  a0, int16_t  a1, int16_t  a2) ;

/// @brief Method vqrdmlahq_lane_s16, addr 0x63509fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlahq_lane_s32, addr 0x6350adc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlahq_laneq_s16, addr 0x6350a6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlahq_laneq_s32, addr 0x6350b4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlahq_s16, addr 0x6350874, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqrdmlahq_s32, addr 0x63508ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqrdmlahs_lane_s32, addr 0x6350e94, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmlahs_lane_s32(int32_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlahs_s32, addr 0x6350d7c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmlahs_s32(int32_t  a0, int32_t  a1, int32_t  a2) ;

/// @brief Method vqrdmlsh_lane_s16, addr 0x6350b84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlsh_lane_s32, addr 0x6350c64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlsh_laneq_s16, addr 0x6350bf4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlsh_laneq_s32, addr 0x6350cd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlsh_s16, addr 0x63508e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqrdmlsh_s32, addr 0x635091c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqrdmlshh_lane_s16, addr 0x6350ecc, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlshh_lane_s16(int16_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlshh_laneq_s16, addr 0x6350f04, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlshh_laneq_s16(int16_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlshh_s16, addr 0x6350db4, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlshh_s16(int16_t  a0, int16_t  a1, int16_t  a2) ;

/// @brief Method vqrdmlshq_lane_s16, addr 0x6350bbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlshq_lane_s32, addr 0x6350c9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlshq_laneq_s16, addr 0x6350c2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlshq_laneq_s32, addr 0x6350d0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlshq_s16, addr 0x6350954, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqrdmlshq_s32, addr 0x635098c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqrdmlshs_lane_s32, addr 0x6350f3c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmlshs_lane_s32(int32_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlshs_s32, addr 0x6350dec, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmlshs_s32(int32_t  a0, int32_t  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_lane_s16, addr 0x633eea8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_lane_s32, addr 0x633ef18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_laneq_s16, addr 0x634bcc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_laneq_s32, addr 0x634bd34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_n_s16, addr 0x633edc8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vqrdmulh_n_s32, addr 0x633ee38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqrdmulh_s16, addr 0x6337b10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrdmulh_s32, addr 0x6337b80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrdmulhh_lane_s16, addr 0x634bc54, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmulhh_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulhh_laneq_s16, addr 0x634bda4, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmulhh_laneq_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulhh_s16, addr 0x6343de8, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmulhh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqrdmulhq_lane_s16, addr 0x633eee0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulhq_lane_s32, addr 0x633ef50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulhq_laneq_s16, addr 0x634bcfc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulhq_laneq_s32, addr 0x634bd6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulhq_n_s16, addr 0x633ee00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vqrdmulhq_n_s32, addr 0x633ee70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrdmulhq_s16, addr 0x6337b48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrdmulhq_s32, addr 0x6337bb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrdmulhs_lane_s32, addr 0x634bc8c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmulhs_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulhs_laneq_s32, addr 0x634bddc, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmulhs_laneq_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulhs_s32, addr 0x6343e20, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmulhs_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqrshl_s16, addr 0x633b610, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_s32, addr 0x633b680, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_s64, addr 0x633b6f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_s8, addr 0x633b5a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_u16, addr 0x633b7d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_u32, addr 0x633b840, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_u64, addr 0x633b8b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_u8, addr 0x633b760, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshlb_s8, addr 0x63471a8, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqrshlb_s8(int8_t  a0, int8_t  a1) ;

/// @brief Method vqrshlb_u8, addr 0x6347288, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqrshlb_u8(uint8_t  a0, int8_t  a1) ;

/// @brief Method vqrshld_s64, addr 0x6347250, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqrshld_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vqrshld_u64, addr 0x6347330, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqrshld_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vqrshlh_s16, addr 0x63471e0, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrshlh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqrshlh_u16, addr 0x63472c0, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqrshlh_u16(uint16_t  a0, int16_t  a1) ;

/// @brief Method vqrshlq_s16, addr 0x633b648, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_s32, addr 0x633b6b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_s64, addr 0x633b728, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_s8, addr 0x633b5d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_u16, addr 0x633b808, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_u32, addr 0x633b878, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_u64, addr 0x633b8e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_u8, addr 0x633b798, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshls_s32, addr 0x6347218, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrshls_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqrshls_u32, addr 0x63472f8, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqrshls_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqrshrn_high_n_s16, addr 0x6348050, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_s32, addr 0x6348088, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_s64, addr 0x63480c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_u16, addr 0x63480f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_u32, addr 0x6348130, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_u64, addr 0x6348168, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_n_s16, addr 0x633cc20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_s32, addr 0x633cc58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_s64, addr 0x633cc90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_u16, addr 0x633ccc8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_u32, addr 0x633cd00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_u64, addr 0x633cd38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrnd_n_s64, addr 0x6347f70, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrshrnd_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqrshrnd_n_u64, addr 0x6348018, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqrshrnd_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vqrshrnh_n_s16, addr 0x6347f00, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqrshrnh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqrshrnh_n_u16, addr 0x6347fa8, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqrshrnh_n_u16(uint16_t  a0, int32_t  a1) ;

/// @brief Method vqrshrns_n_s32, addr 0x6347f38, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrshrns_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqrshrns_n_u32, addr 0x6347fe0, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqrshrns_n_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqrshrun_high_n_s16, addr 0x6347a68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrun_high_n_s32, addr 0x6347aa0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrun_high_n_s64, addr 0x6347ad8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrun_n_s16, addr 0x633c8d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrun_n_s32, addr 0x633c910, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrun_n_s64, addr 0x633c948, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrund_n_s64, addr 0x6347a30, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqrshrund_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqrshrunh_n_s16, addr 0x63479c0, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqrshrunh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqrshruns_n_s32, addr 0x63479f8, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqrshruns_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshl_n_s16, addr 0x633c4b0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_s32, addr 0x633c4c0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_s64, addr 0x633c4d0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_s8, addr 0x633c4a0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_u16, addr 0x633c4f0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_u32, addr 0x633c500, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_u64, addr 0x633c510, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_u8, addr 0x633c4e0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_s16, addr 0x633af10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_s32, addr 0x633af80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_s64, addr 0x633aff0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_s8, addr 0x633aea0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_u16, addr 0x633b0d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_u32, addr 0x633b140, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_u64, addr 0x633b1b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_u8, addr 0x633b060, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshlb_n_s8, addr 0x6347480, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqshlb_n_s8(int8_t  a0, int32_t  a1) ;

/// @brief Method vqshlb_n_u8, addr 0x6347560, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqshlb_n_u8(uint8_t  a0, int32_t  a1) ;

/// @brief Method vqshlb_s8, addr 0x6346f78, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqshlb_s8(int8_t  a0, int8_t  a1) ;

/// @brief Method vqshlb_u8, addr 0x6347058, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqshlb_u8(uint8_t  a0, int8_t  a1) ;

/// @brief Method vqshld_n_s64, addr 0x6347528, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqshld_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqshld_n_u64, addr 0x6347608, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqshld_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vqshld_s64, addr 0x6347020, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqshld_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vqshld_u64, addr 0x6347100, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqshld_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vqshlh_n_s16, addr 0x63474b8, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqshlh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqshlh_n_u16, addr 0x6347598, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqshlh_n_u16(uint16_t  a0, int32_t  a1) ;

/// @brief Method vqshlh_s16, addr 0x6346fb0, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqshlh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqshlh_u16, addr 0x6347090, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqshlh_u16(uint16_t  a0, int16_t  a1) ;

/// @brief Method vqshlq_n_s16, addr 0x633c4b8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_s32, addr 0x633c4c8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_s64, addr 0x633c4d8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_s8, addr 0x633c4a8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_u16, addr 0x633c4f8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_u32, addr 0x633c508, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_u64, addr 0x633c518, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_u8, addr 0x633c4e8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_s16, addr 0x633af48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_s32, addr 0x633afb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_s64, addr 0x633b028, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_s8, addr 0x633aed8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_u16, addr 0x633b108, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_u32, addr 0x633b178, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_u64, addr 0x633b1e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_u8, addr 0x633b098, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshls_n_s32, addr 0x63474f0, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqshls_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshls_n_u32, addr 0x63475d0, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqshls_n_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqshls_s32, addr 0x6346fe8, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqshls_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshls_u32, addr 0x63470c8, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqshls_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqshlu_n_s16, addr 0x633c590, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshlu_n_s32, addr 0x633c600, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshlu_n_s64, addr 0x633c670, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshlu_n_s8, addr 0x633c520, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshlub_n_s8, addr 0x6347640, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqshlub_n_s8(int8_t  a0, int32_t  a1) ;

/// @brief Method vqshlud_n_s64, addr 0x63476e8, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqshlud_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqshluh_n_s16, addr 0x6347678, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqshluh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqshluq_n_s16, addr 0x633c5c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshluq_n_s32, addr 0x633c638, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshluq_n_s64, addr 0x633c6a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshluq_n_s8, addr 0x633c558, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlus_n_s32, addr 0x63476b0, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqshlus_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshrn_high_n_s16, addr 0x6347c60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_s32, addr 0x6347c98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_s64, addr 0x6347cd0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_u16, addr 0x6347d08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_u32, addr 0x6347d40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_u64, addr 0x6347d78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_n_s16, addr 0x633c980, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_s32, addr 0x633c9b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_s64, addr 0x633c9f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_u16, addr 0x633ca28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_u32, addr 0x633ca60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_u64, addr 0x633ca98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrnd_n_s64, addr 0x6347b80, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqshrnd_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqshrnd_n_u64, addr 0x6347c28, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqshrnd_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vqshrnh_n_s16, addr 0x6347b10, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqshrnh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqshrnh_n_u16, addr 0x6347bb8, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqshrnh_n_u16(uint16_t  a0, int32_t  a1) ;

/// @brief Method vqshrns_n_s32, addr 0x6347b48, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqshrns_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshrns_n_u32, addr 0x6347bf0, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqshrns_n_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqshrun_high_n_s16, addr 0x6347918, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrun_high_n_s32, addr 0x6347950, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrun_high_n_s64, addr 0x6347988, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrun_n_s16, addr 0x633c830, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrun_n_s32, addr 0x633c868, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrun_n_s64, addr 0x633c8a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrund_n_s64, addr 0x63478e0, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqshrund_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqshrunh_n_s16, addr 0x6347870, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqshrunh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqshruns_n_s32, addr 0x63478a8, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqshruns_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqsub_s16, addr 0x63386b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_s32, addr 0x6338720, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_s64, addr 0x6338790, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_s8, addr 0x6338640, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_u16, addr 0x6338870, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_u32, addr 0x63388e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_u64, addr 0x6338950, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_u8, addr 0x6338800, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsubb_s8, addr 0x63445c8, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqsubb_s8(int8_t  a0, int8_t  a1) ;

/// @brief Method vqsubb_u8, addr 0x63446a8, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqsubb_u8(uint8_t  a0, uint8_t  a1) ;

/// @brief Method vqsubd_s64, addr 0x6344670, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqsubd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vqsubd_u64, addr 0x6344750, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqsubd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vqsubh_s16, addr 0x6344600, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqsubh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqsubh_u16, addr 0x63446e0, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqsubh_u16(uint16_t  a0, uint16_t  a1) ;

/// @brief Method vqsubq_s16, addr 0x63386e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_s32, addr 0x6338758, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_s64, addr 0x63387c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_s8, addr 0x6338678, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_u16, addr 0x63388a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_u32, addr 0x6338918, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_u64, addr 0x6338988, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_u8, addr 0x6338838, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubs_s32, addr 0x6344638, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqsubs_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqsubs_u32, addr 0x6344718, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqsubs_u32(uint32_t  a0, uint32_t  a1) ;

/// @brief Method vqtbl1_s8, addr 0x634fd3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqtbl1_u8, addr 0x634fdac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqtbl1q_s8, addr 0x634fd74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqtbl1q_u8, addr 0x634fdb4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqtbx1_s8, addr 0x634fdbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqtbx1_u8, addr 0x634fe2c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqtbx1q_s8, addr 0x634fdf4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqtbx1q_u8, addr 0x634fe34, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_s16, addr 0x6342ef8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_s32, addr 0x6342f30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_s64, addr 0x6342f68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_u16, addr 0x6342fa0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_u32, addr 0x6342fa8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_u64, addr 0x6342fb0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_s16, addr 0x6337020, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_s32, addr 0x6337058, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_s64, addr 0x6337090, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_u16, addr 0x63370c8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_u32, addr 0x63370d0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_u64, addr 0x63370d8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrbit_s8, addr 0x634d224, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrbit_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrbit_u8, addr 0x634d294, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrbit_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrbitq_s8, addr 0x634d25c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrbitq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrbitq_u8, addr 0x634d29c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrbitq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrecpe_f32, addr 0x6340068, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrecpe_f64, addr 0x634c584, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrecpe_u32, addr 0x633fff8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecpe_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrecped_f64, addr 0x634c62c, size 0x38, virtual false, abstract: false, final false
static inline double_t vrecped_f64(double_t  a0) ;

/// @brief Method vrecpeq_f32, addr 0x63400a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrecpeq_f64, addr 0x634c5bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrecpeq_u32, addr 0x6340030, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrecpes_f32, addr 0x634c5f4, size 0x38, virtual false, abstract: false, final false
static inline float_t vrecpes_f32(float_t  a0) ;

/// @brief Method vrecps_f32, addr 0x63400d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecps_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrecps_f64, addr 0x634c664, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecps_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrecpsd_f64, addr 0x634c70c, size 0x38, virtual false, abstract: false, final false
static inline double_t vrecpsd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vrecpsq_f32, addr 0x6340110, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrecpsq_f64, addr 0x634c69c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrecpss_f32, addr 0x634c6d4, size 0x38, virtual false, abstract: false, final false
static inline float_t vrecpss_f32(float_t  a0, float_t  a1) ;

/// @brief Method vrecpxd_f64, addr 0x634fef4, size 0x38, virtual false, abstract: false, final false
static inline double_t vrecpxd_f64(double_t  a0) ;

/// @brief Method vrecpxs_f32, addr 0x634febc, size 0x38, virtual false, abstract: false, final false
static inline float_t vrecpxs_f32(float_t  a0) ;

/// @brief Method vrev16_s8, addr 0x6341b30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev16_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev16_u8, addr 0x6341ba0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev16_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev16q_s8, addr 0x6341b68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev16q_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev16q_u8, addr 0x6341ba8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev16q_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev32_s16, addr 0x6341aa0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev32_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev32_s8, addr 0x6341a30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev32_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev32_u16, addr 0x6341b20, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev32_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev32_u8, addr 0x6341b10, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev32_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev32q_s16, addr 0x6341ad8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev32q_s8, addr 0x6341a68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev32q_u16, addr 0x6341b28, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev32q_u8, addr 0x6341b18, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64_f32, addr 0x6341a20, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_s16, addr 0x6341910, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_s32, addr 0x6341980, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_s8, addr 0x63418a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_u16, addr 0x6341a00, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_u32, addr 0x6341a10, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_u8, addr 0x63419f0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64q_f32, addr 0x6341a28, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_s16, addr 0x6341948, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_s32, addr 0x63419b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_s8, addr 0x63418d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_u16, addr 0x6341a08, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_u32, addr 0x6341a18, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_u8, addr 0x63419f8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrhadd_s16, addr 0x63369b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_s32, addr 0x6336a20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_s8, addr 0x6336940, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_u16, addr 0x6336b00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_u32, addr 0x6336b70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_u8, addr 0x6336a90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhaddq_s16, addr 0x63369e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_s32, addr 0x6336a58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_s8, addr 0x6336978, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_u16, addr 0x6336b38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_u32, addr 0x6336ba8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_u8, addr 0x6336ac8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrnd_f32, addr 0x63496d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrnd_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrnd_f64, addr 0x6349748, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrnd_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrnda_f32, addr 0x6349a90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrnda_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrnda_f64, addr 0x6349b00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrnda_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndaq_f32, addr 0x6349ac8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndaq_f64, addr 0x6349b38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndi_f32, addr 0x6349b70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndi_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndi_f64, addr 0x6349be0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndi_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndiq_f32, addr 0x6349ba8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndiq_f64, addr 0x6349c18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndm_f32, addr 0x63498d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndm_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndm_f64, addr 0x6349940, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndm_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndmq_f32, addr 0x6349908, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndmq_f64, addr 0x6349978, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndn_f32, addr 0x63497b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndn_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndn_f64, addr 0x6349828, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndn_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndnq_f32, addr 0x63497f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndnq_f64, addr 0x6349860, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndns_f32, addr 0x6349898, size 0x38, virtual false, abstract: false, final false
static inline float_t vrndns_f32(float_t  a0) ;

/// @brief Method vrndp_f32, addr 0x63499b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndp_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndp_f64, addr 0x6349a20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndp_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndpq_f32, addr 0x63499e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndpq_f64, addr 0x6349a58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndq_f32, addr 0x6349710, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndq_f64, addr 0x6349780, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndx_f32, addr 0x6349c50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndx_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndx_f64, addr 0x6349cc0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndx_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndxq_f32, addr 0x6349c88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndxq_f64, addr 0x6349cf8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrshl_s16, addr 0x633b290, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_s32, addr 0x633b300, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_s64, addr 0x633b370, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_s8, addr 0x633b220, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_u16, addr 0x633b450, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_u32, addr 0x633b4c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_u64, addr 0x633b530, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_u8, addr 0x633b3e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshld_s64, addr 0x6347138, size 0x38, virtual false, abstract: false, final false
static inline int64_t vrshld_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vrshld_u64, addr 0x6347170, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vrshld_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vrshlq_s16, addr 0x633b2c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_s32, addr 0x633b338, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_s64, addr 0x633b3a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_s8, addr 0x633b258, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_u16, addr 0x633b488, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_u32, addr 0x633b4f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_u64, addr 0x633b568, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_u8, addr 0x633b418, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshr_n_s16, addr 0x633c030, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_s32, addr 0x633c040, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_s64, addr 0x633c050, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_s8, addr 0x633c020, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_u16, addr 0x633c070, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_u32, addr 0x633c080, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_u64, addr 0x633c090, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_u8, addr 0x633c060, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshrd_n_s64, addr 0x6347388, size 0x38, virtual false, abstract: false, final false
static inline int64_t vrshrd_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vrshrd_n_u64, addr 0x63473c0, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vrshrd_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vrshrn_high_n_s16, addr 0x6347db0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_s32, addr 0x6347de8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_s64, addr 0x6347e20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_u16, addr 0x6347e58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_u32, addr 0x6347e90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_u64, addr 0x6347ec8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_n_s16, addr 0x633cad0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_s32, addr 0x633cb08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_s64, addr 0x633cb40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_u16, addr 0x633cb78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_u32, addr 0x633cbb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_u64, addr 0x633cbe8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_s16, addr 0x633c038, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_s32, addr 0x633c048, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_s64, addr 0x633c058, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_s8, addr 0x633c028, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_u16, addr 0x633c078, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_u32, addr 0x633c088, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_u64, addr 0x633c098, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_u8, addr 0x633c068, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrsqrte_f32, addr 0x63401b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrsqrte_f64, addr 0x634c824, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrsqrte_u32, addr 0x6340148, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrsqrted_f64, addr 0x634c8cc, size 0x38, virtual false, abstract: false, final false
static inline double_t vrsqrted_f64(double_t  a0) ;

/// @brief Method vrsqrteq_f32, addr 0x63401f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrsqrteq_f64, addr 0x634c85c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrsqrteq_u32, addr 0x6340180, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrsqrtes_f32, addr 0x634c894, size 0x38, virtual false, abstract: false, final false
static inline float_t vrsqrtes_f32(float_t  a0) ;

/// @brief Method vrsqrts_f32, addr 0x6340228, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrsqrts_f64, addr 0x634c904, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrsqrtsd_f64, addr 0x634c9ac, size 0x38, virtual false, abstract: false, final false
static inline double_t vrsqrtsd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vrsqrtsq_f32, addr 0x6340260, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsqrtsq_f64, addr 0x634c93c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsqrtss_f32, addr 0x634c974, size 0x38, virtual false, abstract: false, final false
static inline float_t vrsqrtss_f32(float_t  a0, float_t  a1) ;

/// @brief Method vrsra_n_s16, addr 0x633c430, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_s32, addr 0x633c440, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_s64, addr 0x633c450, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_s8, addr 0x633c420, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_u16, addr 0x633c470, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_u32, addr 0x633c480, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_u64, addr 0x633c490, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_u8, addr 0x633c460, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsrad_n_s64, addr 0x6347410, size 0x38, virtual false, abstract: false, final false
static inline int64_t vrsrad_n_s64(int64_t  a0, int64_t  a1, int32_t  a2) ;

/// @brief Method vrsrad_n_u64, addr 0x6347448, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vrsrad_n_u64(uint64_t  a0, uint64_t  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_s16, addr 0x633c438, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_s32, addr 0x633c448, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_s64, addr 0x633c458, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_s8, addr 0x633c428, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_u16, addr 0x633c478, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_u32, addr 0x633c488, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_u64, addr 0x633c498, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_u8, addr 0x633c468, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsubhn_high_s16, addr 0x6344848, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_s32, addr 0x6344880, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_s64, addr 0x63448b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_u16, addr 0x63448f0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_u32, addr 0x63448f8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_u64, addr 0x6344900, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_s16, addr 0x6338a80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_s32, addr 0x6338ab8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_s64, addr 0x6338af0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_u16, addr 0x6338b28, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_u32, addr 0x6338b30, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_u64, addr 0x6338b38, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vset_lane_f32, addr 0x6342110, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f32(float_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_f64, addr 0x634fe7c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f64(double_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_s16, addr 0x634209c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_s32, addr 0x63420d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_s64, addr 0x634210c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s64(int64_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_s8, addr 0x6342064, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s8(int8_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_u16, addr 0x6341ff0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u16(uint16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_u32, addr 0x6342028, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u32(uint32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_u64, addr 0x6342060, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u64(uint64_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_u8, addr 0x6341fb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u8(uint8_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_f32, addr 0x6342308, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f32(float_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_f64, addr 0x634fe84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f64(double_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_s16, addr 0x6342260, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_s32, addr 0x6342298, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_s64, addr 0x63422d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s64(int64_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_s8, addr 0x6342228, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s8(int8_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_u16, addr 0x6342180, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u16(uint16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_u32, addr 0x63421b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u32(uint32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_u64, addr 0x63421f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u64(uint64_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_u8, addr 0x6342148, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u8(uint8_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsha1cq_u32, addr 0x6350084, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1cq_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha1h_u32, addr 0x635012c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vsha1h_u32(uint32_t  a0) ;

/// @brief Method vsha1mq_u32, addr 0x63500f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1mq_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha1pq_u32, addr 0x63500bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1pq_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha1su0q_u32, addr 0x6350164, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1su0q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha1su1q_u32, addr 0x635019c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1su1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsha256h2q_u32, addr 0x635020c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha256h2q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha256hq_u32, addr 0x63501d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha256hq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha256su0q_u32, addr 0x6350244, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha256su0q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsha256su1q_u32, addr 0x635027c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha256su1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vshl_n_s16, addr 0x633bd10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_s32, addr 0x633bd80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_s64, addr 0x633bdf0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_s8, addr 0x633bca0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_u16, addr 0x633bed0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_u32, addr 0x633bf40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_u64, addr 0x633bfb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_u8, addr 0x633be60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_s16, addr 0x633ab90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_s32, addr 0x633ac00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_s64, addr 0x633ac70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_s8, addr 0x633ab20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_u16, addr 0x633ad50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_u32, addr 0x633adc0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_u64, addr 0x633ae30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_u8, addr 0x633ace0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshld_n_s64, addr 0x6347378, size 0x8, virtual false, abstract: false, final false
static inline int64_t vshld_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vshld_n_u64, addr 0x6347380, size 0x8, virtual false, abstract: false, final false
static inline uint64_t vshld_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vshld_s64, addr 0x6346f08, size 0x38, virtual false, abstract: false, final false
static inline int64_t vshld_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vshld_u64, addr 0x6346f40, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vshld_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vshll_high_n_s16, addr 0x63481d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_s32, addr 0x6348210, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_s8, addr 0x63481a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_u16, addr 0x6348280, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_u32, addr 0x63482b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_u8, addr 0x6348248, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_n_s16, addr 0x633cda8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_s32, addr 0x633cde0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_s8, addr 0x633cd70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_u16, addr 0x633ce50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_u32, addr 0x633ce88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_u8, addr 0x633ce18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshlq_n_s16, addr 0x633bd48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_s32, addr 0x633bdb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_s64, addr 0x633be28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_s8, addr 0x633bcd8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_u16, addr 0x633bf08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_u32, addr 0x633bf78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_u64, addr 0x633bfe8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_u8, addr 0x633be98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_s16, addr 0x633abc8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_s32, addr 0x633ac38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_s64, addr 0x633aca8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_s8, addr 0x633ab58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_u16, addr 0x633ad88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_u32, addr 0x633adf8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_u64, addr 0x633ae68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_u8, addr 0x633ad18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshr_n_s16, addr 0x633b990, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_s32, addr 0x633ba00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_s64, addr 0x633ba70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_s8, addr 0x633b920, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_u16, addr 0x633bb50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_u32, addr 0x633bbc0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_u64, addr 0x633bc30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_u8, addr 0x633bae0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshrd_n_s64, addr 0x6347368, size 0x8, virtual false, abstract: false, final false
static inline int64_t vshrd_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vshrd_n_u64, addr 0x6347370, size 0x8, virtual false, abstract: false, final false
static inline uint64_t vshrd_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vshrn_high_n_s16, addr 0x6347720, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_s32, addr 0x6347758, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_s64, addr 0x6347790, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_u16, addr 0x63477c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_u32, addr 0x6347800, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_u64, addr 0x6347838, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_n_s16, addr 0x633c6e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_s32, addr 0x633c718, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_s64, addr 0x633c750, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_u16, addr 0x633c788, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_u32, addr 0x633c7c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_u64, addr 0x633c7f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_s16, addr 0x633b9c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_s32, addr 0x633ba38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_s64, addr 0x633baa8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_s8, addr 0x633b958, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_u16, addr 0x633bb88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_u32, addr 0x633bbf8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_u64, addr 0x633bc68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_u8, addr 0x633bb18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vsli_n_s16, addr 0x633d2b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_s32, addr 0x633d320, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_s64, addr 0x633d390, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_s8, addr 0x633d240, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_u16, addr 0x633d470, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_u32, addr 0x633d4e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_u64, addr 0x633d550, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_u8, addr 0x633d400, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vslid_n_s64, addr 0x6348360, size 0x38, virtual false, abstract: false, final false
static inline int64_t vslid_n_s64(int64_t  a0, int64_t  a1, int32_t  a2) ;

/// @brief Method vslid_n_u64, addr 0x6348398, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vslid_n_u64(uint64_t  a0, uint64_t  a1, int32_t  a2) ;

/// @brief Method vsliq_n_s16, addr 0x633d2e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_s32, addr 0x633d358, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_s64, addr 0x633d3c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_s8, addr 0x633d278, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_u16, addr 0x633d4a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_u32, addr 0x633d518, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_u64, addr 0x633d588, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_u8, addr 0x633d438, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsqadd_u16, addr 0x6342c08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsqadd_u32, addr 0x6342c78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsqadd_u64, addr 0x6342ce8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsqadd_u8, addr 0x6342b98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsqaddb_u8, addr 0x6342d58, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vsqaddb_u8(uint8_t  a0, int8_t  a1) ;

/// @brief Method vsqaddd_u64, addr 0x6342e00, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vsqaddd_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vsqaddh_u16, addr 0x6342d90, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vsqaddh_u16(uint16_t  a0, int16_t  a1) ;

/// @brief Method vsqaddq_u16, addr 0x6342c40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsqaddq_u32, addr 0x6342cb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsqaddq_u64, addr 0x6342d20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsqaddq_u8, addr 0x6342bd0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsqadds_u32, addr 0x6342dc8, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vsqadds_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vsqrt_f32, addr 0x634c744, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vsqrt_f64, addr 0x634c7b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vsqrtq_f32, addr 0x634c77c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vsqrtq_f64, addr 0x634c7ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vsra_n_s16, addr 0x633c110, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_s32, addr 0x633c180, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_s64, addr 0x633c1f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_s8, addr 0x633c0a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_u16, addr 0x633c2d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_u32, addr 0x633c340, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_u64, addr 0x633c3b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_u8, addr 0x633c260, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsrad_n_s64, addr 0x63473f8, size 0xc, virtual false, abstract: false, final false
static inline int64_t vsrad_n_s64(int64_t  a0, int64_t  a1, int32_t  a2) ;

/// @brief Method vsrad_n_u64, addr 0x6347404, size 0xc, virtual false, abstract: false, final false
static inline uint64_t vsrad_n_u64(uint64_t  a0, uint64_t  a1, int32_t  a2) ;

/// @brief Method vsraq_n_s16, addr 0x633c148, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_s32, addr 0x633c1b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_s64, addr 0x633c228, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_s8, addr 0x633c0d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_u16, addr 0x633c308, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_u32, addr 0x633c378, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_u64, addr 0x633c3e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_u8, addr 0x633c298, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsri_n_s16, addr 0x633cf30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_s32, addr 0x633cfa0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_s64, addr 0x633d010, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_s8, addr 0x633cec0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_u16, addr 0x633d0f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_u32, addr 0x633d160, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_u64, addr 0x633d1d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_u8, addr 0x633d080, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsrid_n_s64, addr 0x63482f0, size 0x38, virtual false, abstract: false, final false
static inline int64_t vsrid_n_s64(int64_t  a0, int64_t  a1, int32_t  a2) ;

/// @brief Method vsrid_n_u64, addr 0x6348328, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vsrid_n_u64(uint64_t  a0, uint64_t  a1, int32_t  a2) ;

/// @brief Method vsriq_n_s16, addr 0x633cf68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_s32, addr 0x633cfd8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_s64, addr 0x633d048, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_s8, addr 0x633cef8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_u16, addr 0x633d128, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_u32, addr 0x633d198, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_u64, addr 0x633d208, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_u8, addr 0x633d0b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vst1_f32, addr 0x63513ac, size 0x8, virtual false, abstract: false, final false
static inline void vst1_f32(float_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_f64, addr 0x63513bc, size 0x8, virtual false, abstract: false, final false
static inline void vst1_f64(double_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_s16, addr 0x635133c, size 0x8, virtual false, abstract: false, final false
static inline void vst1_s16(int16_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_s32, addr 0x635134c, size 0x8, virtual false, abstract: false, final false
static inline void vst1_s32(int32_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_s64, addr 0x635135c, size 0x8, virtual false, abstract: false, final false
static inline void vst1_s64(int64_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_s8, addr 0x635132c, size 0x8, virtual false, abstract: false, final false
static inline void vst1_s8(int8_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_u16, addr 0x635137c, size 0x8, virtual false, abstract: false, final false
static inline void vst1_u16(uint16_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_u32, addr 0x635138c, size 0x8, virtual false, abstract: false, final false
static inline void vst1_u32(uint32_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_u64, addr 0x635139c, size 0x8, virtual false, abstract: false, final false
static inline void vst1_u64(uint64_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_u8, addr 0x635136c, size 0x8, virtual false, abstract: false, final false
static inline void vst1_u8(uint8_t*  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1q_f32, addr 0x63513b4, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_f32(float_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_f64, addr 0x63513c4, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_f64(double_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_s16, addr 0x6351344, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_s16(int16_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_s32, addr 0x6351354, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_s32(int32_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_s64, addr 0x6351364, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_s64(int64_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_s8, addr 0x6351334, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_s8(int8_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_u16, addr 0x6351384, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_u16(uint16_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_u32, addr 0x6351394, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_u32(uint32_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_u64, addr 0x63513a4, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_u64(uint64_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_u8, addr 0x6351374, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_u8(uint8_t*  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsub_f32, addr 0x6338090, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_f64, addr 0x6344248, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_s16, addr 0x6337f00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_s32, addr 0x6337f70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_s64, addr 0x6337fe0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_s8, addr 0x6337e90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_u16, addr 0x6338060, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_u32, addr 0x6338070, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_u64, addr 0x6338080, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_u8, addr 0x6338050, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubd_s64, addr 0x63442b8, size 0x38, virtual false, abstract: false, final false
static inline int64_t vsubd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vsubd_u64, addr 0x63442f0, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vsubd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vsubhn_high_s16, addr 0x6344788, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_s32, addr 0x63447c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_s64, addr 0x63447f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_u16, addr 0x6344830, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_u32, addr 0x6344838, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_u64, addr 0x6344840, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_s16, addr 0x63389c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_s32, addr 0x63389f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_s64, addr 0x6338a30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_u16, addr 0x6338a68, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_u32, addr 0x6338a70, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_u64, addr 0x6338a78, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_s16, addr 0x6344360, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_s32, addr 0x6344398, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_s8, addr 0x6344328, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_u16, addr 0x6344408, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_u32, addr 0x6344440, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_u8, addr 0x63443d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_s16, addr 0x6338138, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_s32, addr 0x6338170, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_s8, addr 0x6338100, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_u16, addr 0x63381e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_u32, addr 0x6338218, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_u8, addr 0x63381a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubq_f32, addr 0x63380c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_f64, addr 0x6344280, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_s16, addr 0x6337f38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_s32, addr 0x6337fa8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_s64, addr 0x6338018, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_s8, addr 0x6337ec8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_u16, addr 0x6338068, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_u32, addr 0x6338078, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_u64, addr 0x6338088, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_u8, addr 0x6338058, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_s16, addr 0x63444b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_s32, addr 0x63444e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_s8, addr 0x6344478, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_u16, addr 0x6344558, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_u32, addr 0x6344590, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_u8, addr 0x6344520, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_s16, addr 0x6338288, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_s32, addr 0x63382c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_s8, addr 0x6338250, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_u16, addr 0x6338330, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_u32, addr 0x6338368, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_u8, addr 0x63382f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtbl1_s8, addr 0x6341bb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtbl1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtbl1_u8, addr 0x6341be8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtbl1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtbx1_s8, addr 0x6341bf0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtbx1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vtbx1_u8, addr 0x6341c28, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtbx1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vtrn1_f32, addr 0x634fb4c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_s16, addr 0x634f9fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_s32, addr 0x634fa6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_s8, addr 0x634f98c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_u16, addr 0x634fb24, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_u32, addr 0x634fb34, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_u8, addr 0x634fb14, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1q_f32, addr 0x634fb54, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_f64, addr 0x634fb5c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_s16, addr 0x634fa34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_s32, addr 0x634faa4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_s64, addr 0x634fadc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_s8, addr 0x634f9c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_u16, addr 0x634fb2c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_u32, addr 0x634fb3c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_u64, addr 0x634fb44, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_u8, addr 0x634fb1c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2_f32, addr 0x634fd24, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_s16, addr 0x634fbd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_s32, addr 0x634fc44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_s8, addr 0x634fb64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_u16, addr 0x634fcfc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_u32, addr 0x634fd0c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_u8, addr 0x634fcec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2q_f32, addr 0x634fd2c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_f64, addr 0x634fd34, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_s16, addr 0x634fc0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_s32, addr 0x634fc7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_s64, addr 0x634fcb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_s8, addr 0x634fb9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_u16, addr 0x634fd04, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_u32, addr 0x634fd14, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_u64, addr 0x634fd1c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_u8, addr 0x634fcf4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtst_s16, addr 0x6339ba0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_s32, addr 0x6339c10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_s64, addr 0x63467f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_s8, addr 0x6339b30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_u16, addr 0x6339c90, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_u32, addr 0x6339ca0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_u64, addr 0x6346868, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_u8, addr 0x6339c80, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtstd_s64, addr 0x6346878, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vtstd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vtstd_u64, addr 0x63468b0, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vtstd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vtstq_s16, addr 0x6339bd8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_s32, addr 0x6339c48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_s64, addr 0x6346830, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_s8, addr 0x6339b68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_u16, addr 0x6339c98, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_u32, addr 0x6339ca8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_u64, addr 0x6346870, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_u8, addr 0x6339c88, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqadd_s16, addr 0x6342968, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuqadd_s32, addr 0x63429d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuqadd_s64, addr 0x6342a48, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuqadd_s8, addr 0x63428f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuqaddb_s8, addr 0x6342ab8, size 0x38, virtual false, abstract: false, final false
static inline int8_t vuqaddb_s8(int8_t  a0, uint8_t  a1) ;

/// @brief Method vuqaddd_s64, addr 0x6342b60, size 0x38, virtual false, abstract: false, final false
static inline int64_t vuqaddd_s64(int64_t  a0, uint64_t  a1) ;

/// @brief Method vuqaddh_s16, addr 0x6342af0, size 0x38, virtual false, abstract: false, final false
static inline int16_t vuqaddh_s16(int16_t  a0, uint16_t  a1) ;

/// @brief Method vuqaddq_s16, addr 0x63429a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqaddq_s32, addr 0x6342a10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqaddq_s64, addr 0x6342a80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqaddq_s8, addr 0x6342930, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqadds_s32, addr 0x6342b28, size 0x38, virtual false, abstract: false, final false
static inline int32_t vuqadds_s32(int32_t  a0, uint32_t  a1) ;

/// @brief Method vuzp1_f32, addr 0x634f79c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_s16, addr 0x634f64c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_s32, addr 0x634f6bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_s8, addr 0x634f5dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_u16, addr 0x634f774, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_u32, addr 0x634f784, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_u8, addr 0x634f764, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1q_f32, addr 0x634f7a4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_f64, addr 0x634f7ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_s16, addr 0x634f684, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_s32, addr 0x634f6f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_s64, addr 0x634f72c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_s8, addr 0x634f614, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_u16, addr 0x634f77c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_u32, addr 0x634f78c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_u64, addr 0x634f794, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_u8, addr 0x634f76c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2_f32, addr 0x634f974, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_s16, addr 0x634f824, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_s32, addr 0x634f894, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_s8, addr 0x634f7b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_u16, addr 0x634f94c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_u32, addr 0x634f95c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_u8, addr 0x634f93c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2q_f32, addr 0x634f97c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_f64, addr 0x634f984, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_s16, addr 0x634f85c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_s32, addr 0x634f8cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_s64, addr 0x634f904, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_s8, addr 0x634f7ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_u16, addr 0x634f954, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_u32, addr 0x634f964, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_u64, addr 0x634f96c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_u8, addr 0x634f944, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1_f32, addr 0x634f3ec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_s16, addr 0x634f29c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_s32, addr 0x634f30c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_s8, addr 0x634f22c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_u16, addr 0x634f3c4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_u32, addr 0x634f3d4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_u8, addr 0x634f3b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1q_f32, addr 0x634f3f4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_f64, addr 0x634f3fc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_s16, addr 0x634f2d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_s32, addr 0x634f344, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_s64, addr 0x634f37c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_s8, addr 0x634f264, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_u16, addr 0x634f3cc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_u32, addr 0x634f3dc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_u64, addr 0x634f3e4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_u8, addr 0x634f3bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2_f32, addr 0x634f5c4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_s16, addr 0x634f474, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_s32, addr 0x634f4e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_s8, addr 0x634f404, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_u16, addr 0x634f59c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_u32, addr 0x634f5ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_u8, addr 0x634f58c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2q_f32, addr 0x634f5cc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_f64, addr 0x634f5d4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_s16, addr 0x634f4ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_s32, addr 0x634f51c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_s64, addr 0x634f554, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_s8, addr 0x634f43c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_u16, addr 0x634f5a4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_u32, addr 0x634f5b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_u64, addr 0x634f5bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_u8, addr 0x634f594, size 0x8, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17318};

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17319};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::Arm, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
NEED_NO_BOX(::Unity::Burst::Intrinsics::Arm);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::Arm*, "Unity.Burst.Intrinsics", "Arm");
NEED_NO_BOX(::Unity::Burst::Intrinsics::Arm_Neon);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::Arm_Neon*, "Unity.Burst.Intrinsics", "Arm/Neon");
