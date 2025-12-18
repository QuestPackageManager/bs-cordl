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

  /// @brief Method __crc32b, addr 0x62dc070, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32b(uint32_t a0, uint8_t a1);

  /// @brief Method __crc32cb, addr 0x62dc150, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32cb(uint32_t a0, uint8_t a1);

  /// @brief Method __crc32cd, addr 0x62dc1f8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32cd(uint32_t a0, uint64_t a1);

  /// @brief Method __crc32ch, addr 0x62dc188, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32ch(uint32_t a0, uint16_t a1);

  /// @brief Method __crc32cw, addr 0x62dc1c0, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32cw(uint32_t a0, uint32_t a1);

  /// @brief Method __crc32d, addr 0x62dc118, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32d(uint32_t a0, uint64_t a1);

  /// @brief Method __crc32h, addr 0x62dc0a8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32h(uint32_t a0, uint16_t a1);

  /// @brief Method __crc32w, addr 0x62dc0e0, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32w(uint32_t a0, uint32_t a1);

  /// @brief Method .ctor, addr 0x62dd188, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsNeonArmv82FeaturesSupported, addr 0x62ce16c, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonArmv82FeaturesSupported();

  /// @brief Method get_IsNeonCryptoSupported, addr 0x62dbe38, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonCryptoSupported();

  /// @brief Method get_IsNeonDotProdSupported, addr 0x62dc310, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonDotProdSupported();

  /// @brief Method get_IsNeonRDMASupported, addr 0x62dc5b8, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonRDMASupported();

  /// @brief Method get_IsNeonSupported, addr 0x62c1f44, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonSupported();

  /// @brief Method vaba_s16, addr 0x62c5f3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vaba_s32, addr 0x62c5fac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vaba_s8, addr 0x62c5ecc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vaba_u16, addr 0x62c608c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vaba_u32, addr 0x62c60fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vaba_u8, addr 0x62c601c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_high_s16, addr 0x62d290c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_high_s32, addr 0x62d2944, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_high_s8, addr 0x62d28d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_high_u16, addr 0x62d29b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_high_u32, addr 0x62d29ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_high_u8, addr 0x62d297c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabal_s16, addr 0x62c61a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_s32, addr 0x62c61dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_s8, addr 0x62c616c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_u16, addr 0x62c624c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_u32, addr 0x62c6284, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabal_u8, addr 0x62c6214, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vabaq_s16, addr 0x62c5f74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabaq_s32, addr 0x62c5fe4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabaq_s8, addr 0x62c5f04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabaq_u16, addr 0x62c60c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabaq_u32, addr 0x62c6134, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabaq_u8, addr 0x62c6054, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vabd_f32, addr 0x62c5d0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_f64, addr 0x62d26a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_s16, addr 0x62c5adc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_s32, addr 0x62c5b4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_s8, addr 0x62c5a6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_u16, addr 0x62c5c2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_u32, addr 0x62c5c9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabd_u8, addr 0x62c5bbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdd_f64, addr 0x62d274c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vabdd_f64(double_t a0, double_t a1);

  /// @brief Method vabdl_high_s16, addr 0x62d27bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_high_s32, addr 0x62d27f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_high_s8, addr 0x62d2784, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_high_u16, addr 0x62d2864, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_high_u32, addr 0x62d289c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_high_u8, addr 0x62d282c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdl_s16, addr 0x62c5db4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdl_s32, addr 0x62c5dec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdl_s8, addr 0x62c5d7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdl_u16, addr 0x62c5e5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdl_u32, addr 0x62c5e94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdl_u8, addr 0x62c5e24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vabdq_f32, addr 0x62c5d44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_f64, addr 0x62d26dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_s16, addr 0x62c5b14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_s32, addr 0x62c5b84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_s8, addr 0x62c5aa4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_u16, addr 0x62c5c64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_u32, addr 0x62c5cd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabdq_u8, addr 0x62c5bf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vabds_f32, addr 0x62d2714, size 0x38, virtual false, abstract: false, final false
  static inline float_t vabds_f32(float_t a0, float_t a1);

  /// @brief Method vabs_f32, addr 0x62cb594, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabs_f64, addr 0x62d7f18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabs_s16, addr 0x62cb4b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabs_s32, addr 0x62cb524, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabs_s64, addr 0x62d7e70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabs_s8, addr 0x62cb444, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vabsd_s64, addr 0x62d7ea8, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vabsd_s64(int64_t a0);

  /// @brief Method vabsq_f32, addr 0x62cb5cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vabsq_f64, addr 0x62d7f50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vabsq_s16, addr 0x62cb4ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vabsq_s32, addr 0x62cb55c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vabsq_s64, addr 0x62d7ee0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vabsq_s8, addr 0x62cb47c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vadd_f32, addr 0x62c214c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_f64, addr 0x62ce174, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_s16, addr 0x62c1fbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_s32, addr 0x62c202c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_s64, addr 0x62c209c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_s8, addr 0x62c1f4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_u16, addr 0x62c211c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_u32, addr 0x62c212c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_u64, addr 0x62c213c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vadd_u8, addr 0x62c210c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddd_s64, addr 0x62ce1e4, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddd_s64(int64_t a0, int64_t a1);

  /// @brief Method vaddd_u64, addr 0x62ce21c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vaddhn_high_s16, addr 0x62cebf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_high_s32, addr 0x62cec2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_high_s64, addr 0x62cec64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_high_u16, addr 0x62cec9c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_high_u32, addr 0x62ceca4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_high_u64, addr 0x62cecac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vaddhn_s16, addr 0x62c2d1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddhn_s32, addr 0x62c2d54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddhn_s64, addr 0x62c2d8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddhn_u16, addr 0x62c2dc4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddhn_u32, addr 0x62c2dcc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddhn_u64, addr 0x62c2dd4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_s16, addr 0x62ce28c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_s32, addr 0x62ce2c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_s8, addr 0x62ce254, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_u16, addr 0x62ce334, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_u32, addr 0x62ce36c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_high_u8, addr 0x62ce2fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddl_s16, addr 0x62c21f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddl_s32, addr 0x62c222c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddl_s8, addr 0x62c21bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddl_u16, addr 0x62c229c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddl_u32, addr 0x62c22d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddl_u8, addr 0x62c2264, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddlv_s16, addr 0x62da59c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddlv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlv_s32, addr 0x62da60c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddlv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlv_s8, addr 0x62da52c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddlv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlv_u16, addr 0x62da6ec, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddlv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlv_u32, addr 0x62da75c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddlv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlv_u8, addr 0x62da67c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddlv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddlvq_s16, addr 0x62da5d4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddlvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddlvq_s32, addr 0x62da644, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddlvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddlvq_s8, addr 0x62da564, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddlvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddlvq_u16, addr 0x62da724, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddlvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddlvq_u32, addr 0x62da794, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddlvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddlvq_u8, addr 0x62da6b4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddlvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddq_f32, addr 0x62c2184, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_f64, addr 0x62ce1ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_s16, addr 0x62c1ff4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_s32, addr 0x62c2064, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_s64, addr 0x62c20d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_s8, addr 0x62c1f84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_u16, addr 0x62c2124, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_u32, addr 0x62c2134, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_u64, addr 0x62c2144, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddq_u8, addr 0x62c2114, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddv_f32, addr 0x62da484, size 0x38, virtual false, abstract: false, final false
  static inline float_t vaddv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_s16, addr 0x62da1e4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_s32, addr 0x62da254, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_s8, addr 0x62da174, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vaddv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_u16, addr 0x62da36c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_u32, addr 0x62da3dc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddv_u8, addr 0x62da2fc, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vaddv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vaddvq_f32, addr 0x62da4bc, size 0x38, virtual false, abstract: false, final false
  static inline float_t vaddvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_f64, addr 0x62da4f4, size 0x38, virtual false, abstract: false, final false
  static inline double_t vaddvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_s16, addr 0x62da21c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_s32, addr 0x62da28c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_s64, addr 0x62da2c4, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddvq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_s8, addr 0x62da1ac, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vaddvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_u16, addr 0x62da3a4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_u32, addr 0x62da414, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_u64, addr 0x62da44c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddvq_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddvq_u8, addr 0x62da334, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vaddvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaddw_high_s16, addr 0x62ce3dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_high_s32, addr 0x62ce414, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_high_s8, addr 0x62ce3a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_high_u16, addr 0x62ce484, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_high_u32, addr 0x62ce4bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_high_u8, addr 0x62ce44c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaddw_s16, addr 0x62c2344, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddw_s32, addr 0x62c237c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddw_s8, addr 0x62c230c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddw_u16, addr 0x62c23ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddw_u32, addr 0x62c2424, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaddw_u8, addr 0x62c23b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vaesdq_u8, addr 0x62dc268, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaesdq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaeseq_u8, addr 0x62dc230, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaeseq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vaesimcq_u8, addr 0x62dc2d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaesimcq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vaesmcq_u8, addr 0x62dc2a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaesmcq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vand_s16, addr 0x62cc184, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_s32, addr 0x62cc194, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_s64, addr 0x62cc1a4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_s8, addr 0x62cc114, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_u16, addr 0x62cc1c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_u32, addr 0x62cc1d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_u64, addr 0x62cc1e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vand_u8, addr 0x62cc1b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vandq_s16, addr 0x62cc18c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_s32, addr 0x62cc19c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_s64, addr 0x62cc1ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_s8, addr 0x62cc14c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_u16, addr 0x62cc1cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_u32, addr 0x62cc1dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_u64, addr 0x62cc1ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vandq_u8, addr 0x62cc1bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbic_s16, addr 0x62cc424, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_s32, addr 0x62cc434, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_s64, addr 0x62cc444, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_s8, addr 0x62cc3b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_u16, addr 0x62cc464, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_u32, addr 0x62cc474, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_u64, addr 0x62cc484, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbic_u8, addr 0x62cc454, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vbicq_s16, addr 0x62cc42c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_s32, addr 0x62cc43c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_s64, addr 0x62cc44c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_s8, addr 0x62cc3ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_u16, addr 0x62cc46c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_u32, addr 0x62cc47c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_u64, addr 0x62cc48c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbicq_u8, addr 0x62cc45c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vbsl_f32, addr 0x62cc654, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_f64, addr 0x62d87a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_s16, addr 0x62cc5e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_s32, addr 0x62cc5f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_s64, addr 0x62cc604, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_s8, addr 0x62cc574, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_u16, addr 0x62cc624, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_u32, addr 0x62cc634, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_u64, addr 0x62cc644, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbsl_u8, addr 0x62cc614, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vbslq_f32, addr 0x62cc65c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_f64, addr 0x62d87a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_s16, addr 0x62cc5ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_s32, addr 0x62cc5fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_s64, addr 0x62cc60c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_s8, addr 0x62cc5ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_u16, addr 0x62cc62c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_u32, addr 0x62cc63c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_u64, addr 0x62cc64c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vbslq_u8, addr 0x62cc61c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vcage_f32, addr 0x62c572c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcage_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcage_f64, addr 0x62d2234, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcage_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcaged_f64, addr 0x62d22dc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcaged_f64(double_t a0, double_t a1);

  /// @brief Method vcageq_f32, addr 0x62c5764, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcageq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcageq_f64, addr 0x62d226c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcageq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcages_f32, addr 0x62d22a4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcages_f32(float_t a0, float_t a1);

  /// @brief Method vcagt_f32, addr 0x62c580c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcagt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcagt_f64, addr 0x62d23f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcagt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcagtd_f64, addr 0x62d249c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcagtd_f64(double_t a0, double_t a1);

  /// @brief Method vcagtq_f32, addr 0x62c5844, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcagtq_f64, addr 0x62d242c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcagts_f32, addr 0x62d2464, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcagts_f32(float_t a0, float_t a1);

  /// @brief Method vcale_f32, addr 0x62c579c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcale_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcale_f64, addr 0x62d2314, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcale_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcaled_f64, addr 0x62d23bc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcaled_f64(double_t a0, double_t a1);

  /// @brief Method vcaleq_f32, addr 0x62c57d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcaleq_f64, addr 0x62d234c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcales_f32, addr 0x62d2384, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcales_f32(float_t a0, float_t a1);

  /// @brief Method vcalt_f32, addr 0x62c587c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcalt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcalt_f64, addr 0x62d24d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcalt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcaltd_f64, addr 0x62d257c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcaltd_f64(double_t a0, double_t a1);

  /// @brief Method vcaltq_f32, addr 0x62c58b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcaltq_f64, addr 0x62d250c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcalts_f32, addr 0x62d2544, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcalts_f32(float_t a0, float_t a1);

  /// @brief Method vceq_f32, addr 0x62c4a7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_f64, addr 0x62d0744, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_s16, addr 0x62c496c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_s32, addr 0x62c49dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_s64, addr 0x62d06c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_s8, addr 0x62c48fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_u16, addr 0x62c4a5c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_u32, addr 0x62c4a6c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_u64, addr 0x62d0734, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceq_u8, addr 0x62c4a4c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vceqd_f64, addr 0x62d085c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqd_f64(double_t a0, double_t a1);

  /// @brief Method vceqd_s64, addr 0x62d07b4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqd_s64(int64_t a0, int64_t a1);

  /// @brief Method vceqd_u64, addr 0x62d07ec, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vceqq_f32, addr 0x62c4ab4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_f64, addr 0x62d077c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_s16, addr 0x62c49a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_s32, addr 0x62c4a14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_s64, addr 0x62d06fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_s8, addr 0x62c4934, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_u16, addr 0x62c4a64, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_u32, addr 0x62c4a74, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_u64, addr 0x62d073c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqq_u8, addr 0x62c4a54, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vceqs_f32, addr 0x62d0824, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vceqs_f32(float_t a0, float_t a1);

  /// @brief Method vceqz_f32, addr 0x62d0a14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_f64, addr 0x62d0b04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_s16, addr 0x62d0904, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_s32, addr 0x62d0974, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_s64, addr 0x62d0a84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_s8, addr 0x62d0894, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_u16, addr 0x62d09f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_u32, addr 0x62d0a04, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_u64, addr 0x62d0af4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqz_u8, addr 0x62d09e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vceqzd_f64, addr 0x62d0c1c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqzd_f64(double_t a0);

  /// @brief Method vceqzd_s64, addr 0x62d0b74, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqzd_s64(int64_t a0);

  /// @brief Method vceqzd_u64, addr 0x62d0bac, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqzd_u64(uint64_t a0);

  /// @brief Method vceqzq_f32, addr 0x62d0a4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_f64, addr 0x62d0b3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_s16, addr 0x62d093c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_s32, addr 0x62d09ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_s64, addr 0x62d0abc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_s8, addr 0x62d08cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_u16, addr 0x62d09fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_u32, addr 0x62d0a0c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_u64, addr 0x62d0afc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzq_u8, addr 0x62d09ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vceqzs_f32, addr 0x62d0be4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vceqzs_f32(float_t a0);

  /// @brief Method vcge_f32, addr 0x62c4d8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_f64, addr 0x62d0d34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_s16, addr 0x62c4b5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_s32, addr 0x62c4bcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_s64, addr 0x62d0c54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_s8, addr 0x62c4aec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_u16, addr 0x62c4cac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_u32, addr 0x62c4d1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_u64, addr 0x62d0cc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcge_u8, addr 0x62c4c3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcged_f64, addr 0x62d0e4c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcged_f64(double_t a0, double_t a1);

  /// @brief Method vcged_s64, addr 0x62d0da4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcged_s64(int64_t a0, int64_t a1);

  /// @brief Method vcged_u64, addr 0x62d0ddc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcged_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vcgeq_f32, addr 0x62c4dc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_f64, addr 0x62d0d6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_s16, addr 0x62c4b94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_s32, addr 0x62c4c04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_s64, addr 0x62d0c8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_s8, addr 0x62c4b24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_u16, addr 0x62c4ce4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_u32, addr 0x62c4d54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_u64, addr 0x62d0cfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgeq_u8, addr 0x62c4c74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcges_f32, addr 0x62d0e14, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcges_f32(float_t a0, float_t a1);

  /// @brief Method vcgez_f32, addr 0x62d1044, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgez_f64, addr 0x62d10b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgez_s16, addr 0x62d0ef4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgez_s32, addr 0x62d0f64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgez_s64, addr 0x62d0fd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgez_s8, addr 0x62d0e84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgezd_f64, addr 0x62d1194, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgezd_f64(double_t a0);

  /// @brief Method vcgezd_s64, addr 0x62d1124, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgezd_s64(int64_t a0);

  /// @brief Method vcgezq_f32, addr 0x62d107c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezq_f64, addr 0x62d10ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezq_s16, addr 0x62d0f2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezq_s32, addr 0x62d0f9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezq_s64, addr 0x62d100c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezq_s8, addr 0x62d0ebc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgezs_f32, addr 0x62d115c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcgezs_f32(float_t a0);

  /// @brief Method vcgt_f32, addr 0x62c53ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_f64, addr 0x62d1824, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_s16, addr 0x62c517c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_s32, addr 0x62c51ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_s64, addr 0x62d1744, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_s8, addr 0x62c510c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_u16, addr 0x62c52cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_u32, addr 0x62c533c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_u64, addr 0x62d17b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgt_u8, addr 0x62c525c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcgtd_f64, addr 0x62d193c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtd_f64(double_t a0, double_t a1);

  /// @brief Method vcgtd_s64, addr 0x62d1894, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtd_s64(int64_t a0, int64_t a1);

  /// @brief Method vcgtd_u64, addr 0x62d18cc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vcgtq_f32, addr 0x62c53e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_f64, addr 0x62d185c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_s16, addr 0x62c51b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_s32, addr 0x62c5224, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_s64, addr 0x62d177c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_s8, addr 0x62c5144, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_u16, addr 0x62c5304, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_u32, addr 0x62c5374, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_u64, addr 0x62d17ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgtq_u8, addr 0x62c5294, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcgts_f32, addr 0x62d1904, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcgts_f32(float_t a0, float_t a1);

  /// @brief Method vcgtz_f32, addr 0x62d1b34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtz_f64, addr 0x62d1ba4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtz_s16, addr 0x62d19e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtz_s32, addr 0x62d1a54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtz_s64, addr 0x62d1ac4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtz_s8, addr 0x62d1974, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcgtzd_f64, addr 0x62d1c84, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtzd_f64(double_t a0);

  /// @brief Method vcgtzd_s64, addr 0x62d1c14, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtzd_s64(int64_t a0);

  /// @brief Method vcgtzq_f32, addr 0x62d1b6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzq_f64, addr 0x62d1bdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzq_s16, addr 0x62d1a1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzq_s32, addr 0x62d1a8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzq_s64, addr 0x62d1afc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzq_s8, addr 0x62d19ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcgtzs_f32, addr 0x62d1c4c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcgtzs_f32(float_t a0);

  /// @brief Method vcle_f32, addr 0x62c509c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_f64, addr 0x62d12ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_s16, addr 0x62c4e6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_s32, addr 0x62c4edc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_s64, addr 0x62d11cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_s8, addr 0x62c4dfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_u16, addr 0x62c4fbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_u32, addr 0x62c502c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_u64, addr 0x62d123c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcle_u8, addr 0x62c4f4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcled_f64, addr 0x62d13c4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcled_f64(double_t a0, double_t a1);

  /// @brief Method vcled_s64, addr 0x62d131c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcled_s64(int64_t a0, int64_t a1);

  /// @brief Method vcled_u64, addr 0x62d1354, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcled_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vcleq_f32, addr 0x62c50d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_f64, addr 0x62d12e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_s16, addr 0x62c4ea4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_s32, addr 0x62c4f14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_s64, addr 0x62d1204, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_s8, addr 0x62c4e34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_u16, addr 0x62c4ff4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_u32, addr 0x62c5064, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_u64, addr 0x62d1274, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcleq_u8, addr 0x62c4f84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcles_f32, addr 0x62d138c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcles_f32(float_t a0, float_t a1);

  /// @brief Method vclez_f32, addr 0x62d15bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclez_f64, addr 0x62d162c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclez_s16, addr 0x62d146c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclez_s32, addr 0x62d14dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclez_s64, addr 0x62d154c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclez_s8, addr 0x62d13fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclezd_f64, addr 0x62d170c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vclezd_f64(double_t a0);

  /// @brief Method vclezd_s64, addr 0x62d169c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vclezd_s64(int64_t a0);

  /// @brief Method vclezq_f32, addr 0x62d15f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezq_f64, addr 0x62d1664, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezq_s16, addr 0x62d14a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezq_s32, addr 0x62d1514, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezq_s64, addr 0x62d1584, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezq_s8, addr 0x62d1434, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclezs_f32, addr 0x62d16d4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vclezs_f32(float_t a0);

  /// @brief Method vcls_s16, addr 0x62cbad4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcls_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcls_s32, addr 0x62cbb44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcls_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcls_s8, addr 0x62cba64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcls_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclsq_s16, addr 0x62cbb0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclsq_s32, addr 0x62cbb7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclsq_s8, addr 0x62cba9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclt_f32, addr 0x62c56bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_f64, addr 0x62d1d9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_s16, addr 0x62c548c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_s32, addr 0x62c54fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_s64, addr 0x62d1cbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_s8, addr 0x62c541c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_u16, addr 0x62c55dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_u32, addr 0x62c564c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_u64, addr 0x62d1d2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vclt_u8, addr 0x62c556c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcltd_f64, addr 0x62d1eb4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltd_f64(double_t a0, double_t a1);

  /// @brief Method vcltd_s64, addr 0x62d1e0c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltd_s64(int64_t a0, int64_t a1);

  /// @brief Method vcltd_u64, addr 0x62d1e44, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vcltq_f32, addr 0x62c56f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_f64, addr 0x62d1dd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_s16, addr 0x62c54c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_s32, addr 0x62c5534, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_s64, addr 0x62d1cf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_s8, addr 0x62c5454, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_u16, addr 0x62c5614, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_u32, addr 0x62c5684, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_u64, addr 0x62d1d64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcltq_u8, addr 0x62c55a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vclts_f32, addr 0x62d1e7c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vclts_f32(float_t a0, float_t a1);

  /// @brief Method vcltz_f32, addr 0x62d20ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltz_f64, addr 0x62d211c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltz_s16, addr 0x62d1f5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltz_s32, addr 0x62d1fcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltz_s64, addr 0x62d203c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltz_s8, addr 0x62d1eec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcltzd_f64, addr 0x62d21fc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltzd_f64(double_t a0);

  /// @brief Method vcltzd_s64, addr 0x62d218c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltzd_s64(int64_t a0);

  /// @brief Method vcltzq_f32, addr 0x62d20e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzq_f64, addr 0x62d2154, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzq_s16, addr 0x62d1f94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzq_s32, addr 0x62d2004, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzq_s64, addr 0x62d2074, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzq_s8, addr 0x62d1f24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcltzs_f32, addr 0x62d21c4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcltzs_f32(float_t a0);

  /// @brief Method vclz_s16, addr 0x62cbc24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclz_s32, addr 0x62cbc94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclz_s8, addr 0x62cbbb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclz_u16, addr 0x62cbd14, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclz_u32, addr 0x62cbd24, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclz_u8, addr 0x62cbd04, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vclzq_s16, addr 0x62cbc5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclzq_s32, addr 0x62cbccc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclzq_s8, addr 0x62cbbec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclzq_u16, addr 0x62cbd1c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclzq_u32, addr 0x62cbd2c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vclzq_u8, addr 0x62cbd0c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcnt_s8, addr 0x62cbd34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcnt_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcnt_u8, addr 0x62cbda4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcnt_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcntq_s8, addr 0x62cbd6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcntq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcntq_u8, addr 0x62cbdac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcntq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcombine_f16, addr 0x62dcf9c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_f16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_f32, addr 0x62dcfa0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_f64, addr 0x62dcfa4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_s16, addr 0x62dcf80, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_s32, addr 0x62dcf84, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_s64, addr 0x62dcf88, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_s8, addr 0x62dcf7c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_u16, addr 0x62dcf90, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_u32, addr 0x62dcf94, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_u64, addr 0x62dcf98, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcombine_u8, addr 0x62dcf8c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vcopy_lane_f32, addr 0x62d8ad0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_f64, addr 0x62d8b40, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_s16, addr 0x62d8820, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_s32, addr 0x62d8890, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_s64, addr 0x62d8900, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_s8, addr 0x62d87b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_u16, addr 0x62d89b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_u32, addr 0x62d8a20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_u64, addr 0x62d8a90, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_lane_u8, addr 0x62d8940, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopy_laneq_f32, addr 0x62d8f00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_f64, addr 0x62d8f70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_s16, addr 0x62d8bf0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_s32, addr 0x62d8c60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_s64, addr 0x62d8cd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_s8, addr 0x62d8b80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_u16, addr 0x62d8db0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_u32, addr 0x62d8e20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_u64, addr 0x62d8e90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopy_laneq_u8, addr 0x62d8d40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_lane_f32, addr 0x62d8b08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_f64, addr 0x62d8b48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_s16, addr 0x62d8858, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_s32, addr 0x62d88c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_s64, addr 0x62d8908, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_s8, addr 0x62d87e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_u16, addr 0x62d89e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_u32, addr 0x62d8a58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_u64, addr 0x62d8a98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_lane_u8, addr 0x62d8978, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_f32, addr 0x62d8f38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_f64, addr 0x62d8fa8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_s16, addr 0x62d8c28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_s32, addr 0x62d8c98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_s64, addr 0x62d8d08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_s8, addr 0x62d8bb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_u16, addr 0x62d8de8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_u32, addr 0x62d8e58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_u64, addr 0x62d8ec8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcopyq_laneq_u8, addr 0x62d8d78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vcreate_f16, addr 0x62dcd50, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f16(uint64_t a0);

  /// @brief Method vcreate_f32, addr 0x62dcd54, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f32(uint64_t a0);

  /// @brief Method vcreate_f64, addr 0x62dcd58, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f64(uint64_t a0);

  /// @brief Method vcreate_s16, addr 0x62dcd34, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s16(uint64_t a0);

  /// @brief Method vcreate_s32, addr 0x62dcd38, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s32(uint64_t a0);

  /// @brief Method vcreate_s64, addr 0x62dcd3c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s64(uint64_t a0);

  /// @brief Method vcreate_s8, addr 0x62dcd30, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s8(uint64_t a0);

  /// @brief Method vcreate_u16, addr 0x62dcd44, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u16(uint64_t a0);

  /// @brief Method vcreate_u32, addr 0x62dcd48, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u32(uint64_t a0);

  /// @brief Method vcreate_u64, addr 0x62dcd4c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u64(uint64_t a0);

  /// @brief Method vcreate_u8, addr 0x62dcd40, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u8(uint64_t a0);

  /// @brief Method vcvt_f32_f64, addr 0x62d530c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvt_f32_s32, addr 0x62c953c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_f32_u32, addr 0x62c95ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_f64_f32, addr 0x62d537c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvt_f64_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_f64_s64, addr 0x62d4ffc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_f64_u64, addr 0x62d506c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_u64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_high_f32_f64, addr 0x62d5344, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f32_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcvt_high_f64_f32, addr 0x62d53b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f64_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvt_n_f32_s32, addr 0x62c961c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_f32_u32, addr 0x62c968c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_f64_s64, addr 0x62d51bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_f64_u64, addr 0x62d522c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_s32_f32, addr 0x62c945c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s32_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_s64_f64, addr 0x62d4e3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s64_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_u32_f32, addr 0x62c94cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u32_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_n_u64_f64, addr 0x62d4eac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u64_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vcvt_s32_f32, addr 0x62c937c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_s64_f64, addr 0x62d473c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_u32_f32, addr 0x62c93ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvt_u64_f64, addr 0x62d47ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvta_s32_f32, addr 0x62d442c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvta_s64_f64, addr 0x62d4abc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvta_u32_f32, addr 0x62d449c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvta_u64_f64, addr 0x62d4b2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtad_s64_f64, addr 0x62d4d5c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtad_s64_f64(double_t a0);

  /// @brief Method vcvtad_u64_f64, addr 0x62d4d94, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtad_u64_f64(double_t a0);

  /// @brief Method vcvtaq_s32_f32, addr 0x62d4464, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtaq_s64_f64, addr 0x62d4af4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtaq_u32_f32, addr 0x62d44d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtaq_u64_f64, addr 0x62d4b64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtas_s32_f32, addr 0x62d46cc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtas_s32_f32(float_t a0);

  /// @brief Method vcvtas_u32_f32, addr 0x62d4704, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtas_u32_f32(float_t a0);

  /// @brief Method vcvtd_f64_s64, addr 0x62d50dc, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_f64_s64(int64_t a0);

  /// @brief Method vcvtd_f64_u64, addr 0x62d5114, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_f64_u64(uint64_t a0);

  /// @brief Method vcvtd_n_f64_s64, addr 0x62d529c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_n_f64_s64(int64_t a0, int32_t a1);

  /// @brief Method vcvtd_n_f64_u64, addr 0x62d52d4, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_n_f64_u64(uint64_t a0, int32_t a1);

  /// @brief Method vcvtd_n_s64_f64, addr 0x62d4f1c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtd_n_s64_f64(double_t a0, int32_t a1);

  /// @brief Method vcvtd_n_u64_f64, addr 0x62d4f54, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtd_n_u64_f64(double_t a0, int32_t a1);

  /// @brief Method vcvtd_s64_f64, addr 0x62d4b9c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtd_s64_f64(double_t a0);

  /// @brief Method vcvtd_u64_f64, addr 0x62d4bd4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtd_u64_f64(double_t a0);

  /// @brief Method vcvtm_s32_f32, addr 0x62d426c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtm_s64_f64, addr 0x62d48fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtm_u32_f32, addr 0x62d42dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtm_u64_f64, addr 0x62d496c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtmd_s64_f64, addr 0x62d4c7c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtmd_s64_f64(double_t a0);

  /// @brief Method vcvtmd_u64_f64, addr 0x62d4cb4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtmd_u64_f64(double_t a0);

  /// @brief Method vcvtmq_s32_f32, addr 0x62d42a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtmq_s64_f64, addr 0x62d4934, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtmq_u32_f32, addr 0x62d4314, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtmq_u64_f64, addr 0x62d49a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtms_s32_f32, addr 0x62d45ec, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtms_s32_f32(float_t a0);

  /// @brief Method vcvtms_u32_f32, addr 0x62d4624, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtms_u32_f32(float_t a0);

  /// @brief Method vcvtn_s32_f32, addr 0x62d418c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtn_s64_f64, addr 0x62d481c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtn_u32_f32, addr 0x62d41fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtn_u64_f64, addr 0x62d488c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtnd_s64_f64, addr 0x62d4c0c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtnd_s64_f64(double_t a0);

  /// @brief Method vcvtnd_u64_f64, addr 0x62d4c44, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtnd_u64_f64(double_t a0);

  /// @brief Method vcvtnq_s32_f32, addr 0x62d41c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtnq_s64_f64, addr 0x62d4854, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtnq_u32_f32, addr 0x62d4234, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtnq_u64_f64, addr 0x62d48c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtns_s32_f32, addr 0x62d457c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtns_s32_f32(float_t a0);

  /// @brief Method vcvtns_u32_f32, addr 0x62d45b4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtns_u32_f32(float_t a0);

  /// @brief Method vcvtp_s32_f32, addr 0x62d434c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtp_s64_f64, addr 0x62d49dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtp_u32_f32, addr 0x62d43bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtp_u64_f64, addr 0x62d4a4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vcvtpd_s64_f64, addr 0x62d4cec, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtpd_s64_f64(double_t a0);

  /// @brief Method vcvtpd_u64_f64, addr 0x62d4d24, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtpd_u64_f64(double_t a0);

  /// @brief Method vcvtpq_s32_f32, addr 0x62d4384, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtpq_s64_f64, addr 0x62d4a14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtpq_u32_f32, addr 0x62d43f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtpq_u64_f64, addr 0x62d4a84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtps_s32_f32, addr 0x62d465c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtps_s32_f32(float_t a0);

  /// @brief Method vcvtps_u32_f32, addr 0x62d4694, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtps_u32_f32(float_t a0);

  /// @brief Method vcvtq_f32_s32, addr 0x62c9574, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_f32_u32, addr 0x62c95e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_f64_s64, addr 0x62d5034, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_f64_u64, addr 0x62d50a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_n_f32_s32, addr 0x62c9654, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_f32_u32, addr 0x62c96c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_f64_s64, addr 0x62d51f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_f64_u64, addr 0x62d5264, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_s32_f32, addr 0x62c9494, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s32_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_s64_f64, addr 0x62d4e74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s64_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_u32_f32, addr 0x62c9504, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u32_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_n_u64_f64, addr 0x62d4ee4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u64_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vcvtq_s32_f32, addr 0x62c93b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_s64_f64, addr 0x62d4774, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_u32_f32, addr 0x62c9424, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtq_u64_f64, addr 0x62d47e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvts_f32_s32, addr 0x62d4f8c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_f32_s32(int32_t a0);

  /// @brief Method vcvts_f32_u32, addr 0x62d4fc4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_f32_u32(uint32_t a0);

  /// @brief Method vcvts_n_f32_s32, addr 0x62d514c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_n_f32_s32(int32_t a0, int32_t a1);

  /// @brief Method vcvts_n_f32_u32, addr 0x62d5184, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_n_f32_u32(uint32_t a0, int32_t a1);

  /// @brief Method vcvts_n_s32_f32, addr 0x62d4dcc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvts_n_s32_f32(float_t a0, int32_t a1);

  /// @brief Method vcvts_n_u32_f32, addr 0x62d4e04, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvts_n_u32_f32(float_t a0, int32_t a1);

  /// @brief Method vcvts_s32_f32, addr 0x62d450c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvts_s32_f32(float_t a0);

  /// @brief Method vcvts_u32_f32, addr 0x62d4544, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvts_u32_f32(float_t a0);

  /// @brief Method vcvtx_f32_f64, addr 0x62d53ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtx_f32_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vcvtx_high_f32_f64, addr 0x62d545c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtx_high_f32_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vcvtxd_f32_f64, addr 0x62d5424, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvtxd_f32_f64(double_t a0);

  /// @brief Method vdiv_f32, addr 0x62cf174, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdiv_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vdiv_f64, addr 0x62cf1e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdiv_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vdivq_f32, addr 0x62cf1ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdivq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vdivq_f64, addr 0x62cf21c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdivq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vdot_lane_s32, addr 0x62dc430, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vdot_lane_u32, addr 0x62dc3f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vdot_laneq_s32, addr 0x62dc510, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vdot_laneq_u32, addr 0x62dc4d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vdot_s32, addr 0x62dc350, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vdot_u32, addr 0x62dc318, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vdotq_lane_s32, addr 0x62dc580, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vdotq_lane_u32, addr 0x62dc548, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vdotq_laneq_s32, addr 0x62dc4a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vdotq_laneq_u32, addr 0x62dc468, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vdotq_s32, addr 0x62dc3c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vdotq_u32, addr 0x62dc388, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vdup_lane_f32, addr 0x62cc91c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_f64, addr 0x62d9060, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_s16, addr 0x62cc6d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_s32, addr 0x62cc744, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_s64, addr 0x62cc7b4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_s8, addr 0x62cc664, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_u16, addr 0x62cc830, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_u32, addr 0x62cc8a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_u64, addr 0x62cc910, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_lane_u8, addr 0x62cc7c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdup_laneq_f32, addr 0x62d93ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_f64, addr 0x62d945c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_s16, addr 0x62d90dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_s32, addr 0x62d914c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_s64, addr 0x62d91bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_s8, addr 0x62d906c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_u16, addr 0x62d929c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_u32, addr 0x62d930c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_u64, addr 0x62d937c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_laneq_u8, addr 0x62d922c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdup_n_f32, addr 0x62dce3c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f32(float_t a0);

  /// @brief Method vdup_n_f64, addr 0x62dce58, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f64(double_t a0);

  /// @brief Method vdup_n_s16, addr 0x62dcd80, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s16(int16_t a0);

  /// @brief Method vdup_n_s32, addr 0x62dcda4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s32(int32_t a0);

  /// @brief Method vdup_n_s64, addr 0x62dcdc0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s64(int64_t a0);

  /// @brief Method vdup_n_s8, addr 0x62dcd5c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s8(int8_t a0);

  /// @brief Method vdup_n_u16, addr 0x62dcdf0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u16(uint16_t a0);

  /// @brief Method vdup_n_u32, addr 0x62dce14, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u32(uint32_t a0);

  /// @brief Method vdup_n_u64, addr 0x62dce30, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u64(uint64_t a0);

  /// @brief Method vdup_n_u8, addr 0x62dcdcc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u8(uint8_t a0);

  /// @brief Method vdupb_lane_s8, addr 0x62d94cc, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vdupb_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupb_lane_u8, addr 0x62d9578, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vdupb_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupb_laneq_s8, addr 0x62d9664, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vdupb_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupb_laneq_u8, addr 0x62d9744, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vdupb_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupd_lane_f64, addr 0x62d965c, size 0x8, virtual false, abstract: false, final false
  static inline double_t vdupd_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupd_lane_s64, addr 0x62d9574, size 0x4, virtual false, abstract: false, final false
  static inline int64_t vdupd_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupd_lane_u64, addr 0x62d9620, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t vdupd_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupd_laneq_f64, addr 0x62d985c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vdupd_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupd_laneq_s64, addr 0x62d970c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vdupd_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupd_laneq_u64, addr 0x62d97ec, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vdupd_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vduph_lane_s16, addr 0x62d9504, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vduph_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vduph_lane_u16, addr 0x62d95b0, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vduph_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vduph_laneq_s16, addr 0x62d969c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vduph_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vduph_laneq_u16, addr 0x62d977c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vduph_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_lane_f32, addr 0x62cc954, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_f64, addr 0x62d9064, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_s16, addr 0x62cc70c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_s32, addr 0x62cc77c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_s64, addr 0x62cc7b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_s8, addr 0x62cc69c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_u16, addr 0x62cc868, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_u32, addr 0x62cc8d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_u64, addr 0x62cc914, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_lane_u8, addr 0x62cc7f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdupq_laneq_f32, addr 0x62d9424, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_f64, addr 0x62d9494, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_s16, addr 0x62d9114, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_s32, addr 0x62d9184, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_s64, addr 0x62d91f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_s8, addr 0x62d90a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_u16, addr 0x62d92d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_u32, addr 0x62d9344, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_u64, addr 0x62d93b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_laneq_u8, addr 0x62d9264, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdupq_n_f32, addr 0x62dce48, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f32(float_t a0);

  /// @brief Method vdupq_n_f64, addr 0x62dce60, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f64(double_t a0);

  /// @brief Method vdupq_n_s16, addr 0x62dcd90, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s16(int16_t a0);

  /// @brief Method vdupq_n_s32, addr 0x62dcdb0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s32(int32_t a0);

  /// @brief Method vdupq_n_s64, addr 0x62dcdc4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s64(int64_t a0);

  /// @brief Method vdupq_n_s8, addr 0x62dcd6c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s8(int8_t a0);

  /// @brief Method vdupq_n_u16, addr 0x62dce00, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u16(uint16_t a0);

  /// @brief Method vdupq_n_u32, addr 0x62dce20, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u32(uint32_t a0);

  /// @brief Method vdupq_n_u64, addr 0x62dce34, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u64(uint64_t a0);

  /// @brief Method vdupq_n_u8, addr 0x62dcddc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u8(uint8_t a0);

  /// @brief Method vdups_lane_f32, addr 0x62d9624, size 0x38, virtual false, abstract: false, final false
  static inline float_t vdups_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdups_lane_s32, addr 0x62d953c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vdups_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdups_lane_u32, addr 0x62d95e8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vdups_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vdups_laneq_f32, addr 0x62d9824, size 0x38, virtual false, abstract: false, final false
  static inline float_t vdups_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdups_laneq_s32, addr 0x62d96d4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vdups_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vdups_laneq_u32, addr 0x62d97b4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vdups_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method veor_s16, addr 0x62cc344, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_s32, addr 0x62cc354, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_s64, addr 0x62cc364, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_s8, addr 0x62cc2d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_u16, addr 0x62cc384, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_u32, addr 0x62cc394, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_u64, addr 0x62cc3a4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veor_u8, addr 0x62cc374, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method veorq_s16, addr 0x62cc34c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_s32, addr 0x62cc35c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_s64, addr 0x62cc36c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_s8, addr 0x62cc30c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_u16, addr 0x62cc38c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_u32, addr 0x62cc39c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_u64, addr 0x62cc3ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method veorq_u8, addr 0x62cc37c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vext_f32, addr 0x62cd5ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_f64, addr 0x62dafac, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_s16, addr 0x62cd344, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_s32, addr 0x62cd3b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_s64, addr 0x62cd424, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_s8, addr 0x62cd2d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_u16, addr 0x62cd4d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_u32, addr 0x62cd540, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_u64, addr 0x62cd5b0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vext_u8, addr 0x62cd460, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vextq_f32, addr 0x62cd624, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_f64, addr 0x62dafb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_s16, addr 0x62cd37c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_s32, addr 0x62cd3ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_s64, addr 0x62cd428, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_s8, addr 0x62cd30c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_u16, addr 0x62cd508, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_u32, addr 0x62cd578, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_u64, addr 0x62cd5b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vextq_u8, addr 0x62cd498, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vfma_f32, addr 0x62c370c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vfma_f64, addr 0x62cf5d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vfma_lane_f32, addr 0x62cf644, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfma_lane_f64, addr 0x62cf6b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfma_laneq_f32, addr 0x62cf734, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfma_laneq_f64, addr 0x62cf7a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfma_n_f32, addr 0x62ce0fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// @brief Method vfma_n_f64, addr 0x62dbd58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, double_t a2);

  /// @brief Method vfmad_lane_f64, addr 0x62cf72c, size 0x8, virtual false, abstract: false, final false
  static inline double_t vfmad_lane_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmad_laneq_f64, addr 0x62cf84c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vfmad_laneq_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfmaq_f32, addr 0x62c3744, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vfmaq_f64, addr 0x62cf60c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vfmaq_lane_f32, addr 0x62cf67c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmaq_lane_f64, addr 0x62cf6bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmaq_laneq_f32, addr 0x62cf76c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfmaq_laneq_f64, addr 0x62cf7dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfmaq_n_f32, addr 0x62ce134, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// @brief Method vfmaq_n_f64, addr 0x62dbd90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, double_t a2);

  /// @brief Method vfmas_lane_f32, addr 0x62cf6f4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmas_lane_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmas_laneq_f32, addr 0x62cf814, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmas_laneq_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfms_f32, addr 0x62c377c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vfms_f64, addr 0x62cf884, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vfms_lane_f32, addr 0x62cf8f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfms_lane_f64, addr 0x62cf964, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfms_laneq_f32, addr 0x62cf9e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfms_laneq_f64, addr 0x62cfa54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfms_n_f32, addr 0x62dbce8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// @brief Method vfms_n_f64, addr 0x62dbdc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, double_t a2);

  /// @brief Method vfmsd_lane_f64, addr 0x62cf9dc, size 0x8, virtual false, abstract: false, final false
  static inline double_t vfmsd_lane_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmsd_laneq_f64, addr 0x62cfafc, size 0x38, virtual false, abstract: false, final false
  static inline double_t vfmsd_laneq_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfmsq_f32, addr 0x62c37b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vfmsq_f64, addr 0x62cf8bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vfmsq_lane_f32, addr 0x62cf92c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmsq_lane_f64, addr 0x62cf96c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmsq_laneq_f32, addr 0x62cfa1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfmsq_laneq_f64, addr 0x62cfa8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vfmsq_n_f32, addr 0x62dbd20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// @brief Method vfmsq_n_f64, addr 0x62dbe00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, double_t a2);

  /// @brief Method vfmss_lane_f32, addr 0x62cf9a4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmss_lane_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vfmss_laneq_f32, addr 0x62cfac4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmss_laneq_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vget_high_f32, addr 0x62dcfe8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_f64, addr 0x62dcff0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_s16, addr 0x62dcfb0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_s32, addr 0x62dcfb8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_s64, addr 0x62dcfc0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_s8, addr 0x62dcfa8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_u16, addr 0x62dcfd0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_u32, addr 0x62dcfd8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_u64, addr 0x62dcfe0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_high_u8, addr 0x62dcfc8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_lane_f32, addr 0x62cdb44, size 0x38, virtual false, abstract: false, final false
  static inline float_t vget_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_f64, addr 0x62dbbf8, size 0x8, virtual false, abstract: false, final false
  static inline double_t vget_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_s16, addr 0x62cdad0, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vget_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_s32, addr 0x62cdb08, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vget_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_s64, addr 0x62cdb40, size 0x4, virtual false, abstract: false, final false
  static inline int64_t vget_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_s8, addr 0x62cda98, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vget_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_u16, addr 0x62cda24, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vget_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_u32, addr 0x62cda5c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vget_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_u64, addr 0x62cda94, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t vget_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_lane_u8, addr 0x62cd9ec, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vget_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vget_low_f32, addr 0x62dd018, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_f64, addr 0x62dd01c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_s16, addr 0x62dcffc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_s32, addr 0x62dd000, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_s64, addr 0x62dd004, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_s8, addr 0x62dcff8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_u16, addr 0x62dd00c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_u32, addr 0x62dd010, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_u64, addr 0x62dd014, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vget_low_u8, addr 0x62dd008, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vgetq_lane_f32, addr 0x62cdd3c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vgetq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_f64, addr 0x62dbc00, size 0x38, virtual false, abstract: false, final false
  static inline double_t vgetq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_s16, addr 0x62cdc94, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vgetq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_s32, addr 0x62cdccc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vgetq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_s64, addr 0x62cdd04, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vgetq_lane_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_s8, addr 0x62cdc5c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vgetq_lane_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_u16, addr 0x62cdbb4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vgetq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_u32, addr 0x62cdbec, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vgetq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_u64, addr 0x62cdc24, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vgetq_lane_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vgetq_lane_u8, addr 0x62cdb7c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vgetq_lane_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vhadd_s16, addr 0x62c24cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhadd_s32, addr 0x62c253c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhadd_s8, addr 0x62c245c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhadd_u16, addr 0x62c261c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhadd_u32, addr 0x62c268c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhadd_u8, addr 0x62c25ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhaddq_s16, addr 0x62c2504, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhaddq_s32, addr 0x62c2574, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhaddq_s8, addr 0x62c2494, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhaddq_u16, addr 0x62c2654, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhaddq_u32, addr 0x62c26c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhaddq_u8, addr 0x62c25e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsub_s16, addr 0x62c41cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsub_s32, addr 0x62c423c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsub_s8, addr 0x62c415c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsub_u16, addr 0x62c431c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsub_u32, addr 0x62c438c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsub_u8, addr 0x62c42ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vhsubq_s16, addr 0x62c4204, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsubq_s32, addr 0x62c4274, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsubq_s8, addr 0x62c4194, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsubq_u16, addr 0x62c4354, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsubq_u32, addr 0x62c43c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vhsubq_u8, addr 0x62c42e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vld1_f32, addr 0x62dd0c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_f32(float_t* a0);

  /// @brief Method vld1_f64, addr 0x62dd0d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_f64(double_t* a0);

  /// @brief Method vld1_s16, addr 0x62dd034, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s16(int16_t* a0);

  /// @brief Method vld1_s32, addr 0x62dd048, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s32(int32_t* a0);

  /// @brief Method vld1_s64, addr 0x62dd05c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s64(int64_t* a0);

  /// @brief Method vld1_s8, addr 0x62dd020, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s8(int8_t* a0);

  /// @brief Method vld1_u16, addr 0x62dd084, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u16(uint16_t* a0);

  /// @brief Method vld1_u32, addr 0x62dd098, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u32(uint32_t* a0);

  /// @brief Method vld1_u64, addr 0x62dd0ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u64(uint64_t* a0);

  /// @brief Method vld1_u8, addr 0x62dd070, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u8(uint8_t* a0);

  /// @brief Method vld1q_f32, addr 0x62dd0c8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_f32(float_t* a0);

  /// @brief Method vld1q_f64, addr 0x62dd0dc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_f64(double_t* a0);

  /// @brief Method vld1q_s16, addr 0x62dd03c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s16(int16_t* a0);

  /// @brief Method vld1q_s32, addr 0x62dd050, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s32(int32_t* a0);

  /// @brief Method vld1q_s64, addr 0x62dd064, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s64(int64_t* a0);

  /// @brief Method vld1q_s8, addr 0x62dd028, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s8(int8_t* a0);

  /// @brief Method vld1q_u16, addr 0x62dd08c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u16(uint16_t* a0);

  /// @brief Method vld1q_u32, addr 0x62dd0a0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u32(uint32_t* a0);

  /// @brief Method vld1q_u64, addr 0x62dd0b4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u64(uint64_t* a0);

  /// @brief Method vld1q_u8, addr 0x62dd078, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u8(uint8_t* a0);

  /// @brief Method vmax_f32, addr 0x62c655c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_f64, addr 0x62d2a24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_s16, addr 0x62c632c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_s32, addr 0x62c639c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_s8, addr 0x62c62bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_u16, addr 0x62c647c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_u32, addr 0x62c64ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmax_u8, addr 0x62c640c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmaxnm_f32, addr 0x62d2b04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmaxnm_f64, addr 0x62d2b74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmaxnmq_f32, addr 0x62d2b3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxnmq_f64, addr 0x62d2bac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxnmv_f32, addr 0x62dae5c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxnmv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxnmvq_f32, addr 0x62dae94, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxnmvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxnmvq_f64, addr 0x62daecc, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmaxnmvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxq_f32, addr 0x62c6594, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_f64, addr 0x62d2a5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_s16, addr 0x62c6364, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_s32, addr 0x62c63d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_s8, addr 0x62c62f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_u16, addr 0x62c64b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_u32, addr 0x62c6524, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxq_u8, addr 0x62c6444, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmaxv_f32, addr 0x62daa6c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_s16, addr 0x62da83c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vmaxv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_s32, addr 0x62da8ac, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vmaxv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_s8, addr 0x62da7cc, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vmaxv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_u16, addr 0x62da98c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vmaxv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_u32, addr 0x62da9fc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vmaxv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxv_u8, addr 0x62da91c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vmaxv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmaxvq_f32, addr 0x62daaa4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_f64, addr 0x62daadc, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmaxvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_s16, addr 0x62da874, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vmaxvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_s32, addr 0x62da8e4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vmaxvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_s8, addr 0x62da804, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vmaxvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_u16, addr 0x62da9c4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vmaxvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_u32, addr 0x62daa34, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vmaxvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmaxvq_u8, addr 0x62da954, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vmaxvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmin_f32, addr 0x62c686c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_f64, addr 0x62d2a94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_s16, addr 0x62c663c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_s32, addr 0x62c66ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_s8, addr 0x62c65cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_u16, addr 0x62c678c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_u32, addr 0x62c67fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmin_u8, addr 0x62c671c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vminnm_f32, addr 0x62d2be4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vminnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vminnm_f64, addr 0x62d2c54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vminnm_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vminnmq_f32, addr 0x62d2c1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminnmq_f64, addr 0x62d2c8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminnmv_f32, addr 0x62daf04, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminnmv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminnmvq_f32, addr 0x62daf3c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminnmvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminnmvq_f64, addr 0x62daf74, size 0x38, virtual false, abstract: false, final false
  static inline double_t vminnmvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminq_f32, addr 0x62c68a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_f64, addr 0x62d2acc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_s16, addr 0x62c6674, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_s32, addr 0x62c66e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_s8, addr 0x62c6604, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_u16, addr 0x62c67c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_u32, addr 0x62c6834, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminq_u8, addr 0x62c6754, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vminv_f32, addr 0x62dadb4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_s16, addr 0x62dab84, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vminv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_s32, addr 0x62dabf4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vminv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_s8, addr 0x62dab14, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vminv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_u16, addr 0x62dacd4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vminv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_u32, addr 0x62dad44, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vminv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminv_u8, addr 0x62dac64, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vminv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vminvq_f32, addr 0x62dadec, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_f64, addr 0x62dae24, size 0x38, virtual false, abstract: false, final false
  static inline double_t vminvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_s16, addr 0x62dabbc, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vminvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_s32, addr 0x62dac2c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vminvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_s8, addr 0x62dab4c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vminvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_u16, addr 0x62dad0c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vminvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_u32, addr 0x62dad7c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vminvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vminvq_u8, addr 0x62dac9c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vminvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmla_f32, addr 0x62c320c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_f64, addr 0x62cf254, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_lane_f32, addr 0x62c9d84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmla_lane_s16, addr 0x62c9bc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmla_lane_s32, addr 0x62c9c34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmla_lane_u16, addr 0x62c9ca4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmla_lane_u32, addr 0x62c9d14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmla_laneq_f32, addr 0x62d61ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmla_laneq_s16, addr 0x62d602c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmla_laneq_s32, addr 0x62d609c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmla_laneq_u16, addr 0x62d610c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmla_laneq_u32, addr 0x62d617c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmla_n_f32, addr 0x62caf04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// @brief Method vmla_n_s16, addr 0x62cad44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vmla_n_s32, addr 0x62cadb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmla_n_u16, addr 0x62cae24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// @brief Method vmla_n_u32, addr 0x62cae94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// @brief Method vmla_s16, addr 0x62c30fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_s32, addr 0x62c316c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_s8, addr 0x62c308c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_u16, addr 0x62c31ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_u32, addr 0x62c31fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmla_u8, addr 0x62c31dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_high_lane_s16, addr 0x62d625c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_high_lane_s32, addr 0x62d6294, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_high_lane_u16, addr 0x62d62cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_high_lane_u32, addr 0x62d6304, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_high_laneq_s16, addr 0x62d641c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_high_laneq_s32, addr 0x62d6454, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_high_laneq_u16, addr 0x62d648c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_high_laneq_u32, addr 0x62d64c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_high_n_s16, addr 0x62d7bd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vmlal_high_n_s32, addr 0x62d7c08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmlal_high_n_u16, addr 0x62d7c40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// @brief Method vmlal_high_n_u32, addr 0x62d7c78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// @brief Method vmlal_high_s16, addr 0x62cf2fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_high_s32, addr 0x62cf334, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_high_s8, addr 0x62cf2c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_high_u16, addr 0x62cf3a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_high_u32, addr 0x62cf3dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_high_u8, addr 0x62cf36c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlal_lane_s16, addr 0x62c9df4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_lane_s32, addr 0x62c9e2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_lane_u16, addr 0x62c9e64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_lane_u32, addr 0x62c9e9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlal_laneq_s16, addr 0x62d633c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_laneq_s32, addr 0x62d6374, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_laneq_u16, addr 0x62d63ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_laneq_u32, addr 0x62d63e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlal_n_s16, addr 0x62caf74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vmlal_n_s32, addr 0x62cafac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmlal_n_u16, addr 0x62cafe4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// @brief Method vmlal_n_u32, addr 0x62cb01c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// @brief Method vmlal_s16, addr 0x62c32b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_s32, addr 0x62c32ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_s8, addr 0x62c327c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_u16, addr 0x62c335c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_u32, addr 0x62c3394, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlal_u8, addr 0x62c3324, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlaq_f32, addr 0x62c3244, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_f64, addr 0x62cf28c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_lane_f32, addr 0x62c9dbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlaq_lane_s16, addr 0x62c9bfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlaq_lane_s32, addr 0x62c9c6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlaq_lane_u16, addr 0x62c9cdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlaq_lane_u32, addr 0x62c9d4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlaq_laneq_f32, addr 0x62d6224, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlaq_laneq_s16, addr 0x62d6064, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlaq_laneq_s32, addr 0x62d60d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlaq_laneq_u16, addr 0x62d6144, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlaq_laneq_u32, addr 0x62d61b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlaq_n_f32, addr 0x62caf3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// @brief Method vmlaq_n_s16, addr 0x62cad7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vmlaq_n_s32, addr 0x62cadec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmlaq_n_u16, addr 0x62cae5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// @brief Method vmlaq_n_u32, addr 0x62caecc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// @brief Method vmlaq_s16, addr 0x62c3134, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_s32, addr 0x62c31a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_s8, addr 0x62c30c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_u16, addr 0x62c31f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_u32, addr 0x62c3204, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlaq_u8, addr 0x62c31e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmls_f32, addr 0x62c354c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_f64, addr 0x62cf414, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_lane_f32, addr 0x62ca104, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmls_lane_s16, addr 0x62c9f44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmls_lane_s32, addr 0x62c9fb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmls_lane_u16, addr 0x62ca024, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmls_lane_u32, addr 0x62ca094, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmls_laneq_f32, addr 0x62d68ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmls_laneq_s16, addr 0x62d672c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmls_laneq_s32, addr 0x62d679c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmls_laneq_u16, addr 0x62d680c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmls_laneq_u32, addr 0x62d687c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmls_n_f32, addr 0x62cb284, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// @brief Method vmls_n_s16, addr 0x62cb0c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vmls_n_s32, addr 0x62cb134, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmls_n_u16, addr 0x62cb1a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// @brief Method vmls_n_u32, addr 0x62cb214, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// @brief Method vmls_s16, addr 0x62c343c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_s32, addr 0x62c34ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_s8, addr 0x62c33cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_u16, addr 0x62c352c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_u32, addr 0x62c353c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmls_u8, addr 0x62c351c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_high_lane_s16, addr 0x62d695c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_high_lane_s32, addr 0x62d6994, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_high_lane_u16, addr 0x62d69cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_high_lane_u32, addr 0x62d6a04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_high_laneq_s16, addr 0x62d6b1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_high_laneq_s32, addr 0x62d6b54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_high_laneq_u16, addr 0x62d6b8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_high_laneq_u32, addr 0x62d6bc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_high_n_s16, addr 0x62d7d20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vmlsl_high_n_s32, addr 0x62d7d58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmlsl_high_n_u16, addr 0x62d7d90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// @brief Method vmlsl_high_n_u32, addr 0x62d7dc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// @brief Method vmlsl_high_s16, addr 0x62cf4bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_high_s32, addr 0x62cf4f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_high_s8, addr 0x62cf484, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_high_u16, addr 0x62cf564, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_high_u32, addr 0x62cf59c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_high_u8, addr 0x62cf52c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsl_lane_s16, addr 0x62ca174, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_lane_s32, addr 0x62ca1ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_lane_u16, addr 0x62ca1e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_lane_u32, addr 0x62ca21c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsl_laneq_s16, addr 0x62d6a3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_laneq_s32, addr 0x62d6a74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_laneq_u16, addr 0x62d6aac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_laneq_u32, addr 0x62d6ae4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsl_n_s16, addr 0x62cb2f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vmlsl_n_s32, addr 0x62cb32c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmlsl_n_u16, addr 0x62cb364, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// @brief Method vmlsl_n_u32, addr 0x62cb39c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// @brief Method vmlsl_s16, addr 0x62c35f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_s32, addr 0x62c362c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_s8, addr 0x62c35bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_u16, addr 0x62c369c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_u32, addr 0x62c36d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsl_u8, addr 0x62c3664, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vmlsq_f32, addr 0x62c3584, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_f64, addr 0x62cf44c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_lane_f32, addr 0x62ca13c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsq_lane_s16, addr 0x62c9f7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsq_lane_s32, addr 0x62c9fec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsq_lane_u16, addr 0x62ca05c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsq_lane_u32, addr 0x62ca0cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vmlsq_laneq_f32, addr 0x62d6924, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsq_laneq_s16, addr 0x62d6764, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsq_laneq_s32, addr 0x62d67d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsq_laneq_u16, addr 0x62d6844, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsq_laneq_u32, addr 0x62d68b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vmlsq_n_f32, addr 0x62cb2bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// @brief Method vmlsq_n_s16, addr 0x62cb0fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vmlsq_n_s32, addr 0x62cb16c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmlsq_n_u16, addr 0x62cb1dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// @brief Method vmlsq_n_u32, addr 0x62cb24c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// @brief Method vmlsq_s16, addr 0x62c3474, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_s32, addr 0x62c34e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_s8, addr 0x62c3404, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_u16, addr 0x62c3534, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_u32, addr 0x62c3544, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmlsq_u8, addr 0x62c3524, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vmov_n_f32, addr 0x62dcf4c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f32(float_t a0);

  /// @brief Method vmov_n_f64, addr 0x62dcf68, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f64(double_t a0);

  /// @brief Method vmov_n_s16, addr 0x62dce90, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s16(int16_t a0);

  /// @brief Method vmov_n_s32, addr 0x62dceb4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s32(int32_t a0);

  /// @brief Method vmov_n_s64, addr 0x62dced0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s64(int64_t a0);

  /// @brief Method vmov_n_s8, addr 0x62dce6c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s8(int8_t a0);

  /// @brief Method vmov_n_u16, addr 0x62dcf00, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u16(uint16_t a0);

  /// @brief Method vmov_n_u32, addr 0x62dcf24, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u32(uint32_t a0);

  /// @brief Method vmov_n_u64, addr 0x62dcf40, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u64(uint64_t a0);

  /// @brief Method vmov_n_u8, addr 0x62dcedc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u8(uint8_t a0);

  /// @brief Method vmovl_high_s16, addr 0x62d5b24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_high_s32, addr 0x62d5b5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_high_s8, addr 0x62d5aec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_high_u16, addr 0x62d5bcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_high_u32, addr 0x62d5c04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_high_u8, addr 0x62d5b94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovl_s16, addr 0x62c98b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovl_s32, addr 0x62c98ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovl_s8, addr 0x62c987c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovl_u16, addr 0x62c995c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovl_u32, addr 0x62c9994, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovl_u8, addr 0x62c9924, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmovn_high_s16, addr 0x62c97bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_high_s32, addr 0x62c97f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_high_s64, addr 0x62c982c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_high_u16, addr 0x62c9864, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_high_u32, addr 0x62c986c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_high_u64, addr 0x62c9874, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmovn_s16, addr 0x62c96fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovn_s32, addr 0x62c9734, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovn_s64, addr 0x62c976c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovn_u16, addr 0x62c97a4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovn_u32, addr 0x62c97ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovn_u64, addr 0x62c97b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmovq_n_f32, addr 0x62dcf58, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f32(float_t a0);

  /// @brief Method vmovq_n_f64, addr 0x62dcf70, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f64(double_t a0);

  /// @brief Method vmovq_n_s16, addr 0x62dcea0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s16(int16_t a0);

  /// @brief Method vmovq_n_s32, addr 0x62dcec0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s32(int32_t a0);

  /// @brief Method vmovq_n_s64, addr 0x62dced4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s64(int64_t a0);

  /// @brief Method vmovq_n_s8, addr 0x62dce7c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s8(int8_t a0);

  /// @brief Method vmovq_n_u16, addr 0x62dcf10, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u16(uint16_t a0);

  /// @brief Method vmovq_n_u32, addr 0x62dcf30, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u32(uint32_t a0);

  /// @brief Method vmovq_n_u64, addr 0x62dcf44, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u64(uint64_t a0);

  /// @brief Method vmovq_n_u8, addr 0x62dceec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u8(uint8_t a0);

  /// @brief Method vmul_f32, addr 0x62c301c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_f64, addr 0x62ced74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_lane_f32, addr 0x62ca6b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_lane_f64, addr 0x62d6e9c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_lane_s16, addr 0x62ca4f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_lane_s32, addr 0x62ca564, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_lane_u16, addr 0x62ca5d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_lane_u32, addr 0x62ca644, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmul_laneq_f32, addr 0x62d70e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_laneq_f64, addr 0x62d7150, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_laneq_s16, addr 0x62d6f20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_laneq_s32, addr 0x62d6f90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_laneq_u16, addr 0x62d7000, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_laneq_u32, addr 0x62d7070, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmul_n_f32, addr 0x62ca484, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f32(::Unity::Burst::Intrinsics::v64 a0, float_t a1);

  /// @brief Method vmul_n_f64, addr 0x62d6e2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f64(::Unity::Burst::Intrinsics::v64 a0, double_t a1);

  /// @brief Method vmul_n_s16, addr 0x62ca2c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// @brief Method vmul_n_s32, addr 0x62ca334, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vmul_n_u16, addr 0x62ca3a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u16(::Unity::Burst::Intrinsics::v64 a0, uint16_t a1);

  /// @brief Method vmul_n_u32, addr 0x62ca414, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u32(::Unity::Burst::Intrinsics::v64 a0, uint32_t a1);

  /// @brief Method vmul_s16, addr 0x62c2f0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_s32, addr 0x62c2f7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_s8, addr 0x62c2e9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_u16, addr 0x62c2ffc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_u32, addr 0x62c300c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmul_u8, addr 0x62c2fec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmuld_lane_f64, addr 0x62d6f14, size 0xc, virtual false, abstract: false, final false
  static inline double_t vmuld_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmuld_laneq_f64, addr 0x62d71f8, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmuld_laneq_f64(double_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_high_lane_s16, addr 0x62d7310, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_high_lane_s32, addr 0x62d7348, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_high_lane_u16, addr 0x62d7380, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_high_lane_u32, addr 0x62d73b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_high_laneq_s16, addr 0x62d74d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_high_laneq_s32, addr 0x62d7508, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_high_laneq_u16, addr 0x62d7540, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_high_laneq_u32, addr 0x62d7578, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_high_n_s16, addr 0x62d7230, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// @brief Method vmull_high_n_s32, addr 0x62d7268, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vmull_high_n_u16, addr 0x62d72a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, uint16_t a1);

  /// @brief Method vmull_high_n_u32, addr 0x62d72d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1);

  /// @brief Method vmull_high_s16, addr 0x62cfe0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_high_s32, addr 0x62cfe44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_high_s8, addr 0x62cfdd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_high_u16, addr 0x62cfeb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_high_u32, addr 0x62cfeec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_high_u8, addr 0x62cfe7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmull_lane_s16, addr 0x62ca804, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_lane_s32, addr 0x62ca83c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_lane_u16, addr 0x62ca874, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_lane_u32, addr 0x62ca8ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmull_laneq_s16, addr 0x62d73f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_laneq_s32, addr 0x62d7428, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_laneq_u16, addr 0x62d7460, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_laneq_u32, addr 0x62d7498, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmull_n_s16, addr 0x62ca724, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// @brief Method vmull_n_s32, addr 0x62ca75c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vmull_n_u16, addr 0x62ca794, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u16(::Unity::Burst::Intrinsics::v64 a0, uint16_t a1);

  /// @brief Method vmull_n_u32, addr 0x62ca7cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u32(::Unity::Burst::Intrinsics::v64 a0, uint32_t a1);

  /// @brief Method vmull_s16, addr 0x62c3ac4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmull_s32, addr 0x62c3afc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmull_s8, addr 0x62c3a8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmull_u16, addr 0x62c3b6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmull_u32, addr 0x62c3ba4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmull_u8, addr 0x62c3b34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmulq_f32, addr 0x62c3054, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_f64, addr 0x62cedac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_lane_f32, addr 0x62ca6ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_lane_f64, addr 0x62d6ea4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_lane_s16, addr 0x62ca52c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_lane_s32, addr 0x62ca59c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_lane_u16, addr 0x62ca60c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_lane_u32, addr 0x62ca67c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulq_laneq_f32, addr 0x62d7118, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_laneq_f64, addr 0x62d7188, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_laneq_s16, addr 0x62d6f58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_laneq_s32, addr 0x62d6fc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_laneq_u16, addr 0x62d7038, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_laneq_u32, addr 0x62d70a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulq_n_f32, addr 0x62ca4bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f32(::Unity::Burst::Intrinsics::v128 a0, float_t a1);

  /// @brief Method vmulq_n_f64, addr 0x62d6e64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f64(::Unity::Burst::Intrinsics::v128 a0, double_t a1);

  /// @brief Method vmulq_n_s16, addr 0x62ca2fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// @brief Method vmulq_n_s32, addr 0x62ca36c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vmulq_n_u16, addr 0x62ca3dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u16(::Unity::Burst::Intrinsics::v128 a0, uint16_t a1);

  /// @brief Method vmulq_n_u32, addr 0x62ca44c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1);

  /// @brief Method vmulq_s16, addr 0x62c2f44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_s32, addr 0x62c2fb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_s8, addr 0x62c2ed4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_u16, addr 0x62c3004, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_u32, addr 0x62c3014, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulq_u8, addr 0x62c2ff4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmuls_lane_f32, addr 0x62d6edc, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmuls_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmuls_laneq_f32, addr 0x62d71c0, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmuls_laneq_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulx_f32, addr 0x62cede4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmulx_f64, addr 0x62cee54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vmulx_lane_f32, addr 0x62cef34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulx_lane_f64, addr 0x62cefa4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulx_laneq_f32, addr 0x62cf024, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulx_laneq_f64, addr 0x62cf094, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulxd_f64, addr 0x62ceefc, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmulxd_f64(double_t a0, double_t a1);

  /// @brief Method vmulxd_lane_f64, addr 0x62cf01c, size 0x8, virtual false, abstract: false, final false
  static inline double_t vmulxd_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulxd_laneq_f64, addr 0x62cf13c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmulxd_laneq_f64(double_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulxq_f32, addr 0x62cee1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulxq_f64, addr 0x62cee8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vmulxq_lane_f32, addr 0x62cef6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulxq_lane_f64, addr 0x62cefac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulxq_laneq_f32, addr 0x62cf05c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulxq_laneq_f64, addr 0x62cf0cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmulxs_f32, addr 0x62ceec4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmulxs_f32(float_t a0, float_t a1);

  /// @brief Method vmulxs_lane_f32, addr 0x62cefe4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmulxs_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vmulxs_laneq_f32, addr 0x62cf104, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmulxs_laneq_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vmvn_s16, addr 0x62cc0c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvn_s32, addr 0x62cc0d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvn_s8, addr 0x62cc054, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvn_u16, addr 0x62cc0f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvn_u32, addr 0x62cc104, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvn_u8, addr 0x62cc0e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vmvnq_s16, addr 0x62cc0cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmvnq_s32, addr 0x62cc0dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmvnq_s8, addr 0x62cc08c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmvnq_u16, addr 0x62cc0fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmvnq_u32, addr 0x62cc10c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vmvnq_u8, addr 0x62cc0ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vneg_f32, addr 0x62cb8a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vneg_f64, addr 0x62d8180, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vneg_s16, addr 0x62cb7c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vneg_s32, addr 0x62cb834, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vneg_s64, addr 0x62d80d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vneg_s8, addr 0x62cb754, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vnegd_s64, addr 0x62d8110, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vnegd_s64(int64_t a0);

  /// @brief Method vnegq_f32, addr 0x62cb8dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vnegq_f64, addr 0x62d81b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vnegq_s16, addr 0x62cb7fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vnegq_s32, addr 0x62cb86c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vnegq_s64, addr 0x62d8148, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vnegq_s8, addr 0x62cb78c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vorn_s16, addr 0x62cc504, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_s32, addr 0x62cc514, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_s64, addr 0x62cc524, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_s8, addr 0x62cc494, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_u16, addr 0x62cc544, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_u32, addr 0x62cc554, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_u64, addr 0x62cc564, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorn_u8, addr 0x62cc534, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vornq_s16, addr 0x62cc50c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_s32, addr 0x62cc51c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_s64, addr 0x62cc52c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_s8, addr 0x62cc4cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_u16, addr 0x62cc54c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_u32, addr 0x62cc55c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_u64, addr 0x62cc56c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vornq_u8, addr 0x62cc53c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorr_s16, addr 0x62cc264, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_s32, addr 0x62cc274, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_s64, addr 0x62cc284, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_s8, addr 0x62cc1f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_u16, addr 0x62cc2a4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_u32, addr 0x62cc2b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_u64, addr 0x62cc2c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorr_u8, addr 0x62cc294, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vorrq_s16, addr 0x62cc26c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_s32, addr 0x62cc27c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_s64, addr 0x62cc28c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_s8, addr 0x62cc22c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_u16, addr 0x62cc2ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_u32, addr 0x62cc2bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_u64, addr 0x62cc2cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vorrq_u8, addr 0x62cc29c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadal_s16, addr 0x62ccd94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadal_s32, addr 0x62cce04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadal_s8, addr 0x62ccd24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadal_u16, addr 0x62ccee4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadal_u32, addr 0x62ccf54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadal_u8, addr 0x62cce74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadalq_s16, addr 0x62ccdcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadalq_s32, addr 0x62cce3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadalq_s8, addr 0x62ccd5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadalq_u16, addr 0x62ccf1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadalq_u32, addr 0x62ccf8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadalq_u8, addr 0x62cceac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadd_f32, addr 0x62cca4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_s16, addr 0x62cc9c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_s32, addr 0x62cc9fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_s8, addr 0x62cc98c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_u16, addr 0x62cca3c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_u32, addr 0x62cca44, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpadd_u8, addr 0x62cca34, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpaddd_f64, addr 0x62d9f7c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpaddd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddd_s64, addr 0x62d9ed4, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vpaddd_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddd_u64, addr 0x62d9f0c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vpaddd_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddl_s16, addr 0x62ccaf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddl_s32, addr 0x62ccb64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddl_s8, addr 0x62cca84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddl_u16, addr 0x62ccc44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddl_u32, addr 0x62cccb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddl_u8, addr 0x62ccbd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpaddlq_s16, addr 0x62ccb2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddlq_s32, addr 0x62ccb9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddlq_s8, addr 0x62ccabc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddlq_u16, addr 0x62ccc7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddlq_u32, addr 0x62cccec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddlq_u8, addr 0x62ccc0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpaddq_f32, addr 0x62d9994, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_f64, addr 0x62d99cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_s16, addr 0x62d98cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_s32, addr 0x62d9904, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_s64, addr 0x62d993c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_s8, addr 0x62d9894, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_u16, addr 0x62d997c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_u32, addr 0x62d9984, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_u64, addr 0x62d998c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpaddq_u8, addr 0x62d9974, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpadds_f32, addr 0x62d9f44, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpadds_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpmax_f32, addr 0x62cd114, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_s16, addr 0x62ccffc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_s32, addr 0x62cd034, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_s8, addr 0x62ccfc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_u16, addr 0x62cd0a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_u32, addr 0x62cd0dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmax_u8, addr 0x62cd06c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmaxnm_f32, addr 0x62d9d84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmaxnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmaxnmq_f32, addr 0x62d9dbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxnmq_f64, addr 0x62d9df4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxnmqd_f64, addr 0x62da0cc, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpmaxnmqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpmaxnms_f32, addr 0x62da094, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpmaxnms_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpmaxq_f32, addr 0x62d9b54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_f64, addr 0x62d9b8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_s16, addr 0x62d9a3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_s32, addr 0x62d9a74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_s8, addr 0x62d9a04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_u16, addr 0x62d9ae4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_u32, addr 0x62d9b1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxq_u8, addr 0x62d9aac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpmaxqd_f64, addr 0x62d9fec, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpmaxqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpmaxs_f32, addr 0x62d9fb4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpmaxs_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpmin_f32, addr 0x62cd29c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_s16, addr 0x62cd184, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_s32, addr 0x62cd1bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_s8, addr 0x62cd14c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_u16, addr 0x62cd22c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_u32, addr 0x62cd264, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpmin_u8, addr 0x62cd1f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpminnm_f32, addr 0x62d9e2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpminnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vpminnmq_f32, addr 0x62d9e64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminnmq_f64, addr 0x62d9e9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminnmqd_f64, addr 0x62da13c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpminnmqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpminnms_f32, addr 0x62da104, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpminnms_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vpminq_f32, addr 0x62d9d14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_f64, addr 0x62d9d4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_s16, addr 0x62d9bfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_s32, addr 0x62d9c34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_s8, addr 0x62d9bc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_u16, addr 0x62d9ca4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_u32, addr 0x62d9cdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminq_u8, addr 0x62d9c6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vpminqd_f64, addr 0x62da05c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpminqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vpmins_f32, addr 0x62da024, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpmins_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqabs_s16, addr 0x62cb674, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqabs_s32, addr 0x62cb6e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqabs_s64, addr 0x62d7f88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqabs_s8, addr 0x62cb604, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqabsb_s8, addr 0x62d7ff8, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqabsb_s8(int8_t a0);

  /// @brief Method vqabsd_s64, addr 0x62d80a0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqabsd_s64(int64_t a0);

  /// @brief Method vqabsh_s16, addr 0x62d8030, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqabsh_s16(int16_t a0);

  /// @brief Method vqabsq_s16, addr 0x62cb6ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqabsq_s32, addr 0x62cb71c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqabsq_s64, addr 0x62d7fc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqabsq_s8, addr 0x62cb63c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqabss_s32, addr 0x62d8068, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqabss_s32(int32_t a0);

  /// @brief Method vqadd_s16, addr 0x62c2a0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_s32, addr 0x62c2a7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_s64, addr 0x62c2aec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_s8, addr 0x62c299c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_u16, addr 0x62c2bcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_u32, addr 0x62c2c3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_u64, addr 0x62c2cac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqadd_u8, addr 0x62c2b5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqaddb_s8, addr 0x62ce4f4, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqaddb_s8(int8_t a0, int8_t a1);

  /// @brief Method vqaddb_u8, addr 0x62ce5d4, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqaddb_u8(uint8_t a0, uint8_t a1);

  /// @brief Method vqaddd_s64, addr 0x62ce59c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqaddd_s64(int64_t a0, int64_t a1);

  /// @brief Method vqaddd_u64, addr 0x62ce67c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqaddd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vqaddh_s16, addr 0x62ce52c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqaddh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqaddh_u16, addr 0x62ce60c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqaddh_u16(uint16_t a0, uint16_t a1);

  /// @brief Method vqaddq_s16, addr 0x62c2a44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_s32, addr 0x62c2ab4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_s64, addr 0x62c2b24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_s8, addr 0x62c29d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_u16, addr 0x62c2c04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_u32, addr 0x62c2c74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_u64, addr 0x62c2ce4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqaddq_u8, addr 0x62c2b94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqadds_s32, addr 0x62ce564, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqadds_s32(int32_t a0, int32_t a1);

  /// @brief Method vqadds_u32, addr 0x62ce644, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqadds_u32(uint32_t a0, uint32_t a1);

  /// @brief Method vqdmlal_high_lane_s16, addr 0x62d656c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlal_high_lane_s32, addr 0x62d65a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlal_high_laneq_s16, addr 0x62d66bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlal_high_laneq_s32, addr 0x62d66f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlal_high_n_s16, addr 0x62d7cb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vqdmlal_high_n_s32, addr 0x62d7ce8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmlal_high_s16, addr 0x62cfc84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqdmlal_high_s32, addr 0x62cfcbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqdmlal_lane_s16, addr 0x62c9ed4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlal_lane_s32, addr 0x62c9f0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlal_laneq_s16, addr 0x62d65dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlal_laneq_s32, addr 0x62d6614, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlal_n_s16, addr 0x62cb054, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vqdmlal_n_s32, addr 0x62cb08c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmlal_s16, addr 0x62c39ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqdmlal_s32, addr 0x62c39e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqdmlalh_lane_s16, addr 0x62d64fc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlalh_lane_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlalh_laneq_s16, addr 0x62d664c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlalh_laneq_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlalh_s16, addr 0x62cfc14, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlalh_s16(int32_t a0, int16_t a1, int16_t a2);

  /// @brief Method vqdmlals_lane_s32, addr 0x62d6534, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlals_lane_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlals_laneq_s32, addr 0x62d6684, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlals_laneq_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlals_s32, addr 0x62cfc4c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlals_s32(int64_t a0, int32_t a1, int32_t a2);

  /// @brief Method vqdmlsl_high_lane_s16, addr 0x62d6c6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlsl_high_lane_s32, addr 0x62d6ca4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlsl_high_laneq_s16, addr 0x62d6dbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlsl_high_laneq_s32, addr 0x62d6df4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlsl_high_n_s16, addr 0x62d7e00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// @brief Method vqdmlsl_high_n_s32, addr 0x62d7e38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmlsl_high_s16, addr 0x62cfd64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqdmlsl_high_s32, addr 0x62cfd9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqdmlsl_lane_s16, addr 0x62ca254, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlsl_lane_s32, addr 0x62ca28c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlsl_laneq_s16, addr 0x62d6cdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlsl_laneq_s32, addr 0x62d6d14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlsl_n_s16, addr 0x62cb3d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// @brief Method vqdmlsl_n_s32, addr 0x62cb40c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmlsl_s16, addr 0x62c3a1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqdmlsl_s32, addr 0x62c3a54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqdmlslh_lane_s16, addr 0x62d6bfc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlslh_lane_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlslh_laneq_s16, addr 0x62d6d4c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlslh_laneq_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlslh_s16, addr 0x62cfcf4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlslh_s16(int32_t a0, int16_t a1, int16_t a2);

  /// @brief Method vqdmlsls_lane_s32, addr 0x62d6c34, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlsls_lane_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqdmlsls_laneq_s32, addr 0x62d6d84, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlsls_laneq_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqdmlsls_s32, addr 0x62cfd2c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlsls_s32(int64_t a0, int32_t a1, int32_t a2);

  /// @brief Method vqdmulh_lane_s16, addr 0x62caaa4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulh_lane_s32, addr 0x62cab14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulh_laneq_s16, addr 0x62d78c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulh_laneq_s32, addr 0x62d7930, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulh_n_s16, addr 0x62ca9c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// @brief Method vqdmulh_n_s32, addr 0x62caa34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqdmulh_s16, addr 0x62c37ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqdmulh_s32, addr 0x62c385c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqdmulhh_lane_s16, addr 0x62d7850, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqdmulhh_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulhh_laneq_s16, addr 0x62d79a0, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqdmulhh_laneq_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulhh_s16, addr 0x62cfb34, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqdmulhh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqdmulhq_lane_s16, addr 0x62caadc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulhq_lane_s32, addr 0x62cab4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulhq_laneq_s16, addr 0x62d78f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulhq_laneq_s32, addr 0x62d7968, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulhq_n_s16, addr 0x62ca9fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// @brief Method vqdmulhq_n_s32, addr 0x62caa6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqdmulhq_s16, addr 0x62c3824, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqdmulhq_s32, addr 0x62c3894, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqdmulhs_lane_s32, addr 0x62d7888, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmulhs_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulhs_laneq_s32, addr 0x62d79d8, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmulhs_laneq_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulhs_s32, addr 0x62cfb6c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmulhs_s32(int32_t a0, int32_t a1);

  /// @brief Method vqdmull_high_lane_s16, addr 0x62d7690, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmull_high_lane_s32, addr 0x62d76c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmull_high_laneq_s16, addr 0x62d77e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmull_high_laneq_s32, addr 0x62d7818, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmull_high_n_s16, addr 0x62d75b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// @brief Method vqdmull_high_n_s32, addr 0x62d75e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqdmull_high_s16, addr 0x62cff94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqdmull_high_s32, addr 0x62cffcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqdmull_lane_s16, addr 0x62ca954, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmull_lane_s32, addr 0x62ca98c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmull_laneq_s16, addr 0x62d7700, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmull_laneq_s32, addr 0x62d7738, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmull_n_s16, addr 0x62ca8e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// @brief Method vqdmull_n_s32, addr 0x62ca91c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqdmull_s16, addr 0x62c3bdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqdmull_s32, addr 0x62c3c14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqdmullh_lane_s16, addr 0x62d7620, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmullh_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmullh_laneq_s16, addr 0x62d7770, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmullh_laneq_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmullh_s16, addr 0x62cff24, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmullh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqdmulls_lane_s32, addr 0x62d7658, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmulls_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqdmulls_laneq_s32, addr 0x62d77a8, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmulls_laneq_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqdmulls_s32, addr 0x62cff5c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmulls_s32(int32_t a0, int32_t a1);

  /// @brief Method vqmovn_high_s16, addr 0x62d5d8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_high_s32, addr 0x62d5dc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_high_s64, addr 0x62d5dfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_high_u16, addr 0x62d5e34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_high_u32, addr 0x62d5e6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_high_u64, addr 0x62d5ea4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovn_s16, addr 0x62c99cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovn_s32, addr 0x62c9a04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovn_s64, addr 0x62c9a3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovn_u16, addr 0x62c9a74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovn_u32, addr 0x62c9aac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovn_u64, addr 0x62c9ae4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovnd_s64, addr 0x62d5cac, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqmovnd_s64(int64_t a0);

  /// @brief Method vqmovnd_u64, addr 0x62d5d54, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqmovnd_u64(uint64_t a0);

  /// @brief Method vqmovnh_s16, addr 0x62d5c3c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqmovnh_s16(int16_t a0);

  /// @brief Method vqmovnh_u16, addr 0x62d5ce4, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqmovnh_u16(uint16_t a0);

  /// @brief Method vqmovns_s32, addr 0x62d5c74, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqmovns_s32(int32_t a0);

  /// @brief Method vqmovns_u32, addr 0x62d5d1c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqmovns_u32(uint32_t a0);

  /// @brief Method vqmovun_high_s16, addr 0x62d5f84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovun_high_s32, addr 0x62d5fbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovun_high_s64, addr 0x62d5ff4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqmovun_s16, addr 0x62c9b1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovun_s32, addr 0x62c9b54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovun_s64, addr 0x62c9b8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqmovund_s64, addr 0x62d5f4c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqmovund_s64(int64_t a0);

  /// @brief Method vqmovunh_s16, addr 0x62d5edc, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqmovunh_s16(int16_t a0);

  /// @brief Method vqmovuns_s32, addr 0x62d5f14, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqmovuns_s32(int32_t a0);

  /// @brief Method vqneg_s16, addr 0x62cb984, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqneg_s32, addr 0x62cb9f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqneg_s64, addr 0x62d81f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqneg_s8, addr 0x62cb914, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vqnegb_s8, addr 0x62d8260, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqnegb_s8(int8_t a0);

  /// @brief Method vqnegd_s64, addr 0x62d8308, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqnegd_s64(int64_t a0);

  /// @brief Method vqnegh_s16, addr 0x62d8298, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqnegh_s16(int16_t a0);

  /// @brief Method vqnegq_s16, addr 0x62cb9bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqnegq_s32, addr 0x62cba2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqnegq_s64, addr 0x62d8228, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqnegq_s8, addr 0x62cb94c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vqnegs_s32, addr 0x62d82d0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqnegs_s32(int32_t a0);

  /// @brief Method vqrdmlah_lane_s16, addr 0x62dc780, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlah_lane_s32, addr 0x62dc860, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlah_laneq_s16, addr 0x62dc7f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlah_laneq_s32, addr 0x62dc8d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlah_s16, addr 0x62dc5c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqrdmlah_s32, addr 0x62dc5f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqrdmlahh_lane_s16, addr 0x62dcbe0, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlahh_lane_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlahh_laneq_s16, addr 0x62dcc18, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlahh_laneq_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlahh_s16, addr 0x62dcb00, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlahh_s16(int16_t a0, int16_t a1, int16_t a2);

  /// @brief Method vqrdmlahq_lane_s16, addr 0x62dc7b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlahq_lane_s32, addr 0x62dc898, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlahq_laneq_s16, addr 0x62dc828, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlahq_laneq_s32, addr 0x62dc908, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlahq_s16, addr 0x62dc630, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqrdmlahq_s32, addr 0x62dc668, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqrdmlahs_lane_s32, addr 0x62dcc50, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlahs_lane_s32(int32_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlahs_s32, addr 0x62dcb38, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlahs_s32(int32_t a0, int32_t a1, int32_t a2);

  /// @brief Method vqrdmlsh_lane_s16, addr 0x62dc940, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlsh_lane_s32, addr 0x62dca20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlsh_laneq_s16, addr 0x62dc9b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlsh_laneq_s32, addr 0x62dca90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlsh_s16, addr 0x62dc6a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqrdmlsh_s32, addr 0x62dc6d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqrdmlshh_lane_s16, addr 0x62dcc88, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlshh_lane_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlshh_laneq_s16, addr 0x62dccc0, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlshh_laneq_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlshh_s16, addr 0x62dcb70, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlshh_s16(int16_t a0, int16_t a1, int16_t a2);

  /// @brief Method vqrdmlshq_lane_s16, addr 0x62dc978, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlshq_lane_s32, addr 0x62dca58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlshq_laneq_s16, addr 0x62dc9e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlshq_laneq_s32, addr 0x62dcac8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// @brief Method vqrdmlshq_s16, addr 0x62dc710, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqrdmlshq_s32, addr 0x62dc748, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqrdmlshs_lane_s32, addr 0x62dccf8, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlshs_lane_s32(int32_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// @brief Method vqrdmlshs_s32, addr 0x62dcba8, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlshs_s32(int32_t a0, int32_t a1, int32_t a2);

  /// @brief Method vqrdmulh_lane_s16, addr 0x62cac64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqrdmulh_lane_s32, addr 0x62cacd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqrdmulh_laneq_s16, addr 0x62d7a80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrdmulh_laneq_s32, addr 0x62d7af0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrdmulh_n_s16, addr 0x62cab84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// @brief Method vqrdmulh_n_s32, addr 0x62cabf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqrdmulh_s16, addr 0x62c38cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrdmulh_s32, addr 0x62c393c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrdmulhh_lane_s16, addr 0x62d7a10, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmulhh_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqrdmulhh_laneq_s16, addr 0x62d7b60, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmulhh_laneq_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrdmulhh_s16, addr 0x62cfba4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmulhh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqrdmulhq_lane_s16, addr 0x62cac9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqrdmulhq_lane_s32, addr 0x62cad0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqrdmulhq_laneq_s16, addr 0x62d7ab8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrdmulhq_laneq_s32, addr 0x62d7b28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrdmulhq_n_s16, addr 0x62cabbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// @brief Method vqrdmulhq_n_s32, addr 0x62cac2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrdmulhq_s16, addr 0x62c3904, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrdmulhq_s32, addr 0x62c3974, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrdmulhs_lane_s32, addr 0x62d7a48, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmulhs_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vqrdmulhs_laneq_s32, addr 0x62d7b98, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmulhs_laneq_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrdmulhs_s32, addr 0x62cfbdc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmulhs_s32(int32_t a0, int32_t a1);

  /// @brief Method vqrshl_s16, addr 0x62c73cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_s32, addr 0x62c743c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_s64, addr 0x62c74ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_s8, addr 0x62c735c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_u16, addr 0x62c758c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_u32, addr 0x62c75fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_u64, addr 0x62c766c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshl_u8, addr 0x62c751c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqrshlb_s8, addr 0x62d2f64, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqrshlb_s8(int8_t a0, int8_t a1);

  /// @brief Method vqrshlb_u8, addr 0x62d3044, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqrshlb_u8(uint8_t a0, int8_t a1);

  /// @brief Method vqrshld_s64, addr 0x62d300c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqrshld_s64(int64_t a0, int64_t a1);

  /// @brief Method vqrshld_u64, addr 0x62d30ec, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqrshld_u64(uint64_t a0, int64_t a1);

  /// @brief Method vqrshlh_s16, addr 0x62d2f9c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrshlh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqrshlh_u16, addr 0x62d307c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqrshlh_u16(uint16_t a0, int16_t a1);

  /// @brief Method vqrshlq_s16, addr 0x62c7404, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_s32, addr 0x62c7474, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_s64, addr 0x62c74e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_s8, addr 0x62c7394, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_u16, addr 0x62c75c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_u32, addr 0x62c7634, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_u64, addr 0x62c76a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshlq_u8, addr 0x62c7554, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqrshls_s32, addr 0x62d2fd4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrshls_s32(int32_t a0, int32_t a1);

  /// @brief Method vqrshls_u32, addr 0x62d30b4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqrshls_u32(uint32_t a0, int32_t a1);

  /// @brief Method vqrshrn_high_n_s16, addr 0x62d3e0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_high_n_s32, addr 0x62d3e44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_high_n_s64, addr 0x62d3e7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_high_n_u16, addr 0x62d3eb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_high_n_u32, addr 0x62d3eec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_high_n_u64, addr 0x62d3f24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrn_n_s16, addr 0x62c89dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrn_n_s32, addr 0x62c8a14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrn_n_s64, addr 0x62c8a4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrn_n_u16, addr 0x62c8a84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrn_n_u32, addr 0x62c8abc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrn_n_u64, addr 0x62c8af4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrnd_n_s64, addr 0x62d3d2c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrshrnd_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqrshrnd_n_u64, addr 0x62d3dd4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqrshrnd_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vqrshrnh_n_s16, addr 0x62d3cbc, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqrshrnh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqrshrnh_n_u16, addr 0x62d3d64, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqrshrnh_n_u16(uint16_t a0, int32_t a1);

  /// @brief Method vqrshrns_n_s32, addr 0x62d3cf4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrshrns_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqrshrns_n_u32, addr 0x62d3d9c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqrshrns_n_u32(uint32_t a0, int32_t a1);

  /// @brief Method vqrshrun_high_n_s16, addr 0x62d3824, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrun_high_n_s32, addr 0x62d385c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrun_high_n_s64, addr 0x62d3894, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqrshrun_n_s16, addr 0x62c8694, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrun_n_s32, addr 0x62c86cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrun_n_s64, addr 0x62c8704, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqrshrund_n_s64, addr 0x62d37ec, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqrshrund_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqrshrunh_n_s16, addr 0x62d377c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqrshrunh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqrshruns_n_s32, addr 0x62d37b4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqrshruns_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqshl_n_s16, addr 0x62c826c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_s32, addr 0x62c827c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_s64, addr 0x62c828c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_s8, addr 0x62c825c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_u16, addr 0x62c82ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_u32, addr 0x62c82bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_u64, addr 0x62c82cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_n_u8, addr 0x62c829c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshl_s16, addr 0x62c6ccc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_s32, addr 0x62c6d3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_s64, addr 0x62c6dac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_s8, addr 0x62c6c5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_u16, addr 0x62c6e8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_u32, addr 0x62c6efc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_u64, addr 0x62c6f6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshl_u8, addr 0x62c6e1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqshlb_n_s8, addr 0x62d323c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqshlb_n_s8(int8_t a0, int32_t a1);

  /// @brief Method vqshlb_n_u8, addr 0x62d331c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshlb_n_u8(uint8_t a0, int32_t a1);

  /// @brief Method vqshlb_s8, addr 0x62d2d34, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqshlb_s8(int8_t a0, int8_t a1);

  /// @brief Method vqshlb_u8, addr 0x62d2e14, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshlb_u8(uint8_t a0, int8_t a1);

  /// @brief Method vqshld_n_s64, addr 0x62d32e4, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqshld_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqshld_n_u64, addr 0x62d33c4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqshld_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vqshld_s64, addr 0x62d2ddc, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqshld_s64(int64_t a0, int64_t a1);

  /// @brief Method vqshld_u64, addr 0x62d2ebc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqshld_u64(uint64_t a0, int64_t a1);

  /// @brief Method vqshlh_n_s16, addr 0x62d3274, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqshlh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqshlh_n_u16, addr 0x62d3354, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshlh_n_u16(uint16_t a0, int32_t a1);

  /// @brief Method vqshlh_s16, addr 0x62d2d6c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqshlh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqshlh_u16, addr 0x62d2e4c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshlh_u16(uint16_t a0, int16_t a1);

  /// @brief Method vqshlq_n_s16, addr 0x62c8274, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_s32, addr 0x62c8284, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_s64, addr 0x62c8294, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_s8, addr 0x62c8264, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_u16, addr 0x62c82b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_u32, addr 0x62c82c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_u64, addr 0x62c82d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_n_u8, addr 0x62c82a4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlq_s16, addr 0x62c6d04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_s32, addr 0x62c6d74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_s64, addr 0x62c6de4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_s8, addr 0x62c6c94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_u16, addr 0x62c6ec4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_u32, addr 0x62c6f34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_u64, addr 0x62c6fa4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshlq_u8, addr 0x62c6e54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqshls_n_s32, addr 0x62d32ac, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqshls_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqshls_n_u32, addr 0x62d338c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshls_n_u32(uint32_t a0, int32_t a1);

  /// @brief Method vqshls_s32, addr 0x62d2da4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqshls_s32(int32_t a0, int32_t a1);

  /// @brief Method vqshls_u32, addr 0x62d2e84, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshls_u32(uint32_t a0, int32_t a1);

  /// @brief Method vqshlu_n_s16, addr 0x62c834c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshlu_n_s32, addr 0x62c83bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshlu_n_s64, addr 0x62c842c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshlu_n_s8, addr 0x62c82dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vqshlub_n_s8, addr 0x62d33fc, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshlub_n_s8(int8_t a0, int32_t a1);

  /// @brief Method vqshlud_n_s64, addr 0x62d34a4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqshlud_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqshluh_n_s16, addr 0x62d3434, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshluh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqshluq_n_s16, addr 0x62c8384, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshluq_n_s32, addr 0x62c83f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshluq_n_s64, addr 0x62c8464, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshluq_n_s8, addr 0x62c8314, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshlus_n_s32, addr 0x62d346c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshlus_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqshrn_high_n_s16, addr 0x62d3a1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_high_n_s32, addr 0x62d3a54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_high_n_s64, addr 0x62d3a8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_high_n_u16, addr 0x62d3ac4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_high_n_u32, addr 0x62d3afc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_high_n_u64, addr 0x62d3b34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrn_n_s16, addr 0x62c873c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrn_n_s32, addr 0x62c8774, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrn_n_s64, addr 0x62c87ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrn_n_u16, addr 0x62c87e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrn_n_u32, addr 0x62c881c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrn_n_u64, addr 0x62c8854, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrnd_n_s64, addr 0x62d393c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqshrnd_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqshrnd_n_u64, addr 0x62d39e4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshrnd_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vqshrnh_n_s16, addr 0x62d38cc, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqshrnh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqshrnh_n_u16, addr 0x62d3974, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshrnh_n_u16(uint16_t a0, int32_t a1);

  /// @brief Method vqshrns_n_s32, addr 0x62d3904, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqshrns_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqshrns_n_u32, addr 0x62d39ac, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshrns_n_u32(uint32_t a0, int32_t a1);

  /// @brief Method vqshrun_high_n_s16, addr 0x62d36d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrun_high_n_s32, addr 0x62d370c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrun_high_n_s64, addr 0x62d3744, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vqshrun_n_s16, addr 0x62c85ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrun_n_s32, addr 0x62c8624, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrun_n_s64, addr 0x62c865c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vqshrund_n_s64, addr 0x62d369c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshrund_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vqshrunh_n_s16, addr 0x62d362c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshrunh_n_s16(int16_t a0, int32_t a1);

  /// @brief Method vqshruns_n_s32, addr 0x62d3664, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshruns_n_s32(int32_t a0, int32_t a1);

  /// @brief Method vqsub_s16, addr 0x62c446c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_s32, addr 0x62c44dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_s64, addr 0x62c454c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_s8, addr 0x62c43fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_u16, addr 0x62c462c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_u32, addr 0x62c469c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_u64, addr 0x62c470c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsub_u8, addr 0x62c45bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqsubb_s8, addr 0x62d0384, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqsubb_s8(int8_t a0, int8_t a1);

  /// @brief Method vqsubb_u8, addr 0x62d0464, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqsubb_u8(uint8_t a0, uint8_t a1);

  /// @brief Method vqsubd_s64, addr 0x62d042c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqsubd_s64(int64_t a0, int64_t a1);

  /// @brief Method vqsubd_u64, addr 0x62d050c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqsubd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vqsubh_s16, addr 0x62d03bc, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqsubh_s16(int16_t a0, int16_t a1);

  /// @brief Method vqsubh_u16, addr 0x62d049c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqsubh_u16(uint16_t a0, uint16_t a1);

  /// @brief Method vqsubq_s16, addr 0x62c44a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_s32, addr 0x62c4514, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_s64, addr 0x62c4584, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_s8, addr 0x62c4434, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_u16, addr 0x62c4664, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_u32, addr 0x62c46d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_u64, addr 0x62c4744, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubq_u8, addr 0x62c45f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqsubs_s32, addr 0x62d03f4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqsubs_s32(int32_t a0, int32_t a1);

  /// @brief Method vqsubs_u32, addr 0x62d04d4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqsubs_u32(uint32_t a0, uint32_t a1);

  /// @brief Method vqtbl1_s8, addr 0x62dbaf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqtbl1_u8, addr 0x62dbb68, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vqtbl1q_s8, addr 0x62dbb30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqtbl1q_u8, addr 0x62dbb70, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vqtbx1_s8, addr 0x62dbb78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqtbx1_u8, addr 0x62dbbe8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vqtbx1q_s8, addr 0x62dbbb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vqtbx1q_u8, addr 0x62dbbf0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_s16, addr 0x62cecb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_s32, addr 0x62cecec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_s64, addr 0x62ced24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_u16, addr 0x62ced5c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_u32, addr 0x62ced64, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_high_u64, addr 0x62ced6c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vraddhn_s16, addr 0x62c2ddc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vraddhn_s32, addr 0x62c2e14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vraddhn_s64, addr 0x62c2e4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vraddhn_u16, addr 0x62c2e84, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vraddhn_u32, addr 0x62c2e8c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vraddhn_u64, addr 0x62c2e94, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrbit_s8, addr 0x62d8fe0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrbit_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrbit_u8, addr 0x62d9050, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrbit_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrbitq_s8, addr 0x62d9018, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrbitq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrbitq_u8, addr 0x62d9058, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrbitq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrecpe_f32, addr 0x62cbe24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrecpe_f64, addr 0x62d8340, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrecpe_u32, addr 0x62cbdb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecpe_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrecped_f64, addr 0x62d83e8, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrecped_f64(double_t a0);

  /// @brief Method vrecpeq_f32, addr 0x62cbe5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrecpeq_f64, addr 0x62d8378, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrecpeq_u32, addr 0x62cbdec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrecpes_f32, addr 0x62d83b0, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrecpes_f32(float_t a0);

  /// @brief Method vrecps_f32, addr 0x62cbe94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecps_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrecps_f64, addr 0x62d8420, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecps_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrecpsd_f64, addr 0x62d84c8, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrecpsd_f64(double_t a0, double_t a1);

  /// @brief Method vrecpsq_f32, addr 0x62cbecc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrecpsq_f64, addr 0x62d8458, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrecpss_f32, addr 0x62d8490, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrecpss_f32(float_t a0, float_t a1);

  /// @brief Method vrecpxd_f64, addr 0x62dbcb0, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrecpxd_f64(double_t a0);

  /// @brief Method vrecpxs_f32, addr 0x62dbc78, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrecpxs_f32(float_t a0);

  /// @brief Method vrev16_s8, addr 0x62cd8ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev16_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev16_u8, addr 0x62cd95c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev16_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev16q_s8, addr 0x62cd924, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev16q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev16q_u8, addr 0x62cd964, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev16q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev32_s16, addr 0x62cd85c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev32_s8, addr 0x62cd7ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev32_u16, addr 0x62cd8dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev32_u8, addr 0x62cd8cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev32q_s16, addr 0x62cd894, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev32q_s8, addr 0x62cd824, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev32q_u16, addr 0x62cd8e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev32q_u8, addr 0x62cd8d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64_f32, addr 0x62cd7dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_s16, addr 0x62cd6cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_s32, addr 0x62cd73c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_s8, addr 0x62cd65c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_u16, addr 0x62cd7bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_u32, addr 0x62cd7cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64_u8, addr 0x62cd7ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrev64q_f32, addr 0x62cd7e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_s16, addr 0x62cd704, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_s32, addr 0x62cd774, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_s8, addr 0x62cd694, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_u16, addr 0x62cd7c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_u32, addr 0x62cd7d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrev64q_u8, addr 0x62cd7b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrhadd_s16, addr 0x62c276c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhadd_s32, addr 0x62c27dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhadd_s8, addr 0x62c26fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhadd_u16, addr 0x62c28bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhadd_u32, addr 0x62c292c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhadd_u8, addr 0x62c284c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrhaddq_s16, addr 0x62c27a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrhaddq_s32, addr 0x62c2814, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrhaddq_s8, addr 0x62c2734, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrhaddq_u16, addr 0x62c28f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrhaddq_u32, addr 0x62c2964, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrhaddq_u8, addr 0x62c2884, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrnd_f32, addr 0x62d5494, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnd_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrnd_f64, addr 0x62d5504, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnd_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrnda_f32, addr 0x62d584c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnda_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrnda_f64, addr 0x62d58bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnda_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndaq_f32, addr 0x62d5884, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndaq_f64, addr 0x62d58f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndi_f32, addr 0x62d592c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndi_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndi_f64, addr 0x62d599c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndi_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndiq_f32, addr 0x62d5964, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndiq_f64, addr 0x62d59d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndm_f32, addr 0x62d568c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndm_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndm_f64, addr 0x62d56fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndm_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndmq_f32, addr 0x62d56c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndmq_f64, addr 0x62d5734, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndn_f32, addr 0x62d5574, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndn_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndn_f64, addr 0x62d55e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndn_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndnq_f32, addr 0x62d55ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndnq_f64, addr 0x62d561c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndns_f32, addr 0x62d5654, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrndns_f32(float_t a0);

  /// @brief Method vrndp_f32, addr 0x62d576c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndp_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndp_f64, addr 0x62d57dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndp_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndpq_f32, addr 0x62d57a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndpq_f64, addr 0x62d5814, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndq_f32, addr 0x62d54cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndq_f64, addr 0x62d553c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndx_f32, addr 0x62d5a0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndx_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndx_f64, addr 0x62d5a7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndx_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrndxq_f32, addr 0x62d5a44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrndxq_f64, addr 0x62d5ab4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrshl_s16, addr 0x62c704c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_s32, addr 0x62c70bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_s64, addr 0x62c712c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_s8, addr 0x62c6fdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_u16, addr 0x62c720c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_u32, addr 0x62c727c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_u64, addr 0x62c72ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshl_u8, addr 0x62c719c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrshld_s64, addr 0x62d2ef4, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vrshld_s64(int64_t a0, int64_t a1);

  /// @brief Method vrshld_u64, addr 0x62d2f2c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vrshld_u64(uint64_t a0, int64_t a1);

  /// @brief Method vrshlq_s16, addr 0x62c7084, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_s32, addr 0x62c70f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_s64, addr 0x62c7164, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_s8, addr 0x62c7014, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_u16, addr 0x62c7244, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_u32, addr 0x62c72b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_u64, addr 0x62c7324, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshlq_u8, addr 0x62c71d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrshr_n_s16, addr 0x62c7dec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_s32, addr 0x62c7dfc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_s64, addr 0x62c7e0c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_s8, addr 0x62c7ddc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_u16, addr 0x62c7e2c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_u32, addr 0x62c7e3c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_u64, addr 0x62c7e4c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshr_n_u8, addr 0x62c7e1c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vrshrd_n_s64, addr 0x62d3144, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vrshrd_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vrshrd_n_u64, addr 0x62d317c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vrshrd_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vrshrn_high_n_s16, addr 0x62d3b6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_high_n_s32, addr 0x62d3ba4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_high_n_s64, addr 0x62d3bdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_high_n_u16, addr 0x62d3c14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_high_n_u32, addr 0x62d3c4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_high_n_u64, addr 0x62d3c84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrshrn_n_s16, addr 0x62c888c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrn_n_s32, addr 0x62c88c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrn_n_s64, addr 0x62c88fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrn_n_u16, addr 0x62c8934, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrn_n_u32, addr 0x62c896c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrn_n_u64, addr 0x62c89a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_s16, addr 0x62c7df4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_s32, addr 0x62c7e04, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_s64, addr 0x62c7e14, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_s8, addr 0x62c7de4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_u16, addr 0x62c7e34, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_u32, addr 0x62c7e44, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_u64, addr 0x62c7e54, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrshrq_n_u8, addr 0x62c7e24, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vrsqrte_f32, addr 0x62cbf74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrsqrte_f64, addr 0x62d85e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrsqrte_u32, addr 0x62cbf04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vrsqrted_f64, addr 0x62d8688, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrsqrted_f64(double_t a0);

  /// @brief Method vrsqrteq_f32, addr 0x62cbfac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrsqrteq_f64, addr 0x62d8618, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrsqrteq_u32, addr 0x62cbf3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vrsqrtes_f32, addr 0x62d8650, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrsqrtes_f32(float_t a0);

  /// @brief Method vrsqrts_f32, addr 0x62cbfe4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrsqrts_f64, addr 0x62d86c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vrsqrtsd_f64, addr 0x62d8768, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrsqrtsd_f64(double_t a0, double_t a1);

  /// @brief Method vrsqrtsq_f32, addr 0x62cc01c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsqrtsq_f64, addr 0x62d86f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsqrtss_f32, addr 0x62d8730, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrsqrtss_f32(float_t a0, float_t a1);

  /// @brief Method vrsra_n_s16, addr 0x62c81ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_s32, addr 0x62c81fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_s64, addr 0x62c820c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_s8, addr 0x62c81dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_u16, addr 0x62c822c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_u32, addr 0x62c823c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_u64, addr 0x62c824c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsra_n_u8, addr 0x62c821c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vrsrad_n_s64, addr 0x62d31cc, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vrsrad_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// @brief Method vrsrad_n_u64, addr 0x62d3204, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vrsrad_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// @brief Method vrsraq_n_s16, addr 0x62c81f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_s32, addr 0x62c8204, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_s64, addr 0x62c8214, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_s8, addr 0x62c81e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_u16, addr 0x62c8234, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_u32, addr 0x62c8244, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_u64, addr 0x62c8254, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsraq_n_u8, addr 0x62c8224, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vrsubhn_high_s16, addr 0x62d0604, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_high_s32, addr 0x62d063c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_high_s64, addr 0x62d0674, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_high_u16, addr 0x62d06ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_high_u32, addr 0x62d06b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_high_u64, addr 0x62d06bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vrsubhn_s16, addr 0x62c483c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsubhn_s32, addr 0x62c4874, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsubhn_s64, addr 0x62c48ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsubhn_u16, addr 0x62c48e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsubhn_u32, addr 0x62c48ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vrsubhn_u64, addr 0x62c48f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vset_lane_f32, addr 0x62cdecc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_f64, addr 0x62dbc38, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_s16, addr 0x62cde58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_s32, addr 0x62cde90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_s64, addr 0x62cdec8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s64(int64_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_s8, addr 0x62cde20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s8(int8_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_u16, addr 0x62cddac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u16(uint16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_u32, addr 0x62cdde4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u32(uint32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_u64, addr 0x62cde1c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u64(uint64_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vset_lane_u8, addr 0x62cdd74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u8(uint8_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsetq_lane_f32, addr 0x62ce0c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_f64, addr 0x62dbc40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_s16, addr 0x62ce01c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_s32, addr 0x62ce054, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_s64, addr 0x62ce08c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s64(int64_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_s8, addr 0x62cdfe4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s8(int8_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_u16, addr 0x62cdf3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u16(uint16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_u32, addr 0x62cdf74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u32(uint32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_u64, addr 0x62cdfac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u64(uint64_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsetq_lane_u8, addr 0x62cdf04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u8(uint8_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsha1cq_u32, addr 0x62dbe40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1cq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha1h_u32, addr 0x62dbee8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vsha1h_u32(uint32_t a0);

  /// @brief Method vsha1mq_u32, addr 0x62dbeb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1mq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha1pq_u32, addr 0x62dbe78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1pq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha1su0q_u32, addr 0x62dbf20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1su0q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha1su1q_u32, addr 0x62dbf58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1su1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsha256h2q_u32, addr 0x62dbfc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256h2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha256hq_u32, addr 0x62dbf90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256hq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsha256su0q_u32, addr 0x62dc000, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256su0q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsha256su1q_u32, addr 0x62dc038, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256su1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vshl_n_s16, addr 0x62c7acc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_s32, addr 0x62c7b3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_s64, addr 0x62c7bac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_s8, addr 0x62c7a5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_u16, addr 0x62c7c8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_u32, addr 0x62c7cfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_u64, addr 0x62c7d6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_n_u8, addr 0x62c7c1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshl_s16, addr 0x62c694c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_s32, addr 0x62c69bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_s64, addr 0x62c6a2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_s8, addr 0x62c68dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_u16, addr 0x62c6b0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_u32, addr 0x62c6b7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_u64, addr 0x62c6bec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshl_u8, addr 0x62c6a9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vshld_n_s64, addr 0x62d3134, size 0x8, virtual false, abstract: false, final false
  static inline int64_t vshld_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vshld_n_u64, addr 0x62d313c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t vshld_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vshld_s64, addr 0x62d2cc4, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vshld_s64(int64_t a0, int64_t a1);

  /// @brief Method vshld_u64, addr 0x62d2cfc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vshld_u64(uint64_t a0, int64_t a1);

  /// @brief Method vshll_high_n_s16, addr 0x62d3f94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_high_n_s32, addr 0x62d3fcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_high_n_s8, addr 0x62d3f5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_high_n_u16, addr 0x62d403c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_high_n_u32, addr 0x62d4074, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_high_n_u8, addr 0x62d4004, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshll_n_s16, addr 0x62c8b64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshll_n_s32, addr 0x62c8b9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshll_n_s8, addr 0x62c8b2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshll_n_u16, addr 0x62c8c0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshll_n_u32, addr 0x62c8c44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshll_n_u8, addr 0x62c8bd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshlq_n_s16, addr 0x62c7b04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_s32, addr 0x62c7b74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_s64, addr 0x62c7be4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_s8, addr 0x62c7a94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_u16, addr 0x62c7cc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_u32, addr 0x62c7d34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_u64, addr 0x62c7da4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_n_u8, addr 0x62c7c54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshlq_s16, addr 0x62c6984, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_s32, addr 0x62c69f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_s64, addr 0x62c6a64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_s8, addr 0x62c6914, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_u16, addr 0x62c6b44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_u32, addr 0x62c6bb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_u64, addr 0x62c6c24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshlq_u8, addr 0x62c6ad4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vshr_n_s16, addr 0x62c774c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_s32, addr 0x62c77bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_s64, addr 0x62c782c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_s8, addr 0x62c76dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_u16, addr 0x62c790c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_u32, addr 0x62c797c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_u64, addr 0x62c79ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshr_n_u8, addr 0x62c789c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// @brief Method vshrd_n_s64, addr 0x62d3124, size 0x8, virtual false, abstract: false, final false
  static inline int64_t vshrd_n_s64(int64_t a0, int32_t a1);

  /// @brief Method vshrd_n_u64, addr 0x62d312c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t vshrd_n_u64(uint64_t a0, int32_t a1);

  /// @brief Method vshrn_high_n_s16, addr 0x62d34dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_high_n_s32, addr 0x62d3514, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_high_n_s64, addr 0x62d354c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_high_n_u16, addr 0x62d3584, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_high_n_u32, addr 0x62d35bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_high_n_u64, addr 0x62d35f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vshrn_n_s16, addr 0x62c849c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrn_n_s32, addr 0x62c84d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrn_n_s64, addr 0x62c850c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrn_n_u16, addr 0x62c8544, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrn_n_u32, addr 0x62c857c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrn_n_u64, addr 0x62c85b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_s16, addr 0x62c7784, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_s32, addr 0x62c77f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_s64, addr 0x62c7864, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_s8, addr 0x62c7714, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_u16, addr 0x62c7944, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_u32, addr 0x62c79b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_u64, addr 0x62c7a24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vshrq_n_u8, addr 0x62c78d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// @brief Method vsli_n_s16, addr 0x62c906c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_s32, addr 0x62c90dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_s64, addr 0x62c914c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_s8, addr 0x62c8ffc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_u16, addr 0x62c922c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_u32, addr 0x62c929c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_u64, addr 0x62c930c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsli_n_u8, addr 0x62c91bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vslid_n_s64, addr 0x62d411c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vslid_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// @brief Method vslid_n_u64, addr 0x62d4154, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vslid_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// @brief Method vsliq_n_s16, addr 0x62c90a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_s32, addr 0x62c9114, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_s64, addr 0x62c9184, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_s8, addr 0x62c9034, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_u16, addr 0x62c9264, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_u32, addr 0x62c92d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_u64, addr 0x62c9344, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsliq_n_u8, addr 0x62c91f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsqadd_u16, addr 0x62ce9c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsqadd_u32, addr 0x62cea34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsqadd_u64, addr 0x62ceaa4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsqadd_u8, addr 0x62ce954, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsqaddb_u8, addr 0x62ceb14, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vsqaddb_u8(uint8_t a0, int8_t a1);

  /// @brief Method vsqaddd_u64, addr 0x62cebbc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vsqaddd_u64(uint64_t a0, int64_t a1);

  /// @brief Method vsqaddh_u16, addr 0x62ceb4c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vsqaddh_u16(uint16_t a0, int16_t a1);

  /// @brief Method vsqaddq_u16, addr 0x62ce9fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsqaddq_u32, addr 0x62cea6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsqaddq_u64, addr 0x62ceadc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsqaddq_u8, addr 0x62ce98c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsqadds_u32, addr 0x62ceb84, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vsqadds_u32(uint32_t a0, int32_t a1);

  /// @brief Method vsqrt_f32, addr 0x62d8500, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vsqrt_f64, addr 0x62d8570, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// @brief Method vsqrtq_f32, addr 0x62d8538, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vsqrtq_f64, addr 0x62d85a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// @brief Method vsra_n_s16, addr 0x62c7ecc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_s32, addr 0x62c7f3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_s64, addr 0x62c7fac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_s8, addr 0x62c7e5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_u16, addr 0x62c808c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_u32, addr 0x62c80fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_u64, addr 0x62c816c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsra_n_u8, addr 0x62c801c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsrad_n_s64, addr 0x62d31b4, size 0xc, virtual false, abstract: false, final false
  static inline int64_t vsrad_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// @brief Method vsrad_n_u64, addr 0x62d31c0, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t vsrad_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// @brief Method vsraq_n_s16, addr 0x62c7f04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_s32, addr 0x62c7f74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_s64, addr 0x62c7fe4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_s8, addr 0x62c7e94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_u16, addr 0x62c80c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_u32, addr 0x62c8134, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_u64, addr 0x62c81a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsraq_n_u8, addr 0x62c8054, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsri_n_s16, addr 0x62c8cec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_s32, addr 0x62c8d5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_s64, addr 0x62c8dcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_s8, addr 0x62c8c7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_u16, addr 0x62c8eac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_u32, addr 0x62c8f1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_u64, addr 0x62c8f8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsri_n_u8, addr 0x62c8e3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// @brief Method vsrid_n_s64, addr 0x62d40ac, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vsrid_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// @brief Method vsrid_n_u64, addr 0x62d40e4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vsrid_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// @brief Method vsriq_n_s16, addr 0x62c8d24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_s32, addr 0x62c8d94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_s64, addr 0x62c8e04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_s8, addr 0x62c8cb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_u16, addr 0x62c8ee4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_u32, addr 0x62c8f54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_u64, addr 0x62c8fc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vsriq_n_u8, addr 0x62c8e74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// @brief Method vst1_f32, addr 0x62dd168, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_f32(float_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_f64, addr 0x62dd178, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_f64(double_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_s16, addr 0x62dd0f8, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s16(int16_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_s32, addr 0x62dd108, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s32(int32_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_s64, addr 0x62dd118, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s64(int64_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_s8, addr 0x62dd0e8, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s8(int8_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_u16, addr 0x62dd138, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u16(uint16_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_u32, addr 0x62dd148, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u32(uint32_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_u64, addr 0x62dd158, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u64(uint64_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1_u8, addr 0x62dd128, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u8(uint8_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vst1q_f32, addr 0x62dd170, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_f32(float_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_f64, addr 0x62dd180, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_f64(double_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_s16, addr 0x62dd100, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s16(int16_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_s32, addr 0x62dd110, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s32(int32_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_s64, addr 0x62dd120, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s64(int64_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_s8, addr 0x62dd0f0, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s8(int8_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_u16, addr 0x62dd140, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u16(uint16_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_u32, addr 0x62dd150, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u32(uint32_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_u64, addr 0x62dd160, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u64(uint64_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vst1q_u8, addr 0x62dd130, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u8(uint8_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsub_f32, addr 0x62c3e4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_f64, addr 0x62d0004, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_s16, addr 0x62c3cbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_s32, addr 0x62c3d2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_s64, addr 0x62c3d9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_s8, addr 0x62c3c4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_u16, addr 0x62c3e1c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_u32, addr 0x62c3e2c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_u64, addr 0x62c3e3c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsub_u8, addr 0x62c3e0c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubd_s64, addr 0x62d0074, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vsubd_s64(int64_t a0, int64_t a1);

  /// @brief Method vsubd_u64, addr 0x62d00ac, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vsubd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vsubhn_high_s16, addr 0x62d0544, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_high_s32, addr 0x62d057c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_high_s64, addr 0x62d05b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_high_u16, addr 0x62d05ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_high_u32, addr 0x62d05f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_high_u64, addr 0x62d05fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// @brief Method vsubhn_s16, addr 0x62c477c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubhn_s32, addr 0x62c47b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubhn_s64, addr 0x62c47ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubhn_u16, addr 0x62c4824, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubhn_u32, addr 0x62c482c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubhn_u64, addr 0x62c4834, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_s16, addr 0x62d011c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_s32, addr 0x62d0154, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_s8, addr 0x62d00e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_u16, addr 0x62d01c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_u32, addr 0x62d01fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_high_u8, addr 0x62d018c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubl_s16, addr 0x62c3ef4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubl_s32, addr 0x62c3f2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubl_s8, addr 0x62c3ebc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubl_u16, addr 0x62c3f9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubl_u32, addr 0x62c3fd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubl_u8, addr 0x62c3f64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubq_f32, addr 0x62c3e84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_f64, addr 0x62d003c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_s16, addr 0x62c3cf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_s32, addr 0x62c3d64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_s64, addr 0x62c3dd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_s8, addr 0x62c3c84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_u16, addr 0x62c3e24, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_u32, addr 0x62c3e34, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_u64, addr 0x62c3e44, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubq_u8, addr 0x62c3e14, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_s16, addr 0x62d026c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_s32, addr 0x62d02a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_s8, addr 0x62d0234, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_u16, addr 0x62d0314, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_u32, addr 0x62d034c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_high_u8, addr 0x62d02dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vsubw_s16, addr 0x62c4044, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubw_s32, addr 0x62c407c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubw_s8, addr 0x62c400c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubw_u16, addr 0x62c40ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubw_u32, addr 0x62c4124, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vsubw_u8, addr 0x62c40b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtbl1_s8, addr 0x62cd96c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbl1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtbl1_u8, addr 0x62cd9a4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbl1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtbx1_s8, addr 0x62cd9ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbx1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vtbx1_u8, addr 0x62cd9e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbx1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// @brief Method vtrn1_f32, addr 0x62db908, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_s16, addr 0x62db7b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_s32, addr 0x62db828, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_s8, addr 0x62db748, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_u16, addr 0x62db8e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_u32, addr 0x62db8f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1_u8, addr 0x62db8d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn1q_f32, addr 0x62db910, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_f64, addr 0x62db918, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_s16, addr 0x62db7f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_s32, addr 0x62db860, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_s64, addr 0x62db898, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_s8, addr 0x62db780, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_u16, addr 0x62db8e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_u32, addr 0x62db8f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_u64, addr 0x62db900, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn1q_u8, addr 0x62db8d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2_f32, addr 0x62dbae0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_s16, addr 0x62db990, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_s32, addr 0x62dba00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_s8, addr 0x62db920, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_u16, addr 0x62dbab8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_u32, addr 0x62dbac8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2_u8, addr 0x62dbaa8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtrn2q_f32, addr 0x62dbae8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_f64, addr 0x62dbaf0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_s16, addr 0x62db9c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_s32, addr 0x62dba38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_s64, addr 0x62dba70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_s8, addr 0x62db958, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_u16, addr 0x62dbac0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_u32, addr 0x62dbad0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_u64, addr 0x62dbad8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtrn2q_u8, addr 0x62dbab0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtst_s16, addr 0x62c595c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_s32, addr 0x62c59cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_s64, addr 0x62d25b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_s8, addr 0x62c58ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_u16, addr 0x62c5a4c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_u32, addr 0x62c5a5c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_u64, addr 0x62d2624, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtst_u8, addr 0x62c5a3c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vtstd_s64, addr 0x62d2634, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vtstd_s64(int64_t a0, int64_t a1);

  /// @brief Method vtstd_u64, addr 0x62d266c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vtstd_u64(uint64_t a0, uint64_t a1);

  /// @brief Method vtstq_s16, addr 0x62c5994, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_s32, addr 0x62c5a04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_s64, addr 0x62d25ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_s8, addr 0x62c5924, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_u16, addr 0x62c5a54, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_u32, addr 0x62c5a64, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_u64, addr 0x62d262c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vtstq_u8, addr 0x62c5a44, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuqadd_s16, addr 0x62ce724, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuqadd_s32, addr 0x62ce794, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuqadd_s64, addr 0x62ce804, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuqadd_s8, addr 0x62ce6b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuqaddb_s8, addr 0x62ce874, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vuqaddb_s8(int8_t a0, uint8_t a1);

  /// @brief Method vuqaddd_s64, addr 0x62ce91c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vuqaddd_s64(int64_t a0, uint64_t a1);

  /// @brief Method vuqaddh_s16, addr 0x62ce8ac, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vuqaddh_s16(int16_t a0, uint16_t a1);

  /// @brief Method vuqaddq_s16, addr 0x62ce75c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuqaddq_s32, addr 0x62ce7cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuqaddq_s64, addr 0x62ce83c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuqaddq_s8, addr 0x62ce6ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuqadds_s32, addr 0x62ce8e4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vuqadds_s32(int32_t a0, uint32_t a1);

  /// @brief Method vuzp1_f32, addr 0x62db558, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_s16, addr 0x62db408, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_s32, addr 0x62db478, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_s8, addr 0x62db398, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_u16, addr 0x62db530, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_u32, addr 0x62db540, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1_u8, addr 0x62db520, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp1q_f32, addr 0x62db560, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_f64, addr 0x62db568, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_s16, addr 0x62db440, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_s32, addr 0x62db4b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_s64, addr 0x62db4e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_s8, addr 0x62db3d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_u16, addr 0x62db538, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_u32, addr 0x62db548, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_u64, addr 0x62db550, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp1q_u8, addr 0x62db528, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2_f32, addr 0x62db730, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_s16, addr 0x62db5e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_s32, addr 0x62db650, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_s8, addr 0x62db570, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_u16, addr 0x62db708, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_u32, addr 0x62db718, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2_u8, addr 0x62db6f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vuzp2q_f32, addr 0x62db738, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_f64, addr 0x62db740, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_s16, addr 0x62db618, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_s32, addr 0x62db688, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_s64, addr 0x62db6c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_s8, addr 0x62db5a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_u16, addr 0x62db710, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_u32, addr 0x62db720, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_u64, addr 0x62db728, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vuzp2q_u8, addr 0x62db700, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1_f32, addr 0x62db1a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_s16, addr 0x62db058, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_s32, addr 0x62db0c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_s8, addr 0x62dafe8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_u16, addr 0x62db180, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_u32, addr 0x62db190, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1_u8, addr 0x62db170, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip1q_f32, addr 0x62db1b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_f64, addr 0x62db1b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_s16, addr 0x62db090, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_s32, addr 0x62db100, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_s64, addr 0x62db138, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_s8, addr 0x62db020, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_u16, addr 0x62db188, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_u32, addr 0x62db198, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_u64, addr 0x62db1a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip1q_u8, addr 0x62db178, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2_f32, addr 0x62db380, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_s16, addr 0x62db230, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_s32, addr 0x62db2a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_s8, addr 0x62db1c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_u16, addr 0x62db358, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_u32, addr 0x62db368, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2_u8, addr 0x62db348, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// @brief Method vzip2q_f32, addr 0x62db388, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_f64, addr 0x62db390, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_s16, addr 0x62db268, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_s32, addr 0x62db2d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_s64, addr 0x62db310, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_s8, addr 0x62db1f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_u16, addr 0x62db360, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_u32, addr 0x62db370, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_u64, addr 0x62db378, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// @brief Method vzip2q_u8, addr 0x62db350, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17304 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17305 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::Arm, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
NEED_NO_BOX(::Unity::Burst::Intrinsics::Arm);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::Arm*, "Unity.Burst.Intrinsics", "Arm");
NEED_NO_BOX(::Unity::Burst::Intrinsics::Arm_Neon);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::Arm_Neon*, "Unity.Burst.Intrinsics", "Arm/Neon");
