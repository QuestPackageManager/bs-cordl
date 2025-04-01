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
  static inline ::Unity::Burst::Intrinsics::Arm_Neon* New_ctor();

  /// @brief Method __crc32b, addr 0x45210c8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32b(uint32_t a0, uint8_t a1);

  /// @brief Method __crc32cb, addr 0x45211a8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32cb(uint32_t a0, uint8_t a1);

  /// @brief Method __crc32cd, addr 0x4521250, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32cd(uint32_t a0, uint64_t a1);

  /// @brief Method __crc32ch, addr 0x45211e0, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32ch(uint32_t a0, uint16_t a1);

  /// @brief Method __crc32cw, addr 0x4521218, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32cw(uint32_t a0, uint32_t a1);

  /// @brief Method __crc32d, addr 0x4521170, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32d(uint32_t a0, uint64_t a1);

  /// @brief Method __crc32h, addr 0x4521100, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32h(uint32_t a0, uint16_t a1);

  /// @brief Method __crc32w, addr 0x4521138, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32w(uint32_t a0, uint32_t a1);

  /// @brief Method .ctor, addr 0x4522d04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsNeonArmv82FeaturesSupported, addr 0x4513104, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonArmv82FeaturesSupported();

  /// @brief Method get_IsNeonCryptoSupported, addr 0x4520e90, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonCryptoSupported();

  /// @brief Method get_IsNeonDotProdSupported, addr 0x4521368, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonDotProdSupported();

  /// @brief Method get_IsNeonRDMASupported, addr 0x4521610, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonRDMASupported();

  /// @brief Method get_IsNeonSupported, addr 0x4506ad4, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonSupported();

  /// @brief Method vaba_s16, addr 0x450aacc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vaba_s32, addr 0x450ab3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vaba_s8, addr 0x450aa5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vaba_u16, addr 0x450ac1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vaba_u32, addr 0x450ac8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vaba_u8, addr 0x450abac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_high_s16, addr 0x4517904, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_high_s32, addr 0x451793c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_high_s8, addr 0x45178cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_high_u16, addr 0x45179ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_high_u32, addr 0x45179e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_high_u8, addr 0x4517974, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_s16, addr 0x450ad34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_s32, addr 0x450ad6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_s8, addr 0x450acfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_u16, addr 0x450addc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_u32, addr 0x450ae14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_u8, addr 0x450ada4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabaq_s16, addr 0x450ab04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabaq_s32, addr 0x450ab74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabaq_s8, addr 0x450aa94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabaq_u16, addr 0x450ac54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabaq_u32, addr 0x450acc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabaq_u8, addr 0x450abe4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabd_f32, addr 0x450a89c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_f64, addr 0x451769c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_s16, addr 0x450a66c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_s32, addr 0x450a6dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_s8, addr 0x450a5fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_u16, addr 0x450a7bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_u32, addr 0x450a82c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_u8, addr 0x450a74c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdd_f64, addr 0x4517744, size 0x38, virtual false, abstract: false, final false
  static inline double_t vabdd_f64(double_t a0, double_t a1);

  /// @brief Method vabdl_high_s16, addr 0x45177b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_high_s32, addr 0x45177ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_high_s8, addr 0x451777c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_high_u16, addr 0x451785c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_high_u32, addr 0x4517894, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_high_u8, addr 0x4517824, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_s16, addr 0x450a944, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdl_s32, addr 0x450a97c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdl_s8, addr 0x450a90c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdl_u16, addr 0x450a9ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdl_u32, addr 0x450aa24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdl_u8, addr 0x450a9b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdq_f32, addr 0x450a8d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_f64, addr 0x45176d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_s16, addr 0x450a6a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_s32, addr 0x450a714, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_s8, addr 0x450a634, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_u16, addr 0x450a7f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_u32, addr 0x450a864, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_u8, addr 0x450a784, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabds_f32, addr 0x451770c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vabds_f32(float_t a0, float_t a1);

  /// @brief Method vabs_f32, addr 0x451045c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabs_f64, addr 0x451cf10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabs_s16, addr 0x451037c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabs_s32, addr 0x45103ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabs_s64, addr 0x451ce68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabs_s8, addr 0x451030c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabsd_s64, addr 0x451cea0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vabsd_s64(int64_t a0);

  /// @brief Method vabsq_f32, addr 0x4510494, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vabsq_f64, addr 0x451cf48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vabsq_s16, addr 0x45103b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vabsq_s32, addr 0x4510424, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vabsq_s64, addr 0x451ced8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vabsq_s8, addr 0x4510344, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vadd_f32, addr 0x4506cdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_f64, addr 0x451310c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_s16, addr 0x4506b4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_s32, addr 0x4506bbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_s64, addr 0x4506c2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_s8, addr 0x4506adc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_u16, addr 0x4506cac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_u32, addr 0x4506cbc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_u64, addr 0x4506ccc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_u8, addr 0x4506c9c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddd_s64, addr 0x451317c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddd_s64(int64_t a0, int64_t a1);

  /// @brief Method vaddd_u64, addr 0x45131b4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vaddhn_high_s16, addr 0x4513b8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_high_s32, addr 0x4513bc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_high_s64, addr 0x4513bfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_high_u16, addr 0x4513c34, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_high_u32, addr 0x4513c3c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_high_u64, addr 0x4513c44, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_s16, addr 0x45078ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddhn_s32, addr 0x45078e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddhn_s64, addr 0x450791c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddhn_u16, addr 0x4507954, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddhn_u32, addr 0x450795c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddhn_u64, addr 0x4507964, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_s16, addr 0x4513224, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_s32, addr 0x451325c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_s8, addr 0x45131ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_u16, addr 0x45132cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_u32, addr 0x4513304, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_u8, addr 0x4513294, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_s16, addr 0x4506d84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddl_s32, addr 0x4506dbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddl_s8, addr 0x4506d4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddl_u16, addr 0x4506e2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddl_u32, addr 0x4506e64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddl_u8, addr 0x4506df4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddlv_s16, addr 0x451f5dc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddlv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlv_s32, addr 0x451f64c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddlv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlv_s8, addr 0x451f56c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddlv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlv_u16, addr 0x451f72c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddlv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlv_u32, addr 0x451f79c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddlv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlv_u8, addr 0x451f6bc, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddlv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlvq_s16, addr 0x451f614, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddlvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddlvq_s32, addr 0x451f684, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddlvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddlvq_s8, addr 0x451f5a4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddlvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddlvq_u16, addr 0x451f764, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddlvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddlvq_u32, addr 0x451f7d4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddlvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddlvq_u8, addr 0x451f6f4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddlvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddq_f32, addr 0x4506d14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_f64, addr 0x4513144, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_s16, addr 0x4506b84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_s32, addr 0x4506bf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_s64, addr 0x4506c64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_s8, addr 0x4506b14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_u16, addr 0x4506cb4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_u32, addr 0x4506cc4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_u64, addr 0x4506cd4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_u8, addr 0x4506ca4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddv_f32, addr 0x451f4c4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vaddv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_s16, addr 0x451f224, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_s32, addr 0x451f294, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_s8, addr 0x451f1b4, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vaddv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_u16, addr 0x451f3ac, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_u32, addr 0x451f41c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_u8, addr 0x451f33c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vaddv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddvq_f32, addr 0x451f4fc, size 0x38, virtual false, abstract: false, final false
  static inline float_t vaddvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_f64, addr 0x451f534, size 0x38, virtual false, abstract: false, final false
  static inline double_t vaddvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_s16, addr 0x451f25c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_s32, addr 0x451f2cc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_s64, addr 0x451f304, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddvq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_s8, addr 0x451f1ec, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vaddvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_u16, addr 0x451f3e4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_u32, addr 0x451f454, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_u64, addr 0x451f48c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddvq_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_u8, addr 0x451f374, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vaddvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddw_high_s16, addr 0x4513374, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_high_s32, addr 0x45133ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_high_s8, addr 0x451333c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_high_u16, addr 0x451341c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_high_u32, addr 0x4513454, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_high_u8, addr 0x45133e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_s16, addr 0x4506ed4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddw_s32, addr 0x4506f0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddw_s8, addr 0x4506e9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddw_u16, addr 0x4506f7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddw_u32, addr 0x4506fb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddw_u8, addr 0x4506f44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaesdq_u8, addr 0x45212c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaesdq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaeseq_u8, addr 0x4521288, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaeseq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaesimcq_u8, addr 0x4521330, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaesimcq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaesmcq_u8, addr 0x45212f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaesmcq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vand_s16, addr 0x451104c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_s32, addr 0x451105c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_s64, addr 0x451106c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_s8, addr 0x4510fdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_u16, addr 0x451108c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_u32, addr 0x451109c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_u64, addr 0x45110ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_u8, addr 0x451107c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vandq_s16, addr 0x4511054, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_s32, addr 0x4511064, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_s64, addr 0x4511074, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_s8, addr 0x4511014, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_u16, addr 0x4511094, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_u32, addr 0x45110a4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_u64, addr 0x45110b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_u8, addr 0x4511084, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbic_s16, addr 0x45112ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_s32, addr 0x45112fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_s64, addr 0x451130c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_s8, addr 0x451127c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_u16, addr 0x451132c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_u32, addr 0x451133c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_u64, addr 0x451134c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_u8, addr 0x451131c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbicq_s16, addr 0x45112f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_s32, addr 0x4511304, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_s64, addr 0x4511314, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_s8, addr 0x45112b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_u16, addr 0x4511334, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_u32, addr 0x4511344, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_u64, addr 0x4511354, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_u8, addr 0x4511324, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbsl_f32, addr 0x451151c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_f64, addr 0x451d798, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_s16, addr 0x45114ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_s32, addr 0x45114bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_s64, addr 0x45114cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_s8, addr 0x451143c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_u16, addr 0x45114ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_u32, addr 0x45114fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_u64, addr 0x451150c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_u8, addr 0x45114dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbslq_f32, addr 0x4511524, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_f64, addr 0x451d7a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_s16, addr 0x45114b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_s32, addr 0x45114c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_s64, addr 0x45114d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_s8, addr 0x4511474, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_u16, addr 0x45114f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_u32, addr 0x4511504, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_u64, addr 0x4511514, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_u8, addr 0x45114e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vcage_f32, addr 0x450a2bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcage_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcage_f64, addr 0x451722c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcage_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcaged_f64, addr 0x45172d4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcaged_f64(double_t a0, double_t a1);

  /// @brief Method vcageq_f32, addr 0x450a2f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcageq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcageq_f64, addr 0x4517264, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcageq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcages_f32, addr 0x451729c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcages_f32(float_t a0, float_t a1);

  /// @brief Method vcagt_f32, addr 0x450a39c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcagt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcagt_f64, addr 0x45173ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcagt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcagtd_f64, addr 0x4517494, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcagtd_f64(double_t a0, double_t a1);

  /// @brief Method vcagtq_f32, addr 0x450a3d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcagtq_f64, addr 0x4517424, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcagts_f32, addr 0x451745c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcagts_f32(float_t a0, float_t a1);

  /// @brief Method vcale_f32, addr 0x450a32c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcale_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcale_f64, addr 0x451730c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcale_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcaled_f64, addr 0x45173b4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcaled_f64(double_t a0, double_t a1);

  /// @brief Method vcaleq_f32, addr 0x450a364, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcaleq_f64, addr 0x4517344, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcales_f32, addr 0x451737c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcales_f32(float_t a0, float_t a1);

  /// @brief Method vcalt_f32, addr 0x450a40c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcalt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcalt_f64, addr 0x45174cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcalt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcaltd_f64, addr 0x4517574, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcaltd_f64(double_t a0, double_t a1);

  /// @brief Method vcaltq_f32, addr 0x450a444, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcaltq_f64, addr 0x4517504, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcalts_f32, addr 0x451753c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcalts_f32(float_t a0, float_t a1);

  /// @brief Method vceq_f32, addr 0x450960c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_f64, addr 0x451573c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_s16, addr 0x45094fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_s32, addr 0x450956c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_s64, addr 0x45156bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_s8, addr 0x450948c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_u16, addr 0x45095ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_u32, addr 0x45095fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_u64, addr 0x451572c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_u8, addr 0x45095dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceqd_f64, addr 0x4515854, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqd_f64(double_t a0, double_t a1);

  /// @brief Method vceqd_s64, addr 0x45157ac, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqd_s64(int64_t a0, int64_t a1);

  /// @brief Method vceqd_u64, addr 0x45157e4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vceqq_f32, addr 0x4509644, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_f64, addr 0x4515774, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_s16, addr 0x4509534, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_s32, addr 0x45095a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_s64, addr 0x45156f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_s8, addr 0x45094c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_u16, addr 0x45095f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_u32, addr 0x4509604, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_u64, addr 0x4515734, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_u8, addr 0x45095e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqs_f32, addr 0x451581c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vceqs_f32(float_t a0, float_t a1);

  /// @brief Method vceqz_f32, addr 0x4515a0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_f64, addr 0x4515afc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_s16, addr 0x45158fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_s32, addr 0x451596c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_s64, addr 0x4515a7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_s8, addr 0x451588c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_u16, addr 0x45159ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_u32, addr 0x45159fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_u64, addr 0x4515aec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_u8, addr 0x45159dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqzd_f64, addr 0x4515c14, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqzd_f64(double_t a0);

  /// @brief Method vceqzd_s64, addr 0x4515b6c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqzd_s64(int64_t a0);

  /// @brief Method vceqzd_u64, addr 0x4515ba4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqzd_u64(uint64_t a0);

  /// @brief Method vceqzq_f32, addr 0x4515a44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_f64, addr 0x4515b34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_s16, addr 0x4515934, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_s32, addr 0x45159a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_s64, addr 0x4515ab4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_s8, addr 0x45158c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_u16, addr 0x45159f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_u32, addr 0x4515a04, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_u64, addr 0x4515af4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_u8, addr 0x45159e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzs_f32, addr 0x4515bdc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vceqzs_f32(float_t a0);

  /// @brief Method vcge_f32, addr 0x450991c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_f64, addr 0x4515d2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_s16, addr 0x45096ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_s32, addr 0x450975c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_s64, addr 0x4515c4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_s8, addr 0x450967c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_u16, addr 0x450983c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_u32, addr 0x45098ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_u64, addr 0x4515cbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_u8, addr 0x45097cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcged_f64, addr 0x4515e44, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcged_f64(double_t a0, double_t a1);

  /// @brief Method vcged_s64, addr 0x4515d9c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcged_s64(int64_t a0, int64_t a1);

  /// @brief Method vcged_u64, addr 0x4515dd4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcged_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vcgeq_f32, addr 0x4509954, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_f64, addr 0x4515d64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_s16, addr 0x4509724, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_s32, addr 0x4509794, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_s64, addr 0x4515c84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_s8, addr 0x45096b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_u16, addr 0x4509874, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_u32, addr 0x45098e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_u64, addr 0x4515cf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_u8, addr 0x4509804, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcges_f32, addr 0x4515e0c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcges_f32(float_t a0, float_t a1);

  /// @brief Method vcgez_f32, addr 0x451603c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgez_f64, addr 0x45160ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgez_s16, addr 0x4515eec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgez_s32, addr 0x4515f5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgez_s64, addr 0x4515fcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgez_s8, addr 0x4515e7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgezd_f64, addr 0x451618c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgezd_f64(double_t a0);

  /// @brief Method vcgezd_s64, addr 0x451611c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgezd_s64(int64_t a0);

  /// @brief Method vcgezq_f32, addr 0x4516074, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezq_f64, addr 0x45160e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezq_s16, addr 0x4515f24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezq_s32, addr 0x4515f94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezq_s64, addr 0x4516004, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezq_s8, addr 0x4515eb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezs_f32, addr 0x4516154, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcgezs_f32(float_t a0);

  /// @brief Method vcgt_f32, addr 0x4509f3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_f64, addr 0x451681c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_s16, addr 0x4509d0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_s32, addr 0x4509d7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_s64, addr 0x451673c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_s8, addr 0x4509c9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_u16, addr 0x4509e5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_u32, addr 0x4509ecc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_u64, addr 0x45167ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_u8, addr 0x4509dec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgtd_f64, addr 0x4516934, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtd_f64(double_t a0, double_t a1);

  /// @brief Method vcgtd_s64, addr 0x451688c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtd_s64(int64_t a0, int64_t a1);

  /// @brief Method vcgtd_u64, addr 0x45168c4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vcgtq_f32, addr 0x4509f74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_f64, addr 0x4516854, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_s16, addr 0x4509d44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_s32, addr 0x4509db4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_s64, addr 0x4516774, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_s8, addr 0x4509cd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_u16, addr 0x4509e94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_u32, addr 0x4509f04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_u64, addr 0x45167e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_u8, addr 0x4509e24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgts_f32, addr 0x45168fc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcgts_f32(float_t a0, float_t a1);

  /// @brief Method vcgtz_f32, addr 0x4516b2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtz_f64, addr 0x4516b9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtz_s16, addr 0x45169dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtz_s32, addr 0x4516a4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtz_s64, addr 0x4516abc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtz_s8, addr 0x451696c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtzd_f64, addr 0x4516c7c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtzd_f64(double_t a0);

  /// @brief Method vcgtzd_s64, addr 0x4516c0c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtzd_s64(int64_t a0);

  /// @brief Method vcgtzq_f32, addr 0x4516b64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzq_f64, addr 0x4516bd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzq_s16, addr 0x4516a14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzq_s32, addr 0x4516a84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzq_s64, addr 0x4516af4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzq_s8, addr 0x45169a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzs_f32, addr 0x4516c44, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcgtzs_f32(float_t a0);

  /// @brief Method vcle_f32, addr 0x4509c2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_f64, addr 0x45162a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_s16, addr 0x45099fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_s32, addr 0x4509a6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_s64, addr 0x45161c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_s8, addr 0x450998c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_u16, addr 0x4509b4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_u32, addr 0x4509bbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_u64, addr 0x4516234, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_u8, addr 0x4509adc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcled_f64, addr 0x45163bc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcled_f64(double_t a0, double_t a1);

  /// @brief Method vcled_s64, addr 0x4516314, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcled_s64(int64_t a0, int64_t a1);

  /// @brief Method vcled_u64, addr 0x451634c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcled_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vcleq_f32, addr 0x4509c64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_f64, addr 0x45162dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_s16, addr 0x4509a34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_s32, addr 0x4509aa4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_s64, addr 0x45161fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_s8, addr 0x45099c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_u16, addr 0x4509b84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_u32, addr 0x4509bf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_u64, addr 0x451626c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_u8, addr 0x4509b14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcles_f32, addr 0x4516384, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcles_f32(float_t a0, float_t a1);

  /// @brief Method vclez_f32, addr 0x45165b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclez_f64, addr 0x4516624, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclez_s16, addr 0x4516464, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclez_s32, addr 0x45164d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclez_s64, addr 0x4516544, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclez_s8, addr 0x45163f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclezd_f64, addr 0x4516704, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vclezd_f64(double_t a0);

  /// @brief Method vclezd_s64, addr 0x4516694, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vclezd_s64(int64_t a0);

  /// @brief Method vclezq_f32, addr 0x45165ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezq_f64, addr 0x451665c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezq_s16, addr 0x451649c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezq_s32, addr 0x451650c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezq_s64, addr 0x451657c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezq_s8, addr 0x451642c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezs_f32, addr 0x45166cc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vclezs_f32(float_t a0);

  /// @brief Method vcls_s16, addr 0x451099c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcls_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcls_s32, addr 0x4510a0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcls_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcls_s8, addr 0x451092c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcls_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclsq_s16, addr 0x45109d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclsq_s32, addr 0x4510a44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclsq_s8, addr 0x4510964, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclt_f32, addr 0x450a24c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_f64, addr 0x4516d94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_s16, addr 0x450a01c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_s32, addr 0x450a08c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_s64, addr 0x4516cb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_s8, addr 0x4509fac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_u16, addr 0x450a16c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_u32, addr 0x450a1dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_u64, addr 0x4516d24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_u8, addr 0x450a0fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcltd_f64, addr 0x4516eac, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltd_f64(double_t a0, double_t a1);

  /// @brief Method vcltd_s64, addr 0x4516e04, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltd_s64(int64_t a0, int64_t a1);

  /// @brief Method vcltd_u64, addr 0x4516e3c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vcltq_f32, addr 0x450a284, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_f64, addr 0x4516dcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_s16, addr 0x450a054, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_s32, addr 0x450a0c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_s64, addr 0x4516cec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_s8, addr 0x4509fe4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_u16, addr 0x450a1a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_u32, addr 0x450a214, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_u64, addr 0x4516d5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_u8, addr 0x450a134, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vclts_f32, addr 0x4516e74, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vclts_f32(float_t a0, float_t a1);

  /// @brief Method vcltz_f32, addr 0x45170a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltz_f64, addr 0x4517114, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltz_s16, addr 0x4516f54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltz_s32, addr 0x4516fc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltz_s64, addr 0x4517034, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltz_s8, addr 0x4516ee4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltzd_f64, addr 0x45171f4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltzd_f64(double_t a0);

  /// @brief Method vcltzd_s64, addr 0x4517184, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltzd_s64(int64_t a0);

  /// @brief Method vcltzq_f32, addr 0x45170dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzq_f64, addr 0x451714c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzq_s16, addr 0x4516f8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzq_s32, addr 0x4516ffc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzq_s64, addr 0x451706c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzq_s8, addr 0x4516f1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzs_f32, addr 0x45171bc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcltzs_f32(float_t a0);

  /// @brief Method vclz_s16, addr 0x4510aec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclz_s32, addr 0x4510b5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclz_s8, addr 0x4510a7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclz_u16, addr 0x4510bdc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclz_u32, addr 0x4510bec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclz_u8, addr 0x4510bcc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclzq_s16, addr 0x4510b24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclzq_s32, addr 0x4510b94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclzq_s8, addr 0x4510ab4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclzq_u16, addr 0x4510be4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclzq_u32, addr 0x4510bf4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclzq_u8, addr 0x4510bd4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcnt_s8, addr 0x4510bfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcnt_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcnt_u8, addr 0x4510c6c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcnt_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcntq_s8, addr 0x4510c34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcntq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcntq_u8, addr 0x4510c74, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcntq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcombine_f16, addr 0x4522a34, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_f16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_f32, addr 0x4522a84, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_f64, addr 0x4522ad4, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_s16, addr 0x4522804, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_s32, addr 0x4522854, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_s64, addr 0x45228a4, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_s8, addr 0x45227b4, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_u16, addr 0x4522944, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_u32, addr 0x4522994, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_u64, addr 0x45229e4, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_u8, addr 0x45228f4, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcopy_lane_f32, addr 0x451dac8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_f64, addr 0x451db38, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_s16, addr 0x451d818, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_s32, addr 0x451d888, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_s64, addr 0x451d8f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_s8, addr 0x451d7a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_u16, addr 0x451d9a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_u32, addr 0x451da18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_u64, addr 0x451da88, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_u8, addr 0x451d938, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_laneq_f32, addr 0x451def8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_f64, addr 0x451df68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_s16, addr 0x451dbe8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_s32, addr 0x451dc58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_s64, addr 0x451dcc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_s8, addr 0x451db78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_u16, addr 0x451dda8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_u32, addr 0x451de18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_u64, addr 0x451de88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_u8, addr 0x451dd38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_lane_f32, addr 0x451db00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_f64, addr 0x451db40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_s16, addr 0x451d850, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_s32, addr 0x451d8c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_s64, addr 0x451d900, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_s8, addr 0x451d7e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_u16, addr 0x451d9e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_u32, addr 0x451da50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_u64, addr 0x451da90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_u8, addr 0x451d970, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_f32, addr 0x451df30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_f64, addr 0x451dfa0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_s16, addr 0x451dc20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_s32, addr 0x451dc90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_s64, addr 0x451dd00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_s8, addr 0x451dbb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_u16, addr 0x451dde0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_u32, addr 0x451de50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_u64, addr 0x451dec0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_u8, addr 0x451dd70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcreate_f16, addr 0x4521ea8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f16(uint64_t a0);

  /// @brief Method vcreate_f32, addr 0x4521ecc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f32(uint64_t a0);

  /// @brief Method vcreate_f64, addr 0x4521ef0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f64(uint64_t a0);

  /// @brief Method vcreate_s16, addr 0x4521dac, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s16(uint64_t a0);

  /// @brief Method vcreate_s32, addr 0x4521dd0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s32(uint64_t a0);

  /// @brief Method vcreate_s64, addr 0x4521df4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s64(uint64_t a0);

  /// @brief Method vcreate_s8, addr 0x4521d88, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s8(uint64_t a0);

  /// @brief Method vcreate_u16, addr 0x4521e3c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u16(uint64_t a0);

  /// @brief Method vcreate_u32, addr 0x4521e60, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u32(uint64_t a0);

  /// @brief Method vcreate_u64, addr 0x4521e84, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u64(uint64_t a0);

  /// @brief Method vcreate_u8, addr 0x4521e18, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u8(uint64_t a0);

  /// @brief Method vcvt_f32_f64, addr 0x451a304, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvt_f32_s32, addr 0x450e404, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_f32_u32, addr 0x450e474, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_f64_f32, addr 0x451a374, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvt_f64_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_f64_s64, addr 0x4519ff4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_f64_u64, addr 0x451a064, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_u64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_high_f32_f64, addr 0x451a33c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f32_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcvt_high_f64_f32, addr 0x451a3ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f64_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvt_n_f32_s32, addr 0x450e4e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_f32_u32, addr 0x450e554, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_f64_s64, addr 0x451a1b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_f64_u64, addr 0x451a224, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_s32_f32, addr 0x450e324, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s32_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_s64_f64, addr 0x4519e34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s64_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_u32_f32, addr 0x450e394, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u32_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_u64_f64, addr 0x4519ea4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u64_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_s32_f32, addr 0x450e244, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_s64_f64, addr 0x4519734, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_u32_f32, addr 0x450e2b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_u64_f64, addr 0x45197a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvta_s32_f32, addr 0x4519424, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvta_s64_f64, addr 0x4519ab4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvta_u32_f32, addr 0x4519494, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvta_u64_f64, addr 0x4519b24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtad_s64_f64, addr 0x4519d54, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtad_s64_f64(double_t a0);

  /// @brief Method vcvtad_u64_f64, addr 0x4519d8c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtad_u64_f64(double_t a0);

  /// @brief Method vcvtaq_s32_f32, addr 0x451945c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtaq_s64_f64, addr 0x4519aec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtaq_u32_f32, addr 0x45194cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtaq_u64_f64, addr 0x4519b5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtas_s32_f32, addr 0x45196c4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtas_s32_f32(float_t a0);

  /// @brief Method vcvtas_u32_f32, addr 0x45196fc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtas_u32_f32(float_t a0);

  /// @brief Method vcvtd_f64_s64, addr 0x451a0d4, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_f64_s64(int64_t a0);

  /// @brief Method vcvtd_f64_u64, addr 0x451a10c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_f64_u64(uint64_t a0);

  /// @brief Method vcvtd_n_f64_s64, addr 0x451a294, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_n_f64_s64(int64_t a0, int32_t a1);

  /// @brief Method vcvtd_n_f64_u64, addr 0x451a2cc, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_n_f64_u64(uint64_t a0, int32_t a1);

  /// @brief Method vcvtd_n_s64_f64, addr 0x4519f14, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtd_n_s64_f64(double_t a0, int32_t a1);

  /// @brief Method vcvtd_n_u64_f64, addr 0x4519f4c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtd_n_u64_f64(double_t a0, int32_t a1);

  /// @brief Method vcvtd_s64_f64, addr 0x4519b94, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtd_s64_f64(double_t a0);

  /// @brief Method vcvtd_u64_f64, addr 0x4519bcc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtd_u64_f64(double_t a0);

  /// @brief Method vcvtm_s32_f32, addr 0x4519264, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtm_s64_f64, addr 0x45198f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtm_u32_f32, addr 0x45192d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtm_u64_f64, addr 0x4519964, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtmd_s64_f64, addr 0x4519c74, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtmd_s64_f64(double_t a0);

  /// @brief Method vcvtmd_u64_f64, addr 0x4519cac, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtmd_u64_f64(double_t a0);

  /// @brief Method vcvtmq_s32_f32, addr 0x451929c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtmq_s64_f64, addr 0x451992c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtmq_u32_f32, addr 0x451930c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtmq_u64_f64, addr 0x451999c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtms_s32_f32, addr 0x45195e4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtms_s32_f32(float_t a0);

  /// @brief Method vcvtms_u32_f32, addr 0x451961c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtms_u32_f32(float_t a0);

  /// @brief Method vcvtn_s32_f32, addr 0x4519184, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtn_s64_f64, addr 0x4519814, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtn_u32_f32, addr 0x45191f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtn_u64_f64, addr 0x4519884, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtnd_s64_f64, addr 0x4519c04, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtnd_s64_f64(double_t a0);

  /// @brief Method vcvtnd_u64_f64, addr 0x4519c3c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtnd_u64_f64(double_t a0);

  /// @brief Method vcvtnq_s32_f32, addr 0x45191bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtnq_s64_f64, addr 0x451984c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtnq_u32_f32, addr 0x451922c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtnq_u64_f64, addr 0x45198bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtns_s32_f32, addr 0x4519574, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtns_s32_f32(float_t a0);

  /// @brief Method vcvtns_u32_f32, addr 0x45195ac, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtns_u32_f32(float_t a0);

  /// @brief Method vcvtp_s32_f32, addr 0x4519344, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtp_s64_f64, addr 0x45199d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtp_u32_f32, addr 0x45193b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtp_u64_f64, addr 0x4519a44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtpd_s64_f64, addr 0x4519ce4, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtpd_s64_f64(double_t a0);

  /// @brief Method vcvtpd_u64_f64, addr 0x4519d1c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtpd_u64_f64(double_t a0);

  /// @brief Method vcvtpq_s32_f32, addr 0x451937c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtpq_s64_f64, addr 0x4519a0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtpq_u32_f32, addr 0x45193ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtpq_u64_f64, addr 0x4519a7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtps_s32_f32, addr 0x4519654, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtps_s32_f32(float_t a0);

  /// @brief Method vcvtps_u32_f32, addr 0x451968c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtps_u32_f32(float_t a0);

  /// @brief Method vcvtq_f32_s32, addr 0x450e43c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_f32_u32, addr 0x450e4ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_f64_s64, addr 0x451a02c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_f64_u64, addr 0x451a09c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_n_f32_s32, addr 0x450e51c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_f32_u32, addr 0x450e58c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_f64_s64, addr 0x451a1ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_f64_u64, addr 0x451a25c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_s32_f32, addr 0x450e35c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s32_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_s64_f64, addr 0x4519e6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s64_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_u32_f32, addr 0x450e3cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u32_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_u64_f64, addr 0x4519edc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u64_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_s32_f32, addr 0x450e27c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_s64_f64, addr 0x451976c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_u32_f32, addr 0x450e2ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_u64_f64, addr 0x45197dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvts_f32_s32, addr 0x4519f84, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_f32_s32(int32_t a0);

  /// @brief Method vcvts_f32_u32, addr 0x4519fbc, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_f32_u32(uint32_t a0);

  /// @brief Method vcvts_n_f32_s32, addr 0x451a144, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_n_f32_s32(int32_t a0, int32_t a1);

  /// @brief Method vcvts_n_f32_u32, addr 0x451a17c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_n_f32_u32(uint32_t a0, int32_t a1);

  /// @brief Method vcvts_n_s32_f32, addr 0x4519dc4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvts_n_s32_f32(float_t a0, int32_t a1);

  /// @brief Method vcvts_n_u32_f32, addr 0x4519dfc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvts_n_u32_f32(float_t a0, int32_t a1);

  /// @brief Method vcvts_s32_f32, addr 0x4519504, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvts_s32_f32(float_t a0);

  /// @brief Method vcvts_u32_f32, addr 0x451953c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvts_u32_f32(float_t a0);

  /// @brief Method vcvtx_f32_f64, addr 0x451a3e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtx_f32_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtx_high_f32_f64, addr 0x451a454, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtx_high_f32_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcvtxd_f32_f64, addr 0x451a41c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvtxd_f32_f64(double_t a0);

  /// @brief Method vdiv_f32, addr 0x451410c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdiv_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vdiv_f64, addr 0x451417c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdiv_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vdivq_f32, addr 0x4514144, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdivq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vdivq_f64, addr 0x45141b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdivq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vdot_lane_s32, addr 0x4521488, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vdot_lane_u32, addr 0x4521450, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vdot_laneq_s32, addr 0x4521568, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vdot_laneq_u32, addr 0x4521530, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vdot_s32, addr 0x45213a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vdot_u32, addr 0x4521370, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vdotq_lane_s32, addr 0x45215d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vdotq_lane_u32, addr 0x45215a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vdotq_laneq_s32, addr 0x45214f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vdotq_laneq_u32, addr 0x45214c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vdotq_s32, addr 0x4521418, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vdotq_u32, addr 0x45213e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vdup_lane_f32, addr 0x4511874, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_f64, addr 0x451e058, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_s16, addr 0x451159c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_s32, addr 0x451160c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_s64, addr 0x451167c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_s8, addr 0x451152c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_u16, addr 0x4511740, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_u32, addr 0x45117b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_u64, addr 0x4511820, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_u8, addr 0x45116d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_laneq_f32, addr 0x451e42c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_f64, addr 0x451e49c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_s16, addr 0x451e11c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_s32, addr 0x451e18c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_s64, addr 0x451e1fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_s8, addr 0x451e0ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_u16, addr 0x451e2dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_u32, addr 0x451e34c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_u64, addr 0x451e3bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_u8, addr 0x451e26c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_n_f32, addr 0x4522294, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f32(float_t a0);

  /// @brief Method vdup_n_f64, addr 0x45222fc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f64(double_t a0);

  /// @brief Method vdup_n_s16, addr 0x4521f84, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s16(int16_t a0);

  /// @brief Method vdup_n_s32, addr 0x4521ff4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s32(int32_t a0);

  /// @brief Method vdup_n_s64, addr 0x4522064, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s64(int64_t a0);

  /// @brief Method vdup_n_s8, addr 0x4521f14, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s8(int8_t a0);

  /// @brief Method vdup_n_u16, addr 0x4522144, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u16(uint16_t a0);

  /// @brief Method vdup_n_u32, addr 0x45221b4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u32(uint32_t a0);

  /// @brief Method vdup_n_u64, addr 0x4522224, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u64(uint64_t a0);

  /// @brief Method vdup_n_u8, addr 0x45220d4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u8(uint8_t a0);

  /// @brief Method vdupb_lane_s8, addr 0x451e50c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vdupb_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupb_lane_u8, addr 0x451e5b8, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vdupb_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupb_laneq_s8, addr 0x451e6a4, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vdupb_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupb_laneq_u8, addr 0x451e784, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vdupb_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupd_lane_f64, addr 0x451e69c, size 0x8, virtual false, abstract: false, final false
  static inline double_t vdupd_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupd_lane_s64, addr 0x451e5b4, size 0x4, virtual false, abstract: false, final false
  static inline int64_t vdupd_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupd_lane_u64, addr 0x451e660, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t vdupd_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupd_laneq_f64, addr 0x451e89c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vdupd_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupd_laneq_s64, addr 0x451e74c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vdupd_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupd_laneq_u64, addr 0x451e82c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vdupd_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vduph_lane_s16, addr 0x451e544, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vduph_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vduph_lane_u16, addr 0x451e5f0, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vduph_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vduph_laneq_s16, addr 0x451e6dc, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vduph_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vduph_laneq_u16, addr 0x451e7bc, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vduph_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_lane_f32, addr 0x45118ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_f64, addr 0x451e05c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_s16, addr 0x45115d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_s32, addr 0x4511644, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_s64, addr 0x4511680, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_s8, addr 0x4511564, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_u16, addr 0x4511778, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_u32, addr 0x45117e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_u64, addr 0x4511824, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_u8, addr 0x4511708, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_laneq_f32, addr 0x451e464, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_f64, addr 0x451e4d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_s16, addr 0x451e154, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_s32, addr 0x451e1c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_s64, addr 0x451e234, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_s8, addr 0x451e0e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_u16, addr 0x451e314, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_u32, addr 0x451e384, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_u64, addr 0x451e3f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_u8, addr 0x451e2a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_n_f32, addr 0x45222b4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f32(float_t a0);

  /// @brief Method vdupq_n_f64, addr 0x452231c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f64(double_t a0);

  /// @brief Method vdupq_n_s16, addr 0x4521fa8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s16(int16_t a0);

  /// @brief Method vdupq_n_s32, addr 0x4522018, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s32(int32_t a0);

  /// @brief Method vdupq_n_s64, addr 0x4522088, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s64(int64_t a0);

  /// @brief Method vdupq_n_s8, addr 0x4521f38, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s8(int8_t a0);

  /// @brief Method vdupq_n_u16, addr 0x4522168, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u16(uint16_t a0);

  /// @brief Method vdupq_n_u32, addr 0x45221d8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u32(uint32_t a0);

  /// @brief Method vdupq_n_u64, addr 0x4522248, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u64(uint64_t a0);

  /// @brief Method vdupq_n_u8, addr 0x45220f8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u8(uint8_t a0);

  /// @brief Method vdups_lane_f32, addr 0x451e664, size 0x38, virtual false, abstract: false, final false
  static inline float_t vdups_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdups_lane_s32, addr 0x451e57c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vdups_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdups_lane_u32, addr 0x451e628, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vdups_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdups_laneq_f32, addr 0x451e864, size 0x38, virtual false, abstract: false, final false
  static inline float_t vdups_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdups_laneq_s32, addr 0x451e714, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vdups_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdups_laneq_u32, addr 0x451e7f4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vdups_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method veor_s16, addr 0x451120c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_s32, addr 0x451121c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_s64, addr 0x451122c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_s8, addr 0x451119c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_u16, addr 0x451124c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_u32, addr 0x451125c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_u64, addr 0x451126c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_u8, addr 0x451123c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veorq_s16, addr 0x4511214, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_s32, addr 0x4511224, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_s64, addr 0x4511234, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_s8, addr 0x45111d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_u16, addr 0x4511254, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_u32, addr 0x4511264, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_u64, addr 0x4511274, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_u8, addr 0x4511244, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vext_f32, addr 0x4512544, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_f64, addr 0x451ffec, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_s16, addr 0x451229c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_s32, addr 0x451230c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_s64, addr 0x451237c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_s8, addr 0x451222c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_u16, addr 0x4512428, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_u32, addr 0x4512498, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_u64, addr 0x4512508, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_u8, addr 0x45123b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vextq_f32, addr 0x451257c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_f64, addr 0x451fff0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_s16, addr 0x45122d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_s32, addr 0x4512344, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_s64, addr 0x4512380, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_s8, addr 0x4512264, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_u16, addr 0x4512460, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_u32, addr 0x45124d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_u64, addr 0x451250c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_u8, addr 0x45123f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vfma_f32, addr 0x450829c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vfma_f64, addr 0x451456c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vfma_lane_f32, addr 0x45145dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfma_lane_f64, addr 0x451464c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfma_laneq_f32, addr 0x45146fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfma_laneq_f64, addr 0x451476c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfma_n_f32, addr 0x4513094, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// @brief Method vfma_n_f64, addr 0x4520db0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, double_t a2);

  /// @brief Method vfmad_lane_f64, addr 0x45146c4, size 0x38, virtual false, abstract: false, final false
  static inline double_t vfmad_lane_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmad_laneq_f64, addr 0x4514814, size 0x38, virtual false, abstract: false, final false
  static inline double_t vfmad_laneq_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfmaq_f32, addr 0x45082d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vfmaq_f64, addr 0x45145a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vfmaq_lane_f32, addr 0x4514614, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmaq_lane_f64, addr 0x4514654, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmaq_laneq_f32, addr 0x4514734, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfmaq_laneq_f64, addr 0x45147a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfmaq_n_f32, addr 0x45130cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// @brief Method vfmaq_n_f64, addr 0x4520de8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, double_t a2);

  /// @brief Method vfmas_lane_f32, addr 0x451468c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmas_lane_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmas_laneq_f32, addr 0x45147dc, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmas_laneq_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfms_f32, addr 0x450830c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vfms_f64, addr 0x451484c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vfms_lane_f32, addr 0x45148bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfms_lane_f64, addr 0x451492c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfms_laneq_f32, addr 0x45149dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfms_laneq_f64, addr 0x4514a4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfms_n_f32, addr 0x4520d40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// @brief Method vfms_n_f64, addr 0x4520e20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, double_t a2);

  /// @brief Method vfmsd_lane_f64, addr 0x45149a4, size 0x38, virtual false, abstract: false, final false
  static inline double_t vfmsd_lane_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmsd_laneq_f64, addr 0x4514af4, size 0x38, virtual false, abstract: false, final false
  static inline double_t vfmsd_laneq_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfmsq_f32, addr 0x4508344, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vfmsq_f64, addr 0x4514884, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vfmsq_lane_f32, addr 0x45148f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmsq_lane_f64, addr 0x4514934, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmsq_laneq_f32, addr 0x4514a14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfmsq_laneq_f64, addr 0x4514a84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfmsq_n_f32, addr 0x4520d78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// @brief Method vfmsq_n_f64, addr 0x4520e58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, double_t a2);

  /// @brief Method vfmss_lane_f32, addr 0x451496c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmss_lane_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmss_laneq_f32, addr 0x4514abc, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmss_laneq_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vget_high_f32, addr 0x4522b64, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_f64, addr 0x4522b6c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_s16, addr 0x4522b2c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_s32, addr 0x4522b34, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_s64, addr 0x4522b3c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_s8, addr 0x4522b24, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_u16, addr 0x4522b4c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_u32, addr 0x4522b54, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_u64, addr 0x4522b5c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_u8, addr 0x4522b44, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_lane_f32, addr 0x4512a9c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vget_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_f64, addr 0x4520c38, size 0x8, virtual false, abstract: false, final false
  static inline double_t vget_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_s16, addr 0x4512a28, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vget_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_s32, addr 0x4512a60, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vget_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_s64, addr 0x4512a98, size 0x4, virtual false, abstract: false, final false
  static inline int64_t vget_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_s8, addr 0x45129f0, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vget_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_u16, addr 0x451297c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vget_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_u32, addr 0x45129b4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vget_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_u64, addr 0x45129ec, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t vget_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_u8, addr 0x4512944, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vget_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_low_f32, addr 0x4522b94, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_f64, addr 0x4522b98, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_s16, addr 0x4522b78, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_s32, addr 0x4522b7c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_s64, addr 0x4522b80, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_s8, addr 0x4522b74, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_u16, addr 0x4522b88, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_u32, addr 0x4522b8c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_u64, addr 0x4522b90, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_u8, addr 0x4522b84, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vgetq_lane_f32, addr 0x4512c94, size 0x38, virtual false, abstract: false, final false
  static inline float_t vgetq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_f64, addr 0x4520c40, size 0x38, virtual false, abstract: false, final false
  static inline double_t vgetq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_s16, addr 0x4512bec, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vgetq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_s32, addr 0x4512c24, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vgetq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_s64, addr 0x4512c5c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vgetq_lane_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_s8, addr 0x4512bb4, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vgetq_lane_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_u16, addr 0x4512b0c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vgetq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_u32, addr 0x4512b44, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vgetq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_u64, addr 0x4512b7c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vgetq_lane_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_u8, addr 0x4512ad4, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vgetq_lane_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vhadd_s16, addr 0x450705c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhadd_s32, addr 0x45070cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhadd_s8, addr 0x4506fec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhadd_u16, addr 0x45071ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhadd_u32, addr 0x450721c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhadd_u8, addr 0x450713c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhaddq_s16, addr 0x4507094, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhaddq_s32, addr 0x4507104, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhaddq_s8, addr 0x4507024, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhaddq_u16, addr 0x45071e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhaddq_u32, addr 0x4507254, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhaddq_u8, addr 0x4507174, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsub_s16, addr 0x4508d5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsub_s32, addr 0x4508dcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsub_s8, addr 0x4508cec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsub_u16, addr 0x4508eac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsub_u32, addr 0x4508f1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsub_u8, addr 0x4508e3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsubq_s16, addr 0x4508d94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsubq_s32, addr 0x4508e04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsubq_s8, addr 0x4508d24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsubq_u16, addr 0x4508ee4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsubq_u32, addr 0x4508f54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsubq_u8, addr 0x4508e74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vld1_f32, addr 0x4522c3c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_f32(::cordl_internals::Ptr<float_t> a0);

  /// @brief Method vld1_f64, addr 0x4522c50, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_f64(::cordl_internals::Ptr<double_t> a0);

  /// @brief Method vld1_s16, addr 0x4522bb0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s16(::cordl_internals::Ptr<int16_t> a0);

  /// @brief Method vld1_s32, addr 0x4522bc4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s32(::cordl_internals::Ptr<int32_t> a0);

  /// @brief Method vld1_s64, addr 0x4522bd8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s64(::cordl_internals::Ptr<int64_t> a0);

  /// @brief Method vld1_s8, addr 0x4522b9c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s8(::cordl_internals::Ptr<int8_t> a0);

  /// @brief Method vld1_u16, addr 0x4522c00, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u16(::cordl_internals::Ptr<uint16_t> a0);

  /// @brief Method vld1_u32, addr 0x4522c14, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u32(::cordl_internals::Ptr<uint32_t> a0);

  /// @brief Method vld1_u64, addr 0x4522c28, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u64(::cordl_internals::Ptr<uint64_t> a0);

  /// @brief Method vld1_u8, addr 0x4522bec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u8(::cordl_internals::Ptr<uint8_t> a0);

  /// @brief Method vld1q_f32, addr 0x4522c44, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_f32(::cordl_internals::Ptr<float_t> a0);

  /// @brief Method vld1q_f64, addr 0x4522c58, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_f64(::cordl_internals::Ptr<double_t> a0);

  /// @brief Method vld1q_s16, addr 0x4522bb8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s16(::cordl_internals::Ptr<int16_t> a0);

  /// @brief Method vld1q_s32, addr 0x4522bcc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s32(::cordl_internals::Ptr<int32_t> a0);

  /// @brief Method vld1q_s64, addr 0x4522be0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s64(::cordl_internals::Ptr<int64_t> a0);

  /// @brief Method vld1q_s8, addr 0x4522ba4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s8(::cordl_internals::Ptr<int8_t> a0);

  /// @brief Method vld1q_u16, addr 0x4522c08, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u16(::cordl_internals::Ptr<uint16_t> a0);

  /// @brief Method vld1q_u32, addr 0x4522c1c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u32(::cordl_internals::Ptr<uint32_t> a0);

  /// @brief Method vld1q_u64, addr 0x4522c30, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u64(::cordl_internals::Ptr<uint64_t> a0);

  /// @brief Method vld1q_u8, addr 0x4522bf4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u8(::cordl_internals::Ptr<uint8_t> a0);

  /// @brief Method vmax_f32, addr 0x450b0ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_f64, addr 0x4517a1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_s16, addr 0x450aebc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_s32, addr 0x450af2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_s8, addr 0x450ae4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_u16, addr 0x450b00c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_u32, addr 0x450b07c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_u8, addr 0x450af9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmaxnm_f32, addr 0x4517afc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmaxnm_f64, addr 0x4517b6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmaxnmq_f32, addr 0x4517b34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxnmq_f64, addr 0x4517ba4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxnmv_f32, addr 0x451fe9c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxnmv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxnmvq_f32, addr 0x451fed4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxnmvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxnmvq_f64, addr 0x451ff0c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmaxnmvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxq_f32, addr 0x450b124, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_f64, addr 0x4517a54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_s16, addr 0x450aef4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_s32, addr 0x450af64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_s8, addr 0x450ae84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_u16, addr 0x450b044, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_u32, addr 0x450b0b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_u8, addr 0x450afd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxv_f32, addr 0x451faac, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_s16, addr 0x451f87c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vmaxv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_s32, addr 0x451f8ec, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vmaxv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_s8, addr 0x451f80c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vmaxv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_u16, addr 0x451f9cc, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vmaxv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_u32, addr 0x451fa3c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vmaxv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_u8, addr 0x451f95c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vmaxv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxvq_f32, addr 0x451fae4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_f64, addr 0x451fb1c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmaxvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_s16, addr 0x451f8b4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vmaxvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_s32, addr 0x451f924, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vmaxvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_s8, addr 0x451f844, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vmaxvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_u16, addr 0x451fa04, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vmaxvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_u32, addr 0x451fa74, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vmaxvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_u8, addr 0x451f994, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vmaxvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmin_f32, addr 0x450b3fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_f64, addr 0x4517a8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_s16, addr 0x450b1cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_s32, addr 0x450b23c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_s8, addr 0x450b15c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_u16, addr 0x450b31c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_u32, addr 0x450b38c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_u8, addr 0x450b2ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vminnm_f32, addr 0x4517bdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vminnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vminnm_f64, addr 0x4517c4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vminnm_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vminnmq_f32, addr 0x4517c14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminnmq_f64, addr 0x4517c84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminnmv_f32, addr 0x451ff44, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminnmv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminnmvq_f32, addr 0x451ff7c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminnmvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminnmvq_f64, addr 0x451ffb4, size 0x38, virtual false, abstract: false, final false
  static inline double_t vminnmvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminq_f32, addr 0x450b434, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_f64, addr 0x4517ac4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_s16, addr 0x450b204, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_s32, addr 0x450b274, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_s8, addr 0x450b194, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_u16, addr 0x450b354, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_u32, addr 0x450b3c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_u8, addr 0x450b2e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminv_f32, addr 0x451fdf4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_s16, addr 0x451fbc4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vminv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_s32, addr 0x451fc34, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vminv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_s8, addr 0x451fb54, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vminv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_u16, addr 0x451fd14, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vminv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_u32, addr 0x451fd84, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vminv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_u8, addr 0x451fca4, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vminv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminvq_f32, addr 0x451fe2c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_f64, addr 0x451fe64, size 0x38, virtual false, abstract: false, final false
  static inline double_t vminvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_s16, addr 0x451fbfc, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vminvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_s32, addr 0x451fc6c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vminvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_s8, addr 0x451fb8c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vminvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_u16, addr 0x451fd4c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vminvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_u32, addr 0x451fdbc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vminvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_u8, addr 0x451fcdc, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vminvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmla_f32, addr 0x4507d9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_f64, addr 0x45141ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_lane_f32, addr 0x450ec4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmla_lane_s16, addr 0x450ea8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmla_lane_s32, addr 0x450eafc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmla_lane_u16, addr 0x450eb6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmla_lane_u32, addr 0x450ebdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmla_laneq_f32, addr 0x451b1e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmla_laneq_s16, addr 0x451b024, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmla_laneq_s32, addr 0x451b094, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmla_laneq_u16, addr 0x451b104, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmla_laneq_u32, addr 0x451b174, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmla_n_f32, addr 0x450fdcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// @brief Method vmla_n_s16, addr 0x450fc0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vmla_n_s32, addr 0x450fc7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmla_n_u16, addr 0x450fcec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// @brief Method vmla_n_u32, addr 0x450fd5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// @brief Method vmla_s16, addr 0x4507c8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_s32, addr 0x4507cfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_s8, addr 0x4507c1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_u16, addr 0x4507d7c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_u32, addr 0x4507d8c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_u8, addr 0x4507d6c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_high_lane_s16, addr 0x451b254, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_high_lane_s32, addr 0x451b28c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_high_lane_u16, addr 0x451b2c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_high_lane_u32, addr 0x451b2fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_high_laneq_s16, addr 0x451b414, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_high_laneq_s32, addr 0x451b44c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_high_laneq_u16, addr 0x451b484, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_high_laneq_u32, addr 0x451b4bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_high_n_s16, addr 0x451cbc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vmlal_high_n_s32, addr 0x451cc00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmlal_high_n_u16, addr 0x451cc38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// @brief Method vmlal_high_n_u32, addr 0x451cc70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// @brief Method vmlal_high_s16, addr 0x4514294, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_high_s32, addr 0x45142cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_high_s8, addr 0x451425c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_high_u16, addr 0x451433c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_high_u32, addr 0x4514374, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_high_u8, addr 0x4514304, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_lane_s16, addr 0x450ecbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_lane_s32, addr 0x450ecf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_lane_u16, addr 0x450ed2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_lane_u32, addr 0x450ed64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_laneq_s16, addr 0x451b334, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_laneq_s32, addr 0x451b36c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_laneq_u16, addr 0x451b3a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_laneq_u32, addr 0x451b3dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_n_s16, addr 0x450fe3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vmlal_n_s32, addr 0x450fe74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmlal_n_u16, addr 0x450feac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// @brief Method vmlal_n_u32, addr 0x450fee4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// @brief Method vmlal_s16, addr 0x4507e44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_s32, addr 0x4507e7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_s8, addr 0x4507e0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_u16, addr 0x4507eec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_u32, addr 0x4507f24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_u8, addr 0x4507eb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlaq_f32, addr 0x4507dd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_f64, addr 0x4514224, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_lane_f32, addr 0x450ec84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlaq_lane_s16, addr 0x450eac4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlaq_lane_s32, addr 0x450eb34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlaq_lane_u16, addr 0x450eba4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlaq_lane_u32, addr 0x450ec14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlaq_laneq_f32, addr 0x451b21c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlaq_laneq_s16, addr 0x451b05c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlaq_laneq_s32, addr 0x451b0cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlaq_laneq_u16, addr 0x451b13c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlaq_laneq_u32, addr 0x451b1ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlaq_n_f32, addr 0x450fe04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// @brief Method vmlaq_n_s16, addr 0x450fc44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vmlaq_n_s32, addr 0x450fcb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmlaq_n_u16, addr 0x450fd24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// @brief Method vmlaq_n_u32, addr 0x450fd94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// @brief Method vmlaq_s16, addr 0x4507cc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_s32, addr 0x4507d34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_s8, addr 0x4507c54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_u16, addr 0x4507d84, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_u32, addr 0x4507d94, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_u8, addr 0x4507d74, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmls_f32, addr 0x45080dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_f64, addr 0x45143ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_lane_f32, addr 0x450efcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmls_lane_s16, addr 0x450ee0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmls_lane_s32, addr 0x450ee7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmls_lane_u16, addr 0x450eeec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmls_lane_u32, addr 0x450ef5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmls_laneq_f32, addr 0x451b8e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmls_laneq_s16, addr 0x451b724, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmls_laneq_s32, addr 0x451b794, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmls_laneq_u16, addr 0x451b804, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmls_laneq_u32, addr 0x451b874, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmls_n_f32, addr 0x451014c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// @brief Method vmls_n_s16, addr 0x450ff8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vmls_n_s32, addr 0x450fffc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmls_n_u16, addr 0x451006c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// @brief Method vmls_n_u32, addr 0x45100dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// @brief Method vmls_s16, addr 0x4507fcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_s32, addr 0x450803c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_s8, addr 0x4507f5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_u16, addr 0x45080bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_u32, addr 0x45080cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_u8, addr 0x45080ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_high_lane_s16, addr 0x451b954, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_high_lane_s32, addr 0x451b98c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_high_lane_u16, addr 0x451b9c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_high_lane_u32, addr 0x451b9fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_high_laneq_s16, addr 0x451bb14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_high_laneq_s32, addr 0x451bb4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_high_laneq_u16, addr 0x451bb84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_high_laneq_u32, addr 0x451bbbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_high_n_s16, addr 0x451cd18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vmlsl_high_n_s32, addr 0x451cd50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmlsl_high_n_u16, addr 0x451cd88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// @brief Method vmlsl_high_n_u32, addr 0x451cdc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// @brief Method vmlsl_high_s16, addr 0x4514454, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_high_s32, addr 0x451448c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_high_s8, addr 0x451441c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_high_u16, addr 0x45144fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_high_u32, addr 0x4514534, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_high_u8, addr 0x45144c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_lane_s16, addr 0x450f03c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_lane_s32, addr 0x450f074, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_lane_u16, addr 0x450f0ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_lane_u32, addr 0x450f0e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_laneq_s16, addr 0x451ba34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_laneq_s32, addr 0x451ba6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_laneq_u16, addr 0x451baa4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_laneq_u32, addr 0x451badc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_n_s16, addr 0x45101bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vmlsl_n_s32, addr 0x45101f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmlsl_n_u16, addr 0x451022c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// @brief Method vmlsl_n_u32, addr 0x4510264, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// @brief Method vmlsl_s16, addr 0x4508184, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_s32, addr 0x45081bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_s8, addr 0x450814c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_u16, addr 0x450822c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_u32, addr 0x4508264, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_u8, addr 0x45081f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsq_f32, addr 0x4508114, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_f64, addr 0x45143e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_lane_f32, addr 0x450f004, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsq_lane_s16, addr 0x450ee44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsq_lane_s32, addr 0x450eeb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsq_lane_u16, addr 0x450ef24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsq_lane_u32, addr 0x450ef94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsq_laneq_f32, addr 0x451b91c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsq_laneq_s16, addr 0x451b75c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsq_laneq_s32, addr 0x451b7cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsq_laneq_u16, addr 0x451b83c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsq_laneq_u32, addr 0x451b8ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsq_n_f32, addr 0x4510184, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// @brief Method vmlsq_n_s16, addr 0x450ffc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vmlsq_n_s32, addr 0x4510034, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmlsq_n_u16, addr 0x45100a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// @brief Method vmlsq_n_u32, addr 0x4510114, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// @brief Method vmlsq_s16, addr 0x4508004, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_s32, addr 0x4508074, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_s8, addr 0x4507f94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_u16, addr 0x45080c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_u32, addr 0x45080d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_u8, addr 0x45080b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmov_n_f32, addr 0x45226e4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f32(float_t a0);

  /// @brief Method vmov_n_f64, addr 0x452274c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f64(double_t a0);

  /// @brief Method vmov_n_s16, addr 0x45223d4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s16(int16_t a0);

  /// @brief Method vmov_n_s32, addr 0x4522444, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s32(int32_t a0);

  /// @brief Method vmov_n_s64, addr 0x45224b4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s64(int64_t a0);

  /// @brief Method vmov_n_s8, addr 0x4522364, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s8(int8_t a0);

  /// @brief Method vmov_n_u16, addr 0x4522594, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u16(uint16_t a0);

  /// @brief Method vmov_n_u32, addr 0x4522604, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u32(uint32_t a0);

  /// @brief Method vmov_n_u64, addr 0x4522674, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u64(uint64_t a0);

  /// @brief Method vmov_n_u8, addr 0x4522524, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u8(uint8_t a0);

  /// @brief Method vmovl_high_s16, addr 0x451ab1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_high_s32, addr 0x451ab54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_high_s8, addr 0x451aae4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_high_u16, addr 0x451abc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_high_u32, addr 0x451abfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_high_u8, addr 0x451ab8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_s16, addr 0x450e77c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovl_s32, addr 0x450e7b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovl_s8, addr 0x450e744, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovl_u16, addr 0x450e824, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovl_u32, addr 0x450e85c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovl_u8, addr 0x450e7ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovn_high_s16, addr 0x450e684, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_high_s32, addr 0x450e6bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_high_s64, addr 0x450e6f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_high_u16, addr 0x450e72c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_high_u32, addr 0x450e734, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_high_u64, addr 0x450e73c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_s16, addr 0x450e5c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovn_s32, addr 0x450e5fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovn_s64, addr 0x450e634, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovn_u16, addr 0x450e66c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovn_u32, addr 0x450e674, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovn_u64, addr 0x450e67c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovq_n_f32, addr 0x4522704, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f32(float_t a0);

  /// @brief Method vmovq_n_f64, addr 0x452276c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f64(double_t a0);

  /// @brief Method vmovq_n_s16, addr 0x45223f8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s16(int16_t a0);

  /// @brief Method vmovq_n_s32, addr 0x4522468, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s32(int32_t a0);

  /// @brief Method vmovq_n_s64, addr 0x45224d8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s64(int64_t a0);

  /// @brief Method vmovq_n_s8, addr 0x4522388, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s8(int8_t a0);

  /// @brief Method vmovq_n_u16, addr 0x45225b8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u16(uint16_t a0);

  /// @brief Method vmovq_n_u32, addr 0x4522628, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u32(uint32_t a0);

  /// @brief Method vmovq_n_u64, addr 0x4522698, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u64(uint64_t a0);

  /// @brief Method vmovq_n_u8, addr 0x4522548, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u8(uint8_t a0);

  /// @brief Method vmul_f32, addr 0x4507bac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_f64, addr 0x4513d0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_lane_f32, addr 0x450f57c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_lane_f64, addr 0x451be94, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_lane_s16, addr 0x450f3bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_lane_s32, addr 0x450f42c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_lane_u16, addr 0x450f49c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_lane_u32, addr 0x450f50c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_laneq_f32, addr 0x451c0d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_laneq_f64, addr 0x451c148, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_laneq_s16, addr 0x451bf18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_laneq_s32, addr 0x451bf88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_laneq_u16, addr 0x451bff8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_laneq_u32, addr 0x451c068, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_n_f32, addr 0x450f34c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f32(::Unity::Burst::Intrinsics::v64 a0, float_t a1);

  /// @brief Method vmul_n_f64, addr 0x451be24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f64(::Unity::Burst::Intrinsics::v64 a0, double_t a1);

  /// @brief Method vmul_n_s16, addr 0x450f18c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// @brief Method vmul_n_s32, addr 0x450f1fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vmul_n_u16, addr 0x450f26c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u16(::Unity::Burst::Intrinsics::v64 a0, uint16_t a1);

  /// @brief Method vmul_n_u32, addr 0x450f2dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u32(::Unity::Burst::Intrinsics::v64 a0, uint32_t a1);

  /// @brief Method vmul_s16, addr 0x4507a9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_s32, addr 0x4507b0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_s8, addr 0x4507a2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_u16, addr 0x4507b8c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_u32, addr 0x4507b9c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_u8, addr 0x4507b7c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmuld_lane_f64, addr 0x451bf0c, size 0xc, virtual false, abstract: false, final false
  static inline double_t vmuld_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmuld_laneq_f64, addr 0x451c1f0, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmuld_laneq_f64(double_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_high_lane_s16, addr 0x451c308, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_high_lane_s32, addr 0x451c340, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_high_lane_u16, addr 0x451c378, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_high_lane_u32, addr 0x451c3b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_high_laneq_s16, addr 0x451c4c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_high_laneq_s32, addr 0x451c500, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_high_laneq_u16, addr 0x451c538, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_high_laneq_u32, addr 0x451c570, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_high_n_s16, addr 0x451c228, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// @brief Method vmull_high_n_s32, addr 0x451c260, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vmull_high_n_u16, addr 0x451c298, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, uint16_t a1);

  /// @brief Method vmull_high_n_u32, addr 0x451c2d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1);

  /// @brief Method vmull_high_s16, addr 0x4514e04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_high_s32, addr 0x4514e3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_high_s8, addr 0x4514dcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_high_u16, addr 0x4514eac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_high_u32, addr 0x4514ee4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_high_u8, addr 0x4514e74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_lane_s16, addr 0x450f6cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_lane_s32, addr 0x450f704, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_lane_u16, addr 0x450f73c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_lane_u32, addr 0x450f774, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_laneq_s16, addr 0x451c3e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_laneq_s32, addr 0x451c420, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_laneq_u16, addr 0x451c458, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_laneq_u32, addr 0x451c490, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_n_s16, addr 0x450f5ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// @brief Method vmull_n_s32, addr 0x450f624, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vmull_n_u16, addr 0x450f65c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u16(::Unity::Burst::Intrinsics::v64 a0, uint16_t a1);

  /// @brief Method vmull_n_u32, addr 0x450f694, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u32(::Unity::Burst::Intrinsics::v64 a0, uint32_t a1);

  /// @brief Method vmull_s16, addr 0x4508654, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmull_s32, addr 0x450868c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmull_s8, addr 0x450861c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmull_u16, addr 0x45086fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmull_u32, addr 0x4508734, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmull_u8, addr 0x45086c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmulq_f32, addr 0x4507be4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_f64, addr 0x4513d44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_lane_f32, addr 0x450f5b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_lane_f64, addr 0x451be9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_lane_s16, addr 0x450f3f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_lane_s32, addr 0x450f464, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_lane_u16, addr 0x450f4d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_lane_u32, addr 0x450f544, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_laneq_f32, addr 0x451c110, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_laneq_f64, addr 0x451c180, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_laneq_s16, addr 0x451bf50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_laneq_s32, addr 0x451bfc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_laneq_u16, addr 0x451c030, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_laneq_u32, addr 0x451c0a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_n_f32, addr 0x450f384, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f32(::Unity::Burst::Intrinsics::v128 a0, float_t a1);

  /// @brief Method vmulq_n_f64, addr 0x451be5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f64(::Unity::Burst::Intrinsics::v128 a0, double_t a1);

  /// @brief Method vmulq_n_s16, addr 0x450f1c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// @brief Method vmulq_n_s32, addr 0x450f234, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vmulq_n_u16, addr 0x450f2a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u16(::Unity::Burst::Intrinsics::v128 a0, uint16_t a1);

  /// @brief Method vmulq_n_u32, addr 0x450f314, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1);

  /// @brief Method vmulq_s16, addr 0x4507ad4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_s32, addr 0x4507b44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_s8, addr 0x4507a64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_u16, addr 0x4507b94, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_u32, addr 0x4507ba4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_u8, addr 0x4507b84, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmuls_lane_f32, addr 0x451bed4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmuls_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmuls_laneq_f32, addr 0x451c1b8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmuls_laneq_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulx_f32, addr 0x4513d7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmulx_f64, addr 0x4513dec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmulx_lane_f32, addr 0x4513ecc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulx_lane_f64, addr 0x4513f3c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulx_laneq_f32, addr 0x4513fbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulx_laneq_f64, addr 0x451402c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulxd_f64, addr 0x4513e94, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmulxd_f64(double_t a0, double_t a1);

  /// @brief Method vmulxd_lane_f64, addr 0x4513fb4, size 0x8, virtual false, abstract: false, final false
  static inline double_t vmulxd_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulxd_laneq_f64, addr 0x45140d4, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmulxd_laneq_f64(double_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulxq_f32, addr 0x4513db4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulxq_f64, addr 0x4513e24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulxq_lane_f32, addr 0x4513f04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulxq_lane_f64, addr 0x4513f44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulxq_laneq_f32, addr 0x4513ff4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulxq_laneq_f64, addr 0x4514064, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulxs_f32, addr 0x4513e5c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmulxs_f32(float_t a0, float_t a1);

  /// @brief Method vmulxs_lane_f32, addr 0x4513f7c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmulxs_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulxs_laneq_f32, addr 0x451409c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmulxs_laneq_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmvn_s16, addr 0x4510f8c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvn_s32, addr 0x4510f9c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvn_s8, addr 0x4510f1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvn_u16, addr 0x4510fbc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvn_u32, addr 0x4510fcc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvn_u8, addr 0x4510fac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvnq_s16, addr 0x4510f94, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmvnq_s32, addr 0x4510fa4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmvnq_s8, addr 0x4510f54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmvnq_u16, addr 0x4510fc4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmvnq_u32, addr 0x4510fd4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmvnq_u8, addr 0x4510fb4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vneg_f32, addr 0x451076c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vneg_f64, addr 0x451d178, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vneg_s16, addr 0x451068c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vneg_s32, addr 0x45106fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vneg_s64, addr 0x451d0d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vneg_s8, addr 0x451061c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vnegd_s64, addr 0x451d108, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vnegd_s64(int64_t a0);

  /// @brief Method vnegq_f32, addr 0x45107a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vnegq_f64, addr 0x451d1b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vnegq_s16, addr 0x45106c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vnegq_s32, addr 0x4510734, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vnegq_s64, addr 0x451d140, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vnegq_s8, addr 0x4510654, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vorn_s16, addr 0x45113cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_s32, addr 0x45113dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_s64, addr 0x45113ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_s8, addr 0x451135c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_u16, addr 0x451140c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_u32, addr 0x451141c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_u64, addr 0x451142c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_u8, addr 0x45113fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vornq_s16, addr 0x45113d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_s32, addr 0x45113e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_s64, addr 0x45113f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_s8, addr 0x4511394, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_u16, addr 0x4511414, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_u32, addr 0x4511424, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_u64, addr 0x4511434, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_u8, addr 0x4511404, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorr_s16, addr 0x451112c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_s32, addr 0x451113c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_s64, addr 0x451114c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_s8, addr 0x45110bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_u16, addr 0x451116c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_u32, addr 0x451117c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_u64, addr 0x451118c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_u8, addr 0x451115c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorrq_s16, addr 0x4511134, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_s32, addr 0x4511144, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_s64, addr 0x4511154, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_s8, addr 0x45110f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_u16, addr 0x4511174, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_u32, addr 0x4511184, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_u64, addr 0x4511194, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_u8, addr 0x4511164, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadal_s16, addr 0x4511cec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadal_s32, addr 0x4511d5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadal_s8, addr 0x4511c7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadal_u16, addr 0x4511e3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadal_u32, addr 0x4511eac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadal_u8, addr 0x4511dcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadalq_s16, addr 0x4511d24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadalq_s32, addr 0x4511d94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadalq_s8, addr 0x4511cb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadalq_u16, addr 0x4511e74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadalq_u32, addr 0x4511ee4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadalq_u8, addr 0x4511e04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadd_f32, addr 0x45119a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_s16, addr 0x451191c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_s32, addr 0x4511954, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_s8, addr 0x45118e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_u16, addr 0x4511994, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_u32, addr 0x451199c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_u8, addr 0x451198c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpaddd_f64, addr 0x451efbc, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpaddd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddd_s64, addr 0x451ef14, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vpaddd_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddd_u64, addr 0x451ef4c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vpaddd_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddl_s16, addr 0x4511a4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddl_s32, addr 0x4511abc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddl_s8, addr 0x45119dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddl_u16, addr 0x4511b9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddl_u32, addr 0x4511c0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddl_u8, addr 0x4511b2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddlq_s16, addr 0x4511a84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddlq_s32, addr 0x4511af4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddlq_s8, addr 0x4511a14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddlq_u16, addr 0x4511bd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddlq_u32, addr 0x4511c44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddlq_u8, addr 0x4511b64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddq_f32, addr 0x451e9d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_f64, addr 0x451ea0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_s16, addr 0x451e90c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_s32, addr 0x451e944, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_s64, addr 0x451e97c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_s8, addr 0x451e8d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_u16, addr 0x451e9bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_u32, addr 0x451e9c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_u64, addr 0x451e9cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_u8, addr 0x451e9b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadds_f32, addr 0x451ef84, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpadds_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpmax_f32, addr 0x451206c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_s16, addr 0x4511f54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_s32, addr 0x4511f8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_s8, addr 0x4511f1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_u16, addr 0x4511ffc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_u32, addr 0x4512034, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_u8, addr 0x4511fc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmaxnm_f32, addr 0x451edc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmaxnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmaxnmq_f32, addr 0x451edfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxnmq_f64, addr 0x451ee34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxnmqd_f64, addr 0x451f10c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpmaxnmqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpmaxnms_f32, addr 0x451f0d4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpmaxnms_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpmaxq_f32, addr 0x451eb94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_f64, addr 0x451ebcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_s16, addr 0x451ea7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_s32, addr 0x451eab4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_s8, addr 0x451ea44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_u16, addr 0x451eb24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_u32, addr 0x451eb5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_u8, addr 0x451eaec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxqd_f64, addr 0x451f02c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpmaxqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpmaxs_f32, addr 0x451eff4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpmaxs_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpmin_f32, addr 0x45121f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_s16, addr 0x45120dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_s32, addr 0x4512114, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_s8, addr 0x45120a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_u16, addr 0x4512184, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_u32, addr 0x45121bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_u8, addr 0x451214c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpminnm_f32, addr 0x451ee6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpminnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpminnmq_f32, addr 0x451eea4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminnmq_f64, addr 0x451eedc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminnmqd_f64, addr 0x451f17c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpminnmqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpminnms_f32, addr 0x451f144, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpminnms_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpminq_f32, addr 0x451ed54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_f64, addr 0x451ed8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_s16, addr 0x451ec3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_s32, addr 0x451ec74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_s8, addr 0x451ec04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_u16, addr 0x451ece4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_u32, addr 0x451ed1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_u8, addr 0x451ecac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminqd_f64, addr 0x451f09c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpminqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpmins_f32, addr 0x451f064, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpmins_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqabs_s16, addr 0x451053c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqabs_s32, addr 0x45105ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqabs_s64, addr 0x451cf80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqabs_s8, addr 0x45104cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqabsb_s8, addr 0x451cff0, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqabsb_s8(int8_t a0);

  /// @brief Method vqabsd_s64, addr 0x451d098, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqabsd_s64(int64_t a0);

  /// @brief Method vqabsh_s16, addr 0x451d028, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqabsh_s16(int16_t a0);

  /// @brief Method vqabsq_s16, addr 0x4510574, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqabsq_s32, addr 0x45105e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqabsq_s64, addr 0x451cfb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqabsq_s8, addr 0x4510504, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqabss_s32, addr 0x451d060, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqabss_s32(int32_t a0);

  /// @brief Method vqadd_s16, addr 0x450759c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_s32, addr 0x450760c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_s64, addr 0x450767c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_s8, addr 0x450752c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_u16, addr 0x450775c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_u32, addr 0x45077cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_u64, addr 0x450783c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_u8, addr 0x45076ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqaddb_s8, addr 0x451348c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqaddb_s8(int8_t a0, int8_t a1);

  /// @brief Method vqaddb_u8, addr 0x451356c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqaddb_u8(uint8_t a0, uint8_t a1);

  /// @brief Method vqaddd_s64, addr 0x4513534, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqaddd_s64(int64_t a0, int64_t a1);

  /// @brief Method vqaddd_u64, addr 0x4513614, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqaddd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vqaddh_s16, addr 0x45134c4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqaddh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqaddh_u16, addr 0x45135a4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqaddh_u16(uint16_t a0, uint16_t a1);

  /// @brief Method vqaddq_s16, addr 0x45075d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_s32, addr 0x4507644, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_s64, addr 0x45076b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_s8, addr 0x4507564, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_u16, addr 0x4507794, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_u32, addr 0x4507804, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_u64, addr 0x4507874, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_u8, addr 0x4507724, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqadds_s32, addr 0x45134fc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqadds_s32(int32_t a0, int32_t a1);

  /// @brief Method vqadds_u32, addr 0x45135dc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqadds_u32(uint32_t a0, uint32_t a1);

  /// @brief Method vqdmlal_high_lane_s16, addr 0x451b564, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlal_high_lane_s32, addr 0x451b59c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlal_high_laneq_s16, addr 0x451b6b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlal_high_laneq_s32, addr 0x451b6ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlal_high_n_s16, addr 0x451cca8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vqdmlal_high_n_s32, addr 0x451cce0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmlal_high_s16, addr 0x4514c7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqdmlal_high_s32, addr 0x4514cb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqdmlal_lane_s16, addr 0x450ed9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlal_lane_s32, addr 0x450edd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlal_laneq_s16, addr 0x451b5d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlal_laneq_s32, addr 0x451b60c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlal_n_s16, addr 0x450ff1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vqdmlal_n_s32, addr 0x450ff54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmlal_s16, addr 0x450853c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqdmlal_s32, addr 0x4508574, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqdmlalh_lane_s16, addr 0x451b4f4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlalh_lane_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlalh_laneq_s16, addr 0x451b644, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlalh_laneq_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlalh_s16, addr 0x4514c0c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlalh_s16(int32_t a0, int16_t a1, int16_t a2);

  /// @brief Method vqdmlals_lane_s32, addr 0x451b52c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlals_lane_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlals_laneq_s32, addr 0x451b67c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlals_laneq_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlals_s32, addr 0x4514c44, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlals_s32(int64_t a0, int32_t a1, int32_t a2);

  /// @brief Method vqdmlsl_high_lane_s16, addr 0x451bc64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlsl_high_lane_s32, addr 0x451bc9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlsl_high_laneq_s16, addr 0x451bdb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlsl_high_laneq_s32, addr 0x451bdec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlsl_high_n_s16, addr 0x451cdf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vqdmlsl_high_n_s32, addr 0x451ce30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmlsl_high_s16, addr 0x4514d5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqdmlsl_high_s32, addr 0x4514d94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqdmlsl_lane_s16, addr 0x450f11c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlsl_lane_s32, addr 0x450f154, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlsl_laneq_s16, addr 0x451bcd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlsl_laneq_s32, addr 0x451bd0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlsl_n_s16, addr 0x451029c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vqdmlsl_n_s32, addr 0x45102d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmlsl_s16, addr 0x45085ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqdmlsl_s32, addr 0x45085e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqdmlslh_lane_s16, addr 0x451bbf4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlslh_lane_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlslh_laneq_s16, addr 0x451bd44, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlslh_laneq_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlslh_s16, addr 0x4514cec, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlslh_s16(int32_t a0, int16_t a1, int16_t a2);

  /// @brief Method vqdmlsls_lane_s32, addr 0x451bc2c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlsls_lane_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlsls_laneq_s32, addr 0x451bd7c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlsls_laneq_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlsls_s32, addr 0x4514d24, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlsls_s32(int64_t a0, int32_t a1, int32_t a2);

  /// @brief Method vqdmulh_lane_s16, addr 0x450f96c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulh_lane_s32, addr 0x450f9dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulh_laneq_s16, addr 0x451c8b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulh_laneq_s32, addr 0x451c928, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulh_n_s16, addr 0x450f88c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// @brief Method vqdmulh_n_s32, addr 0x450f8fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqdmulh_s16, addr 0x450837c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqdmulh_s32, addr 0x45083ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqdmulhh_lane_s16, addr 0x451c848, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqdmulhh_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulhh_laneq_s16, addr 0x451c998, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqdmulhh_laneq_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulhh_s16, addr 0x4514b2c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqdmulhh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqdmulhq_lane_s16, addr 0x450f9a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulhq_lane_s32, addr 0x450fa14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulhq_laneq_s16, addr 0x451c8f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulhq_laneq_s32, addr 0x451c960, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulhq_n_s16, addr 0x450f8c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// @brief Method vqdmulhq_n_s32, addr 0x450f934, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqdmulhq_s16, addr 0x45083b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqdmulhq_s32, addr 0x4508424, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqdmulhs_lane_s32, addr 0x451c880, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmulhs_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulhs_laneq_s32, addr 0x451c9d0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmulhs_laneq_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulhs_s32, addr 0x4514b64, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmulhs_s32(int32_t a0, int32_t a1);

  /// @brief Method vqdmull_high_lane_s16, addr 0x451c688, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmull_high_lane_s32, addr 0x451c6c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmull_high_laneq_s16, addr 0x451c7d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmull_high_laneq_s32, addr 0x451c810, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmull_high_n_s16, addr 0x451c5a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// @brief Method vqdmull_high_n_s32, addr 0x451c5e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqdmull_high_s16, addr 0x4514f8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqdmull_high_s32, addr 0x4514fc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqdmull_lane_s16, addr 0x450f81c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmull_lane_s32, addr 0x450f854, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmull_laneq_s16, addr 0x451c6f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmull_laneq_s32, addr 0x451c730, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmull_n_s16, addr 0x450f7ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// @brief Method vqdmull_n_s32, addr 0x450f7e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqdmull_s16, addr 0x450876c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqdmull_s32, addr 0x45087a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqdmullh_lane_s16, addr 0x451c618, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmullh_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmullh_laneq_s16, addr 0x451c768, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmullh_laneq_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmullh_s16, addr 0x4514f1c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmullh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqdmulls_lane_s32, addr 0x451c650, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmulls_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulls_laneq_s32, addr 0x451c7a0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmulls_laneq_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulls_s32, addr 0x4514f54, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmulls_s32(int32_t a0, int32_t a1);

  /// @brief Method vqmovn_high_s16, addr 0x451ad84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_high_s32, addr 0x451adbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_high_s64, addr 0x451adf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_high_u16, addr 0x451ae2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_high_u32, addr 0x451ae64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_high_u64, addr 0x451ae9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_s16, addr 0x450e894, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovn_s32, addr 0x450e8cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovn_s64, addr 0x450e904, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovn_u16, addr 0x450e93c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovn_u32, addr 0x450e974, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovn_u64, addr 0x450e9ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovnd_s64, addr 0x451aca4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqmovnd_s64(int64_t a0);

  /// @brief Method vqmovnd_u64, addr 0x451ad4c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqmovnd_u64(uint64_t a0);

  /// @brief Method vqmovnh_s16, addr 0x451ac34, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqmovnh_s16(int16_t a0);

  /// @brief Method vqmovnh_u16, addr 0x451acdc, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqmovnh_u16(uint16_t a0);

  /// @brief Method vqmovns_s32, addr 0x451ac6c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqmovns_s32(int32_t a0);

  /// @brief Method vqmovns_u32, addr 0x451ad14, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqmovns_u32(uint32_t a0);

  /// @brief Method vqmovun_high_s16, addr 0x451af7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovun_high_s32, addr 0x451afb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovun_high_s64, addr 0x451afec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovun_s16, addr 0x450e9e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovun_s32, addr 0x450ea1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovun_s64, addr 0x450ea54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovund_s64, addr 0x451af44, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqmovund_s64(int64_t a0);

  /// @brief Method vqmovunh_s16, addr 0x451aed4, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqmovunh_s16(int16_t a0);

  /// @brief Method vqmovuns_s32, addr 0x451af0c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqmovuns_s32(int32_t a0);

  /// @brief Method vqneg_s16, addr 0x451084c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqneg_s32, addr 0x45108bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqneg_s64, addr 0x451d1e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqneg_s8, addr 0x45107dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqnegb_s8, addr 0x451d258, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqnegb_s8(int8_t a0);

  /// @brief Method vqnegd_s64, addr 0x451d300, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqnegd_s64(int64_t a0);

  /// @brief Method vqnegh_s16, addr 0x451d290, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqnegh_s16(int16_t a0);

  /// @brief Method vqnegq_s16, addr 0x4510884, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqnegq_s32, addr 0x45108f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqnegq_s64, addr 0x451d220, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqnegq_s8, addr 0x4510814, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqnegs_s32, addr 0x451d2c8, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqnegs_s32(int32_t a0);

  /// @brief Method vqrdmlah_lane_s16, addr 0x45217d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlah_lane_s32, addr 0x45218b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlah_laneq_s16, addr 0x4521848, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlah_laneq_s32, addr 0x4521928, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlah_s16, addr 0x4521618, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqrdmlah_s32, addr 0x4521650, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqrdmlahh_lane_s16, addr 0x4521c38, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlahh_lane_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlahh_laneq_s16, addr 0x4521c70, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlahh_laneq_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlahh_s16, addr 0x4521b58, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlahh_s16(int16_t a0, int16_t a1, int16_t a2);

  /// @brief Method vqrdmlahq_lane_s16, addr 0x4521810, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlahq_lane_s32, addr 0x45218f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlahq_laneq_s16, addr 0x4521880, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlahq_laneq_s32, addr 0x4521960, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlahq_s16, addr 0x4521688, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqrdmlahq_s32, addr 0x45216c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqrdmlahs_lane_s32, addr 0x4521ca8, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlahs_lane_s32(int32_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlahs_s32, addr 0x4521b90, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlahs_s32(int32_t a0, int32_t a1, int32_t a2);

  /// @brief Method vqrdmlsh_lane_s16, addr 0x4521998, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlsh_lane_s32, addr 0x4521a78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlsh_laneq_s16, addr 0x4521a08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlsh_laneq_s32, addr 0x4521ae8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlsh_s16, addr 0x45216f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqrdmlsh_s32, addr 0x4521730, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqrdmlshh_lane_s16, addr 0x4521ce0, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlshh_lane_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlshh_laneq_s16, addr 0x4521d18, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlshh_laneq_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlshh_s16, addr 0x4521bc8, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlshh_s16(int16_t a0, int16_t a1, int16_t a2);

  /// @brief Method vqrdmlshq_lane_s16, addr 0x45219d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlshq_lane_s32, addr 0x4521ab0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlshq_laneq_s16, addr 0x4521a40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlshq_laneq_s32, addr 0x4521b20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlshq_s16, addr 0x4521768, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqrdmlshq_s32, addr 0x45217a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqrdmlshs_lane_s32, addr 0x4521d50, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlshs_lane_s32(int32_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlshs_s32, addr 0x4521c00, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlshs_s32(int32_t a0, int32_t a1, int32_t a2);

  /// @brief Method vqrdmulh_lane_s16, addr 0x450fb2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqrdmulh_lane_s32, addr 0x450fb9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqrdmulh_laneq_s16, addr 0x451ca78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrdmulh_laneq_s32, addr 0x451cae8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrdmulh_n_s16, addr 0x450fa4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// @brief Method vqrdmulh_n_s32, addr 0x450fabc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqrdmulh_s16, addr 0x450845c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrdmulh_s32, addr 0x45084cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrdmulhh_lane_s16, addr 0x451ca08, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmulhh_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqrdmulhh_laneq_s16, addr 0x451cb58, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmulhh_laneq_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrdmulhh_s16, addr 0x4514b9c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmulhh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqrdmulhq_lane_s16, addr 0x450fb64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqrdmulhq_lane_s32, addr 0x450fbd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqrdmulhq_laneq_s16, addr 0x451cab0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrdmulhq_laneq_s32, addr 0x451cb20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrdmulhq_n_s16, addr 0x450fa84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// @brief Method vqrdmulhq_n_s32, addr 0x450faf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrdmulhq_s16, addr 0x4508494, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrdmulhq_s32, addr 0x4508504, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrdmulhs_lane_s32, addr 0x451ca40, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmulhs_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqrdmulhs_laneq_s32, addr 0x451cb90, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmulhs_laneq_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrdmulhs_s32, addr 0x4514bd4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmulhs_s32(int32_t a0, int32_t a1);

  /// @brief Method vqrshl_s16, addr 0x450bf5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_s32, addr 0x450bfcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_s64, addr 0x450c03c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_s8, addr 0x450beec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_u16, addr 0x450c11c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_u32, addr 0x450c18c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_u64, addr 0x450c1fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_u8, addr 0x450c0ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshlb_s8, addr 0x4517f5c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqrshlb_s8(int8_t a0, int8_t a1);

  /// @brief Method vqrshlb_u8, addr 0x451803c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqrshlb_u8(uint8_t a0, int8_t a1);

  /// @brief Method vqrshld_s64, addr 0x4518004, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqrshld_s64(int64_t a0, int64_t a1);

  /// @brief Method vqrshld_u64, addr 0x45180e4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqrshld_u64(uint64_t a0, int64_t a1);

  /// @brief Method vqrshlh_s16, addr 0x4517f94, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrshlh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqrshlh_u16, addr 0x4518074, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqrshlh_u16(uint16_t a0, int16_t a1);

  /// @brief Method vqrshlq_s16, addr 0x450bf94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_s32, addr 0x450c004, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_s64, addr 0x450c074, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_s8, addr 0x450bf24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_u16, addr 0x450c154, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_u32, addr 0x450c1c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_u64, addr 0x450c234, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_u8, addr 0x450c0e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshls_s32, addr 0x4517fcc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrshls_s32(int32_t a0, int32_t a1);

  /// @brief Method vqrshls_u32, addr 0x45180ac, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqrshls_u32(uint32_t a0, int32_t a1);

  /// @brief Method vqrshrn_high_n_s16, addr 0x4518e04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_high_n_s32, addr 0x4518e3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_high_n_s64, addr 0x4518e74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_high_n_u16, addr 0x4518eac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_high_n_u32, addr 0x4518ee4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_high_n_u64, addr 0x4518f1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_n_s16, addr 0x450d8a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrn_n_s32, addr 0x450d8dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrn_n_s64, addr 0x450d914, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrn_n_u16, addr 0x450d94c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrn_n_u32, addr 0x450d984, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrn_n_u64, addr 0x450d9bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrnd_n_s64, addr 0x4518d24, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrshrnd_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqrshrnd_n_u64, addr 0x4518dcc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqrshrnd_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vqrshrnh_n_s16, addr 0x4518cb4, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqrshrnh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqrshrnh_n_u16, addr 0x4518d5c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqrshrnh_n_u16(uint16_t a0, int32_t a1);

  /// @brief Method vqrshrns_n_s32, addr 0x4518cec, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrshrns_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqrshrns_n_u32, addr 0x4518d94, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqrshrns_n_u32(uint32_t a0, int32_t a1);

  /// @brief Method vqrshrun_high_n_s16, addr 0x451881c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrun_high_n_s32, addr 0x4518854, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrun_high_n_s64, addr 0x451888c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrun_n_s16, addr 0x450d55c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrun_n_s32, addr 0x450d594, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrun_n_s64, addr 0x450d5cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrund_n_s64, addr 0x45187e4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqrshrund_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqrshrunh_n_s16, addr 0x4518774, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqrshrunh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqrshruns_n_s32, addr 0x45187ac, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqrshruns_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqshl_n_s16, addr 0x450d014, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_s32, addr 0x450d04c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_s64, addr 0x450d084, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_s8, addr 0x450cfdc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_u16, addr 0x450d0f8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_u32, addr 0x450d130, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_u64, addr 0x450d168, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_u8, addr 0x450d0c0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_s16, addr 0x450b85c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_s32, addr 0x450b8cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_s64, addr 0x450b93c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_s8, addr 0x450b7ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_u16, addr 0x450ba1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_u32, addr 0x450ba8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_u64, addr 0x450bafc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_u8, addr 0x450b9ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshlb_n_s8, addr 0x4518234, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqshlb_n_s8(int8_t a0, int32_t a1);

  /// @brief Method vqshlb_n_u8, addr 0x4518314, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshlb_n_u8(uint8_t a0, int32_t a1);

  /// @brief Method vqshlb_s8, addr 0x4517d2c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqshlb_s8(int8_t a0, int8_t a1);

  /// @brief Method vqshlb_u8, addr 0x4517e0c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshlb_u8(uint8_t a0, int8_t a1);

  /// @brief Method vqshld_n_s64, addr 0x45182dc, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqshld_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqshld_n_u64, addr 0x45183bc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqshld_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vqshld_s64, addr 0x4517dd4, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqshld_s64(int64_t a0, int64_t a1);

  /// @brief Method vqshld_u64, addr 0x4517eb4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqshld_u64(uint64_t a0, int64_t a1);

  /// @brief Method vqshlh_n_s16, addr 0x451826c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqshlh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqshlh_n_u16, addr 0x451834c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshlh_n_u16(uint16_t a0, int32_t a1);

  /// @brief Method vqshlh_s16, addr 0x4517d64, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqshlh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqshlh_u16, addr 0x4517e44, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshlh_u16(uint16_t a0, int16_t a1);

  /// @brief Method vqshlq_n_s16, addr 0x450d02c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_s32, addr 0x450d064, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_s64, addr 0x450d0a0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_s8, addr 0x450cff4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_u16, addr 0x450d110, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_u32, addr 0x450d148, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_u64, addr 0x450d184, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_u8, addr 0x450d0d8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_s16, addr 0x450b894, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_s32, addr 0x450b904, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_s64, addr 0x450b974, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_s8, addr 0x450b824, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_u16, addr 0x450ba54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_u32, addr 0x450bac4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_u64, addr 0x450bb34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_u8, addr 0x450b9e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshls_n_s32, addr 0x45182a4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqshls_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqshls_n_u32, addr 0x4518384, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshls_n_u32(uint32_t a0, int32_t a1);

  /// @brief Method vqshls_s32, addr 0x4517d9c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqshls_s32(int32_t a0, int32_t a1);

  /// @brief Method vqshls_u32, addr 0x4517e7c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshls_u32(uint32_t a0, int32_t a1);

  /// @brief Method vqshlu_n_s16, addr 0x450d214, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshlu_n_s32, addr 0x450d284, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshlu_n_s64, addr 0x450d2f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshlu_n_s8, addr 0x450d1a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshlub_n_s8, addr 0x45183f4, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshlub_n_s8(int8_t a0, int32_t a1);

  /// @brief Method vqshlud_n_s64, addr 0x451849c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqshlud_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqshluh_n_s16, addr 0x451842c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshluh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqshluq_n_s16, addr 0x450d24c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshluq_n_s32, addr 0x450d2bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshluq_n_s64, addr 0x450d32c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshluq_n_s8, addr 0x450d1dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlus_n_s32, addr 0x4518464, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshlus_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqshrn_high_n_s16, addr 0x4518a14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_high_n_s32, addr 0x4518a4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_high_n_s64, addr 0x4518a84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_high_n_u16, addr 0x4518abc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_high_n_u32, addr 0x4518af4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_high_n_u64, addr 0x4518b2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_n_s16, addr 0x450d604, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrn_n_s32, addr 0x450d63c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrn_n_s64, addr 0x450d674, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrn_n_u16, addr 0x450d6ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrn_n_u32, addr 0x450d6e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrn_n_u64, addr 0x450d71c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrnd_n_s64, addr 0x4518934, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqshrnd_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqshrnd_n_u64, addr 0x45189dc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshrnd_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vqshrnh_n_s16, addr 0x45188c4, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqshrnh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqshrnh_n_u16, addr 0x451896c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshrnh_n_u16(uint16_t a0, int32_t a1);

  /// @brief Method vqshrns_n_s32, addr 0x45188fc, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqshrns_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqshrns_n_u32, addr 0x45189a4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshrns_n_u32(uint32_t a0, int32_t a1);

  /// @brief Method vqshrun_high_n_s16, addr 0x45186cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrun_high_n_s32, addr 0x4518704, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrun_high_n_s64, addr 0x451873c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrun_n_s16, addr 0x450d4b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrun_n_s32, addr 0x450d4ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrun_n_s64, addr 0x450d524, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrund_n_s64, addr 0x4518694, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshrund_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqshrunh_n_s16, addr 0x4518624, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshrunh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqshruns_n_s32, addr 0x451865c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshruns_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqsub_s16, addr 0x4508ffc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_s32, addr 0x450906c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_s64, addr 0x45090dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_s8, addr 0x4508f8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_u16, addr 0x45091bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_u32, addr 0x450922c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_u64, addr 0x450929c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_u8, addr 0x450914c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsubb_s8, addr 0x451537c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqsubb_s8(int8_t a0, int8_t a1);

  /// @brief Method vqsubb_u8, addr 0x451545c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqsubb_u8(uint8_t a0, uint8_t a1);

  /// @brief Method vqsubd_s64, addr 0x4515424, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqsubd_s64(int64_t a0, int64_t a1);

  /// @brief Method vqsubd_u64, addr 0x4515504, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqsubd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vqsubh_s16, addr 0x45153b4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqsubh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqsubh_u16, addr 0x4515494, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqsubh_u16(uint16_t a0, uint16_t a1);

  /// @brief Method vqsubq_s16, addr 0x4509034, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_s32, addr 0x45090a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_s64, addr 0x4509114, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_s8, addr 0x4508fc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_u16, addr 0x45091f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_u32, addr 0x4509264, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_u64, addr 0x45092d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_u8, addr 0x4509184, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubs_s32, addr 0x45153ec, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqsubs_s32(int32_t a0, int32_t a1);

  /// @brief Method vqsubs_u32, addr 0x45154cc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqsubs_u32(uint32_t a0, uint32_t a1);

  /// @brief Method vqtbl1_s8, addr 0x4520b38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqtbl1_u8, addr 0x4520ba8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqtbl1q_s8, addr 0x4520b70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqtbl1q_u8, addr 0x4520bb0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqtbx1_s8, addr 0x4520bb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqtbx1_u8, addr 0x4520c28, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqtbx1q_s8, addr 0x4520bf0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqtbx1q_u8, addr 0x4520c30, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_s16, addr 0x4513c4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_s32, addr 0x4513c84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_s64, addr 0x4513cbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_u16, addr 0x4513cf4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_u32, addr 0x4513cfc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_u64, addr 0x4513d04, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_s16, addr 0x450796c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vraddhn_s32, addr 0x45079a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vraddhn_s64, addr 0x45079dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vraddhn_u16, addr 0x4507a14, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vraddhn_u32, addr 0x4507a1c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vraddhn_u64, addr 0x4507a24, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrbit_s8, addr 0x451dfd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrbit_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrbit_u8, addr 0x451e048, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrbit_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrbitq_s8, addr 0x451e010, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrbitq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrbitq_u8, addr 0x451e050, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrbitq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrecpe_f32, addr 0x4510cec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrecpe_f64, addr 0x451d338, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrecpe_u32, addr 0x4510c7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecpe_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrecped_f64, addr 0x451d3e0, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrecped_f64(double_t a0);

  /// @brief Method vrecpeq_f32, addr 0x4510d24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrecpeq_f64, addr 0x451d370, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrecpeq_u32, addr 0x4510cb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrecpes_f32, addr 0x451d3a8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrecpes_f32(float_t a0);

  /// @brief Method vrecps_f32, addr 0x4510d5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecps_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrecps_f64, addr 0x451d418, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecps_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrecpsd_f64, addr 0x451d4c0, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrecpsd_f64(double_t a0, double_t a1);

  /// @brief Method vrecpsq_f32, addr 0x4510d94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrecpsq_f64, addr 0x451d450, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrecpss_f32, addr 0x451d488, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrecpss_f32(float_t a0, float_t a1);

  /// @brief Method vrecpxd_f64, addr 0x4520d08, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrecpxd_f64(double_t a0);

  /// @brief Method vrecpxs_f32, addr 0x4520cd0, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrecpxs_f32(float_t a0);

  /// @brief Method vrev16_s8, addr 0x4512844, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev16_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev16_u8, addr 0x45128b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev16_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev16q_s8, addr 0x451287c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev16q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev16q_u8, addr 0x45128bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev16q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev32_s16, addr 0x45127b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev32_s8, addr 0x4512744, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev32_u16, addr 0x4512834, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev32_u8, addr 0x4512824, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev32q_s16, addr 0x45127ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev32q_s8, addr 0x451277c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev32q_u16, addr 0x451283c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev32q_u8, addr 0x451282c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64_f32, addr 0x4512734, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_s16, addr 0x4512624, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_s32, addr 0x4512694, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_s8, addr 0x45125b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_u16, addr 0x4512714, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_u32, addr 0x4512724, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_u8, addr 0x4512704, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64q_f32, addr 0x451273c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_s16, addr 0x451265c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_s32, addr 0x45126cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_s8, addr 0x45125ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_u16, addr 0x451271c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_u32, addr 0x451272c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_u8, addr 0x451270c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrhadd_s16, addr 0x45072fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhadd_s32, addr 0x450736c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhadd_s8, addr 0x450728c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhadd_u16, addr 0x450744c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhadd_u32, addr 0x45074bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhadd_u8, addr 0x45073dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhaddq_s16, addr 0x4507334, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrhaddq_s32, addr 0x45073a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrhaddq_s8, addr 0x45072c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrhaddq_u16, addr 0x4507484, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrhaddq_u32, addr 0x45074f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrhaddq_u8, addr 0x4507414, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrnd_f32, addr 0x451a48c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnd_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrnd_f64, addr 0x451a4fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnd_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrnda_f32, addr 0x451a844, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnda_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrnda_f64, addr 0x451a8b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnda_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndaq_f32, addr 0x451a87c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndaq_f64, addr 0x451a8ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndi_f32, addr 0x451a924, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndi_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndi_f64, addr 0x451a994, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndi_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndiq_f32, addr 0x451a95c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndiq_f64, addr 0x451a9cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndm_f32, addr 0x451a684, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndm_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndm_f64, addr 0x451a6f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndm_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndmq_f32, addr 0x451a6bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndmq_f64, addr 0x451a72c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndn_f32, addr 0x451a56c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndn_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndn_f64, addr 0x451a5dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndn_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndnq_f32, addr 0x451a5a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndnq_f64, addr 0x451a614, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndns_f32, addr 0x451a64c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrndns_f32(float_t a0);

  /// @brief Method vrndp_f32, addr 0x451a764, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndp_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndp_f64, addr 0x451a7d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndp_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndpq_f32, addr 0x451a79c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndpq_f64, addr 0x451a80c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndq_f32, addr 0x451a4c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndq_f64, addr 0x451a534, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndx_f32, addr 0x451aa04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndx_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndx_f64, addr 0x451aa74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndx_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndxq_f32, addr 0x451aa3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndxq_f64, addr 0x451aaac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrshl_s16, addr 0x450bbdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_s32, addr 0x450bc4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_s64, addr 0x450bcbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_s8, addr 0x450bb6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_u16, addr 0x450bd9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_u32, addr 0x450be0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_u64, addr 0x450be7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_u8, addr 0x450bd2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshld_s64, addr 0x4517eec, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vrshld_s64(int64_t a0, int64_t a1);

  /// @brief Method vrshld_u64, addr 0x4517f24, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vrshld_u64(uint64_t a0, int64_t a1);

  /// @brief Method vrshlq_s16, addr 0x450bc14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_s32, addr 0x450bc84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_s64, addr 0x450bcf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_s8, addr 0x450bba4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_u16, addr 0x450bdd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_u32, addr 0x450be44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_u64, addr 0x450beb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_u8, addr 0x450bd64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshr_n_s16, addr 0x450c9a8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_s32, addr 0x450c9e4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_s64, addr 0x450ca20, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_s8, addr 0x450c96c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_u16, addr 0x450caa0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_u32, addr 0x450cadc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_u64, addr 0x450cb18, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_u8, addr 0x450ca64, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshrd_n_s64, addr 0x451813c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vrshrd_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vrshrd_n_u64, addr 0x4518174, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vrshrd_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vrshrn_high_n_s16, addr 0x4518b64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_high_n_s32, addr 0x4518b9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_high_n_s64, addr 0x4518bd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_high_n_u16, addr 0x4518c0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_high_n_u32, addr 0x4518c44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_high_n_u64, addr 0x4518c7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_n_s16, addr 0x450d754, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrn_n_s32, addr 0x450d78c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrn_n_s64, addr 0x450d7c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrn_n_u16, addr 0x450d7fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrn_n_u32, addr 0x450d834, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrn_n_u64, addr 0x450d86c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_s16, addr 0x450c9c4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_s32, addr 0x450ca00, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_s64, addr 0x450ca40, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_s8, addr 0x450c988, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_u16, addr 0x450cabc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_u32, addr 0x450caf8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_u64, addr 0x450cb38, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_u8, addr 0x450ca80, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrsqrte_f32, addr 0x4510e3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrsqrte_f64, addr 0x451d5d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrsqrte_u32, addr 0x4510dcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrsqrted_f64, addr 0x451d680, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrsqrted_f64(double_t a0);

  /// @brief Method vrsqrteq_f32, addr 0x4510e74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrsqrteq_f64, addr 0x451d610, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrsqrteq_u32, addr 0x4510e04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrsqrtes_f32, addr 0x451d648, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrsqrtes_f32(float_t a0);

  /// @brief Method vrsqrts_f32, addr 0x4510eac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrsqrts_f64, addr 0x451d6b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrsqrtsd_f64, addr 0x451d760, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrsqrtsd_f64(double_t a0, double_t a1);

  /// @brief Method vrsqrtsq_f32, addr 0x4510ee4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsqrtsq_f64, addr 0x451d6f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsqrtss_f32, addr 0x451d728, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrsqrtss_f32(float_t a0, float_t a1);

  /// @brief Method vrsra_n_s16, addr 0x450cefc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_s32, addr 0x450cf1c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_s64, addr 0x450cf3c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_s8, addr 0x450cedc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_u16, addr 0x450cf7c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_u32, addr 0x450cf9c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_u64, addr 0x450cfbc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_u8, addr 0x450cf5c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsrad_n_s64, addr 0x45181c4, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vrsrad_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// @brief Method vrsrad_n_u64, addr 0x45181fc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vrsrad_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// @brief Method vrsraq_n_s16, addr 0x450cf08, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_s32, addr 0x450cf28, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_s64, addr 0x450cf48, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_s8, addr 0x450cee8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_u16, addr 0x450cf88, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_u32, addr 0x450cfa8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_u64, addr 0x450cfc8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_u8, addr 0x450cf68, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsubhn_high_s16, addr 0x45155fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_high_s32, addr 0x4515634, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_high_s64, addr 0x451566c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_high_u16, addr 0x45156a4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_high_u32, addr 0x45156ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_high_u64, addr 0x45156b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_s16, addr 0x45093cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsubhn_s32, addr 0x4509404, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsubhn_s64, addr 0x450943c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsubhn_u16, addr 0x4509474, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsubhn_u32, addr 0x450947c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsubhn_u64, addr 0x4509484, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vset_lane_f32, addr 0x4512e64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_f64, addr 0x4520c78, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_s16, addr 0x4512dd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_s32, addr 0x4512e08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_s64, addr 0x4512e40, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s64(int64_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_s8, addr 0x4512d98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s8(int8_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_u16, addr 0x4512d04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u16(uint16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_u32, addr 0x4512d3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u32(uint32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_u64, addr 0x4512d74, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u64(uint64_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_u8, addr 0x4512ccc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u8(uint8_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsetq_lane_f32, addr 0x451305c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_f64, addr 0x4520c98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_s16, addr 0x4512fb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_s32, addr 0x4512fec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_s64, addr 0x4513024, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s64(int64_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_s8, addr 0x4512f7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s8(int8_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_u16, addr 0x4512ed4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u16(uint16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_u32, addr 0x4512f0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u32(uint32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_u64, addr 0x4512f44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u64(uint64_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_u8, addr 0x4512e9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u8(uint8_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsha1cq_u32, addr 0x4520e98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1cq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha1h_u32, addr 0x4520f40, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vsha1h_u32(uint32_t a0);

  /// @brief Method vsha1mq_u32, addr 0x4520f08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1mq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha1pq_u32, addr 0x4520ed0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1pq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha1su0q_u32, addr 0x4520f78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1su0q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha1su1q_u32, addr 0x4520fb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1su1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsha256h2q_u32, addr 0x4521020, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256h2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha256hq_u32, addr 0x4520fe8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256hq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha256su0q_u32, addr 0x4521058, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256su0q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsha256su1q_u32, addr 0x4521090, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256su1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vshl_n_s16, addr 0x450c65c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_s32, addr 0x450c6cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_s64, addr 0x450c73c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_s8, addr 0x450c5ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_u16, addr 0x450c81c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_u32, addr 0x450c88c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_u64, addr 0x450c8fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_u8, addr 0x450c7ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_s16, addr 0x450b4dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_s32, addr 0x450b54c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_s64, addr 0x450b5bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_s8, addr 0x450b46c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_u16, addr 0x450b69c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_u32, addr 0x450b70c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_u64, addr 0x450b77c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_u8, addr 0x450b62c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshld_n_s64, addr 0x451812c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t vshld_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vshld_n_u64, addr 0x4518134, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t vshld_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vshld_s64, addr 0x4517cbc, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vshld_s64(int64_t a0, int64_t a1);

  /// @brief Method vshld_u64, addr 0x4517cf4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vshld_u64(uint64_t a0, int64_t a1);

  /// @brief Method vshll_high_n_s16, addr 0x4518f8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_high_n_s32, addr 0x4518fc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_high_n_s8, addr 0x4518f54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_high_n_u16, addr 0x4519034, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_high_n_u32, addr 0x451906c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_high_n_u8, addr 0x4518ffc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_n_s16, addr 0x450da2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshll_n_s32, addr 0x450da64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshll_n_s8, addr 0x450d9f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshll_n_u16, addr 0x450dad4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshll_n_u32, addr 0x450db0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshll_n_u8, addr 0x450da9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshlq_n_s16, addr 0x450c694, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_s32, addr 0x450c704, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_s64, addr 0x450c774, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_s8, addr 0x450c624, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_u16, addr 0x450c854, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_u32, addr 0x450c8c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_u64, addr 0x450c934, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_u8, addr 0x450c7e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_s16, addr 0x450b514, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_s32, addr 0x450b584, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_s64, addr 0x450b5f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_s8, addr 0x450b4a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_u16, addr 0x450b6d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_u32, addr 0x450b744, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_u64, addr 0x450b7b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_u8, addr 0x450b664, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshr_n_s16, addr 0x450c2dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_s32, addr 0x450c34c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_s64, addr 0x450c3bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_s8, addr 0x450c26c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_u16, addr 0x450c49c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_u32, addr 0x450c50c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_u64, addr 0x450c57c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_u8, addr 0x450c42c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshrd_n_s64, addr 0x451811c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t vshrd_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vshrd_n_u64, addr 0x4518124, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t vshrd_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vshrn_high_n_s16, addr 0x45184d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_high_n_s32, addr 0x451850c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_high_n_s64, addr 0x4518544, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_high_n_u16, addr 0x451857c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_high_n_u32, addr 0x45185b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_high_n_u64, addr 0x45185ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_n_s16, addr 0x450d364, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrn_n_s32, addr 0x450d39c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrn_n_s64, addr 0x450d3d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrn_n_u16, addr 0x450d40c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrn_n_u32, addr 0x450d444, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrn_n_u64, addr 0x450d47c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_s16, addr 0x450c314, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_s32, addr 0x450c384, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_s64, addr 0x450c3f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_s8, addr 0x450c2a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_u16, addr 0x450c4d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_u32, addr 0x450c544, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_u64, addr 0x450c5b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_u8, addr 0x450c464, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vsli_n_s16, addr 0x450df34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_s32, addr 0x450dfa4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_s64, addr 0x450e014, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_s8, addr 0x450dec4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_u16, addr 0x450e0f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_u32, addr 0x450e164, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_u64, addr 0x450e1d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_u8, addr 0x450e084, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vslid_n_s64, addr 0x4519114, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vslid_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// @brief Method vslid_n_u64, addr 0x451914c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vslid_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// @brief Method vsliq_n_s16, addr 0x450df6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_s32, addr 0x450dfdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_s64, addr 0x450e04c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_s8, addr 0x450defc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_u16, addr 0x450e12c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_u32, addr 0x450e19c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_u64, addr 0x450e20c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_u8, addr 0x450e0bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsqadd_u16, addr 0x451395c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsqadd_u32, addr 0x45139cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsqadd_u64, addr 0x4513a3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsqadd_u8, addr 0x45138ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsqaddb_u8, addr 0x4513aac, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vsqaddb_u8(uint8_t a0, int8_t a1);

  /// @brief Method vsqaddd_u64, addr 0x4513b54, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vsqaddd_u64(uint64_t a0, int64_t a1);

  /// @brief Method vsqaddh_u16, addr 0x4513ae4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vsqaddh_u16(uint16_t a0, int16_t a1);

  /// @brief Method vsqaddq_u16, addr 0x4513994, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsqaddq_u32, addr 0x4513a04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsqaddq_u64, addr 0x4513a74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsqaddq_u8, addr 0x4513924, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsqadds_u32, addr 0x4513b1c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vsqadds_u32(uint32_t a0, int32_t a1);

  /// @brief Method vsqrt_f32, addr 0x451d4f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vsqrt_f64, addr 0x451d568, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vsqrtq_f32, addr 0x451d530, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vsqrtq_f64, addr 0x451d5a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vsra_n_s16, addr 0x450cbcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_s32, addr 0x450cc3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_s64, addr 0x450ccac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_s8, addr 0x450cb5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_u16, addr 0x450cd8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_u32, addr 0x450cdfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_u64, addr 0x450ce6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_u8, addr 0x450cd1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsrad_n_s64, addr 0x45181ac, size 0xc, virtual false, abstract: false, final false
  static inline int64_t vsrad_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// @brief Method vsrad_n_u64, addr 0x45181b8, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t vsrad_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// @brief Method vsraq_n_s16, addr 0x450cc04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_s32, addr 0x450cc74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_s64, addr 0x450cce4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_s8, addr 0x450cb94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_u16, addr 0x450cdc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_u32, addr 0x450ce34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_u64, addr 0x450cea4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_u8, addr 0x450cd54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsri_n_s16, addr 0x450dbb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_s32, addr 0x450dc24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_s64, addr 0x450dc94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_s8, addr 0x450db44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_u16, addr 0x450dd74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_u32, addr 0x450dde4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_u64, addr 0x450de54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_u8, addr 0x450dd04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsrid_n_s64, addr 0x45190a4, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vsrid_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// @brief Method vsrid_n_u64, addr 0x45190dc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vsrid_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// @brief Method vsriq_n_s16, addr 0x450dbec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_s32, addr 0x450dc5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_s64, addr 0x450dccc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_s8, addr 0x450db7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_u16, addr 0x450ddac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_u32, addr 0x450de1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_u64, addr 0x450de8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_u8, addr 0x450dd3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vst1_f32, addr 0x4522ce4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_f32(::cordl_internals::Ptr<float_t> a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_f64, addr 0x4522cf4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_f64(::cordl_internals::Ptr<double_t> a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_s16, addr 0x4522c74, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s16(::cordl_internals::Ptr<int16_t> a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_s32, addr 0x4522c84, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s32(::cordl_internals::Ptr<int32_t> a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_s64, addr 0x4522c94, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s64(::cordl_internals::Ptr<int64_t> a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_s8, addr 0x4522c64, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s8(::cordl_internals::Ptr<int8_t> a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_u16, addr 0x4522cb4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u16(::cordl_internals::Ptr<uint16_t> a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_u32, addr 0x4522cc4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u32(::cordl_internals::Ptr<uint32_t> a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_u64, addr 0x4522cd4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u64(::cordl_internals::Ptr<uint64_t> a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_u8, addr 0x4522ca4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u8(::cordl_internals::Ptr<uint8_t> a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1q_f32, addr 0x4522cec, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_f32(::cordl_internals::Ptr<float_t> a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_f64, addr 0x4522cfc, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_f64(::cordl_internals::Ptr<double_t> a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_s16, addr 0x4522c7c, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s16(::cordl_internals::Ptr<int16_t> a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_s32, addr 0x4522c8c, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s32(::cordl_internals::Ptr<int32_t> a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_s64, addr 0x4522c9c, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s64(::cordl_internals::Ptr<int64_t> a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_s8, addr 0x4522c6c, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s8(::cordl_internals::Ptr<int8_t> a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_u16, addr 0x4522cbc, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u16(::cordl_internals::Ptr<uint16_t> a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_u32, addr 0x4522ccc, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u32(::cordl_internals::Ptr<uint32_t> a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_u64, addr 0x4522cdc, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u64(::cordl_internals::Ptr<uint64_t> a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_u8, addr 0x4522cac, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u8(::cordl_internals::Ptr<uint8_t> a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsub_f32, addr 0x45089dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_f64, addr 0x4514ffc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_s16, addr 0x450884c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_s32, addr 0x45088bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_s64, addr 0x450892c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_s8, addr 0x45087dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_u16, addr 0x45089ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_u32, addr 0x45089bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_u64, addr 0x45089cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_u8, addr 0x450899c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubd_s64, addr 0x451506c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vsubd_s64(int64_t a0, int64_t a1);

  /// @brief Method vsubd_u64, addr 0x45150a4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vsubd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vsubhn_high_s16, addr 0x451553c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_high_s32, addr 0x4515574, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_high_s64, addr 0x45155ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_high_u16, addr 0x45155e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_high_u32, addr 0x45155ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_high_u64, addr 0x45155f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_s16, addr 0x450930c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubhn_s32, addr 0x4509344, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubhn_s64, addr 0x450937c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubhn_u16, addr 0x45093b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubhn_u32, addr 0x45093bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubhn_u64, addr 0x45093c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_s16, addr 0x4515114, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_s32, addr 0x451514c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_s8, addr 0x45150dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_u16, addr 0x45151bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_u32, addr 0x45151f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_u8, addr 0x4515184, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_s16, addr 0x4508a84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubl_s32, addr 0x4508abc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubl_s8, addr 0x4508a4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubl_u16, addr 0x4508b2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubl_u32, addr 0x4508b64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubl_u8, addr 0x4508af4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubq_f32, addr 0x4508a14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_f64, addr 0x4515034, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_s16, addr 0x4508884, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_s32, addr 0x45088f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_s64, addr 0x4508964, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_s8, addr 0x4508814, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_u16, addr 0x45089b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_u32, addr 0x45089c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_u64, addr 0x45089d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_u8, addr 0x45089a4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_s16, addr 0x4515264, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_s32, addr 0x451529c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_s8, addr 0x451522c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_u16, addr 0x451530c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_u32, addr 0x4515344, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_u8, addr 0x45152d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_s16, addr 0x4508bd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubw_s32, addr 0x4508c0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubw_s8, addr 0x4508b9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubw_u16, addr 0x4508c7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubw_u32, addr 0x4508cb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubw_u8, addr 0x4508c44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtbl1_s8, addr 0x45128c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbl1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtbl1_u8, addr 0x45128fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbl1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtbx1_s8, addr 0x4512904, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbx1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vtbx1_u8, addr 0x451293c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbx1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vtrn1_f32, addr 0x4520948, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_s16, addr 0x45207f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_s32, addr 0x4520868, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_s8, addr 0x4520788, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_u16, addr 0x4520920, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_u32, addr 0x4520930, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_u8, addr 0x4520910, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1q_f32, addr 0x4520950, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_f64, addr 0x4520958, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_s16, addr 0x4520830, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_s32, addr 0x45208a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_s64, addr 0x45208d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_s8, addr 0x45207c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_u16, addr 0x4520928, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_u32, addr 0x4520938, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_u64, addr 0x4520940, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_u8, addr 0x4520918, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2_f32, addr 0x4520b20, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_s16, addr 0x45209d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_s32, addr 0x4520a40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_s8, addr 0x4520960, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_u16, addr 0x4520af8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_u32, addr 0x4520b08, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_u8, addr 0x4520ae8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2q_f32, addr 0x4520b28, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_f64, addr 0x4520b30, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_s16, addr 0x4520a08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_s32, addr 0x4520a78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_s64, addr 0x4520ab0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_s8, addr 0x4520998, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_u16, addr 0x4520b00, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_u32, addr 0x4520b10, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_u64, addr 0x4520b18, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_u8, addr 0x4520af0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtst_s16, addr 0x450a4ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_s32, addr 0x450a55c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_s64, addr 0x45175ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_s8, addr 0x450a47c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_u16, addr 0x450a5dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_u32, addr 0x450a5ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_u64, addr 0x451761c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_u8, addr 0x450a5cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtstd_s64, addr 0x451762c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vtstd_s64(int64_t a0, int64_t a1);

  /// @brief Method vtstd_u64, addr 0x4517664, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vtstd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vtstq_s16, addr 0x450a524, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_s32, addr 0x450a594, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_s64, addr 0x45175e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_s8, addr 0x450a4b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_u16, addr 0x450a5e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_u32, addr 0x450a5f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_u64, addr 0x4517624, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_u8, addr 0x450a5d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuqadd_s16, addr 0x45136bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuqadd_s32, addr 0x451372c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuqadd_s64, addr 0x451379c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuqadd_s8, addr 0x451364c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuqaddb_s8, addr 0x451380c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vuqaddb_s8(int8_t a0, uint8_t a1);

  /// @brief Method vuqaddd_s64, addr 0x45138b4, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vuqaddd_s64(int64_t a0, uint64_t a1);

  /// @brief Method vuqaddh_s16, addr 0x4513844, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vuqaddh_s16(int16_t a0, uint16_t a1);

  /// @brief Method vuqaddq_s16, addr 0x45136f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuqaddq_s32, addr 0x4513764, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuqaddq_s64, addr 0x45137d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuqaddq_s8, addr 0x4513684, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuqadds_s32, addr 0x451387c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vuqadds_s32(int32_t a0, uint32_t a1);

  /// @brief Method vuzp1_f32, addr 0x4520598, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_s16, addr 0x4520448, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_s32, addr 0x45204b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_s8, addr 0x45203d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_u16, addr 0x4520570, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_u32, addr 0x4520580, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_u8, addr 0x4520560, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1q_f32, addr 0x45205a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_f64, addr 0x45205a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_s16, addr 0x4520480, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_s32, addr 0x45204f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_s64, addr 0x4520528, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_s8, addr 0x4520410, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_u16, addr 0x4520578, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_u32, addr 0x4520588, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_u64, addr 0x4520590, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_u8, addr 0x4520568, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2_f32, addr 0x4520770, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_s16, addr 0x4520620, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_s32, addr 0x4520690, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_s8, addr 0x45205b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_u16, addr 0x4520748, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_u32, addr 0x4520758, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_u8, addr 0x4520738, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2q_f32, addr 0x4520778, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_f64, addr 0x4520780, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_s16, addr 0x4520658, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_s32, addr 0x45206c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_s64, addr 0x4520700, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_s8, addr 0x45205e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_u16, addr 0x4520750, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_u32, addr 0x4520760, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_u64, addr 0x4520768, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_u8, addr 0x4520740, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1_f32, addr 0x45201e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_s16, addr 0x4520098, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_s32, addr 0x4520108, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_s8, addr 0x4520028, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_u16, addr 0x45201c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_u32, addr 0x45201d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_u8, addr 0x45201b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1q_f32, addr 0x45201f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_f64, addr 0x45201f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_s16, addr 0x45200d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_s32, addr 0x4520140, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_s64, addr 0x4520178, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_s8, addr 0x4520060, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_u16, addr 0x45201c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_u32, addr 0x45201d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_u64, addr 0x45201e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_u8, addr 0x45201b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2_f32, addr 0x45203c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_s16, addr 0x4520270, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_s32, addr 0x45202e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_s8, addr 0x4520200, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_u16, addr 0x4520398, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_u32, addr 0x45203a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_u8, addr 0x4520388, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2q_f32, addr 0x45203c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_f64, addr 0x45203d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_s16, addr 0x45202a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_s32, addr 0x4520318, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_s64, addr 0x4520350, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_s8, addr 0x4520238, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_u16, addr 0x45203a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_u32, addr 0x45203b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_u64, addr 0x45203b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_u8, addr 0x4520390, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Arm_Neon();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Arm_Neon", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Arm_Neon(Arm_Neon&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Arm_Neon", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Arm_Neon(Arm_Neon const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14637 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::Arm_Neon, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Arm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Arm(Arm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Arm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Arm(Arm const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14638 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::Arm, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
NEED_NO_BOX(::Unity::Burst::Intrinsics::Arm);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::Arm*, "Unity.Burst.Intrinsics", "Arm");
NEED_NO_BOX(::Unity::Burst::Intrinsics::Arm_Neon);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::Arm_Neon*, "Unity.Burst.Intrinsics", "Arm/Neon");
