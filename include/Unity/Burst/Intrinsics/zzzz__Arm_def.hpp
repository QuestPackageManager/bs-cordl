#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/Arm.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
  static inline ::Unity::Burst::Intrinsics::Arm_Neon *New_ctor();

  /// @brief Method __crc32b, addr 0x452603c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t __crc32b(uint32_t a0, uint8_t a1);

  /// @brief Method __crc32cb, addr 0x452611c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t __crc32cb(uint32_t a0, uint8_t a1);

  /// @brief Method __crc32cd, addr 0x45261c4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t __crc32cd(uint32_t a0, uint64_t a1);

  /// @brief Method __crc32ch, addr 0x4526154, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t __crc32ch(uint32_t a0, uint16_t a1);

  /// @brief Method __crc32cw, addr 0x452618c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t __crc32cw(uint32_t a0, uint32_t a1);

  /// @brief Method __crc32d, addr 0x45260e4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t __crc32d(uint32_t a0, uint64_t a1);

  /// @brief Method __crc32h, addr 0x4526074, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t __crc32h(uint32_t a0, uint16_t a1);

  /// @brief Method __crc32w, addr 0x45260ac, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t __crc32w(uint32_t a0, uint32_t a1);

  /// @brief Method .ctor, addr 0x4527c78, size 0x8, virtual false, abstract:
  /// false, final false
  inline void _ctor();

  /// @brief Method get_IsNeonArmv82FeaturesSupported, addr 0x4518078, size 0x8,
  /// virtual false, abstract: false, final false
  static inline bool get_IsNeonArmv82FeaturesSupported();

  /// @brief Method get_IsNeonCryptoSupported, addr 0x4525e04, size 0x8, virtual
  /// false, abstract: false, final false
  static inline bool get_IsNeonCryptoSupported();

  /// @brief Method get_IsNeonDotProdSupported, addr 0x45262dc, size 0x8,
  /// virtual false, abstract: false, final false
  static inline bool get_IsNeonDotProdSupported();

  /// @brief Method get_IsNeonRDMASupported, addr 0x4526584, size 0x8, virtual
  /// false, abstract: false, final false
  static inline bool get_IsNeonRDMASupported();

  /// @brief Method get_IsNeonSupported, addr 0x450ba48, size 0x8, virtual
  /// false, abstract: false, final false
  static inline bool get_IsNeonSupported();

  /// @brief Method vaba_s16, addr 0x450fa40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vaba_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vaba_s32, addr 0x450fab0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vaba_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vaba_s8, addr 0x450f9d0, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vaba_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1,
          ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vaba_u16, addr 0x450fb90, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vaba_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vaba_u32, addr 0x450fc00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vaba_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vaba_u8, addr 0x450fb20, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vaba_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1,
          ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_high_s16, addr 0x451c878, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabal_high_s16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_high_s32, addr 0x451c8b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabal_high_s32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_high_s8, addr 0x451c840, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabal_high_s8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1,
                ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_high_u16, addr 0x451c920, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabal_high_u16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_high_u32, addr 0x451c958, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabal_high_u32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_high_u8, addr 0x451c8e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabal_high_u8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1,
                ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_s16, addr 0x450fca8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabal_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1,
            ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_s32, addr 0x450fce0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabal_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1,
            ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_s8, addr 0x450fc70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabal_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_u16, addr 0x450fd50, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabal_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1,
            ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_u32, addr 0x450fd88, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabal_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1,
            ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_u8, addr 0x450fd18, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabal_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabaq_s16, addr 0x450fa78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabaq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabaq_s32, addr 0x450fae8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabaq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabaq_s8, addr 0x450fa08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabaq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1,
           ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabaq_u16, addr 0x450fbc8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabaq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabaq_u32, addr 0x450fc38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabaq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabaq_u8, addr 0x450fb58, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabaq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1,
           ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabd_f32, addr 0x450f810, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vabd_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_f64, addr 0x451c610, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vabd_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_s16, addr 0x450f5e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vabd_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_s32, addr 0x450f650, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vabd_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_s8, addr 0x450f570, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vabd_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_u16, addr 0x450f730, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vabd_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_u32, addr 0x450f7a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vabd_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_u8, addr 0x450f6c0, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vabd_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdd_f64, addr 0x451c6b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vabdd_f64(double_t a0, double_t a1);

  /// @brief Method vabdl_high_s16, addr 0x451c728, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdl_high_s16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_high_s32, addr 0x451c760, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdl_high_s32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_high_s8, addr 0x451c6f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdl_high_s8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_high_u16, addr 0x451c7d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdl_high_u16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_high_u32, addr 0x451c808, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdl_high_u32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_high_u8, addr 0x451c798, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdl_high_u8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_s16, addr 0x450f8b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdl_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdl_s32, addr 0x450f8f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdl_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdl_s8, addr 0x450f880, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdl_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdl_u16, addr 0x450f960, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdl_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdl_u32, addr 0x450f998, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdl_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdl_u8, addr 0x450f928, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdl_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdq_f32, addr 0x450f848, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_f64, addr 0x451c648, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_s16, addr 0x450f618, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_s32, addr 0x450f688, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_s8, addr 0x450f5a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_u16, addr 0x450f768, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_u32, addr 0x450f7d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_u8, addr 0x450f6f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabdq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabds_f32, addr 0x451c680, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vabds_f32(float_t a0, float_t a1);

  /// @brief Method vabs_f32, addr 0x45153d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vabs_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabs_f64, addr 0x4521e84, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vabs_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabs_s16, addr 0x45152f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vabs_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabs_s32, addr 0x4515360, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vabs_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabs_s64, addr 0x4521ddc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vabs_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabs_s8, addr 0x4515280, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vabs_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabsd_s64, addr 0x4521e14, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vabsd_s64(int64_t a0);

  /// @brief Method vabsq_f32, addr 0x4515408, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabsq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vabsq_f64, addr 0x4521ebc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabsq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vabsq_s16, addr 0x4515328, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vabsq_s32, addr 0x4515398, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vabsq_s64, addr 0x4521e4c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabsq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vabsq_s8, addr 0x45152b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vabsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vadd_f32, addr 0x450bc50, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vadd_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_f64, addr 0x4518080, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vadd_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_s16, addr 0x450bac0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vadd_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_s32, addr 0x450bb30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vadd_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_s64, addr 0x450bba0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vadd_s64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_s8, addr 0x450ba50, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vadd_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_u16, addr 0x450bc20, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vadd_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_u32, addr 0x450bc30, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vadd_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_u64, addr 0x450bc40, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vadd_u64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_u8, addr 0x450bc10, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vadd_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddd_s64, addr 0x45180f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vaddd_s64(int64_t a0, int64_t a1);

  /// @brief Method vaddd_u64, addr 0x4518128, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vaddd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vaddhn_high_s16, addr 0x4518b00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddhn_high_s16(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_high_s32, addr 0x4518b38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddhn_high_s32(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_high_s64, addr 0x4518b70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddhn_high_s64(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_high_u16, addr 0x4518ba8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddhn_high_u16(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_high_u32, addr 0x4518bb0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddhn_high_u32(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_high_u64, addr 0x4518bb8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddhn_high_u64(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_s16, addr 0x450c820, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vaddhn_s16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddhn_s32, addr 0x450c858, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vaddhn_s32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddhn_s64, addr 0x450c890, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vaddhn_s64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddhn_u16, addr 0x450c8c8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vaddhn_u16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddhn_u32, addr 0x450c8d0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vaddhn_u32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddhn_u64, addr 0x450c8d8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vaddhn_u64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_s16, addr 0x4518198, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddl_high_s16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_s32, addr 0x45181d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddl_high_s32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_s8, addr 0x4518160, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddl_high_s8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_u16, addr 0x4518240, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddl_high_u16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_u32, addr 0x4518278, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddl_high_u32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_u8, addr 0x4518208, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddl_high_u8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_s16, addr 0x450bcf8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddl_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddl_s32, addr 0x450bd30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddl_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddl_s8, addr 0x450bcc0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddl_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddl_u16, addr 0x450bda0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddl_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddl_u32, addr 0x450bdd8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddl_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddl_u8, addr 0x450bd68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddl_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddlv_s16, addr 0x4524550, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vaddlv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlv_s32, addr 0x45245c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vaddlv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlv_s8, addr 0x45244e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vaddlv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlv_u16, addr 0x45246a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vaddlv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlv_u32, addr 0x4524710, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vaddlv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlv_u8, addr 0x4524630, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vaddlv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlvq_s16, addr 0x4524588, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vaddlvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddlvq_s32, addr 0x45245f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vaddlvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddlvq_s8, addr 0x4524518, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vaddlvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddlvq_u16, addr 0x45246d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vaddlvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddlvq_u32, addr 0x4524748, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vaddlvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddlvq_u8, addr 0x4524668, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vaddlvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddq_f32, addr 0x450bc88, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_f64, addr 0x45180b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_s16, addr 0x450baf8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_s32, addr 0x450bb68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_s64, addr 0x450bbd8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddq_s64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_s8, addr 0x450ba88, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_u16, addr 0x450bc28, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_u32, addr 0x450bc38, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_u64, addr 0x450bc48, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddq_u64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_u8, addr 0x450bc18, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddv_f32, addr 0x4524438, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vaddv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_s16, addr 0x4524198, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vaddv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_s32, addr 0x4524208, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vaddv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_s8, addr 0x4524128, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vaddv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_u16, addr 0x4524320, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vaddv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_u32, addr 0x4524390, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vaddv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_u8, addr 0x45242b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vaddv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddvq_f32, addr 0x4524470, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vaddvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_f64, addr 0x45244a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vaddvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_s16, addr 0x45241d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vaddvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_s32, addr 0x4524240, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vaddvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_s64, addr 0x4524278, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vaddvq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_s8, addr 0x4524160, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vaddvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_u16, addr 0x4524358, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vaddvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_u32, addr 0x45243c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vaddvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_u64, addr 0x4524400, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vaddvq_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_u8, addr 0x45242e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vaddvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddw_high_s16, addr 0x45182e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddw_high_s16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_high_s32, addr 0x4518320, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddw_high_s32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_high_s8, addr 0x45182b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddw_high_s8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_high_u16, addr 0x4518390, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddw_high_u16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_high_u32, addr 0x45183c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddw_high_u32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_high_u8, addr 0x4518358, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddw_high_u8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_s16, addr 0x450be48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddw_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddw_s32, addr 0x450be80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddw_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddw_s8, addr 0x450be10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddw_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddw_u16, addr 0x450bef0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddw_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddw_u32, addr 0x450bf28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddw_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddw_u8, addr 0x450beb8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaddw_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaesdq_u8, addr 0x4526234, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaesdq_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaeseq_u8, addr 0x45261fc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaeseq_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaesimcq_u8, addr 0x45262a4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaesimcq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaesmcq_u8, addr 0x452626c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vaesmcq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vand_s16, addr 0x4515fc0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vand_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_s32, addr 0x4515fd0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vand_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_s64, addr 0x4515fe0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vand_s64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_s8, addr 0x4515f50, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vand_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_u16, addr 0x4516000, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vand_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_u32, addr 0x4516010, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vand_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_u64, addr 0x4516020, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vand_u64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_u8, addr 0x4515ff0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vand_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vandq_s16, addr 0x4515fc8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vandq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_s32, addr 0x4515fd8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vandq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_s64, addr 0x4515fe8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vandq_s64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_s8, addr 0x4515f88, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vandq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_u16, addr 0x4516008, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vandq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_u32, addr 0x4516018, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vandq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_u64, addr 0x4516028, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vandq_u64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_u8, addr 0x4515ff8, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vandq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbic_s16, addr 0x4516260, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbic_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_s32, addr 0x4516270, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbic_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_s64, addr 0x4516280, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbic_s64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_s8, addr 0x45161f0, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbic_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_u16, addr 0x45162a0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbic_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_u32, addr 0x45162b0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbic_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_u64, addr 0x45162c0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbic_u64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_u8, addr 0x4516290, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbic_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbicq_s16, addr 0x4516268, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbicq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_s32, addr 0x4516278, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbicq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_s64, addr 0x4516288, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbicq_s64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_s8, addr 0x4516228, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbicq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_u16, addr 0x45162a8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbicq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_u32, addr 0x45162b8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbicq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_u64, addr 0x45162c8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbicq_u64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_u8, addr 0x4516298, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbicq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbsl_f32, addr 0x4516490, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbsl_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_f64, addr 0x452270c, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbsl_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_s16, addr 0x4516420, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbsl_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_s32, addr 0x4516430, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbsl_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_s64, addr 0x4516440, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbsl_s64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_s8, addr 0x45163b0, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbsl_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1,
          ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_u16, addr 0x4516460, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbsl_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_u32, addr 0x4516470, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbsl_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_u64, addr 0x4516480, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbsl_u64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_u8, addr 0x4516450, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vbsl_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1,
          ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbslq_f32, addr 0x4516498, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbslq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_f64, addr 0x4522714, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbslq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_s16, addr 0x4516428, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbslq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_s32, addr 0x4516438, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbslq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_s64, addr 0x4516448, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbslq_s64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_s8, addr 0x45163e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbslq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1,
           ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_u16, addr 0x4516468, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbslq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_u32, addr 0x4516478, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbslq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_u64, addr 0x4516488, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbslq_u64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_u8, addr 0x4516458, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vbslq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1,
           ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vcage_f32, addr 0x450f230, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcage_f32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcage_f64, addr 0x451c1a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcage_f64(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcaged_f64, addr 0x451c248, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcaged_f64(double_t a0, double_t a1);

  /// @brief Method vcageq_f32, addr 0x450f268, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcageq_f32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcageq_f64, addr 0x451c1d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcageq_f64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcages_f32, addr 0x451c210, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vcages_f32(float_t a0, float_t a1);

  /// @brief Method vcagt_f32, addr 0x450f310, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcagt_f32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcagt_f64, addr 0x451c360, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcagt_f64(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcagtd_f64, addr 0x451c408, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcagtd_f64(double_t a0, double_t a1);

  /// @brief Method vcagtq_f32, addr 0x450f348, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcagtq_f32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcagtq_f64, addr 0x451c398, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcagtq_f64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcagts_f32, addr 0x451c3d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vcagts_f32(float_t a0, float_t a1);

  /// @brief Method vcale_f32, addr 0x450f2a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcale_f32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcale_f64, addr 0x451c280, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcale_f64(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcaled_f64, addr 0x451c328, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcaled_f64(double_t a0, double_t a1);

  /// @brief Method vcaleq_f32, addr 0x450f2d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcaleq_f32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcaleq_f64, addr 0x451c2b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcaleq_f64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcales_f32, addr 0x451c2f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vcales_f32(float_t a0, float_t a1);

  /// @brief Method vcalt_f32, addr 0x450f380, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcalt_f32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcalt_f64, addr 0x451c440, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcalt_f64(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcaltd_f64, addr 0x451c4e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcaltd_f64(double_t a0, double_t a1);

  /// @brief Method vcaltq_f32, addr 0x450f3b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcaltq_f32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcaltq_f64, addr 0x451c478, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcaltq_f64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcalts_f32, addr 0x451c4b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vcalts_f32(float_t a0, float_t a1);

  /// @brief Method vceq_f32, addr 0x450e580, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceq_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_f64, addr 0x451a6b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceq_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_s16, addr 0x450e470, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceq_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_s32, addr 0x450e4e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceq_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_s64, addr 0x451a630, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceq_s64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_s8, addr 0x450e400, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceq_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_u16, addr 0x450e560, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceq_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_u32, addr 0x450e570, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceq_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_u64, addr 0x451a6a0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceq_u64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_u8, addr 0x450e550, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceq_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceqd_f64, addr 0x451a7c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vceqd_f64(double_t a0, double_t a1);

  /// @brief Method vceqd_s64, addr 0x451a720, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vceqd_s64(int64_t a0, int64_t a1);

  /// @brief Method vceqd_u64, addr 0x451a758, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vceqd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vceqq_f32, addr 0x450e5b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_f64, addr 0x451a6e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_s16, addr 0x450e4a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_s32, addr 0x450e518, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_s64, addr 0x451a668, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqq_s64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_s8, addr 0x450e438, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_u16, addr 0x450e568, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_u32, addr 0x450e578, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_u64, addr 0x451a6a8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqq_u64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_u8, addr 0x450e558, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqs_f32, addr 0x451a790, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vceqs_f32(float_t a0, float_t a1);

  /// @brief Method vceqz_f32, addr 0x451a980, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceqz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_f64, addr 0x451aa70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceqz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_s16, addr 0x451a870, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceqz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_s32, addr 0x451a8e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceqz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_s64, addr 0x451a9f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceqz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_s8, addr 0x451a800, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceqz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_u16, addr 0x451a960, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceqz_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_u32, addr 0x451a970, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceqz_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_u64, addr 0x451aa60, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceqz_u64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_u8, addr 0x451a950, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vceqz_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqzd_f64, addr 0x451ab88, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vceqzd_f64(double_t a0);

  /// @brief Method vceqzd_s64, addr 0x451aae0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vceqzd_s64(int64_t a0);

  /// @brief Method vceqzd_u64, addr 0x451ab18, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vceqzd_u64(uint64_t a0);

  /// @brief Method vceqzq_f32, addr 0x451a9b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_f64, addr 0x451aaa8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_s16, addr 0x451a8a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_s32, addr 0x451a918, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_s64, addr 0x451aa28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_s8, addr 0x451a838, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_u16, addr 0x451a968, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqzq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_u32, addr 0x451a978, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqzq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_u64, addr 0x451aa68, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqzq_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_u8, addr 0x451a958, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vceqzq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzs_f32, addr 0x451ab50, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vceqzs_f32(float_t a0);

  /// @brief Method vcge_f32, addr 0x450e890, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcge_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_f64, addr 0x451aca0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcge_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_s16, addr 0x450e660, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcge_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_s32, addr 0x450e6d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcge_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_s64, addr 0x451abc0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcge_s64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_s8, addr 0x450e5f0, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcge_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_u16, addr 0x450e7b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcge_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_u32, addr 0x450e820, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcge_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_u64, addr 0x451ac30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcge_u64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_u8, addr 0x450e740, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcge_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcged_f64, addr 0x451adb8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcged_f64(double_t a0, double_t a1);

  /// @brief Method vcged_s64, addr 0x451ad10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcged_s64(int64_t a0, int64_t a1);

  /// @brief Method vcged_u64, addr 0x451ad48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcged_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vcgeq_f32, addr 0x450e8c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgeq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_f64, addr 0x451acd8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgeq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_s16, addr 0x450e698, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgeq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_s32, addr 0x450e708, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgeq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_s64, addr 0x451abf8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgeq_s64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_s8, addr 0x450e628, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgeq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_u16, addr 0x450e7e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgeq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_u32, addr 0x450e858, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgeq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_u64, addr 0x451ac68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgeq_u64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_u8, addr 0x450e778, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgeq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcges_f32, addr 0x451ad80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vcges_f32(float_t a0, float_t a1);

  /// @brief Method vcgez_f32, addr 0x451afb0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgez_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgez_f64, addr 0x451b020, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgez_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgez_s16, addr 0x451ae60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgez_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgez_s32, addr 0x451aed0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgez_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgez_s64, addr 0x451af40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgez_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgez_s8, addr 0x451adf0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgez_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgezd_f64, addr 0x451b100, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcgezd_f64(double_t a0);

  /// @brief Method vcgezd_s64, addr 0x451b090, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcgezd_s64(int64_t a0);

  /// @brief Method vcgezq_f32, addr 0x451afe8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgezq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezq_f64, addr 0x451b058, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgezq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezq_s16, addr 0x451ae98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgezq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezq_s32, addr 0x451af08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgezq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezq_s64, addr 0x451af78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgezq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezq_s8, addr 0x451ae28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgezq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezs_f32, addr 0x451b0c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vcgezs_f32(float_t a0);

  /// @brief Method vcgt_f32, addr 0x450eeb0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgt_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_f64, addr 0x451b790, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgt_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_s16, addr 0x450ec80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgt_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_s32, addr 0x450ecf0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgt_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_s64, addr 0x451b6b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgt_s64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_s8, addr 0x450ec10, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgt_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_u16, addr 0x450edd0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgt_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_u32, addr 0x450ee40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgt_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_u64, addr 0x451b720, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgt_u64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_u8, addr 0x450ed60, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgt_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgtd_f64, addr 0x451b8a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcgtd_f64(double_t a0, double_t a1);

  /// @brief Method vcgtd_s64, addr 0x451b800, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcgtd_s64(int64_t a0, int64_t a1);

  /// @brief Method vcgtd_u64, addr 0x451b838, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcgtd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vcgtq_f32, addr 0x450eee8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgtq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_f64, addr 0x451b7c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgtq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_s16, addr 0x450ecb8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgtq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_s32, addr 0x450ed28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgtq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_s64, addr 0x451b6e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgtq_s64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_s8, addr 0x450ec48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgtq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_u16, addr 0x450ee08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgtq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_u32, addr 0x450ee78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgtq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_u64, addr 0x451b758, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgtq_u64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_u8, addr 0x450ed98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgtq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgts_f32, addr 0x451b870, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vcgts_f32(float_t a0, float_t a1);

  /// @brief Method vcgtz_f32, addr 0x451baa0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgtz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtz_f64, addr 0x451bb10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgtz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtz_s16, addr 0x451b950, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgtz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtz_s32, addr 0x451b9c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgtz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtz_s64, addr 0x451ba30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgtz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtz_s8, addr 0x451b8e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcgtz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtzd_f64, addr 0x451bbf0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcgtzd_f64(double_t a0);

  /// @brief Method vcgtzd_s64, addr 0x451bb80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcgtzd_s64(int64_t a0);

  /// @brief Method vcgtzq_f32, addr 0x451bad8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgtzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzq_f64, addr 0x451bb48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgtzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzq_s16, addr 0x451b988, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgtzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzq_s32, addr 0x451b9f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgtzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzq_s64, addr 0x451ba68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgtzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzq_s8, addr 0x451b918, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcgtzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzs_f32, addr 0x451bbb8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vcgtzs_f32(float_t a0);

  /// @brief Method vcle_f32, addr 0x450eba0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcle_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_f64, addr 0x451b218, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcle_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_s16, addr 0x450e970, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcle_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_s32, addr 0x450e9e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcle_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_s64, addr 0x451b138, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcle_s64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_s8, addr 0x450e900, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcle_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_u16, addr 0x450eac0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcle_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_u32, addr 0x450eb30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcle_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_u64, addr 0x451b1a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcle_u64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_u8, addr 0x450ea50, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcle_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcled_f64, addr 0x451b330, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcled_f64(double_t a0, double_t a1);

  /// @brief Method vcled_s64, addr 0x451b288, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcled_s64(int64_t a0, int64_t a1);

  /// @brief Method vcled_u64, addr 0x451b2c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcled_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vcleq_f32, addr 0x450ebd8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcleq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_f64, addr 0x451b250, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcleq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_s16, addr 0x450e9a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcleq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_s32, addr 0x450ea18, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcleq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_s64, addr 0x451b170, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcleq_s64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_s8, addr 0x450e938, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcleq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_u16, addr 0x450eaf8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcleq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_u32, addr 0x450eb68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcleq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_u64, addr 0x451b1e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcleq_u64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_u8, addr 0x450ea88, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcleq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcles_f32, addr 0x451b2f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vcles_f32(float_t a0, float_t a1);

  /// @brief Method vclez_f32, addr 0x451b528, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclez_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclez_f64, addr 0x451b598, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclez_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclez_s16, addr 0x451b3d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclez_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclez_s32, addr 0x451b448, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclez_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclez_s64, addr 0x451b4b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclez_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclez_s8, addr 0x451b368, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclez_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclezd_f64, addr 0x451b678, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vclezd_f64(double_t a0);

  /// @brief Method vclezd_s64, addr 0x451b608, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vclezd_s64(int64_t a0);

  /// @brief Method vclezq_f32, addr 0x451b560, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vclezq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezq_f64, addr 0x451b5d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vclezq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezq_s16, addr 0x451b410, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vclezq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezq_s32, addr 0x451b480, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vclezq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezq_s64, addr 0x451b4f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vclezq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezq_s8, addr 0x451b3a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vclezq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezs_f32, addr 0x451b640, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vclezs_f32(float_t a0);

  /// @brief Method vcls_s16, addr 0x4515910, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcls_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcls_s32, addr 0x4515980, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcls_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcls_s8, addr 0x45158a0, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcls_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclsq_s16, addr 0x4515948, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vclsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclsq_s32, addr 0x45159b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vclsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclsq_s8, addr 0x45158d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vclsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclt_f32, addr 0x450f1c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclt_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_f64, addr 0x451bd08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclt_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_s16, addr 0x450ef90, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclt_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_s32, addr 0x450f000, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclt_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_s64, addr 0x451bc28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclt_s64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_s8, addr 0x450ef20, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclt_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_u16, addr 0x450f0e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclt_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_u32, addr 0x450f150, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclt_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_u64, addr 0x451bc98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclt_u64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_u8, addr 0x450f070, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclt_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcltd_f64, addr 0x451be20, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcltd_f64(double_t a0, double_t a1);

  /// @brief Method vcltd_s64, addr 0x451bd78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcltd_s64(int64_t a0, int64_t a1);

  /// @brief Method vcltd_u64, addr 0x451bdb0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcltd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vcltq_f32, addr 0x450f1f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcltq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_f64, addr 0x451bd40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcltq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_s16, addr 0x450efc8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcltq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_s32, addr 0x450f038, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcltq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_s64, addr 0x451bc60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcltq_s64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_s8, addr 0x450ef58, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcltq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_u16, addr 0x450f118, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcltq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_u32, addr 0x450f188, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcltq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_u64, addr 0x451bcd0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcltq_u64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_u8, addr 0x450f0a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcltq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vclts_f32, addr 0x451bde8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vclts_f32(float_t a0, float_t a1);

  /// @brief Method vcltz_f32, addr 0x451c018, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcltz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltz_f64, addr 0x451c088, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcltz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltz_s16, addr 0x451bec8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcltz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltz_s32, addr 0x451bf38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcltz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltz_s64, addr 0x451bfa8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcltz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltz_s8, addr 0x451be58, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcltz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltzd_f64, addr 0x451c168, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcltzd_f64(double_t a0);

  /// @brief Method vcltzd_s64, addr 0x451c0f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcltzd_s64(int64_t a0);

  /// @brief Method vcltzq_f32, addr 0x451c050, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcltzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzq_f64, addr 0x451c0c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcltzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzq_s16, addr 0x451bf00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcltzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzq_s32, addr 0x451bf70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcltzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzq_s64, addr 0x451bfe0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcltzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzq_s8, addr 0x451be90, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcltzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzs_f32, addr 0x451c130, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vcltzs_f32(float_t a0);

  /// @brief Method vclz_s16, addr 0x4515a60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclz_s32, addr 0x4515ad0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclz_s8, addr 0x45159f0, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclz_u16, addr 0x4515b50, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclz_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclz_u32, addr 0x4515b60, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclz_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclz_u8, addr 0x4515b40, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vclz_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclzq_s16, addr 0x4515a98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vclzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclzq_s32, addr 0x4515b08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vclzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclzq_s8, addr 0x4515a28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vclzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclzq_u16, addr 0x4515b58, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vclzq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclzq_u32, addr 0x4515b68, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vclzq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclzq_u8, addr 0x4515b48, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vclzq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcnt_s8, addr 0x4515b70, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcnt_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcnt_u8, addr 0x4515be0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcnt_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcntq_s8, addr 0x4515ba8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcntq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcntq_u8, addr 0x4515be8, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcntq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcombine_f16, addr 0x45279a8, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcombine_f16(::Unity::Burst::Intrinsics::v64 a0,
               ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_f32, addr 0x45279f8, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcombine_f32(::Unity::Burst::Intrinsics::v64 a0,
               ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_f64, addr 0x4527a48, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcombine_f64(::Unity::Burst::Intrinsics::v64 a0,
               ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_s16, addr 0x4527778, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcombine_s16(::Unity::Burst::Intrinsics::v64 a0,
               ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_s32, addr 0x45277c8, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcombine_s32(::Unity::Burst::Intrinsics::v64 a0,
               ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_s64, addr 0x4527818, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcombine_s64(::Unity::Burst::Intrinsics::v64 a0,
               ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_s8, addr 0x4527728, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcombine_s8(::Unity::Burst::Intrinsics::v64 a0,
              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_u16, addr 0x45278b8, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcombine_u16(::Unity::Burst::Intrinsics::v64 a0,
               ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_u32, addr 0x4527908, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcombine_u32(::Unity::Burst::Intrinsics::v64 a0,
               ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_u64, addr 0x4527958, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcombine_u64(::Unity::Burst::Intrinsics::v64 a0,
               ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_u8, addr 0x4527868, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcombine_u8(::Unity::Burst::Intrinsics::v64 a0,
              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcopy_lane_f32, addr 0x4522a3c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_f64, addr 0x4522aac, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_s16, addr 0x452278c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_s32, addr 0x45227fc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_s64, addr 0x452286c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_s8, addr 0x452271c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_u16, addr 0x452291c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_u32, addr 0x452298c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_u64, addr 0x45229fc, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_u8, addr 0x45228ac, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_laneq_f32, addr 0x4522e6c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_f64, addr 0x4522edc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_s16, addr 0x4522b5c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_s32, addr 0x4522bcc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_s64, addr 0x4522c3c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_laneq_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_s8, addr 0x4522aec, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_laneq_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_u16, addr 0x4522d1c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_u32, addr 0x4522d8c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_u64, addr 0x4522dfc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_laneq_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_u8, addr 0x4522cac, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcopy_laneq_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_lane_f32, addr 0x4522a74, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_f64, addr 0x4522ab4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_s16, addr 0x45227c4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_s32, addr 0x4522834, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_s64, addr 0x4522874, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_lane_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_s8, addr 0x4522754, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_lane_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_u16, addr 0x4522954, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_u32, addr 0x45229c4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_u64, addr 0x4522a04, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_lane_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_u8, addr 0x45228e4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_lane_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_f32, addr 0x4522ea4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                   ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_f64, addr 0x4522f14, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                   ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_s16, addr 0x4522b94, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                   ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_s32, addr 0x4522c04, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                   ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_s64, addr 0x4522c74, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                   ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_s8, addr 0x4522b24, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_u16, addr 0x4522d54, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                   ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_u32, addr 0x4522dc4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                   ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_u64, addr 0x4522e34, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                   ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_u8, addr 0x4522ce4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcopyq_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcreate_f16, addr 0x4526e1c, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f16(uint64_t a0);

  /// @brief Method vcreate_f32, addr 0x4526e40, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f32(uint64_t a0);

  /// @brief Method vcreate_f64, addr 0x4526e64, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f64(uint64_t a0);

  /// @brief Method vcreate_s16, addr 0x4526d20, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s16(uint64_t a0);

  /// @brief Method vcreate_s32, addr 0x4526d44, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s32(uint64_t a0);

  /// @brief Method vcreate_s64, addr 0x4526d68, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s64(uint64_t a0);

  /// @brief Method vcreate_s8, addr 0x4526cfc, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s8(uint64_t a0);

  /// @brief Method vcreate_u16, addr 0x4526db0, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u16(uint64_t a0);

  /// @brief Method vcreate_u32, addr 0x4526dd4, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u32(uint64_t a0);

  /// @brief Method vcreate_u64, addr 0x4526df8, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u64(uint64_t a0);

  /// @brief Method vcreate_u8, addr 0x4526d8c, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u8(uint64_t a0);

  /// @brief Method vcvt_f32_f64, addr 0x451f278, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvt_f32_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvt_f32_s32, addr 0x4513378, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvt_f32_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_f32_u32, addr 0x45133e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvt_f32_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_f64_f32, addr 0x451f2e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvt_f64_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_f64_s64, addr 0x451ef68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvt_f64_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_f64_u64, addr 0x451efd8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvt_f64_u64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_high_f32_f64, addr 0x451f2b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvt_high_f32_f64(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcvt_high_f64_f32, addr 0x451f320, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvt_high_f64_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvt_n_f32_s32, addr 0x4513458, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvt_n_f32_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_f32_u32, addr 0x45134c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvt_n_f32_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_f64_s64, addr 0x451f128, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvt_n_f64_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_f64_u64, addr 0x451f198, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvt_n_f64_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_s32_f32, addr 0x4513298, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvt_n_s32_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_s64_f64, addr 0x451eda8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvt_n_s64_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_u32_f32, addr 0x4513308, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvt_n_u32_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_u64_f64, addr 0x451ee18, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvt_n_u64_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_s32_f32, addr 0x45131b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvt_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_s64_f64, addr 0x451e6a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvt_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_u32_f32, addr 0x4513228, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvt_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_u64_f64, addr 0x451e718, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvt_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvta_s32_f32, addr 0x451e398, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvta_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvta_s64_f64, addr 0x451ea28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvta_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvta_u32_f32, addr 0x451e408, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvta_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvta_u64_f64, addr 0x451ea98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvta_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtad_s64_f64, addr 0x451ecc8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vcvtad_s64_f64(double_t a0);

  /// @brief Method vcvtad_u64_f64, addr 0x451ed00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcvtad_u64_f64(double_t a0);

  /// @brief Method vcvtaq_s32_f32, addr 0x451e3d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtaq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtaq_s64_f64, addr 0x451ea60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtaq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtaq_u32_f32, addr 0x451e440, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtaq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtaq_u64_f64, addr 0x451ead0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtaq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtas_s32_f32, addr 0x451e638, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vcvtas_s32_f32(float_t a0);

  /// @brief Method vcvtas_u32_f32, addr 0x451e670, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vcvtas_u32_f32(float_t a0);

  /// @brief Method vcvtd_f64_s64, addr 0x451f048, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vcvtd_f64_s64(int64_t a0);

  /// @brief Method vcvtd_f64_u64, addr 0x451f080, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vcvtd_f64_u64(uint64_t a0);

  /// @brief Method vcvtd_n_f64_s64, addr 0x451f208, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vcvtd_n_f64_s64(int64_t a0, int32_t a1);

  /// @brief Method vcvtd_n_f64_u64, addr 0x451f240, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vcvtd_n_f64_u64(uint64_t a0, int32_t a1);

  /// @brief Method vcvtd_n_s64_f64, addr 0x451ee88, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vcvtd_n_s64_f64(double_t a0, int32_t a1);

  /// @brief Method vcvtd_n_u64_f64, addr 0x451eec0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcvtd_n_u64_f64(double_t a0, int32_t a1);

  /// @brief Method vcvtd_s64_f64, addr 0x451eb08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vcvtd_s64_f64(double_t a0);

  /// @brief Method vcvtd_u64_f64, addr 0x451eb40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcvtd_u64_f64(double_t a0);

  /// @brief Method vcvtm_s32_f32, addr 0x451e1d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvtm_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtm_s64_f64, addr 0x451e868, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvtm_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtm_u32_f32, addr 0x451e248, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvtm_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtm_u64_f64, addr 0x451e8d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvtm_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtmd_s64_f64, addr 0x451ebe8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vcvtmd_s64_f64(double_t a0);

  /// @brief Method vcvtmd_u64_f64, addr 0x451ec20, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcvtmd_u64_f64(double_t a0);

  /// @brief Method vcvtmq_s32_f32, addr 0x451e210, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtmq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtmq_s64_f64, addr 0x451e8a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtmq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtmq_u32_f32, addr 0x451e280, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtmq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtmq_u64_f64, addr 0x451e910, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtmq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtms_s32_f32, addr 0x451e558, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vcvtms_s32_f32(float_t a0);

  /// @brief Method vcvtms_u32_f32, addr 0x451e590, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vcvtms_u32_f32(float_t a0);

  /// @brief Method vcvtn_s32_f32, addr 0x451e0f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvtn_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtn_s64_f64, addr 0x451e788, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvtn_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtn_u32_f32, addr 0x451e168, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvtn_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtn_u64_f64, addr 0x451e7f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvtn_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtnd_s64_f64, addr 0x451eb78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vcvtnd_s64_f64(double_t a0);

  /// @brief Method vcvtnd_u64_f64, addr 0x451ebb0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcvtnd_u64_f64(double_t a0);

  /// @brief Method vcvtnq_s32_f32, addr 0x451e130, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtnq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtnq_s64_f64, addr 0x451e7c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtnq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtnq_u32_f32, addr 0x451e1a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtnq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtnq_u64_f64, addr 0x451e830, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtnq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtns_s32_f32, addr 0x451e4e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vcvtns_s32_f32(float_t a0);

  /// @brief Method vcvtns_u32_f32, addr 0x451e520, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vcvtns_u32_f32(float_t a0);

  /// @brief Method vcvtp_s32_f32, addr 0x451e2b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvtp_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtp_s64_f64, addr 0x451e948, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvtp_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtp_u32_f32, addr 0x451e328, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvtp_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtp_u64_f64, addr 0x451e9b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvtp_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtpd_s64_f64, addr 0x451ec58, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vcvtpd_s64_f64(double_t a0);

  /// @brief Method vcvtpd_u64_f64, addr 0x451ec90, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vcvtpd_u64_f64(double_t a0);

  /// @brief Method vcvtpq_s32_f32, addr 0x451e2f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtpq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtpq_s64_f64, addr 0x451e980, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtpq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtpq_u32_f32, addr 0x451e360, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtpq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtpq_u64_f64, addr 0x451e9f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtpq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtps_s32_f32, addr 0x451e5c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vcvtps_s32_f32(float_t a0);

  /// @brief Method vcvtps_u32_f32, addr 0x451e600, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vcvtps_u32_f32(float_t a0);

  /// @brief Method vcvtq_f32_s32, addr 0x45133b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtq_f32_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_f32_u32, addr 0x4513420, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtq_f32_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_f64_s64, addr 0x451efa0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtq_f64_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_f64_u64, addr 0x451f010, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtq_f64_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_n_f32_s32, addr 0x4513490, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtq_n_f32_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_f32_u32, addr 0x4513500, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtq_n_f32_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_f64_s64, addr 0x451f160, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtq_n_f64_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_f64_u64, addr 0x451f1d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtq_n_f64_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_s32_f32, addr 0x45132d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtq_n_s32_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_s64_f64, addr 0x451ede0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtq_n_s64_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_u32_f32, addr 0x4513340, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtq_n_u32_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_u64_f64, addr 0x451ee50, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtq_n_u64_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_s32_f32, addr 0x45131f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_s64_f64, addr 0x451e6e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_u32_f32, addr 0x4513260, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_u64_f64, addr 0x451e750, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvts_f32_s32, addr 0x451eef8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vcvts_f32_s32(int32_t a0);

  /// @brief Method vcvts_f32_u32, addr 0x451ef30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vcvts_f32_u32(uint32_t a0);

  /// @brief Method vcvts_n_f32_s32, addr 0x451f0b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vcvts_n_f32_s32(int32_t a0, int32_t a1);

  /// @brief Method vcvts_n_f32_u32, addr 0x451f0f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vcvts_n_f32_u32(uint32_t a0, int32_t a1);

  /// @brief Method vcvts_n_s32_f32, addr 0x451ed38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vcvts_n_s32_f32(float_t a0, int32_t a1);

  /// @brief Method vcvts_n_u32_f32, addr 0x451ed70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vcvts_n_u32_f32(float_t a0, int32_t a1);

  /// @brief Method vcvts_s32_f32, addr 0x451e478, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vcvts_s32_f32(float_t a0);

  /// @brief Method vcvts_u32_f32, addr 0x451e4b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vcvts_u32_f32(float_t a0);

  /// @brief Method vcvtx_f32_f64, addr 0x451f358, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vcvtx_f32_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtx_high_f32_f64, addr 0x451f3c8, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vcvtx_high_f32_f64(::Unity::Burst::Intrinsics::v64 a0,
                     ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcvtxd_f32_f64, addr 0x451f390, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vcvtxd_f32_f64(double_t a0);

  /// @brief Method vdiv_f32, addr 0x4519080, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdiv_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vdiv_f64, addr 0x45190f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdiv_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vdivq_f32, addr 0x45190b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdivq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vdivq_f64, addr 0x4519128, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdivq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vdot_lane_s32, addr 0x45263fc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdot_lane_s32(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vdot_lane_u32, addr 0x45263c4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdot_lane_u32(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vdot_laneq_s32, addr 0x45264dc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdot_laneq_s32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vdot_laneq_u32, addr 0x45264a4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdot_laneq_u32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vdot_s32, addr 0x452631c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdot_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vdot_u32, addr 0x45262e4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdot_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vdotq_lane_s32, addr 0x452654c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdotq_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vdotq_lane_u32, addr 0x4526514, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdotq_lane_u32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vdotq_laneq_s32, addr 0x452646c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdotq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vdotq_laneq_u32, addr 0x4526434, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdotq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vdotq_s32, addr 0x452638c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdotq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vdotq_u32, addr 0x4526354, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdotq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vdup_lane_f32, addr 0x45167e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_f64, addr 0x4522fcc, size 0x4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_s16, addr 0x4516510, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_s32, addr 0x4516580, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_s64, addr 0x45165f0, size 0x4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_s8, addr 0x45164a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_u16, addr 0x45166b4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_u32, addr 0x4516724, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_u64, addr 0x4516794, size 0x4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_u8, addr 0x4516644, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_laneq_f32, addr 0x45233a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_f64, addr 0x4523410, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_s16, addr 0x4523090, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_s32, addr 0x4523100, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_s64, addr 0x4523170, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_s8, addr 0x4523020, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_u16, addr 0x4523250, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_u32, addr 0x45232c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_u64, addr 0x4523330, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_u8, addr 0x45231e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vdup_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_n_f32, addr 0x4527208, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f32(float_t a0);

  /// @brief Method vdup_n_f64, addr 0x4527270, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f64(double_t a0);

  /// @brief Method vdup_n_s16, addr 0x4526ef8, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s16(int16_t a0);

  /// @brief Method vdup_n_s32, addr 0x4526f68, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s32(int32_t a0);

  /// @brief Method vdup_n_s64, addr 0x4526fd8, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s64(int64_t a0);

  /// @brief Method vdup_n_s8, addr 0x4526e88, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s8(int8_t a0);

  /// @brief Method vdup_n_u16, addr 0x45270b8, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u16(uint16_t a0);

  /// @brief Method vdup_n_u32, addr 0x4527128, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u32(uint32_t a0);

  /// @brief Method vdup_n_u64, addr 0x4527198, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u64(uint64_t a0);

  /// @brief Method vdup_n_u8, addr 0x4527048, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u8(uint8_t a0);

  /// @brief Method vdupb_lane_s8, addr 0x4523480, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vdupb_lane_s8(::Unity::Burst::Intrinsics::v64 a0,
                                     int32_t a1);

  /// @brief Method vdupb_lane_u8, addr 0x452352c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vdupb_lane_u8(::Unity::Burst::Intrinsics::v64 a0,
                                      int32_t a1);

  /// @brief Method vdupb_laneq_s8, addr 0x4523618, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vdupb_laneq_s8(::Unity::Burst::Intrinsics::v128 a0,
                                      int32_t a1);

  /// @brief Method vdupb_laneq_u8, addr 0x45236f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vdupb_laneq_u8(::Unity::Burst::Intrinsics::v128 a0,
                                       int32_t a1);

  /// @brief Method vdupd_lane_f64, addr 0x4523610, size 0x8, virtual false,
  /// abstract: false, final false
  static inline double_t vdupd_lane_f64(::Unity::Burst::Intrinsics::v64 a0,
                                        int32_t a1);

  /// @brief Method vdupd_lane_s64, addr 0x4523528, size 0x4, virtual false,
  /// abstract: false, final false
  static inline int64_t vdupd_lane_s64(::Unity::Burst::Intrinsics::v64 a0,
                                       int32_t a1);

  /// @brief Method vdupd_lane_u64, addr 0x45235d4, size 0x4, virtual false,
  /// abstract: false, final false
  static inline uint64_t vdupd_lane_u64(::Unity::Burst::Intrinsics::v64 a0,
                                        int32_t a1);

  /// @brief Method vdupd_laneq_f64, addr 0x4523810, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vdupd_laneq_f64(::Unity::Burst::Intrinsics::v128 a0,
                                         int32_t a1);

  /// @brief Method vdupd_laneq_s64, addr 0x45236c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vdupd_laneq_s64(::Unity::Burst::Intrinsics::v128 a0,
                                        int32_t a1);

  /// @brief Method vdupd_laneq_u64, addr 0x45237a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vdupd_laneq_u64(::Unity::Burst::Intrinsics::v128 a0,
                                         int32_t a1);

  /// @brief Method vduph_lane_s16, addr 0x45234b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vduph_lane_s16(::Unity::Burst::Intrinsics::v64 a0,
                                       int32_t a1);

  /// @brief Method vduph_lane_u16, addr 0x4523564, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vduph_lane_u16(::Unity::Burst::Intrinsics::v64 a0,
                                        int32_t a1);

  /// @brief Method vduph_laneq_s16, addr 0x4523650, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vduph_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                                        int32_t a1);

  /// @brief Method vduph_laneq_u16, addr 0x4523730, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vduph_laneq_u16(::Unity::Burst::Intrinsics::v128 a0,
                                         int32_t a1);

  /// @brief Method vdupq_lane_f32, addr 0x4516820, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_f64, addr 0x4522fd0, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_s16, addr 0x4516548, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_s32, addr 0x45165b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_s64, addr 0x45165f4, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_s8, addr 0x45164d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_u16, addr 0x45166ec, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_u32, addr 0x451675c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_u64, addr 0x4516798, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_u8, addr 0x451667c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_laneq_f32, addr 0x45233d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_f64, addr 0x4523448, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_s16, addr 0x45230c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_s32, addr 0x4523138, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_s64, addr 0x45231a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_s8, addr 0x4523058, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_u16, addr 0x4523288, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_u32, addr 0x45232f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_u64, addr 0x4523368, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_u8, addr 0x4523218, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vdupq_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_n_f32, addr 0x4527228, size 0x48, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f32(float_t a0);

  /// @brief Method vdupq_n_f64, addr 0x4527290, size 0x48, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f64(double_t a0);

  /// @brief Method vdupq_n_s16, addr 0x4526f1c, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s16(int16_t a0);

  /// @brief Method vdupq_n_s32, addr 0x4526f8c, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s32(int32_t a0);

  /// @brief Method vdupq_n_s64, addr 0x4526ffc, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s64(int64_t a0);

  /// @brief Method vdupq_n_s8, addr 0x4526eac, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s8(int8_t a0);

  /// @brief Method vdupq_n_u16, addr 0x45270dc, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u16(uint16_t a0);

  /// @brief Method vdupq_n_u32, addr 0x452714c, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u32(uint32_t a0);

  /// @brief Method vdupq_n_u64, addr 0x45271bc, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u64(uint64_t a0);

  /// @brief Method vdupq_n_u8, addr 0x452706c, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u8(uint8_t a0);

  /// @brief Method vdups_lane_f32, addr 0x45235d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vdups_lane_f32(::Unity::Burst::Intrinsics::v64 a0,
                                       int32_t a1);

  /// @brief Method vdups_lane_s32, addr 0x45234f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vdups_lane_s32(::Unity::Burst::Intrinsics::v64 a0,
                                       int32_t a1);

  /// @brief Method vdups_lane_u32, addr 0x452359c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vdups_lane_u32(::Unity::Burst::Intrinsics::v64 a0,
                                        int32_t a1);

  /// @brief Method vdups_laneq_f32, addr 0x45237d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vdups_laneq_f32(::Unity::Burst::Intrinsics::v128 a0,
                                        int32_t a1);

  /// @brief Method vdups_laneq_s32, addr 0x4523688, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vdups_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                                        int32_t a1);

  /// @brief Method vdups_laneq_u32, addr 0x4523768, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vdups_laneq_u32(::Unity::Burst::Intrinsics::v128 a0,
                                         int32_t a1);

  /// @brief Method veor_s16, addr 0x4516180, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  veor_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_s32, addr 0x4516190, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  veor_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_s64, addr 0x45161a0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  veor_s64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_s8, addr 0x4516110, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  veor_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_u16, addr 0x45161c0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  veor_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_u32, addr 0x45161d0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  veor_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_u64, addr 0x45161e0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  veor_u64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_u8, addr 0x45161b0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  veor_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veorq_s16, addr 0x4516188, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  veorq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_s32, addr 0x4516198, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  veorq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_s64, addr 0x45161a8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  veorq_s64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_s8, addr 0x4516148, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  veorq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_u16, addr 0x45161c8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  veorq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_u32, addr 0x45161d8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  veorq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_u64, addr 0x45161e8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  veorq_u64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_u8, addr 0x45161b8, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  veorq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vext_f32, addr 0x45174b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vext_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_f64, addr 0x4524f60, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vext_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_s16, addr 0x4517210, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vext_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_s32, addr 0x4517280, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vext_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_s64, addr 0x45172f0, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vext_s64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_s8, addr 0x45171a0, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vext_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_u16, addr 0x451739c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vext_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_u32, addr 0x451740c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vext_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_u64, addr 0x451747c, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vext_u64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_u8, addr 0x451732c, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vext_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vextq_f32, addr 0x45174f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vextq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_f64, addr 0x4524f64, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vextq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_s16, addr 0x4517248, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vextq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_s32, addr 0x45172b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vextq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_s64, addr 0x45172f4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vextq_s64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_s8, addr 0x45171d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vextq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_u16, addr 0x45173d4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vextq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_u32, addr 0x4517444, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vextq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_u64, addr 0x4517480, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vextq_u64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_u8, addr 0x4517364, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vextq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vfma_f32, addr 0x450d210, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vfma_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vfma_f64, addr 0x45194e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vfma_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vfma_lane_f32, addr 0x4519550, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vfma_lane_f32(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfma_lane_f64, addr 0x45195c0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vfma_lane_f64(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfma_laneq_f32, addr 0x4519670, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vfma_laneq_f32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfma_laneq_f64, addr 0x45196e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vfma_laneq_f64(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfma_n_f32, addr 0x4518008, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vfma_n_f32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// @brief Method vfma_n_f64, addr 0x4525d24, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vfma_n_f64(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, double_t a2);

  /// @brief Method vfmad_lane_f64, addr 0x4519638, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vfmad_lane_f64(double_t a0, double_t a1,
                                        ::Unity::Burst::Intrinsics::v64 a2,
                                        int32_t a3);

  /// @brief Method vfmad_laneq_f64, addr 0x4519788, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vfmad_laneq_f64(double_t a0, double_t a1,
                                         ::Unity::Burst::Intrinsics::v128 a2,
                                         int32_t a3);

  /// @brief Method vfmaq_f32, addr 0x450d248, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vfmaq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vfmaq_f64, addr 0x4519518, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vfmaq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vfmaq_lane_f32, addr 0x4519588, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vfmaq_lane_f32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmaq_lane_f64, addr 0x45195c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vfmaq_lane_f64(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmaq_laneq_f32, addr 0x45196a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vfmaq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfmaq_laneq_f64, addr 0x4519718, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vfmaq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfmaq_n_f32, addr 0x4518040, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vfmaq_n_f32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// @brief Method vfmaq_n_f64, addr 0x4525d5c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vfmaq_n_f64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, double_t a2);

  /// @brief Method vfmas_lane_f32, addr 0x4519600, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vfmas_lane_f32(float_t a0, float_t a1,
                                       ::Unity::Burst::Intrinsics::v64 a2,
                                       int32_t a3);

  /// @brief Method vfmas_laneq_f32, addr 0x4519750, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vfmas_laneq_f32(float_t a0, float_t a1,
                                        ::Unity::Burst::Intrinsics::v128 a2,
                                        int32_t a3);

  /// @brief Method vfms_f32, addr 0x450d280, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vfms_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vfms_f64, addr 0x45197c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vfms_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vfms_lane_f32, addr 0x4519830, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vfms_lane_f32(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfms_lane_f64, addr 0x45198a0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vfms_lane_f64(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfms_laneq_f32, addr 0x4519950, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vfms_laneq_f32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfms_laneq_f64, addr 0x45199c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vfms_laneq_f64(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfms_n_f32, addr 0x4525cb4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vfms_n_f32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// @brief Method vfms_n_f64, addr 0x4525d94, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vfms_n_f64(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, double_t a2);

  /// @brief Method vfmsd_lane_f64, addr 0x4519918, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vfmsd_lane_f64(double_t a0, double_t a1,
                                        ::Unity::Burst::Intrinsics::v64 a2,
                                        int32_t a3);

  /// @brief Method vfmsd_laneq_f64, addr 0x4519a68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vfmsd_laneq_f64(double_t a0, double_t a1,
                                         ::Unity::Burst::Intrinsics::v128 a2,
                                         int32_t a3);

  /// @brief Method vfmsq_f32, addr 0x450d2b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vfmsq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vfmsq_f64, addr 0x45197f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vfmsq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vfmsq_lane_f32, addr 0x4519868, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vfmsq_lane_f32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmsq_lane_f64, addr 0x45198a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vfmsq_lane_f64(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmsq_laneq_f32, addr 0x4519988, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vfmsq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfmsq_laneq_f64, addr 0x45199f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vfmsq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfmsq_n_f32, addr 0x4525cec, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vfmsq_n_f32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// @brief Method vfmsq_n_f64, addr 0x4525dcc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vfmsq_n_f64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, double_t a2);

  /// @brief Method vfmss_lane_f32, addr 0x45198e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vfmss_lane_f32(float_t a0, float_t a1,
                                       ::Unity::Burst::Intrinsics::v64 a2,
                                       int32_t a3);

  /// @brief Method vfmss_laneq_f32, addr 0x4519a30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vfmss_laneq_f32(float_t a0, float_t a1,
                                        ::Unity::Burst::Intrinsics::v128 a2,
                                        int32_t a3);

  /// @brief Method vget_high_f32, addr 0x4527ad8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_high_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_f64, addr 0x4527ae0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_high_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_s16, addr 0x4527aa0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_high_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_s32, addr 0x4527aa8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_high_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_s64, addr 0x4527ab0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_high_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_s8, addr 0x4527a98, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_high_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_u16, addr 0x4527ac0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_high_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_u32, addr 0x4527ac8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_high_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_u64, addr 0x4527ad0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_high_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_u8, addr 0x4527ab8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_high_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_lane_f32, addr 0x4517a10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vget_lane_f32(::Unity::Burst::Intrinsics::v64 a0,
                                      int32_t a1);

  /// @brief Method vget_lane_f64, addr 0x4525bac, size 0x8, virtual false,
  /// abstract: false, final false
  static inline double_t vget_lane_f64(::Unity::Burst::Intrinsics::v64 a0,
                                       int32_t a1);

  /// @brief Method vget_lane_s16, addr 0x451799c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vget_lane_s16(::Unity::Burst::Intrinsics::v64 a0,
                                      int32_t a1);

  /// @brief Method vget_lane_s32, addr 0x45179d4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vget_lane_s32(::Unity::Burst::Intrinsics::v64 a0,
                                      int32_t a1);

  /// @brief Method vget_lane_s64, addr 0x4517a0c, size 0x4, virtual false,
  /// abstract: false, final false
  static inline int64_t vget_lane_s64(::Unity::Burst::Intrinsics::v64 a0,
                                      int32_t a1);

  /// @brief Method vget_lane_s8, addr 0x4517964, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vget_lane_s8(::Unity::Burst::Intrinsics::v64 a0,
                                    int32_t a1);

  /// @brief Method vget_lane_u16, addr 0x45178f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vget_lane_u16(::Unity::Burst::Intrinsics::v64 a0,
                                       int32_t a1);

  /// @brief Method vget_lane_u32, addr 0x4517928, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vget_lane_u32(::Unity::Burst::Intrinsics::v64 a0,
                                       int32_t a1);

  /// @brief Method vget_lane_u64, addr 0x4517960, size 0x4, virtual false,
  /// abstract: false, final false
  static inline uint64_t vget_lane_u64(::Unity::Burst::Intrinsics::v64 a0,
                                       int32_t a1);

  /// @brief Method vget_lane_u8, addr 0x45178b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vget_lane_u8(::Unity::Burst::Intrinsics::v64 a0,
                                     int32_t a1);

  /// @brief Method vget_low_f32, addr 0x4527b08, size 0x4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_low_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_f64, addr 0x4527b0c, size 0x4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_low_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_s16, addr 0x4527aec, size 0x4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_low_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_s32, addr 0x4527af0, size 0x4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_low_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_s64, addr 0x4527af4, size 0x4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_low_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_s8, addr 0x4527ae8, size 0x4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_low_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_u16, addr 0x4527afc, size 0x4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_low_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_u32, addr 0x4527b00, size 0x4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_low_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_u64, addr 0x4527b04, size 0x4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_low_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_u8, addr 0x4527af8, size 0x4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vget_low_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vgetq_lane_f32, addr 0x4517c08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vgetq_lane_f32(::Unity::Burst::Intrinsics::v128 a0,
                                       int32_t a1);

  /// @brief Method vgetq_lane_f64, addr 0x4525bb4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vgetq_lane_f64(::Unity::Burst::Intrinsics::v128 a0,
                                        int32_t a1);

  /// @brief Method vgetq_lane_s16, addr 0x4517b60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vgetq_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                                       int32_t a1);

  /// @brief Method vgetq_lane_s32, addr 0x4517b98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vgetq_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                                       int32_t a1);

  /// @brief Method vgetq_lane_s64, addr 0x4517bd0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vgetq_lane_s64(::Unity::Burst::Intrinsics::v128 a0,
                                       int32_t a1);

  /// @brief Method vgetq_lane_s8, addr 0x4517b28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vgetq_lane_s8(::Unity::Burst::Intrinsics::v128 a0,
                                     int32_t a1);

  /// @brief Method vgetq_lane_u16, addr 0x4517a80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vgetq_lane_u16(::Unity::Burst::Intrinsics::v128 a0,
                                        int32_t a1);

  /// @brief Method vgetq_lane_u32, addr 0x4517ab8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vgetq_lane_u32(::Unity::Burst::Intrinsics::v128 a0,
                                        int32_t a1);

  /// @brief Method vgetq_lane_u64, addr 0x4517af0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vgetq_lane_u64(::Unity::Burst::Intrinsics::v128 a0,
                                        int32_t a1);

  /// @brief Method vgetq_lane_u8, addr 0x4517a48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vgetq_lane_u8(::Unity::Burst::Intrinsics::v128 a0,
                                      int32_t a1);

  /// @brief Method vhadd_s16, addr 0x450bfd0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vhadd_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhadd_s32, addr 0x450c040, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vhadd_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhadd_s8, addr 0x450bf60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vhadd_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhadd_u16, addr 0x450c120, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vhadd_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhadd_u32, addr 0x450c190, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vhadd_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhadd_u8, addr 0x450c0b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vhadd_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhaddq_s16, addr 0x450c008, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vhaddq_s16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhaddq_s32, addr 0x450c078, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vhaddq_s32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhaddq_s8, addr 0x450bf98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vhaddq_s8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhaddq_u16, addr 0x450c158, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vhaddq_u16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhaddq_u32, addr 0x450c1c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vhaddq_u32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhaddq_u8, addr 0x450c0e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vhaddq_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsub_s16, addr 0x450dcd0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vhsub_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsub_s32, addr 0x450dd40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vhsub_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsub_s8, addr 0x450dc60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vhsub_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsub_u16, addr 0x450de20, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vhsub_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsub_u32, addr 0x450de90, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vhsub_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsub_u8, addr 0x450ddb0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vhsub_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsubq_s16, addr 0x450dd08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vhsubq_s16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsubq_s32, addr 0x450dd78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vhsubq_s32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsubq_s8, addr 0x450dc98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vhsubq_s8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsubq_u16, addr 0x450de58, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vhsubq_u16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsubq_u32, addr 0x450dec8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vhsubq_u32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsubq_u8, addr 0x450dde8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vhsubq_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vld1_f32, addr 0x4527bb0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vld1_f32(::cordl_internals::Ptr<float_t> a0);

  /// @brief Method vld1_f64, addr 0x4527bc4, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vld1_f64(::cordl_internals::Ptr<double_t> a0);

  /// @brief Method vld1_s16, addr 0x4527b24, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vld1_s16(::cordl_internals::Ptr<int16_t> a0);

  /// @brief Method vld1_s32, addr 0x4527b38, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vld1_s32(::cordl_internals::Ptr<int32_t> a0);

  /// @brief Method vld1_s64, addr 0x4527b4c, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vld1_s64(::cordl_internals::Ptr<int64_t> a0);

  /// @brief Method vld1_s8, addr 0x4527b10, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vld1_s8(::cordl_internals::Ptr<int8_t> a0);

  /// @brief Method vld1_u16, addr 0x4527b74, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vld1_u16(::cordl_internals::Ptr<uint16_t> a0);

  /// @brief Method vld1_u32, addr 0x4527b88, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vld1_u32(::cordl_internals::Ptr<uint32_t> a0);

  /// @brief Method vld1_u64, addr 0x4527b9c, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vld1_u64(::cordl_internals::Ptr<uint64_t> a0);

  /// @brief Method vld1_u8, addr 0x4527b60, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vld1_u8(::cordl_internals::Ptr<uint8_t> a0);

  /// @brief Method vld1q_f32, addr 0x4527bb8, size 0xc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vld1q_f32(::cordl_internals::Ptr<float_t> a0);

  /// @brief Method vld1q_f64, addr 0x4527bcc, size 0xc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vld1q_f64(::cordl_internals::Ptr<double_t> a0);

  /// @brief Method vld1q_s16, addr 0x4527b2c, size 0xc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vld1q_s16(::cordl_internals::Ptr<int16_t> a0);

  /// @brief Method vld1q_s32, addr 0x4527b40, size 0xc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vld1q_s32(::cordl_internals::Ptr<int32_t> a0);

  /// @brief Method vld1q_s64, addr 0x4527b54, size 0xc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vld1q_s64(::cordl_internals::Ptr<int64_t> a0);

  /// @brief Method vld1q_s8, addr 0x4527b18, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vld1q_s8(::cordl_internals::Ptr<int8_t> a0);

  /// @brief Method vld1q_u16, addr 0x4527b7c, size 0xc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vld1q_u16(::cordl_internals::Ptr<uint16_t> a0);

  /// @brief Method vld1q_u32, addr 0x4527b90, size 0xc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vld1q_u32(::cordl_internals::Ptr<uint32_t> a0);

  /// @brief Method vld1q_u64, addr 0x4527ba4, size 0xc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vld1q_u64(::cordl_internals::Ptr<uint64_t> a0);

  /// @brief Method vld1q_u8, addr 0x4527b68, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vld1q_u8(::cordl_internals::Ptr<uint8_t> a0);

  /// @brief Method vmax_f32, addr 0x4510060, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmax_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_f64, addr 0x451c990, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmax_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_s16, addr 0x450fe30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmax_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_s32, addr 0x450fea0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmax_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_s8, addr 0x450fdc0, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmax_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_u16, addr 0x450ff80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmax_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_u32, addr 0x450fff0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmax_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_u8, addr 0x450ff10, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmax_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmaxnm_f32, addr 0x451ca70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmaxnm_f32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmaxnm_f64, addr 0x451cae0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmaxnm_f64(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmaxnmq_f32, addr 0x451caa8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmaxnmq_f32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxnmq_f64, addr 0x451cb18, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmaxnmq_f64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxnmv_f32, addr 0x4524e10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vmaxnmv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxnmvq_f32, addr 0x4524e48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vmaxnmvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxnmvq_f64, addr 0x4524e80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vmaxnmvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxq_f32, addr 0x4510098, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmaxq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_f64, addr 0x451c9c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmaxq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_s16, addr 0x450fe68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmaxq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_s32, addr 0x450fed8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmaxq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_s8, addr 0x450fdf8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmaxq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_u16, addr 0x450ffb8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmaxq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_u32, addr 0x4510028, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmaxq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_u8, addr 0x450ff48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmaxq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxv_f32, addr 0x4524a20, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vmaxv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_s16, addr 0x45247f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vmaxv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_s32, addr 0x4524860, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vmaxv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_s8, addr 0x4524780, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vmaxv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_u16, addr 0x4524940, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vmaxv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_u32, addr 0x45249b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vmaxv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_u8, addr 0x45248d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vmaxv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxvq_f32, addr 0x4524a58, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vmaxvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_f64, addr 0x4524a90, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vmaxvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_s16, addr 0x4524828, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vmaxvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_s32, addr 0x4524898, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vmaxvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_s8, addr 0x45247b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vmaxvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_u16, addr 0x4524978, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vmaxvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_u32, addr 0x45249e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vmaxvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_u8, addr 0x4524908, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vmaxvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmin_f32, addr 0x4510370, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmin_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_f64, addr 0x451ca00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmin_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_s16, addr 0x4510140, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmin_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_s32, addr 0x45101b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmin_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_s8, addr 0x45100d0, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmin_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_u16, addr 0x4510290, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmin_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_u32, addr 0x4510300, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmin_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_u8, addr 0x4510220, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmin_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vminnm_f32, addr 0x451cb50, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vminnm_f32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vminnm_f64, addr 0x451cbc0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vminnm_f64(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vminnmq_f32, addr 0x451cb88, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vminnmq_f32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminnmq_f64, addr 0x451cbf8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vminnmq_f64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminnmv_f32, addr 0x4524eb8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vminnmv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminnmvq_f32, addr 0x4524ef0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vminnmvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminnmvq_f64, addr 0x4524f28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vminnmvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminq_f32, addr 0x45103a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vminq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_f64, addr 0x451ca38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vminq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_s16, addr 0x4510178, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vminq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_s32, addr 0x45101e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vminq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_s8, addr 0x4510108, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vminq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_u16, addr 0x45102c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vminq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_u32, addr 0x4510338, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vminq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_u8, addr 0x4510258, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vminq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminv_f32, addr 0x4524d68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vminv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_s16, addr 0x4524b38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vminv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_s32, addr 0x4524ba8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vminv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_s8, addr 0x4524ac8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vminv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_u16, addr 0x4524c88, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vminv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_u32, addr 0x4524cf8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vminv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_u8, addr 0x4524c18, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vminv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminvq_f32, addr 0x4524da0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vminvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_f64, addr 0x4524dd8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vminvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_s16, addr 0x4524b70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vminvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_s32, addr 0x4524be0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vminvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_s8, addr 0x4524b00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vminvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_u16, addr 0x4524cc0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vminvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_u32, addr 0x4524d30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vminvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_u8, addr 0x4524c50, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vminvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmla_f32, addr 0x450cd10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_f64, addr 0x4519160, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_lane_f32, addr 0x4513bc0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_lane_f32(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmla_lane_s16, addr 0x4513a00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_lane_s16(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmla_lane_s32, addr 0x4513a70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_lane_s32(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmla_lane_u16, addr 0x4513ae0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_lane_u16(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmla_lane_u32, addr 0x4513b50, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_lane_u32(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmla_laneq_f32, addr 0x4520158, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_laneq_f32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmla_laneq_s16, addr 0x451ff98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_laneq_s16(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmla_laneq_s32, addr 0x4520008, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_laneq_s32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmla_laneq_u16, addr 0x4520078, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_laneq_u16(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmla_laneq_u32, addr 0x45200e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_laneq_u32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmla_n_f32, addr 0x4514d40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_n_f32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// @brief Method vmla_n_s16, addr 0x4514b80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_n_s16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vmla_n_s32, addr 0x4514bf0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_n_s32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmla_n_u16, addr 0x4514c60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_n_u16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// @brief Method vmla_n_u32, addr 0x4514cd0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_n_u32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// @brief Method vmla_s16, addr 0x450cc00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_s32, addr 0x450cc70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_s8, addr 0x450cb90, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1,
          ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_u16, addr 0x450ccf0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_u32, addr 0x450cd00, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_u8, addr 0x450cce0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmla_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1,
          ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_high_lane_s16, addr 0x45201c8, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v128 a1,
                      ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_high_lane_s32, addr 0x4520200, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v128 a1,
                      ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_high_lane_u16, addr 0x4520238, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v128 a1,
                      ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_high_lane_u32, addr 0x4520270, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v128 a1,
                      ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_high_laneq_s16, addr 0x4520388, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                       ::Unity::Burst::Intrinsics::v128 a1,
                       ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_high_laneq_s32, addr 0x45203c0, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                       ::Unity::Burst::Intrinsics::v128 a1,
                       ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_high_laneq_u16, addr 0x45203f8, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0,
                       ::Unity::Burst::Intrinsics::v128 a1,
                       ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_high_laneq_u32, addr 0x4520430, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0,
                       ::Unity::Burst::Intrinsics::v128 a1,
                       ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_high_n_s16, addr 0x4521b3c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_n_s16(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vmlal_high_n_s32, addr 0x4521b74, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_n_s32(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmlal_high_n_u16, addr 0x4521bac, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_n_u16(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// @brief Method vmlal_high_n_u32, addr 0x4521be4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_n_u32(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// @brief Method vmlal_high_s16, addr 0x4519208, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_s16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_high_s32, addr 0x4519240, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_s32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_high_s8, addr 0x45191d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_s8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1,
                ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_high_u16, addr 0x45192b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_u16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_high_u32, addr 0x45192e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_u32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_high_u8, addr 0x4519278, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_high_u8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1,
                ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_lane_s16, addr 0x4513c30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_lane_s32, addr 0x4513c68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_lane_u16, addr 0x4513ca0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_lane_u16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_lane_u32, addr 0x4513cd8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_lane_u32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_laneq_s16, addr 0x45202a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v64 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_laneq_s32, addr 0x45202e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v64 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_laneq_u16, addr 0x4520318, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_laneq_u16(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v64 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_laneq_u32, addr 0x4520350, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_laneq_u32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v64 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_n_s16, addr 0x4514db0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_n_s16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vmlal_n_s32, addr 0x4514de8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_n_s32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmlal_n_u16, addr 0x4514e20, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_n_u16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// @brief Method vmlal_n_u32, addr 0x4514e58, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_n_u32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// @brief Method vmlal_s16, addr 0x450cdb8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1,
            ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_s32, addr 0x450cdf0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1,
            ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_s8, addr 0x450cd80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_u16, addr 0x450ce60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1,
            ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_u32, addr 0x450ce98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1,
            ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_u8, addr 0x450ce28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlal_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlaq_f32, addr 0x450cd48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_f64, addr 0x4519198, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_lane_f32, addr 0x4513bf8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_lane_f32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlaq_lane_s16, addr 0x4513a38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlaq_lane_s32, addr 0x4513aa8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlaq_lane_u16, addr 0x4513b18, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_lane_u16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlaq_lane_u32, addr 0x4513b88, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_lane_u32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlaq_laneq_f32, addr 0x4520190, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlaq_laneq_s16, addr 0x451ffd0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlaq_laneq_s32, addr 0x4520040, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlaq_laneq_u16, addr 0x45200b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlaq_laneq_u32, addr 0x4520120, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlaq_n_f32, addr 0x4514d78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_n_f32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// @brief Method vmlaq_n_s16, addr 0x4514bb8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_n_s16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vmlaq_n_s32, addr 0x4514c28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_n_s32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmlaq_n_u16, addr 0x4514c98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_n_u16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// @brief Method vmlaq_n_u32, addr 0x4514d08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_n_u32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// @brief Method vmlaq_s16, addr 0x450cc38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_s32, addr 0x450cca8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_s8, addr 0x450cbc8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1,
           ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_u16, addr 0x450ccf8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_u32, addr 0x450cd08, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_u8, addr 0x450cce8, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlaq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1,
           ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmls_f32, addr 0x450d050, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_f64, addr 0x4519320, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_lane_f32, addr 0x4513f40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_lane_f32(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmls_lane_s16, addr 0x4513d80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_lane_s16(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmls_lane_s32, addr 0x4513df0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_lane_s32(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmls_lane_u16, addr 0x4513e60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_lane_u16(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmls_lane_u32, addr 0x4513ed0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_lane_u32(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1,
                ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmls_laneq_f32, addr 0x4520858, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_laneq_f32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmls_laneq_s16, addr 0x4520698, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_laneq_s16(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmls_laneq_s32, addr 0x4520708, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_laneq_s32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmls_laneq_u16, addr 0x4520778, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_laneq_u16(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmls_laneq_u32, addr 0x45207e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_laneq_u32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmls_n_f32, addr 0x45150c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_n_f32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// @brief Method vmls_n_s16, addr 0x4514f00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_n_s16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vmls_n_s32, addr 0x4514f70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_n_s32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmls_n_u16, addr 0x4514fe0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_n_u16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// @brief Method vmls_n_u32, addr 0x4515050, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_n_u32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// @brief Method vmls_s16, addr 0x450cf40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_s32, addr 0x450cfb0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_s8, addr 0x450ced0, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1,
          ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_u16, addr 0x450d030, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_u32, addr 0x450d040, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_u8, addr 0x450d020, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmls_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1,
          ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_high_lane_s16, addr 0x45208c8, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v128 a1,
                      ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_high_lane_s32, addr 0x4520900, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v128 a1,
                      ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_high_lane_u16, addr 0x4520938, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v128 a1,
                      ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_high_lane_u32, addr 0x4520970, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v128 a1,
                      ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_high_laneq_s16, addr 0x4520a88, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                       ::Unity::Burst::Intrinsics::v128 a1,
                       ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_high_laneq_s32, addr 0x4520ac0, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                       ::Unity::Burst::Intrinsics::v128 a1,
                       ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_high_laneq_u16, addr 0x4520af8, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0,
                       ::Unity::Burst::Intrinsics::v128 a1,
                       ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_high_laneq_u32, addr 0x4520b30, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0,
                       ::Unity::Burst::Intrinsics::v128 a1,
                       ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_high_n_s16, addr 0x4521c8c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vmlsl_high_n_s32, addr 0x4521cc4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmlsl_high_n_u16, addr 0x4521cfc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_n_u16(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// @brief Method vmlsl_high_n_u32, addr 0x4521d34, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_n_u32(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// @brief Method vmlsl_high_s16, addr 0x45193c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_s16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_high_s32, addr 0x4519400, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_s32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_high_s8, addr 0x4519390, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_s8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1,
                ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_high_u16, addr 0x4519470, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_u16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_high_u32, addr 0x45194a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_u32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_high_u8, addr 0x4519438, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_high_u8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1,
                ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_lane_s16, addr 0x4513fb0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_lane_s32, addr 0x4513fe8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_lane_u16, addr 0x4514020, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_lane_u16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_lane_u32, addr 0x4514058, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_lane_u32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v64 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_laneq_s16, addr 0x45209a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v64 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_laneq_s32, addr 0x45209e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v64 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_laneq_u16, addr 0x4520a18, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_laneq_u16(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v64 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_laneq_u32, addr 0x4520a50, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_laneq_u32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v64 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_n_s16, addr 0x4515130, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_n_s16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vmlsl_n_s32, addr 0x4515168, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_n_s32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmlsl_n_u16, addr 0x45151a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_n_u16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// @brief Method vmlsl_n_u32, addr 0x45151d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_n_u32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// @brief Method vmlsl_s16, addr 0x450d0f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1,
            ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_s32, addr 0x450d130, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1,
            ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_s8, addr 0x450d0c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_u16, addr 0x450d1a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1,
            ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_u32, addr 0x450d1d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1,
            ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_u8, addr 0x450d168, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsl_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsq_f32, addr 0x450d088, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_f64, addr 0x4519358, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_lane_f32, addr 0x4513f78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_lane_f32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsq_lane_s16, addr 0x4513db8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsq_lane_s32, addr 0x4513e28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsq_lane_u16, addr 0x4513e98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_lane_u16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsq_lane_u32, addr 0x4513f08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_lane_u32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsq_laneq_f32, addr 0x4520890, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsq_laneq_s16, addr 0x45206d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsq_laneq_s32, addr 0x4520740, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsq_laneq_u16, addr 0x45207b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsq_laneq_u32, addr 0x4520820, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsq_n_f32, addr 0x45150f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_n_f32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// @brief Method vmlsq_n_s16, addr 0x4514f38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_n_s16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vmlsq_n_s32, addr 0x4514fa8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_n_s32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmlsq_n_u16, addr 0x4515018, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_n_u16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// @brief Method vmlsq_n_u32, addr 0x4515088, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_n_u32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// @brief Method vmlsq_s16, addr 0x450cf78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_s32, addr 0x450cfe8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_s8, addr 0x450cf08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1,
           ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_u16, addr 0x450d038, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_u32, addr 0x450d048, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_u8, addr 0x450d028, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmlsq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1,
           ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmov_n_f32, addr 0x4527658, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f32(float_t a0);

  /// @brief Method vmov_n_f64, addr 0x45276c0, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f64(double_t a0);

  /// @brief Method vmov_n_s16, addr 0x4527348, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s16(int16_t a0);

  /// @brief Method vmov_n_s32, addr 0x45273b8, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s32(int32_t a0);

  /// @brief Method vmov_n_s64, addr 0x4527428, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s64(int64_t a0);

  /// @brief Method vmov_n_s8, addr 0x45272d8, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s8(int8_t a0);

  /// @brief Method vmov_n_u16, addr 0x4527508, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u16(uint16_t a0);

  /// @brief Method vmov_n_u32, addr 0x4527578, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u32(uint32_t a0);

  /// @brief Method vmov_n_u64, addr 0x45275e8, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u64(uint64_t a0);

  /// @brief Method vmov_n_u8, addr 0x4527498, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u8(uint8_t a0);

  /// @brief Method vmovl_high_s16, addr 0x451fa90, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovl_high_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_high_s32, addr 0x451fac8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovl_high_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_high_s8, addr 0x451fa58, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovl_high_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_high_u16, addr 0x451fb38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovl_high_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_high_u32, addr 0x451fb70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovl_high_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_high_u8, addr 0x451fb00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovl_high_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_s16, addr 0x45136f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovl_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovl_s32, addr 0x4513728, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovl_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovl_s8, addr 0x45136b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovl_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovl_u16, addr 0x4513798, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovl_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovl_u32, addr 0x45137d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovl_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovl_u8, addr 0x4513760, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovl_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovn_high_s16, addr 0x45135f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovn_high_s16(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_high_s32, addr 0x4513630, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovn_high_s32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_high_s64, addr 0x4513668, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovn_high_s64(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_high_u16, addr 0x45136a0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovn_high_u16(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_high_u32, addr 0x45136a8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovn_high_u32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_high_u64, addr 0x45136b0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmovn_high_u64(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_s16, addr 0x4513538, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmovn_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovn_s32, addr 0x4513570, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmovn_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovn_s64, addr 0x45135a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmovn_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovn_u16, addr 0x45135e0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmovn_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovn_u32, addr 0x45135e8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmovn_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovn_u64, addr 0x45135f0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmovn_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovq_n_f32, addr 0x4527678, size 0x48, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f32(float_t a0);

  /// @brief Method vmovq_n_f64, addr 0x45276e0, size 0x48, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f64(double_t a0);

  /// @brief Method vmovq_n_s16, addr 0x452736c, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s16(int16_t a0);

  /// @brief Method vmovq_n_s32, addr 0x45273dc, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s32(int32_t a0);

  /// @brief Method vmovq_n_s64, addr 0x452744c, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s64(int64_t a0);

  /// @brief Method vmovq_n_s8, addr 0x45272fc, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s8(int8_t a0);

  /// @brief Method vmovq_n_u16, addr 0x452752c, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u16(uint16_t a0);

  /// @brief Method vmovq_n_u32, addr 0x452759c, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u32(uint32_t a0);

  /// @brief Method vmovq_n_u64, addr 0x452760c, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u64(uint64_t a0);

  /// @brief Method vmovq_n_u8, addr 0x45274bc, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u8(uint8_t a0);

  /// @brief Method vmul_f32, addr 0x450cb20, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_f64, addr 0x4518c80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_lane_f32, addr 0x45144f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_lane_f32(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_lane_f64, addr 0x4520e08, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_lane_f64(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_lane_s16, addr 0x4514330, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_lane_s16(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_lane_s32, addr 0x45143a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_lane_s32(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_lane_u16, addr 0x4514410, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_lane_u16(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_lane_u32, addr 0x4514480, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_lane_u32(::Unity::Burst::Intrinsics::v64 a0,
                ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_laneq_f32, addr 0x452104c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_laneq_f32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_laneq_f64, addr 0x45210bc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_laneq_f64(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_laneq_s16, addr 0x4520e8c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_laneq_s16(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_laneq_s32, addr 0x4520efc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_laneq_s32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_laneq_u16, addr 0x4520f6c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_laneq_u16(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_laneq_u32, addr 0x4520fdc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_laneq_u32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_n_f32, addr 0x45142c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_n_f32(::Unity::Burst::Intrinsics::v64 a0, float_t a1);

  /// @brief Method vmul_n_f64, addr 0x4520d98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_n_f64(::Unity::Burst::Intrinsics::v64 a0, double_t a1);

  /// @brief Method vmul_n_s16, addr 0x4514100, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// @brief Method vmul_n_s32, addr 0x4514170, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vmul_n_u16, addr 0x45141e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_n_u16(::Unity::Burst::Intrinsics::v64 a0, uint16_t a1);

  /// @brief Method vmul_n_u32, addr 0x4514250, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_n_u32(::Unity::Burst::Intrinsics::v64 a0, uint32_t a1);

  /// @brief Method vmul_s16, addr 0x450ca10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_s32, addr 0x450ca80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_s8, addr 0x450c9a0, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_u16, addr 0x450cb00, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_u32, addr 0x450cb10, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_u8, addr 0x450caf0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmul_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmuld_lane_f64, addr 0x4520e80, size 0xc, virtual false,
  /// abstract: false, final false
  static inline double_t
  vmuld_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmuld_laneq_f64, addr 0x4521164, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t
  vmuld_laneq_f64(double_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_high_lane_s16, addr 0x452127c, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_high_lane_s32, addr 0x45212b4, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_high_lane_u16, addr 0x45212ec, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_high_lane_u32, addr 0x4521324, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_high_laneq_s16, addr 0x452143c, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                       ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_high_laneq_s32, addr 0x4521474, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                       ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_high_laneq_u16, addr 0x45214ac, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0,
                       ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_high_laneq_u32, addr 0x45214e4, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0,
                       ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_high_n_s16, addr 0x452119c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// @brief Method vmull_high_n_s32, addr 0x45211d4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vmull_high_n_u16, addr 0x452120c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, uint16_t a1);

  /// @brief Method vmull_high_n_u32, addr 0x4521244, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1);

  /// @brief Method vmull_high_s16, addr 0x4519d78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_s16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_high_s32, addr 0x4519db0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_s32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_high_s8, addr 0x4519d40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_s8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_high_u16, addr 0x4519e20, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_u16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_high_u32, addr 0x4519e58, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_u32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_high_u8, addr 0x4519de8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_high_u8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_lane_s16, addr 0x4514640, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_lane_s16(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_lane_s32, addr 0x4514678, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_lane_s32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_lane_u16, addr 0x45146b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_lane_u16(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_lane_u32, addr 0x45146e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_lane_u32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_laneq_s16, addr 0x452135c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_laneq_s16(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_laneq_s32, addr 0x4521394, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_laneq_s32(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_laneq_u16, addr 0x45213cc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_laneq_u16(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_laneq_u32, addr 0x4521404, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_laneq_u32(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_n_s16, addr 0x4514560, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// @brief Method vmull_n_s32, addr 0x4514598, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vmull_n_u16, addr 0x45145d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_n_u16(::Unity::Burst::Intrinsics::v64 a0, uint16_t a1);

  /// @brief Method vmull_n_u32, addr 0x4514608, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_n_u32(::Unity::Burst::Intrinsics::v64 a0, uint32_t a1);

  /// @brief Method vmull_s16, addr 0x450d5c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmull_s32, addr 0x450d600, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmull_s8, addr 0x450d590, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmull_u16, addr 0x450d670, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmull_u32, addr 0x450d6a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmull_u8, addr 0x450d638, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmull_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmulq_f32, addr 0x450cb58, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_f64, addr 0x4518cb8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_lane_f32, addr 0x4514528, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_lane_f32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_lane_f64, addr 0x4520e10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_lane_f64(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_lane_s16, addr 0x4514368, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_lane_s32, addr 0x45143d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_lane_u16, addr 0x4514448, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_lane_u16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_lane_u32, addr 0x45144b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_lane_u32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_laneq_f32, addr 0x4521084, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_laneq_f64, addr 0x45210f4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_laneq_s16, addr 0x4520ec4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_laneq_s32, addr 0x4520f34, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_laneq_u16, addr 0x4520fa4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_laneq_u32, addr 0x4521014, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_n_f32, addr 0x45142f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_n_f32(::Unity::Burst::Intrinsics::v128 a0, float_t a1);

  /// @brief Method vmulq_n_f64, addr 0x4520dd0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_n_f64(::Unity::Burst::Intrinsics::v128 a0, double_t a1);

  /// @brief Method vmulq_n_s16, addr 0x4514138, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// @brief Method vmulq_n_s32, addr 0x45141a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vmulq_n_u16, addr 0x4514218, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_n_u16(::Unity::Burst::Intrinsics::v128 a0, uint16_t a1);

  /// @brief Method vmulq_n_u32, addr 0x4514288, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_n_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1);

  /// @brief Method vmulq_s16, addr 0x450ca48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_s32, addr 0x450cab8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_s8, addr 0x450c9d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_u16, addr 0x450cb08, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_u32, addr 0x450cb18, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_u8, addr 0x450caf8, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmuls_lane_f32, addr 0x4520e48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t
  vmuls_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmuls_laneq_f32, addr 0x452112c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t
  vmuls_laneq_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulx_f32, addr 0x4518cf0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmulx_f32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmulx_f64, addr 0x4518d60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmulx_f64(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmulx_lane_f32, addr 0x4518e40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmulx_lane_f32(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulx_lane_f64, addr 0x4518eb0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmulx_lane_f64(::Unity::Burst::Intrinsics::v64 a0,
                 ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulx_laneq_f32, addr 0x4518f30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmulx_laneq_f32(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulx_laneq_f64, addr 0x4518fa0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmulx_laneq_f64(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulxd_f64, addr 0x4518e08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vmulxd_f64(double_t a0, double_t a1);

  /// @brief Method vmulxd_lane_f64, addr 0x4518f28, size 0x8, virtual false,
  /// abstract: false, final false
  static inline double_t
  vmulxd_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulxd_laneq_f64, addr 0x4519048, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vmulxd_laneq_f64(double_t a0,
                                          ::Unity::Burst::Intrinsics::v128 a1,
                                          int32_t a2);

  /// @brief Method vmulxq_f32, addr 0x4518d28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulxq_f32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulxq_f64, addr 0x4518d98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulxq_f64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulxq_lane_f32, addr 0x4518e78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulxq_lane_f32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulxq_lane_f64, addr 0x4518eb8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulxq_lane_f64(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulxq_laneq_f32, addr 0x4518f68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulxq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulxq_laneq_f64, addr 0x4518fd8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmulxq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulxs_f32, addr 0x4518dd0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vmulxs_f32(float_t a0, float_t a1);

  /// @brief Method vmulxs_lane_f32, addr 0x4518ef0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t
  vmulxs_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulxs_laneq_f32, addr 0x4519010, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t
  vmulxs_laneq_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmvn_s16, addr 0x4515f00, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmvn_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvn_s32, addr 0x4515f10, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmvn_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvn_s8, addr 0x4515e90, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmvn_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvn_u16, addr 0x4515f30, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmvn_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvn_u32, addr 0x4515f40, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmvn_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvn_u8, addr 0x4515f20, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vmvn_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvnq_s16, addr 0x4515f08, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmvnq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmvnq_s32, addr 0x4515f18, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmvnq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmvnq_s8, addr 0x4515ec8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmvnq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmvnq_u16, addr 0x4515f38, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmvnq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmvnq_u32, addr 0x4515f48, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmvnq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmvnq_u8, addr 0x4515f28, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vmvnq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vneg_f32, addr 0x45156e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vneg_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vneg_f64, addr 0x45220ec, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vneg_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vneg_s16, addr 0x4515600, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vneg_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vneg_s32, addr 0x4515670, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vneg_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vneg_s64, addr 0x4522044, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vneg_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vneg_s8, addr 0x4515590, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vneg_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vnegd_s64, addr 0x452207c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vnegd_s64(int64_t a0);

  /// @brief Method vnegq_f32, addr 0x4515718, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vnegq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vnegq_f64, addr 0x4522124, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vnegq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vnegq_s16, addr 0x4515638, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vnegq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vnegq_s32, addr 0x45156a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vnegq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vnegq_s64, addr 0x45220b4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vnegq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vnegq_s8, addr 0x45155c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vnegq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vorn_s16, addr 0x4516340, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vorn_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_s32, addr 0x4516350, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vorn_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_s64, addr 0x4516360, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vorn_s64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_s8, addr 0x45162d0, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vorn_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_u16, addr 0x4516380, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vorn_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_u32, addr 0x4516390, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vorn_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_u64, addr 0x45163a0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vorn_u64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_u8, addr 0x4516370, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vorn_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vornq_s16, addr 0x4516348, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vornq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_s32, addr 0x4516358, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vornq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_s64, addr 0x4516368, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vornq_s64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_s8, addr 0x4516308, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vornq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_u16, addr 0x4516388, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vornq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_u32, addr 0x4516398, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vornq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_u64, addr 0x45163a8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vornq_u64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_u8, addr 0x4516378, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vornq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorr_s16, addr 0x45160a0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vorr_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_s32, addr 0x45160b0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vorr_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_s64, addr 0x45160c0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vorr_s64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_s8, addr 0x4516030, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vorr_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_u16, addr 0x45160e0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vorr_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_u32, addr 0x45160f0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vorr_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_u64, addr 0x4516100, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vorr_u64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_u8, addr 0x45160d0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vorr_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorrq_s16, addr 0x45160a8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vorrq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_s32, addr 0x45160b8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vorrq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_s64, addr 0x45160c8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vorrq_s64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_s8, addr 0x4516068, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vorrq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_u16, addr 0x45160e8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vorrq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_u32, addr 0x45160f8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vorrq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_u64, addr 0x4516108, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vorrq_u64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_u8, addr 0x45160d8, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vorrq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadal_s16, addr 0x4516c60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpadal_s16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadal_s32, addr 0x4516cd0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpadal_s32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadal_s8, addr 0x4516bf0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpadal_s8(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadal_u16, addr 0x4516db0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpadal_u16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadal_u32, addr 0x4516e20, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpadal_u32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadal_u8, addr 0x4516d40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpadal_u8(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadalq_s16, addr 0x4516c98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpadalq_s16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadalq_s32, addr 0x4516d08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpadalq_s32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadalq_s8, addr 0x4516c28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpadalq_s8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadalq_u16, addr 0x4516de8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpadalq_u16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadalq_u32, addr 0x4516e58, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpadalq_u32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadalq_u8, addr 0x4516d78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpadalq_u8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadd_f32, addr 0x4516918, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpadd_f32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_s16, addr 0x4516890, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpadd_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_s32, addr 0x45168c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpadd_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_s8, addr 0x4516858, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpadd_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_u16, addr 0x4516908, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpadd_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_u32, addr 0x4516910, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpadd_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_u8, addr 0x4516900, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpadd_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpaddd_f64, addr 0x4523f30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vpaddd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddd_s64, addr 0x4523e88, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vpaddd_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddd_u64, addr 0x4523ec0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vpaddd_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddl_s16, addr 0x45169c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpaddl_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddl_s32, addr 0x4516a30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpaddl_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddl_s8, addr 0x4516950, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpaddl_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddl_u16, addr 0x4516b10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpaddl_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddl_u32, addr 0x4516b80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpaddl_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddl_u8, addr 0x4516aa0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpaddl_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddlq_s16, addr 0x45169f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpaddlq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddlq_s32, addr 0x4516a68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpaddlq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddlq_s8, addr 0x4516988, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpaddlq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddlq_u16, addr 0x4516b48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpaddlq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddlq_u32, addr 0x4516bb8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpaddlq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddlq_u8, addr 0x4516ad8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpaddlq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddq_f32, addr 0x4523948, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpaddq_f32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_f64, addr 0x4523980, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpaddq_f64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_s16, addr 0x4523880, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpaddq_s16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_s32, addr 0x45238b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpaddq_s32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_s64, addr 0x45238f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpaddq_s64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_s8, addr 0x4523848, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpaddq_s8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_u16, addr 0x4523930, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpaddq_u16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_u32, addr 0x4523938, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpaddq_u32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_u64, addr 0x4523940, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpaddq_u64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_u8, addr 0x4523928, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpaddq_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadds_f32, addr 0x4523ef8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vpadds_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpmax_f32, addr 0x4516fe0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpmax_f32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_s16, addr 0x4516ec8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpmax_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_s32, addr 0x4516f00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpmax_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_s8, addr 0x4516e90, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpmax_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_u16, addr 0x4516f70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpmax_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_u32, addr 0x4516fa8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpmax_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_u8, addr 0x4516f38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpmax_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmaxnm_f32, addr 0x4523d38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpmaxnm_f32(::Unity::Burst::Intrinsics::v64 a0,
              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmaxnmq_f32, addr 0x4523d70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpmaxnmq_f32(::Unity::Burst::Intrinsics::v128 a0,
               ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxnmq_f64, addr 0x4523da8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpmaxnmq_f64(::Unity::Burst::Intrinsics::v128 a0,
               ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxnmqd_f64, addr 0x4524080, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vpmaxnmqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpmaxnms_f32, addr 0x4524048, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vpmaxnms_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpmaxq_f32, addr 0x4523b08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpmaxq_f32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_f64, addr 0x4523b40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpmaxq_f64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_s16, addr 0x45239f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpmaxq_s16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_s32, addr 0x4523a28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpmaxq_s32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_s8, addr 0x45239b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpmaxq_s8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_u16, addr 0x4523a98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpmaxq_u16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_u32, addr 0x4523ad0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpmaxq_u32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_u8, addr 0x4523a60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpmaxq_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxqd_f64, addr 0x4523fa0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vpmaxqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpmaxs_f32, addr 0x4523f68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vpmaxs_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpmin_f32, addr 0x4517168, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpmin_f32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_s16, addr 0x4517050, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpmin_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_s32, addr 0x4517088, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpmin_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_s8, addr 0x4517018, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpmin_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_u16, addr 0x45170f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpmin_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_u32, addr 0x4517130, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpmin_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_u8, addr 0x45170c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpmin_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpminnm_f32, addr 0x4523de0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vpminnm_f32(::Unity::Burst::Intrinsics::v64 a0,
              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpminnmq_f32, addr 0x4523e18, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpminnmq_f32(::Unity::Burst::Intrinsics::v128 a0,
               ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminnmq_f64, addr 0x4523e50, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpminnmq_f64(::Unity::Burst::Intrinsics::v128 a0,
               ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminnmqd_f64, addr 0x45240f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vpminnmqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpminnms_f32, addr 0x45240b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vpminnms_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpminq_f32, addr 0x4523cc8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpminq_f32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_f64, addr 0x4523d00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpminq_f64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_s16, addr 0x4523bb0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpminq_s16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_s32, addr 0x4523be8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpminq_s32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_s8, addr 0x4523b78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpminq_s8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_u16, addr 0x4523c58, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpminq_u16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_u32, addr 0x4523c90, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpminq_u32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_u8, addr 0x4523c20, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vpminq_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminqd_f64, addr 0x4524010, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vpminqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpmins_f32, addr 0x4523fd8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vpmins_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqabs_s16, addr 0x45154b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqabs_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqabs_s32, addr 0x4515520, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqabs_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqabs_s64, addr 0x4521ef4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqabs_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqabs_s8, addr 0x4515440, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqabs_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqabsb_s8, addr 0x4521f64, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vqabsb_s8(int8_t a0);

  /// @brief Method vqabsd_s64, addr 0x452200c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vqabsd_s64(int64_t a0);

  /// @brief Method vqabsh_s16, addr 0x4521f9c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vqabsh_s16(int16_t a0);

  /// @brief Method vqabsq_s16, addr 0x45154e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqabsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqabsq_s32, addr 0x4515558, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqabsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqabsq_s64, addr 0x4521f2c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqabsq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqabsq_s8, addr 0x4515478, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqabsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqabss_s32, addr 0x4521fd4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqabss_s32(int32_t a0);

  /// @brief Method vqadd_s16, addr 0x450c510, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqadd_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_s32, addr 0x450c580, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqadd_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_s64, addr 0x450c5f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqadd_s64(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_s8, addr 0x450c4a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqadd_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_u16, addr 0x450c6d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqadd_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_u32, addr 0x450c740, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqadd_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_u64, addr 0x450c7b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqadd_u64(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_u8, addr 0x450c660, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqadd_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqaddb_s8, addr 0x4518400, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vqaddb_s8(int8_t a0, int8_t a1);

  /// @brief Method vqaddb_u8, addr 0x45184e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vqaddb_u8(uint8_t a0, uint8_t a1);

  /// @brief Method vqaddd_s64, addr 0x45184a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vqaddd_s64(int64_t a0, int64_t a1);

  /// @brief Method vqaddd_u64, addr 0x4518588, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vqaddd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vqaddh_s16, addr 0x4518438, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vqaddh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqaddh_u16, addr 0x4518518, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vqaddh_u16(uint16_t a0, uint16_t a1);

  /// @brief Method vqaddq_s16, addr 0x450c548, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqaddq_s16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_s32, addr 0x450c5b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqaddq_s32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_s64, addr 0x450c628, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqaddq_s64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_s8, addr 0x450c4d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqaddq_s8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_u16, addr 0x450c708, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqaddq_u16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_u32, addr 0x450c778, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqaddq_u32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_u64, addr 0x450c7e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqaddq_u64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_u8, addr 0x450c698, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqaddq_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqadds_s32, addr 0x4518470, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqadds_s32(int32_t a0, int32_t a1);

  /// @brief Method vqadds_u32, addr 0x4518550, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vqadds_u32(uint32_t a0, uint32_t a1);

  /// @brief Method vqdmlal_high_lane_s16, addr 0x45204d8, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                        ::Unity::Burst::Intrinsics::v128 a1,
                        ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlal_high_lane_s32, addr 0x4520510, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                        ::Unity::Burst::Intrinsics::v128 a1,
                        ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlal_high_laneq_s16, addr 0x4520628, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                         ::Unity::Burst::Intrinsics::v128 a1,
                         ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlal_high_laneq_s32, addr 0x4520660, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                         ::Unity::Burst::Intrinsics::v128 a1,
                         ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlal_high_n_s16, addr 0x4521c1c, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlal_high_n_s16(::Unity::Burst::Intrinsics::v128 a0,
                     ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vqdmlal_high_n_s32, addr 0x4521c54, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlal_high_n_s32(::Unity::Burst::Intrinsics::v128 a0,
                     ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmlal_high_s16, addr 0x4519bf0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlal_high_s16(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v128 a1,
                   ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqdmlal_high_s32, addr 0x4519c28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlal_high_s32(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v128 a1,
                   ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqdmlal_lane_s16, addr 0x4513d10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlal_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v64 a1,
                   ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlal_lane_s32, addr 0x4513d48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlal_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v64 a1,
                   ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlal_laneq_s16, addr 0x4520548, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlal_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                    ::Unity::Burst::Intrinsics::v64 a1,
                    ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlal_laneq_s32, addr 0x4520580, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlal_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                    ::Unity::Burst::Intrinsics::v64 a1,
                    ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlal_n_s16, addr 0x4514e90, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlal_n_s16(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vqdmlal_n_s32, addr 0x4514ec8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlal_n_s32(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmlal_s16, addr 0x450d4b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlal_s16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v64 a1,
              ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqdmlal_s32, addr 0x450d4e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlal_s32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v64 a1,
              ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqdmlalh_lane_s16, addr 0x4520468, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqdmlalh_lane_s16(int32_t a0, int16_t a1,
                                          ::Unity::Burst::Intrinsics::v64 a2,
                                          int32_t a3);

  /// @brief Method vqdmlalh_laneq_s16, addr 0x45205b8, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int32_t vqdmlalh_laneq_s16(int32_t a0, int16_t a1,
                                           ::Unity::Burst::Intrinsics::v128 a2,
                                           int32_t a3);

  /// @brief Method vqdmlalh_s16, addr 0x4519b80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqdmlalh_s16(int32_t a0, int16_t a1, int16_t a2);

  /// @brief Method vqdmlals_lane_s32, addr 0x45204a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vqdmlals_lane_s32(int64_t a0, int32_t a1,
                                          ::Unity::Burst::Intrinsics::v64 a2,
                                          int32_t a3);

  /// @brief Method vqdmlals_laneq_s32, addr 0x45205f0, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int64_t vqdmlals_laneq_s32(int64_t a0, int32_t a1,
                                           ::Unity::Burst::Intrinsics::v128 a2,
                                           int32_t a3);

  /// @brief Method vqdmlals_s32, addr 0x4519bb8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vqdmlals_s32(int64_t a0, int32_t a1, int32_t a2);

  /// @brief Method vqdmlsl_high_lane_s16, addr 0x4520bd8, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                        ::Unity::Burst::Intrinsics::v128 a1,
                        ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlsl_high_lane_s32, addr 0x4520c10, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                        ::Unity::Burst::Intrinsics::v128 a1,
                        ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlsl_high_laneq_s16, addr 0x4520d28, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                         ::Unity::Burst::Intrinsics::v128 a1,
                         ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlsl_high_laneq_s32, addr 0x4520d60, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                         ::Unity::Burst::Intrinsics::v128 a1,
                         ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlsl_high_n_s16, addr 0x4521d6c, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128 a0,
                     ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vqdmlsl_high_n_s32, addr 0x4521da4, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128 a0,
                     ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmlsl_high_s16, addr 0x4519cd0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlsl_high_s16(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v128 a1,
                   ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqdmlsl_high_s32, addr 0x4519d08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlsl_high_s32(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v128 a1,
                   ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqdmlsl_lane_s16, addr 0x4514090, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlsl_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v64 a1,
                   ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlsl_lane_s32, addr 0x45140c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlsl_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v64 a1,
                   ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlsl_laneq_s16, addr 0x4520c48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                    ::Unity::Burst::Intrinsics::v64 a1,
                    ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlsl_laneq_s32, addr 0x4520c80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                    ::Unity::Burst::Intrinsics::v64 a1,
                    ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlsl_n_s16, addr 0x4515210, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlsl_n_s16(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vqdmlsl_n_s32, addr 0x4515248, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlsl_n_s32(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmlsl_s16, addr 0x450d520, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlsl_s16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v64 a1,
              ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqdmlsl_s32, addr 0x450d558, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmlsl_s32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v64 a1,
              ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqdmlslh_lane_s16, addr 0x4520b68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqdmlslh_lane_s16(int32_t a0, int16_t a1,
                                          ::Unity::Burst::Intrinsics::v64 a2,
                                          int32_t a3);

  /// @brief Method vqdmlslh_laneq_s16, addr 0x4520cb8, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int32_t vqdmlslh_laneq_s16(int32_t a0, int16_t a1,
                                           ::Unity::Burst::Intrinsics::v128 a2,
                                           int32_t a3);

  /// @brief Method vqdmlslh_s16, addr 0x4519c60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqdmlslh_s16(int32_t a0, int16_t a1, int16_t a2);

  /// @brief Method vqdmlsls_lane_s32, addr 0x4520ba0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vqdmlsls_lane_s32(int64_t a0, int32_t a1,
                                          ::Unity::Burst::Intrinsics::v64 a2,
                                          int32_t a3);

  /// @brief Method vqdmlsls_laneq_s32, addr 0x4520cf0, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int64_t vqdmlsls_laneq_s32(int64_t a0, int32_t a1,
                                           ::Unity::Burst::Intrinsics::v128 a2,
                                           int32_t a3);

  /// @brief Method vqdmlsls_s32, addr 0x4519c98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vqdmlsls_s32(int64_t a0, int32_t a1, int32_t a2);

  /// @brief Method vqdmulh_lane_s16, addr 0x45148e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqdmulh_lane_s16(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulh_lane_s32, addr 0x4514950, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqdmulh_lane_s32(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulh_laneq_s16, addr 0x452182c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulh_laneq_s32, addr 0x452189c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulh_n_s16, addr 0x4514800, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqdmulh_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// @brief Method vqdmulh_n_s32, addr 0x4514870, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqdmulh_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqdmulh_s16, addr 0x450d2f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqdmulh_s16(::Unity::Burst::Intrinsics::v64 a0,
              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqdmulh_s32, addr 0x450d360, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqdmulh_s32(::Unity::Burst::Intrinsics::v64 a0,
              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqdmulhh_lane_s16, addr 0x45217bc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t
  vqdmulhh_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulhh_laneq_s16, addr 0x452190c, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int16_t vqdmulhh_laneq_s16(int16_t a0,
                                           ::Unity::Burst::Intrinsics::v128 a1,
                                           int32_t a2);

  /// @brief Method vqdmulhh_s16, addr 0x4519aa0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vqdmulhh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqdmulhq_lane_s16, addr 0x4514918, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                    ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulhq_lane_s32, addr 0x4514988, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                    ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulhq_laneq_s16, addr 0x4521864, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                     ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulhq_laneq_s32, addr 0x45218d4, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                     ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulhq_n_s16, addr 0x4514838, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmulhq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// @brief Method vqdmulhq_n_s32, addr 0x45148a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmulhq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqdmulhq_s16, addr 0x450d328, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmulhq_s16(::Unity::Burst::Intrinsics::v128 a0,
               ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqdmulhq_s32, addr 0x450d398, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmulhq_s32(::Unity::Burst::Intrinsics::v128 a0,
               ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqdmulhs_lane_s32, addr 0x45217f4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t
  vqdmulhs_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulhs_laneq_s32, addr 0x4521944, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int32_t vqdmulhs_laneq_s32(int32_t a0,
                                           ::Unity::Burst::Intrinsics::v128 a1,
                                           int32_t a2);

  /// @brief Method vqdmulhs_s32, addr 0x4519ad8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqdmulhs_s32(int32_t a0, int32_t a1);

  /// @brief Method vqdmull_high_lane_s16, addr 0x45215fc, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmull_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                        ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmull_high_lane_s32, addr 0x4521634, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmull_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                        ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmull_high_laneq_s16, addr 0x452174c, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                         ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmull_high_laneq_s32, addr 0x4521784, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                         ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmull_high_n_s16, addr 0x452151c, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmull_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// @brief Method vqdmull_high_n_s32, addr 0x4521554, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmull_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqdmull_high_s16, addr 0x4519f00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmull_high_s16(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqdmull_high_s32, addr 0x4519f38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmull_high_s32(::Unity::Burst::Intrinsics::v128 a0,
                   ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqdmull_lane_s16, addr 0x4514790, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmull_lane_s16(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmull_lane_s32, addr 0x45147c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmull_lane_s32(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmull_laneq_s16, addr 0x452166c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmull_laneq_s16(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmull_laneq_s32, addr 0x45216a4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmull_laneq_s32(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmull_n_s16, addr 0x4514720, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmull_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// @brief Method vqdmull_n_s32, addr 0x4514758, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmull_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqdmull_s16, addr 0x450d6e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmull_s16(::Unity::Burst::Intrinsics::v64 a0,
              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqdmull_s32, addr 0x450d718, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqdmull_s32(::Unity::Burst::Intrinsics::v64 a0,
              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqdmullh_lane_s16, addr 0x452158c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t
  vqdmullh_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmullh_laneq_s16, addr 0x45216dc, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int32_t vqdmullh_laneq_s16(int16_t a0,
                                           ::Unity::Burst::Intrinsics::v128 a1,
                                           int32_t a2);

  /// @brief Method vqdmullh_s16, addr 0x4519e90, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqdmullh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqdmulls_lane_s32, addr 0x45215c4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t
  vqdmulls_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulls_laneq_s32, addr 0x4521714, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int64_t vqdmulls_laneq_s32(int32_t a0,
                                           ::Unity::Burst::Intrinsics::v128 a1,
                                           int32_t a2);

  /// @brief Method vqdmulls_s32, addr 0x4519ec8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vqdmulls_s32(int32_t a0, int32_t a1);

  /// @brief Method vqmovn_high_s16, addr 0x451fcf8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqmovn_high_s16(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_high_s32, addr 0x451fd30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqmovn_high_s32(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_high_s64, addr 0x451fd68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqmovn_high_s64(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_high_u16, addr 0x451fda0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqmovn_high_u16(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_high_u32, addr 0x451fdd8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqmovn_high_u32(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_high_u64, addr 0x451fe10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqmovn_high_u64(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_s16, addr 0x4513808, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqmovn_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovn_s32, addr 0x4513840, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqmovn_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovn_s64, addr 0x4513878, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqmovn_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovn_u16, addr 0x45138b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqmovn_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovn_u32, addr 0x45138e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqmovn_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovn_u64, addr 0x4513920, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqmovn_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovnd_s64, addr 0x451fc18, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqmovnd_s64(int64_t a0);

  /// @brief Method vqmovnd_u64, addr 0x451fcc0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vqmovnd_u64(uint64_t a0);

  /// @brief Method vqmovnh_s16, addr 0x451fba8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vqmovnh_s16(int16_t a0);

  /// @brief Method vqmovnh_u16, addr 0x451fc50, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vqmovnh_u16(uint16_t a0);

  /// @brief Method vqmovns_s32, addr 0x451fbe0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vqmovns_s32(int32_t a0);

  /// @brief Method vqmovns_u32, addr 0x451fc88, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vqmovns_u32(uint32_t a0);

  /// @brief Method vqmovun_high_s16, addr 0x451fef0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqmovun_high_s16(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovun_high_s32, addr 0x451ff28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqmovun_high_s32(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovun_high_s64, addr 0x451ff60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqmovun_high_s64(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovun_s16, addr 0x4513958, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqmovun_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovun_s32, addr 0x4513990, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqmovun_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovun_s64, addr 0x45139c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqmovun_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovund_s64, addr 0x451feb8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vqmovund_s64(int64_t a0);

  /// @brief Method vqmovunh_s16, addr 0x451fe48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vqmovunh_s16(int16_t a0);

  /// @brief Method vqmovuns_s32, addr 0x451fe80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vqmovuns_s32(int32_t a0);

  /// @brief Method vqneg_s16, addr 0x45157c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqneg_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqneg_s32, addr 0x4515830, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqneg_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqneg_s64, addr 0x452215c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqneg_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqneg_s8, addr 0x4515750, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqneg_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqnegb_s8, addr 0x45221cc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vqnegb_s8(int8_t a0);

  /// @brief Method vqnegd_s64, addr 0x4522274, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vqnegd_s64(int64_t a0);

  /// @brief Method vqnegh_s16, addr 0x4522204, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vqnegh_s16(int16_t a0);

  /// @brief Method vqnegq_s16, addr 0x45157f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqnegq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqnegq_s32, addr 0x4515868, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqnegq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqnegq_s64, addr 0x4522194, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqnegq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqnegq_s8, addr 0x4515788, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqnegq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqnegs_s32, addr 0x452223c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqnegs_s32(int32_t a0);

  /// @brief Method vqrdmlah_lane_s16, addr 0x452674c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmlah_lane_s16(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v64 a1,
                    ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlah_lane_s32, addr 0x452682c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmlah_lane_s32(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v64 a1,
                    ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlah_laneq_s16, addr 0x45267bc, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmlah_laneq_s16(::Unity::Burst::Intrinsics::v64 a0,
                     ::Unity::Burst::Intrinsics::v64 a1,
                     ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlah_laneq_s32, addr 0x452689c, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmlah_laneq_s32(::Unity::Burst::Intrinsics::v64 a0,
                     ::Unity::Burst::Intrinsics::v64 a1,
                     ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlah_s16, addr 0x452658c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmlah_s16(::Unity::Burst::Intrinsics::v64 a0,
               ::Unity::Burst::Intrinsics::v64 a1,
               ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqrdmlah_s32, addr 0x45265c4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmlah_s32(::Unity::Burst::Intrinsics::v64 a0,
               ::Unity::Burst::Intrinsics::v64 a1,
               ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqrdmlahh_lane_s16, addr 0x4526bac, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int16_t vqrdmlahh_lane_s16(int16_t a0, int16_t a1,
                                           ::Unity::Burst::Intrinsics::v64 a2,
                                           int32_t a3);

  /// @brief Method vqrdmlahh_laneq_s16, addr 0x4526be4, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int16_t vqrdmlahh_laneq_s16(int16_t a0, int16_t a1,
                                            ::Unity::Burst::Intrinsics::v128 a2,
                                            int32_t a3);

  /// @brief Method vqrdmlahh_s16, addr 0x4526acc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vqrdmlahh_s16(int16_t a0, int16_t a1, int16_t a2);

  /// @brief Method vqrdmlahq_lane_s16, addr 0x4526784, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmlahq_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                     ::Unity::Burst::Intrinsics::v128 a1,
                     ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlahq_lane_s32, addr 0x4526864, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmlahq_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                     ::Unity::Burst::Intrinsics::v128 a1,
                     ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlahq_laneq_s16, addr 0x45267f4, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmlahq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v128 a1,
                      ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlahq_laneq_s32, addr 0x45268d4, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmlahq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v128 a1,
                      ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlahq_s16, addr 0x45265fc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmlahq_s16(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1,
                ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqrdmlahq_s32, addr 0x4526634, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmlahq_s32(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1,
                ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqrdmlahs_lane_s32, addr 0x4526c1c, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int32_t vqrdmlahs_lane_s32(int32_t a0, int32_t a1,
                                           ::Unity::Burst::Intrinsics::v64 a2,
                                           int32_t a3);

  /// @brief Method vqrdmlahs_s32, addr 0x4526b04, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqrdmlahs_s32(int32_t a0, int32_t a1, int32_t a2);

  /// @brief Method vqrdmlsh_lane_s16, addr 0x452690c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmlsh_lane_s16(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v64 a1,
                    ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlsh_lane_s32, addr 0x45269ec, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmlsh_lane_s32(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v64 a1,
                    ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlsh_laneq_s16, addr 0x452697c, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmlsh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0,
                     ::Unity::Burst::Intrinsics::v64 a1,
                     ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlsh_laneq_s32, addr 0x4526a5c, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmlsh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0,
                     ::Unity::Burst::Intrinsics::v64 a1,
                     ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlsh_s16, addr 0x452666c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmlsh_s16(::Unity::Burst::Intrinsics::v64 a0,
               ::Unity::Burst::Intrinsics::v64 a1,
               ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqrdmlsh_s32, addr 0x45266a4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmlsh_s32(::Unity::Burst::Intrinsics::v64 a0,
               ::Unity::Burst::Intrinsics::v64 a1,
               ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqrdmlshh_lane_s16, addr 0x4526c54, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int16_t vqrdmlshh_lane_s16(int16_t a0, int16_t a1,
                                           ::Unity::Burst::Intrinsics::v64 a2,
                                           int32_t a3);

  /// @brief Method vqrdmlshh_laneq_s16, addr 0x4526c8c, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int16_t vqrdmlshh_laneq_s16(int16_t a0, int16_t a1,
                                            ::Unity::Burst::Intrinsics::v128 a2,
                                            int32_t a3);

  /// @brief Method vqrdmlshh_s16, addr 0x4526b3c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vqrdmlshh_s16(int16_t a0, int16_t a1, int16_t a2);

  /// @brief Method vqrdmlshq_lane_s16, addr 0x4526944, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmlshq_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                     ::Unity::Burst::Intrinsics::v128 a1,
                     ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlshq_lane_s32, addr 0x4526a24, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmlshq_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                     ::Unity::Burst::Intrinsics::v128 a1,
                     ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlshq_laneq_s16, addr 0x45269b4, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmlshq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v128 a1,
                      ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlshq_laneq_s32, addr 0x4526a94, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmlshq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v128 a1,
                      ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlshq_s16, addr 0x45266dc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmlshq_s16(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1,
                ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqrdmlshq_s32, addr 0x4526714, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmlshq_s32(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1,
                ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqrdmlshs_lane_s32, addr 0x4526cc4, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int32_t vqrdmlshs_lane_s32(int32_t a0, int32_t a1,
                                           ::Unity::Burst::Intrinsics::v64 a2,
                                           int32_t a3);

  /// @brief Method vqrdmlshs_s32, addr 0x4526b74, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqrdmlshs_s32(int32_t a0, int32_t a1, int32_t a2);

  /// @brief Method vqrdmulh_lane_s16, addr 0x4514aa0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmulh_lane_s16(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqrdmulh_lane_s32, addr 0x4514b10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmulh_lane_s32(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqrdmulh_laneq_s16, addr 0x45219ec, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0,
                     ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrdmulh_laneq_s32, addr 0x4521a5c, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0,
                     ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrdmulh_n_s16, addr 0x45149c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmulh_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// @brief Method vqrdmulh_n_s32, addr 0x4514a30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmulh_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqrdmulh_s16, addr 0x450d3d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmulh_s16(::Unity::Burst::Intrinsics::v64 a0,
               ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrdmulh_s32, addr 0x450d440, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrdmulh_s32(::Unity::Burst::Intrinsics::v64 a0,
               ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrdmulhh_lane_s16, addr 0x452197c, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int16_t vqrdmulhh_lane_s16(int16_t a0,
                                           ::Unity::Burst::Intrinsics::v64 a1,
                                           int32_t a2);

  /// @brief Method vqrdmulhh_laneq_s16, addr 0x4521acc, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int16_t vqrdmulhh_laneq_s16(int16_t a0,
                                            ::Unity::Burst::Intrinsics::v128 a1,
                                            int32_t a2);

  /// @brief Method vqrdmulhh_s16, addr 0x4519b10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vqrdmulhh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqrdmulhq_lane_s16, addr 0x4514ad8, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128 a0,
                     ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqrdmulhq_lane_s32, addr 0x4514b48, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128 a0,
                     ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqrdmulhq_laneq_s16, addr 0x4521a24, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrdmulhq_laneq_s32, addr 0x4521a94, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0,
                      ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrdmulhq_n_s16, addr 0x45149f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmulhq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// @brief Method vqrdmulhq_n_s32, addr 0x4514a68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmulhq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrdmulhq_s16, addr 0x450d408, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmulhq_s16(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrdmulhq_s32, addr 0x450d478, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrdmulhq_s32(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrdmulhs_lane_s32, addr 0x45219b4, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int32_t vqrdmulhs_lane_s32(int32_t a0,
                                           ::Unity::Burst::Intrinsics::v64 a1,
                                           int32_t a2);

  /// @brief Method vqrdmulhs_laneq_s32, addr 0x4521b04, size 0x38, virtual
  /// false, abstract: false, final false
  static inline int32_t vqrdmulhs_laneq_s32(int32_t a0,
                                            ::Unity::Burst::Intrinsics::v128 a1,
                                            int32_t a2);

  /// @brief Method vqrdmulhs_s32, addr 0x4519b48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqrdmulhs_s32(int32_t a0, int32_t a1);

  /// @brief Method vqrshl_s16, addr 0x4510ed0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrshl_s16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_s32, addr 0x4510f40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrshl_s32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_s64, addr 0x4510fb0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrshl_s64(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_s8, addr 0x4510e60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrshl_s8(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_u16, addr 0x4511090, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrshl_u16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_u32, addr 0x4511100, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrshl_u32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_u64, addr 0x4511170, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrshl_u64(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_u8, addr 0x4511020, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrshl_u8(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshlb_s8, addr 0x451ced0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vqrshlb_s8(int8_t a0, int8_t a1);

  /// @brief Method vqrshlb_u8, addr 0x451cfb0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vqrshlb_u8(uint8_t a0, int8_t a1);

  /// @brief Method vqrshld_s64, addr 0x451cf78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vqrshld_s64(int64_t a0, int64_t a1);

  /// @brief Method vqrshld_u64, addr 0x451d058, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vqrshld_u64(uint64_t a0, int64_t a1);

  /// @brief Method vqrshlh_s16, addr 0x451cf08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vqrshlh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqrshlh_u16, addr 0x451cfe8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vqrshlh_u16(uint16_t a0, int16_t a1);

  /// @brief Method vqrshlq_s16, addr 0x4510f08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrshlq_s16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_s32, addr 0x4510f78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrshlq_s32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_s64, addr 0x4510fe8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrshlq_s64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_s8, addr 0x4510e98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrshlq_s8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_u16, addr 0x45110c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrshlq_u16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_u32, addr 0x4511138, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrshlq_u32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_u64, addr 0x45111a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrshlq_u64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_u8, addr 0x4511058, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrshlq_u8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshls_s32, addr 0x451cf40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqrshls_s32(int32_t a0, int32_t a1);

  /// @brief Method vqrshls_u32, addr 0x451d020, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vqrshls_u32(uint32_t a0, int32_t a1);

  /// @brief Method vqrshrn_high_n_s16, addr 0x451dd78, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0,
                     ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_high_n_s32, addr 0x451ddb0, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0,
                     ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_high_n_s64, addr 0x451dde8, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0,
                     ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_high_n_u16, addr 0x451de20, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0,
                     ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_high_n_u32, addr 0x451de58, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0,
                     ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_high_n_u64, addr 0x451de90, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0,
                     ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_n_s16, addr 0x4512818, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrn_n_s32, addr 0x4512850, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrn_n_s64, addr 0x4512888, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrn_n_u16, addr 0x45128c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrn_n_u32, addr 0x45128f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrn_n_u64, addr 0x4512930, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrnd_n_s64, addr 0x451dc98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqrshrnd_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqrshrnd_n_u64, addr 0x451dd40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vqrshrnd_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vqrshrnh_n_s16, addr 0x451dc28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vqrshrnh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqrshrnh_n_u16, addr 0x451dcd0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vqrshrnh_n_u16(uint16_t a0, int32_t a1);

  /// @brief Method vqrshrns_n_s32, addr 0x451dc60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vqrshrns_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqrshrns_n_u32, addr 0x451dd08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vqrshrns_n_u32(uint32_t a0, int32_t a1);

  /// @brief Method vqrshrun_high_n_s16, addr 0x451d790, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrshrun_high_n_s16(::Unity::Burst::Intrinsics::v64 a0,
                      ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrun_high_n_s32, addr 0x451d7c8, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrshrun_high_n_s32(::Unity::Burst::Intrinsics::v64 a0,
                      ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrun_high_n_s64, addr 0x451d800, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqrshrun_high_n_s64(::Unity::Burst::Intrinsics::v64 a0,
                      ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrun_n_s16, addr 0x45124d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrshrun_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrun_n_s32, addr 0x4512508, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrshrun_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrun_n_s64, addr 0x4512540, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqrshrun_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrund_n_s64, addr 0x451d758, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vqrshrund_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqrshrunh_n_s16, addr 0x451d6e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vqrshrunh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqrshruns_n_s32, addr 0x451d720, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vqrshruns_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqshl_n_s16, addr 0x4511f88, size 0x18, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshl_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_s32, addr 0x4511fc0, size 0x18, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshl_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_s64, addr 0x4511ff8, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshl_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_s8, addr 0x4511f50, size 0x18, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshl_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_u16, addr 0x451206c, size 0x18, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshl_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_u32, addr 0x45120a4, size 0x18, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshl_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_u64, addr 0x45120dc, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshl_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_u8, addr 0x4512034, size 0x18, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshl_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_s16, addr 0x45107d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshl_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_s32, addr 0x4510840, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshl_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_s64, addr 0x45108b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshl_s64(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_s8, addr 0x4510760, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshl_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_u16, addr 0x4510990, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshl_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_u32, addr 0x4510a00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshl_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_u64, addr 0x4510a70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshl_u64(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_u8, addr 0x4510920, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshl_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshlb_n_s8, addr 0x451d1a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vqshlb_n_s8(int8_t a0, int32_t a1);

  /// @brief Method vqshlb_n_u8, addr 0x451d288, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vqshlb_n_u8(uint8_t a0, int32_t a1);

  /// @brief Method vqshlb_s8, addr 0x451cca0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vqshlb_s8(int8_t a0, int8_t a1);

  /// @brief Method vqshlb_u8, addr 0x451cd80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vqshlb_u8(uint8_t a0, int8_t a1);

  /// @brief Method vqshld_n_s64, addr 0x451d250, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vqshld_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqshld_n_u64, addr 0x451d330, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vqshld_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vqshld_s64, addr 0x451cd48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vqshld_s64(int64_t a0, int64_t a1);

  /// @brief Method vqshld_u64, addr 0x451ce28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vqshld_u64(uint64_t a0, int64_t a1);

  /// @brief Method vqshlh_n_s16, addr 0x451d1e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vqshlh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqshlh_n_u16, addr 0x451d2c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vqshlh_n_u16(uint16_t a0, int32_t a1);

  /// @brief Method vqshlh_s16, addr 0x451ccd8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vqshlh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqshlh_u16, addr 0x451cdb8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vqshlh_u16(uint16_t a0, int16_t a1);

  /// @brief Method vqshlq_n_s16, addr 0x4511fa0, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshlq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_s32, addr 0x4511fd8, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshlq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_s64, addr 0x4512014, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshlq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_s8, addr 0x4511f68, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshlq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_u16, addr 0x4512084, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshlq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_u32, addr 0x45120bc, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshlq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_u64, addr 0x45120f8, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshlq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_u8, addr 0x451204c, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshlq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_s16, addr 0x4510808, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshlq_s16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_s32, addr 0x4510878, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshlq_s32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_s64, addr 0x45108e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshlq_s64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_s8, addr 0x4510798, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshlq_s8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_u16, addr 0x45109c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshlq_u16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_u32, addr 0x4510a38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshlq_u32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_u64, addr 0x4510aa8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshlq_u64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_u8, addr 0x4510958, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshlq_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshls_n_s32, addr 0x451d218, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqshls_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqshls_n_u32, addr 0x451d2f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vqshls_n_u32(uint32_t a0, int32_t a1);

  /// @brief Method vqshls_s32, addr 0x451cd10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqshls_s32(int32_t a0, int32_t a1);

  /// @brief Method vqshls_u32, addr 0x451cdf0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vqshls_u32(uint32_t a0, int32_t a1);

  /// @brief Method vqshlu_n_s16, addr 0x4512188, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshlu_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshlu_n_s32, addr 0x45121f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshlu_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshlu_n_s64, addr 0x4512268, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshlu_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshlu_n_s8, addr 0x4512118, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshlu_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshlub_n_s8, addr 0x451d368, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vqshlub_n_s8(int8_t a0, int32_t a1);

  /// @brief Method vqshlud_n_s64, addr 0x451d410, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vqshlud_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqshluh_n_s16, addr 0x451d3a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vqshluh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqshluq_n_s16, addr 0x45121c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshluq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshluq_n_s32, addr 0x4512230, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshluq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshluq_n_s64, addr 0x45122a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshluq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshluq_n_s8, addr 0x4512150, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshluq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlus_n_s32, addr 0x451d3d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vqshlus_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqshrn_high_n_s16, addr 0x451d988, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_high_n_s32, addr 0x451d9c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_high_n_s64, addr 0x451d9f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_high_n_u16, addr 0x451da30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_high_n_u32, addr 0x451da68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_high_n_u64, addr 0x451daa0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_n_s16, addr 0x4512578, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrn_n_s32, addr 0x45125b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrn_n_s64, addr 0x45125e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrn_n_u16, addr 0x4512620, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrn_n_u32, addr 0x4512658, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrn_n_u64, addr 0x4512690, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrnd_n_s64, addr 0x451d8a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqshrnd_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqshrnd_n_u64, addr 0x451d950, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vqshrnd_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vqshrnh_n_s16, addr 0x451d838, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vqshrnh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqshrnh_n_u16, addr 0x451d8e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vqshrnh_n_u16(uint16_t a0, int32_t a1);

  /// @brief Method vqshrns_n_s32, addr 0x451d870, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vqshrns_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqshrns_n_u32, addr 0x451d918, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vqshrns_n_u32(uint32_t a0, int32_t a1);

  /// @brief Method vqshrun_high_n_s16, addr 0x451d640, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshrun_high_n_s16(::Unity::Burst::Intrinsics::v64 a0,
                     ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrun_high_n_s32, addr 0x451d678, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshrun_high_n_s32(::Unity::Burst::Intrinsics::v64 a0,
                     ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrun_high_n_s64, addr 0x451d6b0, size 0x38, virtual
  /// false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqshrun_high_n_s64(::Unity::Burst::Intrinsics::v64 a0,
                     ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrun_n_s16, addr 0x4512428, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshrun_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrun_n_s32, addr 0x4512460, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshrun_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrun_n_s64, addr 0x4512498, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqshrun_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrund_n_s64, addr 0x451d608, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vqshrund_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqshrunh_n_s16, addr 0x451d598, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vqshrunh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqshruns_n_s32, addr 0x451d5d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vqshruns_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqsub_s16, addr 0x450df70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqsub_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_s32, addr 0x450dfe0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqsub_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_s64, addr 0x450e050, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqsub_s64(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_s8, addr 0x450df00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqsub_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_u16, addr 0x450e130, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqsub_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_u32, addr 0x450e1a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqsub_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_u64, addr 0x450e210, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqsub_u64(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_u8, addr 0x450e0c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqsub_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsubb_s8, addr 0x451a2f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vqsubb_s8(int8_t a0, int8_t a1);

  /// @brief Method vqsubb_u8, addr 0x451a3d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vqsubb_u8(uint8_t a0, uint8_t a1);

  /// @brief Method vqsubd_s64, addr 0x451a398, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vqsubd_s64(int64_t a0, int64_t a1);

  /// @brief Method vqsubd_u64, addr 0x451a478, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vqsubd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vqsubh_s16, addr 0x451a328, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vqsubh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqsubh_u16, addr 0x451a408, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vqsubh_u16(uint16_t a0, uint16_t a1);

  /// @brief Method vqsubq_s16, addr 0x450dfa8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqsubq_s16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_s32, addr 0x450e018, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqsubq_s32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_s64, addr 0x450e088, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqsubq_s64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_s8, addr 0x450df38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqsubq_s8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_u16, addr 0x450e168, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqsubq_u16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_u32, addr 0x450e1d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqsubq_u32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_u64, addr 0x450e248, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqsubq_u64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_u8, addr 0x450e0f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqsubq_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubs_s32, addr 0x451a360, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vqsubs_s32(int32_t a0, int32_t a1);

  /// @brief Method vqsubs_u32, addr 0x451a440, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vqsubs_u32(uint32_t a0, uint32_t a1);

  /// @brief Method vqtbl1_s8, addr 0x4525aac, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqtbl1_s8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqtbl1_u8, addr 0x4525b1c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqtbl1_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqtbl1q_s8, addr 0x4525ae4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqtbl1q_s8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqtbl1q_u8, addr 0x4525b24, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqtbl1q_u8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqtbx1_s8, addr 0x4525b2c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqtbx1_s8(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqtbx1_u8, addr 0x4525b9c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vqtbx1_u8(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v128 a1,
            ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqtbx1q_s8, addr 0x4525b64, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqtbx1q_s8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1,
             ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqtbx1q_u8, addr 0x4525ba4, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vqtbx1q_u8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1,
             ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_s16, addr 0x4518bc0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vraddhn_high_s16(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1,
                   ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_s32, addr 0x4518bf8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vraddhn_high_s32(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1,
                   ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_s64, addr 0x4518c30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vraddhn_high_s64(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1,
                   ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_u16, addr 0x4518c68, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vraddhn_high_u16(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1,
                   ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_u32, addr 0x4518c70, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vraddhn_high_u32(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1,
                   ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_u64, addr 0x4518c78, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vraddhn_high_u64(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1,
                   ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_s16, addr 0x450c8e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vraddhn_s16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vraddhn_s32, addr 0x450c918, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vraddhn_s32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vraddhn_s64, addr 0x450c950, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vraddhn_s64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vraddhn_u16, addr 0x450c988, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vraddhn_u16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vraddhn_u32, addr 0x450c990, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vraddhn_u32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vraddhn_u64, addr 0x450c998, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vraddhn_u64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrbit_s8, addr 0x4522f4c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrbit_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrbit_u8, addr 0x4522fbc, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrbit_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrbitq_s8, addr 0x4522f84, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrbitq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrbitq_u8, addr 0x4522fc4, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrbitq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrecpe_f32, addr 0x4515c60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrecpe_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrecpe_f64, addr 0x45222ac, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrecpe_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrecpe_u32, addr 0x4515bf0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrecpe_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrecped_f64, addr 0x4522354, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vrecped_f64(double_t a0);

  /// @brief Method vrecpeq_f32, addr 0x4515c98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrecpeq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrecpeq_f64, addr 0x45222e4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrecpeq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrecpeq_u32, addr 0x4515c28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrecpeq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrecpes_f32, addr 0x452231c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vrecpes_f32(float_t a0);

  /// @brief Method vrecps_f32, addr 0x4515cd0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrecps_f32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrecps_f64, addr 0x452238c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrecps_f64(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrecpsd_f64, addr 0x4522434, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vrecpsd_f64(double_t a0, double_t a1);

  /// @brief Method vrecpsq_f32, addr 0x4515d08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrecpsq_f32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrecpsq_f64, addr 0x45223c4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrecpsq_f64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrecpss_f32, addr 0x45223fc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vrecpss_f32(float_t a0, float_t a1);

  /// @brief Method vrecpxd_f64, addr 0x4525c7c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vrecpxd_f64(double_t a0);

  /// @brief Method vrecpxs_f32, addr 0x4525c44, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vrecpxs_f32(float_t a0);

  /// @brief Method vrev16_s8, addr 0x45177b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrev16_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev16_u8, addr 0x4517828, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrev16_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev16q_s8, addr 0x45177f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrev16q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev16q_u8, addr 0x4517830, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrev16q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev32_s16, addr 0x4517728, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrev32_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev32_s8, addr 0x45176b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrev32_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev32_u16, addr 0x45177a8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrev32_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev32_u8, addr 0x4517798, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrev32_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev32q_s16, addr 0x4517760, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrev32q_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev32q_s8, addr 0x45176f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrev32q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev32q_u16, addr 0x45177b0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrev32q_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev32q_u8, addr 0x45177a0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrev32q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64_f32, addr 0x45176a8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrev64_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_s16, addr 0x4517598, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrev64_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_s32, addr 0x4517608, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrev64_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_s8, addr 0x4517528, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrev64_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_u16, addr 0x4517688, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrev64_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_u32, addr 0x4517698, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrev64_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_u8, addr 0x4517678, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrev64_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64q_f32, addr 0x45176b0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrev64q_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_s16, addr 0x45175d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrev64q_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_s32, addr 0x4517640, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrev64q_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_s8, addr 0x4517560, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrev64q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_u16, addr 0x4517690, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrev64q_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_u32, addr 0x45176a0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrev64q_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_u8, addr 0x4517680, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrev64q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrhadd_s16, addr 0x450c270, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrhadd_s16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhadd_s32, addr 0x450c2e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrhadd_s32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhadd_s8, addr 0x450c200, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrhadd_s8(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhadd_u16, addr 0x450c3c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrhadd_u16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhadd_u32, addr 0x450c430, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrhadd_u32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhadd_u8, addr 0x450c350, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrhadd_u8(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhaddq_s16, addr 0x450c2a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrhaddq_s16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrhaddq_s32, addr 0x450c318, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrhaddq_s32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrhaddq_s8, addr 0x450c238, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrhaddq_s8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrhaddq_u16, addr 0x450c3f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrhaddq_u16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrhaddq_u32, addr 0x450c468, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrhaddq_u32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrhaddq_u8, addr 0x450c388, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrhaddq_u8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrnd_f32, addr 0x451f400, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrnd_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrnd_f64, addr 0x451f470, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrnd_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrnda_f32, addr 0x451f7b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrnda_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrnda_f64, addr 0x451f828, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrnda_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndaq_f32, addr 0x451f7f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrndaq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndaq_f64, addr 0x451f860, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrndaq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndi_f32, addr 0x451f898, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrndi_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndi_f64, addr 0x451f908, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrndi_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndiq_f32, addr 0x451f8d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrndiq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndiq_f64, addr 0x451f940, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrndiq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndm_f32, addr 0x451f5f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrndm_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndm_f64, addr 0x451f668, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrndm_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndmq_f32, addr 0x451f630, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrndmq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndmq_f64, addr 0x451f6a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrndmq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndn_f32, addr 0x451f4e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrndn_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndn_f64, addr 0x451f550, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrndn_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndnq_f32, addr 0x451f518, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrndnq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndnq_f64, addr 0x451f588, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrndnq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndns_f32, addr 0x451f5c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vrndns_f32(float_t a0);

  /// @brief Method vrndp_f32, addr 0x451f6d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrndp_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndp_f64, addr 0x451f748, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrndp_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndpq_f32, addr 0x451f710, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrndpq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndpq_f64, addr 0x451f780, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrndpq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndq_f32, addr 0x451f438, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrndq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndq_f64, addr 0x451f4a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrndq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndx_f32, addr 0x451f978, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrndx_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndx_f64, addr 0x451f9e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrndx_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndxq_f32, addr 0x451f9b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrndxq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndxq_f64, addr 0x451fa20, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrndxq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrshl_s16, addr 0x4510b50, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshl_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_s32, addr 0x4510bc0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshl_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_s64, addr 0x4510c30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshl_s64(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_s8, addr 0x4510ae0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshl_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_u16, addr 0x4510d10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshl_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_u32, addr 0x4510d80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshl_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_u64, addr 0x4510df0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshl_u64(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_u8, addr 0x4510ca0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshl_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshld_s64, addr 0x451ce60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vrshld_s64(int64_t a0, int64_t a1);

  /// @brief Method vrshld_u64, addr 0x451ce98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vrshld_u64(uint64_t a0, int64_t a1);

  /// @brief Method vrshlq_s16, addr 0x4510b88, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshlq_s16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_s32, addr 0x4510bf8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshlq_s32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_s64, addr 0x4510c68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshlq_s64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_s8, addr 0x4510b18, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshlq_s8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_u16, addr 0x4510d48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshlq_u16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_u32, addr 0x4510db8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshlq_u32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_u64, addr 0x4510e28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshlq_u64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_u8, addr 0x4510cd8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshlq_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshr_n_s16, addr 0x451191c, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshr_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_s32, addr 0x4511958, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshr_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_s64, addr 0x4511994, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshr_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_s8, addr 0x45118e0, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshr_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_u16, addr 0x4511a14, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshr_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_u32, addr 0x4511a50, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshr_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_u64, addr 0x4511a8c, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshr_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_u8, addr 0x45119d8, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshr_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshrd_n_s64, addr 0x451d0b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vrshrd_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vrshrd_n_u64, addr 0x451d0e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vrshrd_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vrshrn_high_n_s16, addr 0x451dad8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_high_n_s32, addr 0x451db10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_high_n_s64, addr 0x451db48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_high_n_u16, addr 0x451db80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_high_n_u32, addr 0x451dbb8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_high_n_u64, addr 0x451dbf0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0,
                    ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_n_s16, addr 0x45126c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrn_n_s32, addr 0x4512700, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrn_n_s64, addr 0x4512738, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrn_n_u16, addr 0x4512770, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrn_n_u32, addr 0x45127a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrn_n_u64, addr 0x45127e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_s16, addr 0x4511938, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshrq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_s32, addr 0x4511974, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshrq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_s64, addr 0x45119b4, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshrq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_s8, addr 0x45118fc, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshrq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_u16, addr 0x4511a30, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshrq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_u32, addr 0x4511a6c, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshrq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_u64, addr 0x4511aac, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshrq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_u8, addr 0x45119f4, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrshrq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrsqrte_f32, addr 0x4515db0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsqrte_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrsqrte_f64, addr 0x452254c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsqrte_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrsqrte_u32, addr 0x4515d40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsqrte_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrsqrted_f64, addr 0x45225f4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vrsqrted_f64(double_t a0);

  /// @brief Method vrsqrteq_f32, addr 0x4515de8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsqrteq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrsqrteq_f64, addr 0x4522584, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsqrteq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrsqrteq_u32, addr 0x4515d78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsqrteq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrsqrtes_f32, addr 0x45225bc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vrsqrtes_f32(float_t a0);

  /// @brief Method vrsqrts_f32, addr 0x4515e20, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsqrts_f32(::Unity::Burst::Intrinsics::v64 a0,
              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrsqrts_f64, addr 0x452262c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsqrts_f64(::Unity::Burst::Intrinsics::v64 a0,
              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrsqrtsd_f64, addr 0x45226d4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t vrsqrtsd_f64(double_t a0, double_t a1);

  /// @brief Method vrsqrtsq_f32, addr 0x4515e58, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsqrtsq_f32(::Unity::Burst::Intrinsics::v128 a0,
               ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsqrtsq_f64, addr 0x4522664, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsqrtsq_f64(::Unity::Burst::Intrinsics::v128 a0,
               ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsqrtss_f32, addr 0x452269c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t vrsqrtss_f32(float_t a0, float_t a1);

  /// @brief Method vrsra_n_s16, addr 0x4511e70, size 0xc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsra_n_s16(::Unity::Burst::Intrinsics::v64 a0,
              ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_s32, addr 0x4511e90, size 0xc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsra_n_s32(::Unity::Burst::Intrinsics::v64 a0,
              ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_s64, addr 0x4511eb0, size 0xc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsra_n_s64(::Unity::Burst::Intrinsics::v64 a0,
              ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_s8, addr 0x4511e50, size 0xc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsra_n_s8(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_u16, addr 0x4511ef0, size 0xc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsra_n_u16(::Unity::Burst::Intrinsics::v64 a0,
              ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_u32, addr 0x4511f10, size 0xc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsra_n_u32(::Unity::Burst::Intrinsics::v64 a0,
              ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_u64, addr 0x4511f30, size 0xc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsra_n_u64(::Unity::Burst::Intrinsics::v64 a0,
              ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_u8, addr 0x4511ed0, size 0xc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsra_n_u8(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsrad_n_s64, addr 0x451d138, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vrsrad_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// @brief Method vrsrad_n_u64, addr 0x451d170, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vrsrad_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// @brief Method vrsraq_n_s16, addr 0x4511e7c, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsraq_n_s16(::Unity::Burst::Intrinsics::v128 a0,
               ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_s32, addr 0x4511e9c, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsraq_n_s32(::Unity::Burst::Intrinsics::v128 a0,
               ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_s64, addr 0x4511ebc, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsraq_n_s64(::Unity::Burst::Intrinsics::v128 a0,
               ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_s8, addr 0x4511e5c, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsraq_n_s8(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_u16, addr 0x4511efc, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsraq_n_u16(::Unity::Burst::Intrinsics::v128 a0,
               ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_u32, addr 0x4511f1c, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsraq_n_u32(::Unity::Burst::Intrinsics::v128 a0,
               ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_u64, addr 0x4511f3c, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsraq_n_u64(::Unity::Burst::Intrinsics::v128 a0,
               ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_u8, addr 0x4511edc, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsraq_n_u8(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsubhn_high_s16, addr 0x451a570, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsubhn_high_s16(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1,
                   ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_high_s32, addr 0x451a5a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsubhn_high_s32(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1,
                   ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_high_s64, addr 0x451a5e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsubhn_high_s64(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1,
                   ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_high_u16, addr 0x451a618, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsubhn_high_u16(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1,
                   ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_high_u32, addr 0x451a620, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsubhn_high_u32(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1,
                   ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_high_u64, addr 0x451a628, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vrsubhn_high_u64(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1,
                   ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_s16, addr 0x450e340, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsubhn_s16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsubhn_s32, addr 0x450e378, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsubhn_s32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsubhn_s64, addr 0x450e3b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsubhn_s64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsubhn_u16, addr 0x450e3e8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsubhn_u16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsubhn_u32, addr 0x450e3f0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsubhn_u32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsubhn_u64, addr 0x450e3f8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vrsubhn_u64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vset_lane_f32, addr 0x4517dd8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vset_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_f64, addr 0x4525bec, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vset_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_s16, addr 0x4517d44, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vset_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_s32, addr 0x4517d7c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vset_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_s64, addr 0x4517db4, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vset_lane_s64(int64_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_s8, addr 0x4517d0c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vset_lane_s8(int8_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_u16, addr 0x4517c78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vset_lane_u16(uint16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_u32, addr 0x4517cb0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vset_lane_u32(uint32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_u64, addr 0x4517ce8, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vset_lane_u64(uint64_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_u8, addr 0x4517c40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vset_lane_u8(uint8_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsetq_lane_f32, addr 0x4517fd0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsetq_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_f64, addr 0x4525c0c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsetq_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_s16, addr 0x4517f28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsetq_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_s32, addr 0x4517f60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsetq_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_s64, addr 0x4517f98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsetq_lane_s64(int64_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_s8, addr 0x4517ef0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsetq_lane_s8(int8_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_u16, addr 0x4517e48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsetq_lane_u16(uint16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_u32, addr 0x4517e80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsetq_lane_u32(uint32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_u64, addr 0x4517eb8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsetq_lane_u64(uint64_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_u8, addr 0x4517e10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsetq_lane_u8(uint8_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsha1cq_u32, addr 0x4525e0c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsha1cq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1,
              ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha1h_u32, addr 0x4525eb4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vsha1h_u32(uint32_t a0);

  /// @brief Method vsha1mq_u32, addr 0x4525e7c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsha1mq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1,
              ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha1pq_u32, addr 0x4525e44, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsha1pq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1,
              ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha1su0q_u32, addr 0x4525eec, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsha1su0q_u32(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1,
                ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha1su1q_u32, addr 0x4525f24, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsha1su1q_u32(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsha256h2q_u32, addr 0x4525f94, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsha256h2q_u32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1,
                 ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha256hq_u32, addr 0x4525f5c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsha256hq_u32(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1,
                ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha256su0q_u32, addr 0x4525fcc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsha256su0q_u32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsha256su1q_u32, addr 0x4526004, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsha256su1q_u32(::Unity::Burst::Intrinsics::v128 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vshl_n_s16, addr 0x45115d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshl_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_s32, addr 0x4511640, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshl_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_s64, addr 0x45116b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshl_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_s8, addr 0x4511560, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshl_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_u16, addr 0x4511790, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshl_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_u32, addr 0x4511800, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshl_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_u64, addr 0x4511870, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshl_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_u8, addr 0x4511720, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshl_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_s16, addr 0x4510450, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshl_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_s32, addr 0x45104c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshl_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_s64, addr 0x4510530, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshl_s64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_s8, addr 0x45103e0, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshl_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_u16, addr 0x4510610, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshl_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_u32, addr 0x4510680, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshl_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_u64, addr 0x45106f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshl_u64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_u8, addr 0x45105a0, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshl_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshld_n_s64, addr 0x451d0a0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline int64_t vshld_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vshld_n_u64, addr 0x451d0a8, size 0x8, virtual false,
  /// abstract: false, final false
  static inline uint64_t vshld_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vshld_s64, addr 0x451cc30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vshld_s64(int64_t a0, int64_t a1);

  /// @brief Method vshld_u64, addr 0x451cc68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vshld_u64(uint64_t a0, int64_t a1);

  /// @brief Method vshll_high_n_s16, addr 0x451df00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshll_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_high_n_s32, addr 0x451df38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshll_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_high_n_s8, addr 0x451dec8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshll_high_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_high_n_u16, addr 0x451dfa8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshll_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_high_n_u32, addr 0x451dfe0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshll_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_high_n_u8, addr 0x451df70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshll_high_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_n_s16, addr 0x45129a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshll_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshll_n_s32, addr 0x45129d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshll_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshll_n_s8, addr 0x4512968, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshll_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshll_n_u16, addr 0x4512a48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshll_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshll_n_u32, addr 0x4512a80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshll_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshll_n_u8, addr 0x4512a10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshll_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshlq_n_s16, addr 0x4511608, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshlq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_s32, addr 0x4511678, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshlq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_s64, addr 0x45116e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshlq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_s8, addr 0x4511598, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshlq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_u16, addr 0x45117c8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshlq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_u32, addr 0x4511838, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshlq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_u64, addr 0x45118a8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshlq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_u8, addr 0x4511758, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshlq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_s16, addr 0x4510488, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshlq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_s32, addr 0x45104f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshlq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_s64, addr 0x4510568, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshlq_s64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_s8, addr 0x4510418, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshlq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_u16, addr 0x4510648, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshlq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_u32, addr 0x45106b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshlq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_u64, addr 0x4510728, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshlq_u64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_u8, addr 0x45105d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshlq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshr_n_s16, addr 0x4511250, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshr_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_s32, addr 0x45112c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshr_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_s64, addr 0x4511330, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshr_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_s8, addr 0x45111e0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshr_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_u16, addr 0x4511410, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshr_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_u32, addr 0x4511480, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshr_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_u64, addr 0x45114f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshr_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_u8, addr 0x45113a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshr_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshrd_n_s64, addr 0x451d090, size 0x8, virtual false,
  /// abstract: false, final false
  static inline int64_t vshrd_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vshrd_n_u64, addr 0x451d098, size 0x8, virtual false,
  /// abstract: false, final false
  static inline uint64_t vshrd_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vshrn_high_n_s16, addr 0x451d448, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_high_n_s32, addr 0x451d480, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_high_n_s64, addr 0x451d4b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_high_n_u16, addr 0x451d4f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_high_n_u32, addr 0x451d528, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_high_n_u64, addr 0x451d560, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0,
                   ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_n_s16, addr 0x45122d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrn_n_s32, addr 0x4512310, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrn_n_s64, addr 0x4512348, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrn_n_u16, addr 0x4512380, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrn_n_u32, addr 0x45123b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrn_n_u64, addr 0x45123f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_s16, addr 0x4511288, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshrq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_s32, addr 0x45112f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshrq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_s64, addr 0x4511368, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshrq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_s8, addr 0x4511218, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshrq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_u16, addr 0x4511448, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshrq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_u32, addr 0x45114b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshrq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_u64, addr 0x4511528, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshrq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_u8, addr 0x45113d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vshrq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vsli_n_s16, addr 0x4512ea8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsli_n_s16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_s32, addr 0x4512f18, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsli_n_s32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_s64, addr 0x4512f88, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsli_n_s64(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_s8, addr 0x4512e38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsli_n_s8(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_u16, addr 0x4513068, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsli_n_u16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_u32, addr 0x45130d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsli_n_u32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_u64, addr 0x4513148, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsli_n_u64(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_u8, addr 0x4512ff8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsli_n_u8(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vslid_n_s64, addr 0x451e088, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vslid_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// @brief Method vslid_n_u64, addr 0x451e0c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vslid_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// @brief Method vsliq_n_s16, addr 0x4512ee0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsliq_n_s16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_s32, addr 0x4512f50, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsliq_n_s32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_s64, addr 0x4512fc0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsliq_n_s64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_s8, addr 0x4512e70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsliq_n_s8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_u16, addr 0x45130a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsliq_n_u16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_u32, addr 0x4513110, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsliq_n_u32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_u64, addr 0x4513180, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsliq_n_u64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_u8, addr 0x4513030, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsliq_n_u8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsqadd_u16, addr 0x45188d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsqadd_u16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsqadd_u32, addr 0x4518940, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsqadd_u32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsqadd_u64, addr 0x45189b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsqadd_u64(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsqadd_u8, addr 0x4518860, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsqadd_u8(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsqaddb_u8, addr 0x4518a20, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint8_t vsqaddb_u8(uint8_t a0, int8_t a1);

  /// @brief Method vsqaddd_u64, addr 0x4518ac8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vsqaddd_u64(uint64_t a0, int64_t a1);

  /// @brief Method vsqaddh_u16, addr 0x4518a58, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint16_t vsqaddh_u16(uint16_t a0, int16_t a1);

  /// @brief Method vsqaddq_u16, addr 0x4518908, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsqaddq_u16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsqaddq_u32, addr 0x4518978, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsqaddq_u32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsqaddq_u64, addr 0x45189e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsqaddq_u64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsqaddq_u8, addr 0x4518898, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsqaddq_u8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsqadds_u32, addr 0x4518a90, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint32_t vsqadds_u32(uint32_t a0, int32_t a1);

  /// @brief Method vsqrt_f32, addr 0x452246c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsqrt_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vsqrt_f64, addr 0x45224dc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsqrt_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vsqrtq_f32, addr 0x45224a4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsqrtq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vsqrtq_f64, addr 0x4522514, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsqrtq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vsra_n_s16, addr 0x4511b40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsra_n_s16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_s32, addr 0x4511bb0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsra_n_s32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_s64, addr 0x4511c20, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsra_n_s64(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_s8, addr 0x4511ad0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsra_n_s8(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_u16, addr 0x4511d00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsra_n_u16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_u32, addr 0x4511d70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsra_n_u32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_u64, addr 0x4511de0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsra_n_u64(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_u8, addr 0x4511c90, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsra_n_u8(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsrad_n_s64, addr 0x451d120, size 0xc, virtual false,
  /// abstract: false, final false
  static inline int64_t vsrad_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// @brief Method vsrad_n_u64, addr 0x451d12c, size 0xc, virtual false,
  /// abstract: false, final false
  static inline uint64_t vsrad_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// @brief Method vsraq_n_s16, addr 0x4511b78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsraq_n_s16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_s32, addr 0x4511be8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsraq_n_s32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_s64, addr 0x4511c58, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsraq_n_s64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_s8, addr 0x4511b08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsraq_n_s8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_u16, addr 0x4511d38, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsraq_n_u16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_u32, addr 0x4511da8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsraq_n_u32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_u64, addr 0x4511e18, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsraq_n_u64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_u8, addr 0x4511cc8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsraq_n_u8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsri_n_s16, addr 0x4512b28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsri_n_s16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_s32, addr 0x4512b98, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsri_n_s32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_s64, addr 0x4512c08, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsri_n_s64(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_s8, addr 0x4512ab8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsri_n_s8(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_u16, addr 0x4512ce8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsri_n_u16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_u32, addr 0x4512d58, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsri_n_u32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_u64, addr 0x4512dc8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsri_n_u64(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_u8, addr 0x4512c78, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsri_n_u8(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsrid_n_s64, addr 0x451e018, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vsrid_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// @brief Method vsrid_n_u64, addr 0x451e050, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vsrid_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// @brief Method vsriq_n_s16, addr 0x4512b60, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsriq_n_s16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_s32, addr 0x4512bd0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsriq_n_s32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_s64, addr 0x4512c40, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsriq_n_s64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_s8, addr 0x4512af0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsriq_n_s8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_u16, addr 0x4512d20, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsriq_n_u16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_u32, addr 0x4512d90, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsriq_n_u32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_u64, addr 0x4512e00, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsriq_n_u64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_u8, addr 0x4512cb0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsriq_n_u8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vst1_f32, addr 0x4527c58, size 0x8, virtual false, abstract:
  /// false, final false
  static inline void vst1_f32(::cordl_internals::Ptr<float_t> a0,
                              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_f64, addr 0x4527c68, size 0x8, virtual false, abstract:
  /// false, final false
  static inline void vst1_f64(::cordl_internals::Ptr<double_t> a0,
                              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_s16, addr 0x4527be8, size 0x8, virtual false, abstract:
  /// false, final false
  static inline void vst1_s16(::cordl_internals::Ptr<int16_t> a0,
                              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_s32, addr 0x4527bf8, size 0x8, virtual false, abstract:
  /// false, final false
  static inline void vst1_s32(::cordl_internals::Ptr<int32_t> a0,
                              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_s64, addr 0x4527c08, size 0x8, virtual false, abstract:
  /// false, final false
  static inline void vst1_s64(::cordl_internals::Ptr<int64_t> a0,
                              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_s8, addr 0x4527bd8, size 0x8, virtual false, abstract:
  /// false, final false
  static inline void vst1_s8(::cordl_internals::Ptr<int8_t> a0,
                             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_u16, addr 0x4527c28, size 0x8, virtual false, abstract:
  /// false, final false
  static inline void vst1_u16(::cordl_internals::Ptr<uint16_t> a0,
                              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_u32, addr 0x4527c38, size 0x8, virtual false, abstract:
  /// false, final false
  static inline void vst1_u32(::cordl_internals::Ptr<uint32_t> a0,
                              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_u64, addr 0x4527c48, size 0x8, virtual false, abstract:
  /// false, final false
  static inline void vst1_u64(::cordl_internals::Ptr<uint64_t> a0,
                              ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_u8, addr 0x4527c18, size 0x8, virtual false, abstract:
  /// false, final false
  static inline void vst1_u8(::cordl_internals::Ptr<uint8_t> a0,
                             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1q_f32, addr 0x4527c60, size 0x8, virtual false,
  /// abstract: false, final false
  static inline void vst1q_f32(::cordl_internals::Ptr<float_t> a0,
                               ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_f64, addr 0x4527c70, size 0x8, virtual false,
  /// abstract: false, final false
  static inline void vst1q_f64(::cordl_internals::Ptr<double_t> a0,
                               ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_s16, addr 0x4527bf0, size 0x8, virtual false,
  /// abstract: false, final false
  static inline void vst1q_s16(::cordl_internals::Ptr<int16_t> a0,
                               ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_s32, addr 0x4527c00, size 0x8, virtual false,
  /// abstract: false, final false
  static inline void vst1q_s32(::cordl_internals::Ptr<int32_t> a0,
                               ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_s64, addr 0x4527c10, size 0x8, virtual false,
  /// abstract: false, final false
  static inline void vst1q_s64(::cordl_internals::Ptr<int64_t> a0,
                               ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_s8, addr 0x4527be0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline void vst1q_s8(::cordl_internals::Ptr<int8_t> a0,
                              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_u16, addr 0x4527c30, size 0x8, virtual false,
  /// abstract: false, final false
  static inline void vst1q_u16(::cordl_internals::Ptr<uint16_t> a0,
                               ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_u32, addr 0x4527c40, size 0x8, virtual false,
  /// abstract: false, final false
  static inline void vst1q_u32(::cordl_internals::Ptr<uint32_t> a0,
                               ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_u64, addr 0x4527c50, size 0x8, virtual false,
  /// abstract: false, final false
  static inline void vst1q_u64(::cordl_internals::Ptr<uint64_t> a0,
                               ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_u8, addr 0x4527c20, size 0x8, virtual false, abstract:
  /// false, final false
  static inline void vst1q_u8(::cordl_internals::Ptr<uint8_t> a0,
                              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsub_f32, addr 0x450d950, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsub_f32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_f64, addr 0x4519f70, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsub_f64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_s16, addr 0x450d7c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsub_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_s32, addr 0x450d830, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsub_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_s64, addr 0x450d8a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsub_s64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_s8, addr 0x450d750, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsub_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_u16, addr 0x450d920, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsub_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_u32, addr 0x450d930, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsub_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_u64, addr 0x450d940, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsub_u64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_u8, addr 0x450d910, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsub_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubd_s64, addr 0x4519fe0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vsubd_s64(int64_t a0, int64_t a1);

  /// @brief Method vsubd_u64, addr 0x451a018, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vsubd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vsubhn_high_s16, addr 0x451a4b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubhn_high_s16(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_high_s32, addr 0x451a4e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubhn_high_s32(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_high_s64, addr 0x451a520, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubhn_high_s64(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_high_u16, addr 0x451a558, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubhn_high_u16(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_high_u32, addr 0x451a560, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubhn_high_u32(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_high_u64, addr 0x451a568, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubhn_high_u64(::Unity::Burst::Intrinsics::v64 a0,
                  ::Unity::Burst::Intrinsics::v128 a1,
                  ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_s16, addr 0x450e280, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsubhn_s16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubhn_s32, addr 0x450e2b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsubhn_s32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubhn_s64, addr 0x450e2f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsubhn_s64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubhn_u16, addr 0x450e328, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsubhn_u16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubhn_u32, addr 0x450e330, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsubhn_u32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubhn_u64, addr 0x450e338, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vsubhn_u64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_s16, addr 0x451a088, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubl_high_s16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_s32, addr 0x451a0c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubl_high_s32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_s8, addr 0x451a050, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubl_high_s8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_u16, addr 0x451a130, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubl_high_u16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_u32, addr 0x451a168, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubl_high_u32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_u8, addr 0x451a0f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubl_high_u8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_s16, addr 0x450d9f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubl_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubl_s32, addr 0x450da30, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubl_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubl_s8, addr 0x450d9c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubl_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubl_u16, addr 0x450daa0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubl_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubl_u32, addr 0x450dad8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubl_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubl_u8, addr 0x450da68, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubl_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubq_f32, addr 0x450d988, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubq_f32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_f64, addr 0x4519fa8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubq_f64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_s16, addr 0x450d7f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_s32, addr 0x450d868, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_s64, addr 0x450d8d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubq_s64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_s8, addr 0x450d788, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_u16, addr 0x450d928, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_u32, addr 0x450d938, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_u64, addr 0x450d948, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubq_u64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_u8, addr 0x450d918, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_s16, addr 0x451a1d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubw_high_s16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_s32, addr 0x451a210, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubw_high_s32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_s8, addr 0x451a1a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubw_high_s8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_u16, addr 0x451a280, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubw_high_u16(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_u32, addr 0x451a2b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubw_high_u32(::Unity::Burst::Intrinsics::v128 a0,
                 ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_u8, addr 0x451a248, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubw_high_u8(::Unity::Burst::Intrinsics::v128 a0,
                ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_s16, addr 0x450db48, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubw_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubw_s32, addr 0x450db80, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubw_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubw_s8, addr 0x450db10, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubw_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubw_u16, addr 0x450dbf0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubw_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubw_u32, addr 0x450dc28, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubw_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubw_u8, addr 0x450dbb8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vsubw_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtbl1_s8, addr 0x4517838, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtbl1_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtbl1_u8, addr 0x4517870, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtbl1_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtbx1_s8, addr 0x4517878, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtbx1_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vtbx1_u8, addr 0x45178b0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtbx1_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1,
           ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vtrn1_f32, addr 0x45258bc, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtrn1_f32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_s16, addr 0x452576c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtrn1_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_s32, addr 0x45257dc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtrn1_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_s8, addr 0x45256fc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtrn1_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_u16, addr 0x4525894, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtrn1_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_u32, addr 0x45258a4, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtrn1_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_u8, addr 0x4525884, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtrn1_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1q_f32, addr 0x45258c4, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn1q_f32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_f64, addr 0x45258cc, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn1q_f64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_s16, addr 0x45257a4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn1q_s16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_s32, addr 0x4525814, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn1q_s32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_s64, addr 0x452584c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn1q_s64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_s8, addr 0x4525734, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn1q_s8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_u16, addr 0x452589c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn1q_u16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_u32, addr 0x45258ac, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn1q_u32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_u64, addr 0x45258b4, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn1q_u64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_u8, addr 0x452588c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn1q_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2_f32, addr 0x4525a94, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtrn2_f32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_s16, addr 0x4525944, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtrn2_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_s32, addr 0x45259b4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtrn2_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_s8, addr 0x45258d4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtrn2_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_u16, addr 0x4525a6c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtrn2_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_u32, addr 0x4525a7c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtrn2_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_u8, addr 0x4525a5c, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtrn2_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2q_f32, addr 0x4525a9c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn2q_f32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_f64, addr 0x4525aa4, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn2q_f64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_s16, addr 0x452597c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn2q_s16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_s32, addr 0x45259ec, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn2q_s32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_s64, addr 0x4525a24, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn2q_s64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_s8, addr 0x452590c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn2q_s8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_u16, addr 0x4525a74, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn2q_u16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_u32, addr 0x4525a84, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn2q_u32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_u64, addr 0x4525a8c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn2q_u64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_u8, addr 0x4525a64, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtrn2q_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtst_s16, addr 0x450f460, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtst_s16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_s32, addr 0x450f4d0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtst_s32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_s64, addr 0x451c520, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtst_s64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_s8, addr 0x450f3f0, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtst_s8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_u16, addr 0x450f550, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtst_u16(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_u32, addr 0x450f560, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtst_u32(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_u64, addr 0x451c590, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtst_u64(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_u8, addr 0x450f540, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vtst_u8(::Unity::Burst::Intrinsics::v64 a0,
          ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtstd_s64, addr 0x451c5a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vtstd_s64(int64_t a0, int64_t a1);

  /// @brief Method vtstd_u64, addr 0x451c5d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline uint64_t vtstd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vtstq_s16, addr 0x450f498, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtstq_s16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_s32, addr 0x450f508, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtstq_s32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_s64, addr 0x451c558, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtstq_s64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_s8, addr 0x450f428, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtstq_s8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_u16, addr 0x450f558, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtstq_u16(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_u32, addr 0x450f568, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtstq_u32(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_u64, addr 0x451c598, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtstq_u64(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_u8, addr 0x450f548, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vtstq_u8(::Unity::Burst::Intrinsics::v128 a0,
           ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuqadd_s16, addr 0x4518630, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuqadd_s16(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuqadd_s32, addr 0x45186a0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuqadd_s32(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuqadd_s64, addr 0x4518710, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuqadd_s64(::Unity::Burst::Intrinsics::v64 a0,
             ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuqadd_s8, addr 0x45185c0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuqadd_s8(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuqaddb_s8, addr 0x4518780, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int8_t vuqaddb_s8(int8_t a0, uint8_t a1);

  /// @brief Method vuqaddd_s64, addr 0x4518828, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int64_t vuqaddd_s64(int64_t a0, uint64_t a1);

  /// @brief Method vuqaddh_s16, addr 0x45187b8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int16_t vuqaddh_s16(int16_t a0, uint16_t a1);

  /// @brief Method vuqaddq_s16, addr 0x4518668, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuqaddq_s16(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuqaddq_s32, addr 0x45186d8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuqaddq_s32(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuqaddq_s64, addr 0x4518748, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuqaddq_s64(::Unity::Burst::Intrinsics::v128 a0,
              ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuqaddq_s8, addr 0x45185f8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuqaddq_s8(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuqadds_s32, addr 0x45187f0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t vuqadds_s32(int32_t a0, uint32_t a1);

  /// @brief Method vuzp1_f32, addr 0x452550c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuzp1_f32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_s16, addr 0x45253bc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuzp1_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_s32, addr 0x452542c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuzp1_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_s8, addr 0x452534c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuzp1_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_u16, addr 0x45254e4, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuzp1_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_u32, addr 0x45254f4, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuzp1_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_u8, addr 0x45254d4, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuzp1_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1q_f32, addr 0x4525514, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp1q_f32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_f64, addr 0x452551c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp1q_f64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_s16, addr 0x45253f4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp1q_s16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_s32, addr 0x4525464, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp1q_s32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_s64, addr 0x452549c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp1q_s64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_s8, addr 0x4525384, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp1q_s8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_u16, addr 0x45254ec, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp1q_u16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_u32, addr 0x45254fc, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp1q_u32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_u64, addr 0x4525504, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp1q_u64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_u8, addr 0x45254dc, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp1q_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2_f32, addr 0x45256e4, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuzp2_f32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_s16, addr 0x4525594, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuzp2_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_s32, addr 0x4525604, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuzp2_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_s8, addr 0x4525524, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuzp2_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_u16, addr 0x45256bc, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuzp2_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_u32, addr 0x45256cc, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuzp2_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_u8, addr 0x45256ac, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vuzp2_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2q_f32, addr 0x45256ec, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp2q_f32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_f64, addr 0x45256f4, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp2q_f64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_s16, addr 0x45255cc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp2q_s16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_s32, addr 0x452563c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp2q_s32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_s64, addr 0x4525674, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp2q_s64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_s8, addr 0x452555c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp2q_s8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_u16, addr 0x45256c4, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp2q_u16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_u32, addr 0x45256d4, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp2q_u32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_u64, addr 0x45256dc, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp2q_u64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_u8, addr 0x45256b4, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vuzp2q_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1_f32, addr 0x452515c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vzip1_f32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_s16, addr 0x452500c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vzip1_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_s32, addr 0x452507c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vzip1_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_s8, addr 0x4524f9c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vzip1_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_u16, addr 0x4525134, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vzip1_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_u32, addr 0x4525144, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vzip1_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_u8, addr 0x4525124, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vzip1_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1q_f32, addr 0x4525164, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip1q_f32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_f64, addr 0x452516c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip1q_f64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_s16, addr 0x4525044, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip1q_s16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_s32, addr 0x45250b4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip1q_s32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_s64, addr 0x45250ec, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip1q_s64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_s8, addr 0x4524fd4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip1q_s8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_u16, addr 0x452513c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip1q_u16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_u32, addr 0x452514c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip1q_u32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_u64, addr 0x4525154, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip1q_u64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_u8, addr 0x452512c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip1q_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2_f32, addr 0x4525334, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vzip2_f32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_s16, addr 0x45251e4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vzip2_s16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_s32, addr 0x4525254, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vzip2_s32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_s8, addr 0x4525174, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vzip2_s8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_u16, addr 0x452530c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vzip2_u16(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_u32, addr 0x452531c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vzip2_u32(::Unity::Burst::Intrinsics::v64 a0,
            ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_u8, addr 0x45252fc, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Burst::Intrinsics::v64
  vzip2_u8(::Unity::Burst::Intrinsics::v64 a0,
           ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2q_f32, addr 0x452533c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip2q_f32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_f64, addr 0x4525344, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip2q_f64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_s16, addr 0x452521c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip2q_s16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_s32, addr 0x452528c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip2q_s32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_s64, addr 0x45252c4, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip2q_s64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_s8, addr 0x45251ac, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip2q_s8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_u16, addr 0x4525314, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip2q_u16(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_u32, addr 0x4525324, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip2q_u32(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_u64, addr 0x452532c, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip2q_u64(::Unity::Burst::Intrinsics::v128 a0,
             ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_u8, addr 0x4525304, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128
  vzip2q_u8(::Unity::Burst::Intrinsics::v128 a0,
            ::Unity::Burst::Intrinsics::v128 a1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Arm_Neon();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Arm_Neon", modifiers: "&&",
  // def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Arm_Neon(Arm_Neon &&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Arm_Neon", modifiers: "const&",
  // def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Arm_Neon(Arm_Neon const &) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{14639};

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(
    ::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::Arm_Neon, 0x10>,
    "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
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
  constexpr Arm();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Arm", modifiers: "&&",
  // def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Arm(Arm &&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Arm", modifiers: "const&",
  // def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Arm(Arm const &) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{14640};

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(
    ::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::Arm, 0x10>,
    "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
NEED_NO_BOX(::Unity::Burst::Intrinsics::Arm);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::Arm *,
                       "Unity.Burst.Intrinsics", "Arm");
NEED_NO_BOX(::Unity::Burst::Intrinsics::Arm_Neon);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::Arm_Neon *,
                       "Unity.Burst.Intrinsics", "Arm/Neon");
