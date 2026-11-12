#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/Arm.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::Unity::Burst::Intrinsics::Arm*);
MARK_REF_T(::Unity::Burst::Intrinsics::Arm_Neon*);
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::Arm*, "Unity.Burst.Intrinsics", "Arm");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::Arm_Neon*, "Unity.Burst.Intrinsics", "Arm/Neon");
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.Arm/Neon
class CORDL_TYPE Arm_Neon : public ::System::Object {
public:
  // Declarations
  static inline ::Unity::Burst::Intrinsics::Arm_Neon* New_ctor();

  /// [DebuggerStepThrough]
  /// @brief Method __crc32b, addr 0x68f8504, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32b(uint32_t a0, uint8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32cb, addr 0x68f85e4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32cb(uint32_t a0, uint8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32cd, addr 0x68f868c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32cd(uint32_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32ch, addr 0x68f861c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32ch(uint32_t a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32cw, addr 0x68f8654, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32cw(uint32_t a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32d, addr 0x68f85ac, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32d(uint32_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32h, addr 0x68f853c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32h(uint32_t a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32w, addr 0x68f8574, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32w(uint32_t a0, uint32_t a1);

  /// @brief Method .ctor, addr 0x68f961c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsNeonArmv82FeaturesSupported, addr 0x68ea600, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonArmv82FeaturesSupported();

  /// @brief Method get_IsNeonCryptoSupported, addr 0x68f82cc, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonCryptoSupported();

  /// @brief Method get_IsNeonDotProdSupported, addr 0x68f87a4, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonDotProdSupported();

  /// @brief Method get_IsNeonRDMASupported, addr 0x68f8a4c, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonRDMASupported();

  /// @brief Method get_IsNeonSupported, addr 0x68de3d8, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonSupported();

  /// [DebuggerStepThrough]
  /// @brief Method vaba_s16, addr 0x68e23d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaba_s32, addr 0x68e2440, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaba_s8, addr 0x68e2360, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaba_u16, addr 0x68e2520, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaba_u32, addr 0x68e2590, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaba_u8, addr 0x68e24b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_s16, addr 0x68eeda0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_s32, addr 0x68eedd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_s8, addr 0x68eed68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_u16, addr 0x68eee48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_u32, addr 0x68eee80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_u8, addr 0x68eee10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_s16, addr 0x68e2638, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_s32, addr 0x68e2670, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_s8, addr 0x68e2600, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_u16, addr 0x68e26e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_u32, addr 0x68e2718, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_u8, addr 0x68e26a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_s16, addr 0x68e2408, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_s32, addr 0x68e2478, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_s8, addr 0x68e2398, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_u16, addr 0x68e2558, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_u32, addr 0x68e25c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_u8, addr 0x68e24e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_f32, addr 0x68e21a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_f64, addr 0x68eeb38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_s16, addr 0x68e1f70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_s32, addr 0x68e1fe0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_s8, addr 0x68e1f00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_u16, addr 0x68e20c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_u32, addr 0x68e2130, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_u8, addr 0x68e2050, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdd_f64, addr 0x68eebe0, size 0x38, virtual false, abstract: false, final false
  static inline double_t vabdd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_s16, addr 0x68eec50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_s32, addr 0x68eec88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_s8, addr 0x68eec18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_u16, addr 0x68eecf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_u32, addr 0x68eed30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_u8, addr 0x68eecc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_s16, addr 0x68e2248, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_s32, addr 0x68e2280, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_s8, addr 0x68e2210, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_u16, addr 0x68e22f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_u32, addr 0x68e2328, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_u8, addr 0x68e22b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_f32, addr 0x68e21d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_f64, addr 0x68eeb70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_s16, addr 0x68e1fa8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_s32, addr 0x68e2018, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_s8, addr 0x68e1f38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_u16, addr 0x68e20f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_u32, addr 0x68e2168, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_u8, addr 0x68e2088, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabds_f32, addr 0x68eeba8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vabds_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_f32, addr 0x68e7a28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_f64, addr 0x68f43ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_s16, addr 0x68e7948, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_s32, addr 0x68e79b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_s64, addr 0x68f4304, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_s8, addr 0x68e78d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsd_s64, addr 0x68f433c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vabsd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_f32, addr 0x68e7a60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_f64, addr 0x68f43e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_s16, addr 0x68e7980, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_s32, addr 0x68e79f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_s64, addr 0x68f4374, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_s8, addr 0x68e7910, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_f32, addr 0x68de5e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_f64, addr 0x68ea608, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_s16, addr 0x68de450, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_s32, addr 0x68de4c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_s64, addr 0x68de530, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_s8, addr 0x68de3e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_u16, addr 0x68de5b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_u32, addr 0x68de5c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_u64, addr 0x68de5d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_u8, addr 0x68de5a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddd_s64, addr 0x68ea678, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddd_u64, addr 0x68ea6b0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_s16, addr 0x68eb088, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_s32, addr 0x68eb0c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_s64, addr 0x68eb0f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_u16, addr 0x68eb130, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_u32, addr 0x68eb138, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_u64, addr 0x68eb140, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_s16, addr 0x68df1b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_s32, addr 0x68df1e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_s64, addr 0x68df220, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_u16, addr 0x68df258, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_u32, addr 0x68df260, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_u64, addr 0x68df268, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_s16, addr 0x68ea720, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_s32, addr 0x68ea758, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_s8, addr 0x68ea6e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_u16, addr 0x68ea7c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_u32, addr 0x68ea800, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_u8, addr 0x68ea790, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_s16, addr 0x68de688, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_s32, addr 0x68de6c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_s8, addr 0x68de650, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_u16, addr 0x68de730, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_u32, addr 0x68de768, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_u8, addr 0x68de6f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_s16, addr 0x68f6a30, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddlv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_s32, addr 0x68f6aa0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddlv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_s8, addr 0x68f69c0, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddlv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_u16, addr 0x68f6b80, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddlv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_u32, addr 0x68f6bf0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddlv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_u8, addr 0x68f6b10, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddlv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_s16, addr 0x68f6a68, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddlvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_s32, addr 0x68f6ad8, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddlvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_s8, addr 0x68f69f8, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddlvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_u16, addr 0x68f6bb8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddlvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_u32, addr 0x68f6c28, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddlvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_u8, addr 0x68f6b48, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddlvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_f32, addr 0x68de618, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_f64, addr 0x68ea640, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_s16, addr 0x68de488, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_s32, addr 0x68de4f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_s64, addr 0x68de568, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_s8, addr 0x68de418, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_u16, addr 0x68de5b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_u32, addr 0x68de5c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_u64, addr 0x68de5d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_u8, addr 0x68de5a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_f32, addr 0x68f6918, size 0x38, virtual false, abstract: false, final false
  static inline float_t vaddv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_s16, addr 0x68f6678, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_s32, addr 0x68f66e8, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_s8, addr 0x68f6608, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vaddv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_u16, addr 0x68f6800, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_u32, addr 0x68f6870, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_u8, addr 0x68f6790, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vaddv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_f32, addr 0x68f6950, size 0x38, virtual false, abstract: false, final false
  static inline float_t vaddvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_f64, addr 0x68f6988, size 0x38, virtual false, abstract: false, final false
  static inline double_t vaddvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_s16, addr 0x68f66b0, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_s32, addr 0x68f6720, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_s64, addr 0x68f6758, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddvq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_s8, addr 0x68f6640, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vaddvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_u16, addr 0x68f6838, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_u32, addr 0x68f68a8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_u64, addr 0x68f68e0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddvq_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_u8, addr 0x68f67c8, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vaddvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_s16, addr 0x68ea870, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_s32, addr 0x68ea8a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_s8, addr 0x68ea838, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_u16, addr 0x68ea918, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_u32, addr 0x68ea950, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_u8, addr 0x68ea8e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_s16, addr 0x68de7d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_s32, addr 0x68de810, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_s8, addr 0x68de7a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_u16, addr 0x68de880, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_u32, addr 0x68de8b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_u8, addr 0x68de848, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaesdq_u8, addr 0x68f86fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaesdq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaeseq_u8, addr 0x68f86c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaeseq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaesimcq_u8, addr 0x68f876c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaesimcq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaesmcq_u8, addr 0x68f8734, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaesmcq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vand_s16, addr 0x68e8618, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_s32, addr 0x68e8628, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_s64, addr 0x68e8638, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_s8, addr 0x68e85a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_u16, addr 0x68e8658, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_u32, addr 0x68e8668, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_u64, addr 0x68e8678, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_u8, addr 0x68e8648, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_s16, addr 0x68e8620, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_s32, addr 0x68e8630, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_s64, addr 0x68e8640, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_s8, addr 0x68e85e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_u16, addr 0x68e8660, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_u32, addr 0x68e8670, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_u64, addr 0x68e8680, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_u8, addr 0x68e8650, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_s16, addr 0x68e88b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_s32, addr 0x68e88c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_s64, addr 0x68e88d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_s8, addr 0x68e8848, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_u16, addr 0x68e88f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_u32, addr 0x68e8908, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_u64, addr 0x68e8918, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_u8, addr 0x68e88e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_s16, addr 0x68e88c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_s32, addr 0x68e88d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_s64, addr 0x68e88e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_s8, addr 0x68e8880, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_u16, addr 0x68e8900, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_u32, addr 0x68e8910, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_u64, addr 0x68e8920, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_u8, addr 0x68e88f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_f32, addr 0x68e8ae8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_f64, addr 0x68f4c34, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_s16, addr 0x68e8a78, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_s32, addr 0x68e8a88, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_s64, addr 0x68e8a98, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_s8, addr 0x68e8a08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_u16, addr 0x68e8ab8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_u32, addr 0x68e8ac8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_u64, addr 0x68e8ad8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_u8, addr 0x68e8aa8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_f32, addr 0x68e8af0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_f64, addr 0x68f4c3c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_s16, addr 0x68e8a80, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_s32, addr 0x68e8a90, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_s64, addr 0x68e8aa0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_s8, addr 0x68e8a40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_u16, addr 0x68e8ac0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_u32, addr 0x68e8ad0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_u64, addr 0x68e8ae0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_u8, addr 0x68e8ab0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vcage_f32, addr 0x68e1bc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcage_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcage_f64, addr 0x68ee6c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcage_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaged_f64, addr 0x68ee770, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcaged_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcageq_f32, addr 0x68e1bf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcageq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcageq_f64, addr 0x68ee700, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcageq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcages_f32, addr 0x68ee738, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcages_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagt_f32, addr 0x68e1ca0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcagt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagt_f64, addr 0x68ee888, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcagt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagtd_f64, addr 0x68ee930, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcagtd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagtq_f32, addr 0x68e1cd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagtq_f64, addr 0x68ee8c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagts_f32, addr 0x68ee8f8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcagts_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcale_f32, addr 0x68e1c30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcale_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcale_f64, addr 0x68ee7a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcale_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaled_f64, addr 0x68ee850, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcaled_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaleq_f32, addr 0x68e1c68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaleq_f64, addr 0x68ee7e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcales_f32, addr 0x68ee818, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcales_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcalt_f32, addr 0x68e1d10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcalt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcalt_f64, addr 0x68ee968, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcalt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaltd_f64, addr 0x68eea10, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcaltd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaltq_f32, addr 0x68e1d48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaltq_f64, addr 0x68ee9a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcalts_f32, addr 0x68ee9d8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcalts_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_f32, addr 0x68e0f10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_f64, addr 0x68ecbd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_s16, addr 0x68e0e00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_s32, addr 0x68e0e70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_s64, addr 0x68ecb58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_s8, addr 0x68e0d90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_u16, addr 0x68e0ef0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_u32, addr 0x68e0f00, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_u64, addr 0x68ecbc8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_u8, addr 0x68e0ee0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqd_f64, addr 0x68eccf0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqd_s64, addr 0x68ecc48, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqd_u64, addr 0x68ecc80, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_f32, addr 0x68e0f48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_f64, addr 0x68ecc10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_s16, addr 0x68e0e38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_s32, addr 0x68e0ea8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_s64, addr 0x68ecb90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_s8, addr 0x68e0dc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_u16, addr 0x68e0ef8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_u32, addr 0x68e0f08, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_u64, addr 0x68ecbd0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_u8, addr 0x68e0ee8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqs_f32, addr 0x68eccb8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vceqs_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_f32, addr 0x68ecea8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_f64, addr 0x68ecf98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_s16, addr 0x68ecd98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_s32, addr 0x68ece08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_s64, addr 0x68ecf18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_s8, addr 0x68ecd28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_u16, addr 0x68ece88, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_u32, addr 0x68ece98, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_u64, addr 0x68ecf88, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_u8, addr 0x68ece78, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzd_f64, addr 0x68ed0b0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqzd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzd_s64, addr 0x68ed008, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqzd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzd_u64, addr 0x68ed040, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqzd_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_f32, addr 0x68ecee0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_f64, addr 0x68ecfd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_s16, addr 0x68ecdd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_s32, addr 0x68ece40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_s64, addr 0x68ecf50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_s8, addr 0x68ecd60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_u16, addr 0x68ece90, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_u32, addr 0x68ecea0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_u64, addr 0x68ecf90, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_u8, addr 0x68ece80, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzs_f32, addr 0x68ed078, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vceqzs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_f32, addr 0x68e1220, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_f64, addr 0x68ed1c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_s16, addr 0x68e0ff0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_s32, addr 0x68e1060, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_s64, addr 0x68ed0e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_s8, addr 0x68e0f80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_u16, addr 0x68e1140, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_u32, addr 0x68e11b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_u64, addr 0x68ed158, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_u8, addr 0x68e10d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcged_f64, addr 0x68ed2e0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcged_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcged_s64, addr 0x68ed238, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcged_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcged_u64, addr 0x68ed270, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcged_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_f32, addr 0x68e1258, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_f64, addr 0x68ed200, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_s16, addr 0x68e1028, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_s32, addr 0x68e1098, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_s64, addr 0x68ed120, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_s8, addr 0x68e0fb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_u16, addr 0x68e1178, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_u32, addr 0x68e11e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_u64, addr 0x68ed190, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_u8, addr 0x68e1108, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcges_f32, addr 0x68ed2a8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcges_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_f32, addr 0x68ed4d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_f64, addr 0x68ed548, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_s16, addr 0x68ed388, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_s32, addr 0x68ed3f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_s64, addr 0x68ed468, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_s8, addr 0x68ed318, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezd_f64, addr 0x68ed628, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgezd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezd_s64, addr 0x68ed5b8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgezd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_f32, addr 0x68ed510, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_f64, addr 0x68ed580, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_s16, addr 0x68ed3c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_s32, addr 0x68ed430, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_s64, addr 0x68ed4a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_s8, addr 0x68ed350, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezs_f32, addr 0x68ed5f0, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcgezs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_f32, addr 0x68e1840, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_f64, addr 0x68edcb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_s16, addr 0x68e1610, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_s32, addr 0x68e1680, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_s64, addr 0x68edbd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_s8, addr 0x68e15a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_u16, addr 0x68e1760, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_u32, addr 0x68e17d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_u64, addr 0x68edc48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_u8, addr 0x68e16f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtd_f64, addr 0x68eddd0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtd_s64, addr 0x68edd28, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtd_u64, addr 0x68edd60, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_f32, addr 0x68e1878, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_f64, addr 0x68edcf0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_s16, addr 0x68e1648, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_s32, addr 0x68e16b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_s64, addr 0x68edc10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_s8, addr 0x68e15d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_u16, addr 0x68e1798, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_u32, addr 0x68e1808, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_u64, addr 0x68edc80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_u8, addr 0x68e1728, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgts_f32, addr 0x68edd98, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcgts_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_f32, addr 0x68edfc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_f64, addr 0x68ee038, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_s16, addr 0x68ede78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_s32, addr 0x68edee8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_s64, addr 0x68edf58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_s8, addr 0x68ede08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzd_f64, addr 0x68ee118, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtzd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzd_s64, addr 0x68ee0a8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtzd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_f32, addr 0x68ee000, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_f64, addr 0x68ee070, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_s16, addr 0x68edeb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_s32, addr 0x68edf20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_s64, addr 0x68edf90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_s8, addr 0x68ede40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzs_f32, addr 0x68ee0e0, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcgtzs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_f32, addr 0x68e1530, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_f64, addr 0x68ed740, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_s16, addr 0x68e1300, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_s32, addr 0x68e1370, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_s64, addr 0x68ed660, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_s8, addr 0x68e1290, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_u16, addr 0x68e1450, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_u32, addr 0x68e14c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_u64, addr 0x68ed6d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_u8, addr 0x68e13e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcled_f64, addr 0x68ed858, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcled_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcled_s64, addr 0x68ed7b0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcled_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcled_u64, addr 0x68ed7e8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcled_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_f32, addr 0x68e1568, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_f64, addr 0x68ed778, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_s16, addr 0x68e1338, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_s32, addr 0x68e13a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_s64, addr 0x68ed698, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_s8, addr 0x68e12c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_u16, addr 0x68e1488, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_u32, addr 0x68e14f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_u64, addr 0x68ed708, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_u8, addr 0x68e1418, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcles_f32, addr 0x68ed820, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcles_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_f32, addr 0x68eda50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_f64, addr 0x68edac0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_s16, addr 0x68ed900, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_s32, addr 0x68ed970, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_s64, addr 0x68ed9e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_s8, addr 0x68ed890, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezd_f64, addr 0x68edba0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vclezd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezd_s64, addr 0x68edb30, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vclezd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_f32, addr 0x68eda88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_f64, addr 0x68edaf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_s16, addr 0x68ed938, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_s32, addr 0x68ed9a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_s64, addr 0x68eda18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_s8, addr 0x68ed8c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezs_f32, addr 0x68edb68, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vclezs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcls_s16, addr 0x68e7f68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcls_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcls_s32, addr 0x68e7fd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcls_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcls_s8, addr 0x68e7ef8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcls_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclsq_s16, addr 0x68e7fa0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclsq_s32, addr 0x68e8010, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclsq_s8, addr 0x68e7f30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_f32, addr 0x68e1b50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_f64, addr 0x68ee230, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_s16, addr 0x68e1920, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_s32, addr 0x68e1990, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_s64, addr 0x68ee150, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_s8, addr 0x68e18b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_u16, addr 0x68e1a70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_u32, addr 0x68e1ae0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_u64, addr 0x68ee1c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_u8, addr 0x68e1a00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltd_f64, addr 0x68ee348, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltd_s64, addr 0x68ee2a0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltd_u64, addr 0x68ee2d8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_f32, addr 0x68e1b88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_f64, addr 0x68ee268, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_s16, addr 0x68e1958, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_s32, addr 0x68e19c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_s64, addr 0x68ee188, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_s8, addr 0x68e18e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_u16, addr 0x68e1aa8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_u32, addr 0x68e1b18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_u64, addr 0x68ee1f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_u8, addr 0x68e1a38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclts_f32, addr 0x68ee310, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vclts_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_f32, addr 0x68ee540, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_f64, addr 0x68ee5b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_s16, addr 0x68ee3f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_s32, addr 0x68ee460, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_s64, addr 0x68ee4d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_s8, addr 0x68ee380, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzd_f64, addr 0x68ee690, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltzd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzd_s64, addr 0x68ee620, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltzd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_f32, addr 0x68ee578, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_f64, addr 0x68ee5e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_s16, addr 0x68ee428, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_s32, addr 0x68ee498, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_s64, addr 0x68ee508, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_s8, addr 0x68ee3b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzs_f32, addr 0x68ee658, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcltzs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_s16, addr 0x68e80b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_s32, addr 0x68e8128, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_s8, addr 0x68e8048, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_u16, addr 0x68e81a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_u32, addr 0x68e81b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_u8, addr 0x68e8198, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_s16, addr 0x68e80f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_s32, addr 0x68e8160, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_s8, addr 0x68e8080, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_u16, addr 0x68e81b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_u32, addr 0x68e81c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_u8, addr 0x68e81a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcnt_s8, addr 0x68e81c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcnt_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcnt_u8, addr 0x68e8238, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcnt_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcntq_s8, addr 0x68e8200, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcntq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcntq_u8, addr 0x68e8240, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcntq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_f16, addr 0x68f9430, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_f16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_f32, addr 0x68f9434, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_f64, addr 0x68f9438, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_s16, addr 0x68f9414, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_s32, addr 0x68f9418, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_s64, addr 0x68f941c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_s8, addr 0x68f9410, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_u16, addr 0x68f9424, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_u32, addr 0x68f9428, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_u64, addr 0x68f942c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_u8, addr 0x68f9420, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_f32, addr 0x68f4f64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_f64, addr 0x68f4fd4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_s16, addr 0x68f4cb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_s32, addr 0x68f4d24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_s64, addr 0x68f4d94, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_s8, addr 0x68f4c44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_u16, addr 0x68f4e44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_u32, addr 0x68f4eb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_u64, addr 0x68f4f24, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_u8, addr 0x68f4dd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_f32, addr 0x68f5394, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_f64, addr 0x68f5404, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_s16, addr 0x68f5084, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_s32, addr 0x68f50f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_s64, addr 0x68f5164, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_s8, addr 0x68f5014, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_u16, addr 0x68f5244, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_u32, addr 0x68f52b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_u64, addr 0x68f5324, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_u8, addr 0x68f51d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_f32, addr 0x68f4f9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_f64, addr 0x68f4fdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_s16, addr 0x68f4cec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_s32, addr 0x68f4d5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_s64, addr 0x68f4d9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_s8, addr 0x68f4c7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_u16, addr 0x68f4e7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_u32, addr 0x68f4eec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_u64, addr 0x68f4f2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_u8, addr 0x68f4e0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_f32, addr 0x68f53cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_f64, addr 0x68f543c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_s16, addr 0x68f50bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_s32, addr 0x68f512c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_s64, addr 0x68f519c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_s8, addr 0x68f504c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_u16, addr 0x68f527c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_u32, addr 0x68f52ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_u64, addr 0x68f535c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_u8, addr 0x68f520c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_f16, addr 0x68f91e4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f16(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_f32, addr 0x68f91e8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f32(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_f64, addr 0x68f91ec, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_s16, addr 0x68f91c8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s16(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_s32, addr 0x68f91cc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s32(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_s64, addr 0x68f91d0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_s8, addr 0x68f91c4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s8(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_u16, addr 0x68f91d8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u16(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_u32, addr 0x68f91dc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u32(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_u64, addr 0x68f91e0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_u8, addr 0x68f91d4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u8(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f32_f64, addr 0x68f17a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f32_s32, addr 0x68e59d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f32_u32, addr 0x68e5a40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f64_f32, addr 0x68f1810, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvt_f64_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f64_s64, addr 0x68f1490, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f64_u64, addr 0x68f1500, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_u64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_high_f32_f64, addr 0x68f17d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f32_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_high_f64_f32, addr 0x68f1848, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f64_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_f32_s32, addr 0x68e5ab0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_f32_u32, addr 0x68e5b20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_f64_s64, addr 0x68f1650, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_f64_u64, addr 0x68f16c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_s32_f32, addr 0x68e58f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s32_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_s64_f64, addr 0x68f12d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s64_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_u32_f32, addr 0x68e5960, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u32_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_u64_f64, addr 0x68f1340, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u64_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_s32_f32, addr 0x68e5810, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_s64_f64, addr 0x68f0bd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_u32_f32, addr 0x68e5880, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_u64_f64, addr 0x68f0c40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvta_s32_f32, addr 0x68f08c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvta_s64_f64, addr 0x68f0f50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvta_u32_f32, addr 0x68f0930, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvta_u64_f64, addr 0x68f0fc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtad_s64_f64, addr 0x68f11f0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtad_s64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtad_u64_f64, addr 0x68f1228, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtad_u64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtaq_s32_f32, addr 0x68f08f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtaq_s64_f64, addr 0x68f0f88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtaq_u32_f32, addr 0x68f0968, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtaq_u64_f64, addr 0x68f0ff8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtas_s32_f32, addr 0x68f0b60, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtas_s32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtas_u32_f32, addr 0x68f0b98, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtas_u32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_f64_s64, addr 0x68f1570, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_f64_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_f64_u64, addr 0x68f15a8, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_f64_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_n_f64_s64, addr 0x68f1730, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_n_f64_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_n_f64_u64, addr 0x68f1768, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_n_f64_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_n_s64_f64, addr 0x68f13b0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtd_n_s64_f64(double_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_n_u64_f64, addr 0x68f13e8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtd_n_u64_f64(double_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_s64_f64, addr 0x68f1030, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtd_s64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_u64_f64, addr 0x68f1068, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtd_u64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtm_s32_f32, addr 0x68f0700, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtm_s64_f64, addr 0x68f0d90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtm_u32_f32, addr 0x68f0770, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtm_u64_f64, addr 0x68f0e00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmd_s64_f64, addr 0x68f1110, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtmd_s64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmd_u64_f64, addr 0x68f1148, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtmd_u64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmq_s32_f32, addr 0x68f0738, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmq_s64_f64, addr 0x68f0dc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmq_u32_f32, addr 0x68f07a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmq_u64_f64, addr 0x68f0e38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtms_s32_f32, addr 0x68f0a80, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtms_s32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtms_u32_f32, addr 0x68f0ab8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtms_u32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtn_s32_f32, addr 0x68f0620, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtn_s64_f64, addr 0x68f0cb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtn_u32_f32, addr 0x68f0690, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtn_u64_f64, addr 0x68f0d20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnd_s64_f64, addr 0x68f10a0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtnd_s64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnd_u64_f64, addr 0x68f10d8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtnd_u64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnq_s32_f32, addr 0x68f0658, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnq_s64_f64, addr 0x68f0ce8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnq_u32_f32, addr 0x68f06c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnq_u64_f64, addr 0x68f0d58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtns_s32_f32, addr 0x68f0a10, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtns_s32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtns_u32_f32, addr 0x68f0a48, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtns_u32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtp_s32_f32, addr 0x68f07e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtp_s64_f64, addr 0x68f0e70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtp_u32_f32, addr 0x68f0850, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtp_u64_f64, addr 0x68f0ee0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpd_s64_f64, addr 0x68f1180, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtpd_s64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpd_u64_f64, addr 0x68f11b8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtpd_u64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpq_s32_f32, addr 0x68f0818, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpq_s64_f64, addr 0x68f0ea8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpq_u32_f32, addr 0x68f0888, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpq_u64_f64, addr 0x68f0f18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtps_s32_f32, addr 0x68f0af0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtps_s32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtps_u32_f32, addr 0x68f0b28, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtps_u32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_f32_s32, addr 0x68e5a08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_f32_u32, addr 0x68e5a78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_f64_s64, addr 0x68f14c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_f64_u64, addr 0x68f1538, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_f32_s32, addr 0x68e5ae8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_f32_u32, addr 0x68e5b58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_f64_s64, addr 0x68f1688, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_f64_u64, addr 0x68f16f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_s32_f32, addr 0x68e5928, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s32_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_s64_f64, addr 0x68f1308, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s64_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_u32_f32, addr 0x68e5998, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u32_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_u64_f64, addr 0x68f1378, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u64_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_s32_f32, addr 0x68e5848, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_s64_f64, addr 0x68f0c08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_u32_f32, addr 0x68e58b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_u64_f64, addr 0x68f0c78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_f32_s32, addr 0x68f1420, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_f32_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_f32_u32, addr 0x68f1458, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_f32_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_n_f32_s32, addr 0x68f15e0, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_n_f32_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_n_f32_u32, addr 0x68f1618, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_n_f32_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_n_s32_f32, addr 0x68f1260, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvts_n_s32_f32(float_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_n_u32_f32, addr 0x68f1298, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvts_n_u32_f32(float_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_s32_f32, addr 0x68f09a0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvts_s32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_u32_f32, addr 0x68f09d8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvts_u32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtx_f32_f64, addr 0x68f1880, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtx_f32_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtx_high_f32_f64, addr 0x68f18f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtx_high_f32_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtxd_f32_f64, addr 0x68f18b8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvtxd_f32_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdiv_f32, addr 0x68eb608, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdiv_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdiv_f64, addr 0x68eb678, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdiv_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdivq_f32, addr 0x68eb640, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdivq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdivq_f64, addr 0x68eb6b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdivq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_lane_s32, addr 0x68f88c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_lane_u32, addr 0x68f888c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_laneq_s32, addr 0x68f89a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_laneq_u32, addr 0x68f896c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_s32, addr 0x68f87e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_u32, addr 0x68f87ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_lane_s32, addr 0x68f8a14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_lane_u32, addr 0x68f89dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_laneq_s32, addr 0x68f8934, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_laneq_u32, addr 0x68f88fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_s32, addr 0x68f8854, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_u32, addr 0x68f881c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_f32, addr 0x68e8db0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_f64, addr 0x68f54f4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_s16, addr 0x68e8b68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_s32, addr 0x68e8bd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_s64, addr 0x68e8c48, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_s8, addr 0x68e8af8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_u16, addr 0x68e8cc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_u32, addr 0x68e8d34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_u64, addr 0x68e8da4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_u8, addr 0x68e8c54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_f32, addr 0x68f5880, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_f64, addr 0x68f58f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_s16, addr 0x68f5570, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_s32, addr 0x68f55e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_s64, addr 0x68f5650, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_s8, addr 0x68f5500, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_u16, addr 0x68f5730, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_u32, addr 0x68f57a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_u64, addr 0x68f5810, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_u8, addr 0x68f56c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_f32, addr 0x68f92d0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_f64, addr 0x68f92ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_s16, addr 0x68f9214, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_s32, addr 0x68f9238, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_s64, addr 0x68f9254, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_s8, addr 0x68f91f0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_u16, addr 0x68f9284, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u16(uint16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_u32, addr 0x68f92a8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_u64, addr 0x68f92c4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_u8, addr 0x68f9260, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u8(uint8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupb_lane_s8, addr 0x68f5960, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vdupb_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupb_lane_u8, addr 0x68f5a0c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vdupb_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupb_laneq_s8, addr 0x68f5af8, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vdupb_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupb_laneq_u8, addr 0x68f5bd8, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vdupb_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_lane_f64, addr 0x68f5af0, size 0x8, virtual false, abstract: false, final false
  static inline double_t vdupd_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_lane_s64, addr 0x68f5a08, size 0x4, virtual false, abstract: false, final false
  static inline int64_t vdupd_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_lane_u64, addr 0x68f5ab4, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t vdupd_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_laneq_f64, addr 0x68f5cf0, size 0x38, virtual false, abstract: false, final false
  static inline double_t vdupd_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_laneq_s64, addr 0x68f5ba0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vdupd_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_laneq_u64, addr 0x68f5c80, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vdupd_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vduph_lane_s16, addr 0x68f5998, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vduph_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vduph_lane_u16, addr 0x68f5a44, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vduph_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vduph_laneq_s16, addr 0x68f5b30, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vduph_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vduph_laneq_u16, addr 0x68f5c10, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vduph_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_f32, addr 0x68e8de8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_f64, addr 0x68f54f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_s16, addr 0x68e8ba0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_s32, addr 0x68e8c10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_s64, addr 0x68e8c4c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_s8, addr 0x68e8b30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_u16, addr 0x68e8cfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_u32, addr 0x68e8d6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_u64, addr 0x68e8da8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_u8, addr 0x68e8c8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_f32, addr 0x68f58b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_f64, addr 0x68f5928, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_s16, addr 0x68f55a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_s32, addr 0x68f5618, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_s64, addr 0x68f5688, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_s8, addr 0x68f5538, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_u16, addr 0x68f5768, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_u32, addr 0x68f57d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_u64, addr 0x68f5848, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_u8, addr 0x68f56f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_f32, addr 0x68f92dc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_f64, addr 0x68f92f4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_s16, addr 0x68f9224, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_s32, addr 0x68f9244, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_s64, addr 0x68f9258, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_s8, addr 0x68f9200, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_u16, addr 0x68f9294, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u16(uint16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_u32, addr 0x68f92b4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_u64, addr 0x68f92c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_u8, addr 0x68f9270, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u8(uint8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_lane_f32, addr 0x68f5ab8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vdups_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_lane_s32, addr 0x68f59d0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vdups_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_lane_u32, addr 0x68f5a7c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vdups_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_laneq_f32, addr 0x68f5cb8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vdups_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_laneq_s32, addr 0x68f5b68, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vdups_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_laneq_u32, addr 0x68f5c48, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vdups_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_s16, addr 0x68e87d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_s32, addr 0x68e87e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_s64, addr 0x68e87f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_s8, addr 0x68e8768, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_u16, addr 0x68e8818, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_u32, addr 0x68e8828, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_u64, addr 0x68e8838, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_u8, addr 0x68e8808, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_s16, addr 0x68e87e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_s32, addr 0x68e87f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_s64, addr 0x68e8800, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_s8, addr 0x68e87a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_u16, addr 0x68e8820, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_u32, addr 0x68e8830, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_u64, addr 0x68e8840, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_u8, addr 0x68e8810, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vext_f32, addr 0x68e9a80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_f64, addr 0x68f7440, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_s16, addr 0x68e97d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_s32, addr 0x68e9848, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_s64, addr 0x68e98b8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_s8, addr 0x68e9768, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_u16, addr 0x68e9964, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_u32, addr 0x68e99d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_u64, addr 0x68e9a44, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_u8, addr 0x68e98f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_f32, addr 0x68e9ab8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_f64, addr 0x68f7444, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_s16, addr 0x68e9810, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_s32, addr 0x68e9880, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_s64, addr 0x68e98bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_s8, addr 0x68e97a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_u16, addr 0x68e999c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_u32, addr 0x68e9a0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_u64, addr 0x68e9a48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_u8, addr 0x68e992c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_f32, addr 0x68dfba0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_f64, addr 0x68eba68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_lane_f32, addr 0x68ebad8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)9)]
  /// @brief Method vfma_lane_f64, addr 0x68ebb48, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_laneq_f32, addr 0x68ebbc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_laneq_f64, addr 0x68ebc38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_n_f32, addr 0x68ea590, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_n_f64, addr 0x68f81ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, double_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)9)]
  /// @brief Method vfmad_lane_f64, addr 0x68ebbc0, size 0x8, virtual false, abstract: false, final false
  static inline double_t vfmad_lane_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmad_laneq_f64, addr 0x68ebce0, size 0x38, virtual false, abstract: false, final false
  static inline double_t vfmad_laneq_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_f32, addr 0x68dfbd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_f64, addr 0x68ebaa0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_lane_f32, addr 0x68ebb10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_lane_f64, addr 0x68ebb50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_laneq_f32, addr 0x68ebc00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_laneq_f64, addr 0x68ebc70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_n_f32, addr 0x68ea5c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_n_f64, addr 0x68f8224, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, double_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmas_lane_f32, addr 0x68ebb88, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmas_lane_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmas_laneq_f32, addr 0x68ebca8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmas_laneq_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_f32, addr 0x68dfc10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_f64, addr 0x68ebd18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_lane_f32, addr 0x68ebd88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)9)]
  /// @brief Method vfms_lane_f64, addr 0x68ebdf8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_laneq_f32, addr 0x68ebe78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_laneq_f64, addr 0x68ebee8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_n_f32, addr 0x68f817c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_n_f64, addr 0x68f825c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, double_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)9)]
  /// @brief Method vfmsd_lane_f64, addr 0x68ebe70, size 0x8, virtual false, abstract: false, final false
  static inline double_t vfmsd_lane_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsd_laneq_f64, addr 0x68ebf90, size 0x38, virtual false, abstract: false, final false
  static inline double_t vfmsd_laneq_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_f32, addr 0x68dfc48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_f64, addr 0x68ebd50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_lane_f32, addr 0x68ebdc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_lane_f64, addr 0x68ebe00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_laneq_f32, addr 0x68ebeb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_laneq_f64, addr 0x68ebf20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_n_f32, addr 0x68f81b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_n_f64, addr 0x68f8294, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, double_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmss_lane_f32, addr 0x68ebe38, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmss_lane_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmss_laneq_f32, addr 0x68ebf58, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmss_laneq_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_f32, addr 0x68f947c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_f64, addr 0x68f9484, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_s16, addr 0x68f9444, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_s32, addr 0x68f944c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_s64, addr 0x68f9454, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_s8, addr 0x68f943c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_u16, addr 0x68f9464, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_u32, addr 0x68f946c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_u64, addr 0x68f9474, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_u8, addr 0x68f945c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_f32, addr 0x68e9fd8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vget_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_f64, addr 0x68f808c, size 0x8, virtual false, abstract: false, final false
  static inline double_t vget_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_s16, addr 0x68e9f64, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vget_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_s32, addr 0x68e9f9c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vget_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_s64, addr 0x68e9fd4, size 0x4, virtual false, abstract: false, final false
  static inline int64_t vget_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_s8, addr 0x68e9f2c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vget_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_u16, addr 0x68e9eb8, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vget_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_u32, addr 0x68e9ef0, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vget_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_u64, addr 0x68e9f28, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t vget_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_u8, addr 0x68e9e80, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vget_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_f32, addr 0x68f94ac, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_f64, addr 0x68f94b0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_s16, addr 0x68f9490, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_s32, addr 0x68f9494, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_s64, addr 0x68f9498, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_s8, addr 0x68f948c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_u16, addr 0x68f94a0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_u32, addr 0x68f94a4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_u64, addr 0x68f94a8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_u8, addr 0x68f949c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_f32, addr 0x68ea1d0, size 0x38, virtual false, abstract: false, final false
  static inline float_t vgetq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_f64, addr 0x68f8094, size 0x38, virtual false, abstract: false, final false
  static inline double_t vgetq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_s16, addr 0x68ea128, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vgetq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_s32, addr 0x68ea160, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vgetq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_s64, addr 0x68ea198, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vgetq_lane_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_s8, addr 0x68ea0f0, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vgetq_lane_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_u16, addr 0x68ea048, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vgetq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_u32, addr 0x68ea080, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vgetq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_u64, addr 0x68ea0b8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vgetq_lane_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_u8, addr 0x68ea010, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vgetq_lane_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_s16, addr 0x68de960, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_s32, addr 0x68de9d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_s8, addr 0x68de8f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_u16, addr 0x68deab0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_u32, addr 0x68deb20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_u8, addr 0x68dea40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_s16, addr 0x68de998, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_s32, addr 0x68dea08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_s8, addr 0x68de928, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_u16, addr 0x68deae8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_u32, addr 0x68deb58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_u8, addr 0x68dea78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_s16, addr 0x68e0660, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_s32, addr 0x68e06d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_s8, addr 0x68e05f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_u16, addr 0x68e07b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_u32, addr 0x68e0820, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_u8, addr 0x68e0740, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_s16, addr 0x68e0698, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_s32, addr 0x68e0708, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_s8, addr 0x68e0628, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_u16, addr 0x68e07e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_u32, addr 0x68e0858, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_u8, addr 0x68e0778, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_f32, addr 0x68f9554, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_f32(float_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_f64, addr 0x68f9568, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_f64(double_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_s16, addr 0x68f94c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s16(int16_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_s32, addr 0x68f94dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s32(int32_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_s64, addr 0x68f94f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s64(int64_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_s8, addr 0x68f94b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s8(int8_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_u16, addr 0x68f9518, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u16(uint16_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_u32, addr 0x68f952c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u32(uint32_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_u64, addr 0x68f9540, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u64(uint64_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_u8, addr 0x68f9504, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u8(uint8_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_f32, addr 0x68f955c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_f32(float_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_f64, addr 0x68f9570, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_f64(double_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_s16, addr 0x68f94d0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s16(int16_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_s32, addr 0x68f94e4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s32(int32_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_s64, addr 0x68f94f8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s64(int64_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_s8, addr 0x68f94bc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s8(int8_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_u16, addr 0x68f9520, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u16(uint16_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_u32, addr 0x68f9534, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u32(uint32_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_u64, addr 0x68f9548, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u64(uint64_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_u8, addr 0x68f950c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u8(uint8_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_f32, addr 0x68e29f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_f64, addr 0x68eeeb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_s16, addr 0x68e27c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_s32, addr 0x68e2830, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_s8, addr 0x68e2750, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_u16, addr 0x68e2910, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_u32, addr 0x68e2980, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_u8, addr 0x68e28a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnm_f32, addr 0x68eef98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnm_f64, addr 0x68ef008, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnmq_f32, addr 0x68eefd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnmq_f64, addr 0x68ef040, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnmv_f32, addr 0x68f72f0, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxnmv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnmvq_f32, addr 0x68f7328, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxnmvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnmvq_f64, addr 0x68f7360, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmaxnmvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_f32, addr 0x68e2a28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_f64, addr 0x68eeef0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_s16, addr 0x68e27f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_s32, addr 0x68e2868, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_s8, addr 0x68e2788, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_u16, addr 0x68e2948, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_u32, addr 0x68e29b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_u8, addr 0x68e28d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_f32, addr 0x68f6f00, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_s16, addr 0x68f6cd0, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vmaxv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_s32, addr 0x68f6d40, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vmaxv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_s8, addr 0x68f6c60, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vmaxv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_u16, addr 0x68f6e20, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vmaxv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_u32, addr 0x68f6e90, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vmaxv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_u8, addr 0x68f6db0, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vmaxv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_f32, addr 0x68f6f38, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_f64, addr 0x68f6f70, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmaxvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_s16, addr 0x68f6d08, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vmaxvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_s32, addr 0x68f6d78, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vmaxvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_s8, addr 0x68f6c98, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vmaxvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_u16, addr 0x68f6e58, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vmaxvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_u32, addr 0x68f6ec8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vmaxvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_u8, addr 0x68f6de8, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vmaxvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_f32, addr 0x68e2d00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_f64, addr 0x68eef28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_s16, addr 0x68e2ad0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_s32, addr 0x68e2b40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_s8, addr 0x68e2a60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_u16, addr 0x68e2c20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_u32, addr 0x68e2c90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_u8, addr 0x68e2bb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminnm_f32, addr 0x68ef078, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vminnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminnm_f64, addr 0x68ef0e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vminnm_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminnmq_f32, addr 0x68ef0b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminnmq_f64, addr 0x68ef120, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminnmv_f32, addr 0x68f7398, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminnmv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminnmvq_f32, addr 0x68f73d0, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminnmvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminnmvq_f64, addr 0x68f7408, size 0x38, virtual false, abstract: false, final false
  static inline double_t vminnmvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_f32, addr 0x68e2d38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_f64, addr 0x68eef60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_s16, addr 0x68e2b08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_s32, addr 0x68e2b78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_s8, addr 0x68e2a98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_u16, addr 0x68e2c58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_u32, addr 0x68e2cc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_u8, addr 0x68e2be8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_f32, addr 0x68f7248, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_s16, addr 0x68f7018, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vminv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_s32, addr 0x68f7088, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vminv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_s8, addr 0x68f6fa8, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vminv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_u16, addr 0x68f7168, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vminv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_u32, addr 0x68f71d8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vminv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_u8, addr 0x68f70f8, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vminv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_f32, addr 0x68f7280, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_f64, addr 0x68f72b8, size 0x38, virtual false, abstract: false, final false
  static inline double_t vminvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_s16, addr 0x68f7050, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vminvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_s32, addr 0x68f70c0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vminvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_s8, addr 0x68f6fe0, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vminvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_u16, addr 0x68f71a0, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vminvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_u32, addr 0x68f7210, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vminvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_u8, addr 0x68f7130, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vminvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_f32, addr 0x68df6a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_f64, addr 0x68eb6e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_lane_f32, addr 0x68e6218, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_lane_s16, addr 0x68e6058, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_lane_s32, addr 0x68e60c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_lane_u16, addr 0x68e6138, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_lane_u32, addr 0x68e61a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_laneq_f32, addr 0x68f2680, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_laneq_s16, addr 0x68f24c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_laneq_s32, addr 0x68f2530, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_laneq_u16, addr 0x68f25a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_laneq_u32, addr 0x68f2610, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_n_f32, addr 0x68e7398, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_n_s16, addr 0x68e71d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_n_s32, addr 0x68e7248, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_n_u16, addr 0x68e72b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_n_u32, addr 0x68e7328, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_s16, addr 0x68df590, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_s32, addr 0x68df600, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_s8, addr 0x68df520, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_u16, addr 0x68df680, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_u32, addr 0x68df690, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_u8, addr 0x68df670, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_lane_s16, addr 0x68f26f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_lane_s32, addr 0x68f2728, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_lane_u16, addr 0x68f2760, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_lane_u32, addr 0x68f2798, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_laneq_s16, addr 0x68f28b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_laneq_s32, addr 0x68f28e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_laneq_u16, addr 0x68f2920, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_laneq_u32, addr 0x68f2958, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_n_s16, addr 0x68f4064, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_n_s32, addr 0x68f409c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_n_u16, addr 0x68f40d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_n_u32, addr 0x68f410c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_s16, addr 0x68eb790, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_s32, addr 0x68eb7c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_s8, addr 0x68eb758, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_u16, addr 0x68eb838, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_u32, addr 0x68eb870, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_u8, addr 0x68eb800, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_lane_s16, addr 0x68e6288, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_lane_s32, addr 0x68e62c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_lane_u16, addr 0x68e62f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_lane_u32, addr 0x68e6330, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_laneq_s16, addr 0x68f27d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_laneq_s32, addr 0x68f2808, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_laneq_u16, addr 0x68f2840, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_laneq_u32, addr 0x68f2878, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_n_s16, addr 0x68e7408, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_n_s32, addr 0x68e7440, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_n_u16, addr 0x68e7478, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_n_u32, addr 0x68e74b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_s16, addr 0x68df748, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_s32, addr 0x68df780, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_s8, addr 0x68df710, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_u16, addr 0x68df7f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_u32, addr 0x68df828, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_u8, addr 0x68df7b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_f32, addr 0x68df6d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_f64, addr 0x68eb720, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_lane_f32, addr 0x68e6250, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_lane_s16, addr 0x68e6090, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_lane_s32, addr 0x68e6100, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_lane_u16, addr 0x68e6170, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_lane_u32, addr 0x68e61e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_laneq_f32, addr 0x68f26b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_laneq_s16, addr 0x68f24f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_laneq_s32, addr 0x68f2568, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_laneq_u16, addr 0x68f25d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_laneq_u32, addr 0x68f2648, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_n_f32, addr 0x68e73d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_n_s16, addr 0x68e7210, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_n_s32, addr 0x68e7280, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_n_u16, addr 0x68e72f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_n_u32, addr 0x68e7360, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_s16, addr 0x68df5c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_s32, addr 0x68df638, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_s8, addr 0x68df558, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_u16, addr 0x68df688, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_u32, addr 0x68df698, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_u8, addr 0x68df678, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_f32, addr 0x68df9e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_f64, addr 0x68eb8a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_lane_f32, addr 0x68e6598, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_lane_s16, addr 0x68e63d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_lane_s32, addr 0x68e6448, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_lane_u16, addr 0x68e64b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_lane_u32, addr 0x68e6528, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_laneq_f32, addr 0x68f2d80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_laneq_s16, addr 0x68f2bc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_laneq_s32, addr 0x68f2c30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_laneq_u16, addr 0x68f2ca0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_laneq_u32, addr 0x68f2d10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_n_f32, addr 0x68e7718, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_n_s16, addr 0x68e7558, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_n_s32, addr 0x68e75c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_n_u16, addr 0x68e7638, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_n_u32, addr 0x68e76a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_s16, addr 0x68df8d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_s32, addr 0x68df940, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_s8, addr 0x68df860, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_u16, addr 0x68df9c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_u32, addr 0x68df9d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_u8, addr 0x68df9b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_lane_s16, addr 0x68f2df0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_lane_s32, addr 0x68f2e28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_lane_u16, addr 0x68f2e60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_lane_u32, addr 0x68f2e98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_laneq_s16, addr 0x68f2fb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_laneq_s32, addr 0x68f2fe8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_laneq_u16, addr 0x68f3020, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_laneq_u32, addr 0x68f3058, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_n_s16, addr 0x68f41b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_n_s32, addr 0x68f41ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_n_u16, addr 0x68f4224, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_n_u32, addr 0x68f425c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_s16, addr 0x68eb950, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_s32, addr 0x68eb988, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_s8, addr 0x68eb918, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_u16, addr 0x68eb9f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_u32, addr 0x68eba30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_u8, addr 0x68eb9c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_lane_s16, addr 0x68e6608, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_lane_s32, addr 0x68e6640, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_lane_u16, addr 0x68e6678, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_lane_u32, addr 0x68e66b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_laneq_s16, addr 0x68f2ed0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_laneq_s32, addr 0x68f2f08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_laneq_u16, addr 0x68f2f40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_laneq_u32, addr 0x68f2f78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_n_s16, addr 0x68e7788, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_n_s32, addr 0x68e77c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_n_u16, addr 0x68e77f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_n_u32, addr 0x68e7830, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_s16, addr 0x68dfa88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_s32, addr 0x68dfac0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_s8, addr 0x68dfa50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_u16, addr 0x68dfb30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_u32, addr 0x68dfb68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_u8, addr 0x68dfaf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_f32, addr 0x68dfa18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_f64, addr 0x68eb8e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_lane_f32, addr 0x68e65d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_lane_s16, addr 0x68e6410, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_lane_s32, addr 0x68e6480, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_lane_u16, addr 0x68e64f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_lane_u32, addr 0x68e6560, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_laneq_f32, addr 0x68f2db8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_laneq_s16, addr 0x68f2bf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_laneq_s32, addr 0x68f2c68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_laneq_u16, addr 0x68f2cd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_laneq_u32, addr 0x68f2d48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_n_f32, addr 0x68e7750, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_n_s16, addr 0x68e7590, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_n_s32, addr 0x68e7600, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_n_u16, addr 0x68e7670, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_n_u32, addr 0x68e76e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_s16, addr 0x68df908, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_s32, addr 0x68df978, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_s8, addr 0x68df898, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_u16, addr 0x68df9c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_u32, addr 0x68df9d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_u8, addr 0x68df9b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_f32, addr 0x68f93e0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_f64, addr 0x68f93fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_s16, addr 0x68f9324, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_s32, addr 0x68f9348, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_s64, addr 0x68f9364, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_s8, addr 0x68f9300, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_u16, addr 0x68f9394, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u16(uint16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_u32, addr 0x68f93b8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_u64, addr 0x68f93d4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_u8, addr 0x68f9370, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u8(uint8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_s16, addr 0x68f1fb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_s32, addr 0x68f1ff0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_s8, addr 0x68f1f80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_u16, addr 0x68f2060, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_u32, addr 0x68f2098, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_u8, addr 0x68f2028, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_s16, addr 0x68e5d48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_s32, addr 0x68e5d80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_s8, addr 0x68e5d10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_u16, addr 0x68e5df0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_u32, addr 0x68e5e28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_u8, addr 0x68e5db8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_s16, addr 0x68e5c50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_s32, addr 0x68e5c88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_s64, addr 0x68e5cc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_u16, addr 0x68e5cf8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_u32, addr 0x68e5d00, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_u64, addr 0x68e5d08, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_s16, addr 0x68e5b90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_s32, addr 0x68e5bc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_s64, addr 0x68e5c00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_u16, addr 0x68e5c38, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_u32, addr 0x68e5c40, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_u64, addr 0x68e5c48, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_f32, addr 0x68f93ec, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_f64, addr 0x68f9404, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_s16, addr 0x68f9334, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_s32, addr 0x68f9354, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_s64, addr 0x68f9368, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_s8, addr 0x68f9310, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_u16, addr 0x68f93a4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u16(uint16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_u32, addr 0x68f93c4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_u64, addr 0x68f93d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_u8, addr 0x68f9380, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u8(uint8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_f32, addr 0x68df4b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_f64, addr 0x68eb208, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_lane_f32, addr 0x68e6b48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)9)]
  /// @brief Method vmul_lane_f64, addr 0x68f3330, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_lane_s16, addr 0x68e6988, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_lane_s32, addr 0x68e69f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_lane_u16, addr 0x68e6a68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_lane_u32, addr 0x68e6ad8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_f32, addr 0x68f3574, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_f64, addr 0x68f35e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_s16, addr 0x68f33b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_s32, addr 0x68f3424, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_u16, addr 0x68f3494, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_u32, addr 0x68f3504, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_f32, addr 0x68e6918, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f32(::Unity::Burst::Intrinsics::v64 a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_f64, addr 0x68f32c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f64(::Unity::Burst::Intrinsics::v64 a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_s16, addr 0x68e6758, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_s32, addr 0x68e67c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_u16, addr 0x68e6838, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u16(::Unity::Burst::Intrinsics::v64 a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_u32, addr 0x68e68a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u32(::Unity::Burst::Intrinsics::v64 a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_s16, addr 0x68df3a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_s32, addr 0x68df410, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_s8, addr 0x68df330, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_u16, addr 0x68df490, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_u32, addr 0x68df4a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_u8, addr 0x68df480, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmuld_lane_f64, addr 0x68f33a8, size 0xc, virtual false, abstract: false, final false
  static inline double_t vmuld_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmuld_laneq_f64, addr 0x68f368c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmuld_laneq_f64(double_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_lane_s16, addr 0x68f37a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_lane_s32, addr 0x68f37dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_lane_u16, addr 0x68f3814, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_lane_u32, addr 0x68f384c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_laneq_s16, addr 0x68f3964, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_laneq_s32, addr 0x68f399c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_laneq_u16, addr 0x68f39d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_laneq_u32, addr 0x68f3a0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_n_s16, addr 0x68f36c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_n_s32, addr 0x68f36fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_n_u16, addr 0x68f3734, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_n_u32, addr 0x68f376c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_s16, addr 0x68ec2a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_s32, addr 0x68ec2d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_s8, addr 0x68ec268, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_u16, addr 0x68ec348, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_u32, addr 0x68ec380, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_u8, addr 0x68ec310, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_lane_s16, addr 0x68e6c98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_lane_s32, addr 0x68e6cd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_lane_u16, addr 0x68e6d08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_lane_u32, addr 0x68e6d40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_laneq_s16, addr 0x68f3884, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_laneq_s32, addr 0x68f38bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_laneq_u16, addr 0x68f38f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_laneq_u32, addr 0x68f392c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_n_s16, addr 0x68e6bb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_n_s32, addr 0x68e6bf0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_n_u16, addr 0x68e6c28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u16(::Unity::Burst::Intrinsics::v64 a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_n_u32, addr 0x68e6c60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u32(::Unity::Burst::Intrinsics::v64 a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_s16, addr 0x68dff58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_s32, addr 0x68dff90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_s8, addr 0x68dff20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_u16, addr 0x68e0000, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_u32, addr 0x68e0038, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_u8, addr 0x68dffc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_f32, addr 0x68df4e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_f64, addr 0x68eb240, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_f32, addr 0x68e6b80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_f64, addr 0x68f3338, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_s16, addr 0x68e69c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_s32, addr 0x68e6a30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_u16, addr 0x68e6aa0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_u32, addr 0x68e6b10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_f32, addr 0x68f35ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_f64, addr 0x68f361c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_s16, addr 0x68f33ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_s32, addr 0x68f345c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_u16, addr 0x68f34cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_u32, addr 0x68f353c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_f32, addr 0x68e6950, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f32(::Unity::Burst::Intrinsics::v128 a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_f64, addr 0x68f32f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f64(::Unity::Burst::Intrinsics::v128 a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_s16, addr 0x68e6790, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_s32, addr 0x68e6800, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_u16, addr 0x68e6870, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u16(::Unity::Burst::Intrinsics::v128 a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_u32, addr 0x68e68e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_s16, addr 0x68df3d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_s32, addr 0x68df448, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_s8, addr 0x68df368, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_u16, addr 0x68df498, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_u32, addr 0x68df4a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_u8, addr 0x68df488, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmuls_lane_f32, addr 0x68f3370, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmuls_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmuls_laneq_f32, addr 0x68f3654, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmuls_laneq_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_f32, addr 0x68eb278, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_f64, addr 0x68eb2e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_lane_f32, addr 0x68eb3c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_lane_f64, addr 0x68eb438, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_laneq_f32, addr 0x68eb4b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_laneq_f64, addr 0x68eb528, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxd_f64, addr 0x68eb390, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmulxd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxd_lane_f64, addr 0x68eb4b0, size 0x8, virtual false, abstract: false, final false
  static inline double_t vmulxd_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxd_laneq_f64, addr 0x68eb5d0, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmulxd_laneq_f64(double_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_f32, addr 0x68eb2b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_f64, addr 0x68eb320, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_lane_f32, addr 0x68eb400, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_lane_f64, addr 0x68eb440, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_laneq_f32, addr 0x68eb4f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_laneq_f64, addr 0x68eb560, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxs_f32, addr 0x68eb358, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmulxs_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxs_lane_f32, addr 0x68eb478, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmulxs_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxs_laneq_f32, addr 0x68eb598, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmulxs_laneq_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_s16, addr 0x68e8558, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_s32, addr 0x68e8568, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_s8, addr 0x68e84e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_u16, addr 0x68e8588, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_u32, addr 0x68e8598, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_u8, addr 0x68e8578, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_s16, addr 0x68e8560, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_s32, addr 0x68e8570, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_s8, addr 0x68e8520, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_u16, addr 0x68e8590, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_u32, addr 0x68e85a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_u8, addr 0x68e8580, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_f32, addr 0x68e7d38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_f64, addr 0x68f4614, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_s16, addr 0x68e7c58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_s32, addr 0x68e7cc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_s64, addr 0x68f456c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_s8, addr 0x68e7be8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegd_s64, addr 0x68f45a4, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vnegd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_f32, addr 0x68e7d70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_f64, addr 0x68f464c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_s16, addr 0x68e7c90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_s32, addr 0x68e7d00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_s64, addr 0x68f45dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_s8, addr 0x68e7c20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_s16, addr 0x68e8998, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_s32, addr 0x68e89a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_s64, addr 0x68e89b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_s8, addr 0x68e8928, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_u16, addr 0x68e89d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_u32, addr 0x68e89e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_u64, addr 0x68e89f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_u8, addr 0x68e89c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_s16, addr 0x68e89a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_s32, addr 0x68e89b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_s64, addr 0x68e89c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_s8, addr 0x68e8960, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_u16, addr 0x68e89e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_u32, addr 0x68e89f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_u64, addr 0x68e8a00, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_u8, addr 0x68e89d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_s16, addr 0x68e86f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_s32, addr 0x68e8708, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_s64, addr 0x68e8718, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_s8, addr 0x68e8688, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_u16, addr 0x68e8738, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_u32, addr 0x68e8748, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_u64, addr 0x68e8758, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_u8, addr 0x68e8728, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_s16, addr 0x68e8700, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_s32, addr 0x68e8710, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_s64, addr 0x68e8720, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_s8, addr 0x68e86c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_u16, addr 0x68e8740, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_u32, addr 0x68e8750, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_u64, addr 0x68e8760, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_u8, addr 0x68e8730, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_s16, addr 0x68e9228, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_s32, addr 0x68e9298, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_s8, addr 0x68e91b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_u16, addr 0x68e9378, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_u32, addr 0x68e93e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_u8, addr 0x68e9308, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_s16, addr 0x68e9260, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_s32, addr 0x68e92d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_s8, addr 0x68e91f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_u16, addr 0x68e93b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_u32, addr 0x68e9420, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_u8, addr 0x68e9340, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_f32, addr 0x68e8ee0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_s16, addr 0x68e8e58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_s32, addr 0x68e8e90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_s8, addr 0x68e8e20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_u16, addr 0x68e8ed0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_u32, addr 0x68e8ed8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_u8, addr 0x68e8ec8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddd_f64, addr 0x68f6410, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpaddd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddd_s64, addr 0x68f6368, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vpaddd_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddd_u64, addr 0x68f63a0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vpaddd_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_s16, addr 0x68e8f88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_s32, addr 0x68e8ff8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_s8, addr 0x68e8f18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_u16, addr 0x68e90d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_u32, addr 0x68e9148, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_u8, addr 0x68e9068, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_s16, addr 0x68e8fc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_s32, addr 0x68e9030, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_s8, addr 0x68e8f50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_u16, addr 0x68e9110, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_u32, addr 0x68e9180, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_u8, addr 0x68e90a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_f32, addr 0x68f5e28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_f64, addr 0x68f5e60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_s16, addr 0x68f5d60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_s32, addr 0x68f5d98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_s64, addr 0x68f5dd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_s8, addr 0x68f5d28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_u16, addr 0x68f5e10, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_u32, addr 0x68f5e18, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_u64, addr 0x68f5e20, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_u8, addr 0x68f5e08, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadds_f32, addr 0x68f63d8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpadds_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_f32, addr 0x68e95a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_s16, addr 0x68e9490, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_s32, addr 0x68e94c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_s8, addr 0x68e9458, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_u16, addr 0x68e9538, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_u32, addr 0x68e9570, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_u8, addr 0x68e9500, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxnm_f32, addr 0x68f6218, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmaxnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxnmq_f32, addr 0x68f6250, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxnmq_f64, addr 0x68f6288, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxnmqd_f64, addr 0x68f6560, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpmaxnmqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxnms_f32, addr 0x68f6528, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpmaxnms_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_f32, addr 0x68f5fe8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_f64, addr 0x68f6020, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_s16, addr 0x68f5ed0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_s32, addr 0x68f5f08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_s8, addr 0x68f5e98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_u16, addr 0x68f5f78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_u32, addr 0x68f5fb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_u8, addr 0x68f5f40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxqd_f64, addr 0x68f6480, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpmaxqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxs_f32, addr 0x68f6448, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpmaxs_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_f32, addr 0x68e9730, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_s16, addr 0x68e9618, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_s32, addr 0x68e9650, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_s8, addr 0x68e95e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_u16, addr 0x68e96c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_u32, addr 0x68e96f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_u8, addr 0x68e9688, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminnm_f32, addr 0x68f62c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpminnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminnmq_f32, addr 0x68f62f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminnmq_f64, addr 0x68f6330, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminnmqd_f64, addr 0x68f65d0, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpminnmqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpminnms_f32, addr 0x68f6598, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpminnms_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_f32, addr 0x68f61a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_f64, addr 0x68f61e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_s16, addr 0x68f6090, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_s32, addr 0x68f60c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_s8, addr 0x68f6058, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_u16, addr 0x68f6138, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_u32, addr 0x68f6170, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_u8, addr 0x68f6100, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminqd_f64, addr 0x68f64f0, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpminqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmins_f32, addr 0x68f64b8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpmins_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabs_s16, addr 0x68e7b08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabs_s32, addr 0x68e7b78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabs_s64, addr 0x68f441c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabs_s8, addr 0x68e7a98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsb_s8, addr 0x68f448c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqabsb_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsd_s64, addr 0x68f4534, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqabsd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsh_s16, addr 0x68f44c4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqabsh_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsq_s16, addr 0x68e7b40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsq_s32, addr 0x68e7bb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsq_s64, addr 0x68f4454, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsq_s8, addr 0x68e7ad0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabss_s32, addr 0x68f44fc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqabss_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_s16, addr 0x68deea0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_s32, addr 0x68def10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_s64, addr 0x68def80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_s8, addr 0x68dee30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_u16, addr 0x68df060, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_u32, addr 0x68df0d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_u64, addr 0x68df140, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_u8, addr 0x68deff0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddb_s8, addr 0x68ea988, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqaddb_s8(int8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddb_u8, addr 0x68eaa68, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqaddb_u8(uint8_t a0, uint8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddd_s64, addr 0x68eaa30, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqaddd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddd_u64, addr 0x68eab10, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqaddd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddh_s16, addr 0x68ea9c0, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqaddh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddh_u16, addr 0x68eaaa0, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqaddh_u16(uint16_t a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_s16, addr 0x68deed8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_s32, addr 0x68def48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_s64, addr 0x68defb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_s8, addr 0x68dee68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_u16, addr 0x68df098, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_u32, addr 0x68df108, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_u64, addr 0x68df178, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_u8, addr 0x68df028, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadds_s32, addr 0x68ea9f8, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqadds_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadds_u32, addr 0x68eaad8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqadds_u32(uint32_t a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_lane_s16, addr 0x68f2a00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_lane_s32, addr 0x68f2a38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_laneq_s16, addr 0x68f2b50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_laneq_s32, addr 0x68f2b88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_n_s16, addr 0x68f4144, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_n_s32, addr 0x68f417c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_s16, addr 0x68ec118, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_s32, addr 0x68ec150, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_lane_s16, addr 0x68e6368, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_lane_s32, addr 0x68e63a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_laneq_s16, addr 0x68f2a70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_laneq_s32, addr 0x68f2aa8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_n_s16, addr 0x68e74e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_n_s32, addr 0x68e7520, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_s16, addr 0x68dfe40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_s32, addr 0x68dfe78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlalh_lane_s16, addr 0x68f2990, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlalh_lane_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlalh_laneq_s16, addr 0x68f2ae0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlalh_laneq_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlalh_s16, addr 0x68ec0a8, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlalh_s16(int32_t a0, int16_t a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlals_lane_s32, addr 0x68f29c8, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlals_lane_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlals_laneq_s32, addr 0x68f2b18, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlals_laneq_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlals_s32, addr 0x68ec0e0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlals_s32(int64_t a0, int32_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_lane_s16, addr 0x68f3100, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_lane_s32, addr 0x68f3138, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_laneq_s16, addr 0x68f3250, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_laneq_s32, addr 0x68f3288, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_n_s16, addr 0x68f4294, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_n_s32, addr 0x68f42cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_s16, addr 0x68ec1f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_s32, addr 0x68ec230, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_lane_s16, addr 0x68e66e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_lane_s32, addr 0x68e6720, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_laneq_s16, addr 0x68f3170, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_laneq_s32, addr 0x68f31a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_n_s16, addr 0x68e7868, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_n_s32, addr 0x68e78a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_s16, addr 0x68dfeb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_s32, addr 0x68dfee8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlslh_lane_s16, addr 0x68f3090, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlslh_lane_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlslh_laneq_s16, addr 0x68f31e0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlslh_laneq_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlslh_s16, addr 0x68ec188, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlslh_s16(int32_t a0, int16_t a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsls_lane_s32, addr 0x68f30c8, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlsls_lane_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsls_laneq_s32, addr 0x68f3218, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlsls_laneq_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsls_s32, addr 0x68ec1c0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlsls_s32(int64_t a0, int32_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_lane_s16, addr 0x68e6f38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_lane_s32, addr 0x68e6fa8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_laneq_s16, addr 0x68f3d54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_laneq_s32, addr 0x68f3dc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_n_s16, addr 0x68e6e58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_n_s32, addr 0x68e6ec8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_s16, addr 0x68dfc80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_s32, addr 0x68dfcf0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhh_lane_s16, addr 0x68f3ce4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqdmulhh_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhh_laneq_s16, addr 0x68f3e34, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqdmulhh_laneq_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhh_s16, addr 0x68ebfc8, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqdmulhh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_lane_s16, addr 0x68e6f70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_lane_s32, addr 0x68e6fe0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_laneq_s16, addr 0x68f3d8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_laneq_s32, addr 0x68f3dfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_n_s16, addr 0x68e6e90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_n_s32, addr 0x68e6f00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_s16, addr 0x68dfcb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_s32, addr 0x68dfd28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhs_lane_s32, addr 0x68f3d1c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmulhs_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhs_laneq_s32, addr 0x68f3e6c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmulhs_laneq_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhs_s32, addr 0x68ec000, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmulhs_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_lane_s16, addr 0x68f3b24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_lane_s32, addr 0x68f3b5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_laneq_s16, addr 0x68f3c74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_laneq_s32, addr 0x68f3cac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_n_s16, addr 0x68f3a44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_n_s32, addr 0x68f3a7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_s16, addr 0x68ec428, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_s32, addr 0x68ec460, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_lane_s16, addr 0x68e6de8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_lane_s32, addr 0x68e6e20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_laneq_s16, addr 0x68f3b94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_laneq_s32, addr 0x68f3bcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_n_s16, addr 0x68e6d78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_n_s32, addr 0x68e6db0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_s16, addr 0x68e0070, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_s32, addr 0x68e00a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmullh_lane_s16, addr 0x68f3ab4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmullh_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmullh_laneq_s16, addr 0x68f3c04, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmullh_laneq_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmullh_s16, addr 0x68ec3b8, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmullh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulls_lane_s32, addr 0x68f3aec, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmulls_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulls_laneq_s32, addr 0x68f3c3c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmulls_laneq_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulls_s32, addr 0x68ec3f0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmulls_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_s16, addr 0x68f2220, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_s32, addr 0x68f2258, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_s64, addr 0x68f2290, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_u16, addr 0x68f22c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_u32, addr 0x68f2300, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_u64, addr 0x68f2338, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_s16, addr 0x68e5e60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_s32, addr 0x68e5e98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_s64, addr 0x68e5ed0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_u16, addr 0x68e5f08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_u32, addr 0x68e5f40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_u64, addr 0x68e5f78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovnd_s64, addr 0x68f2140, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqmovnd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovnd_u64, addr 0x68f21e8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqmovnd_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovnh_s16, addr 0x68f20d0, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqmovnh_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovnh_u16, addr 0x68f2178, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqmovnh_u16(uint16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovns_s32, addr 0x68f2108, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqmovns_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovns_u32, addr 0x68f21b0, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqmovns_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_high_s16, addr 0x68f2418, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_high_s32, addr 0x68f2450, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_high_s64, addr 0x68f2488, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_s16, addr 0x68e5fb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_s32, addr 0x68e5fe8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_s64, addr 0x68e6020, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovund_s64, addr 0x68f23e0, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqmovund_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovunh_s16, addr 0x68f2370, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqmovunh_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovuns_s32, addr 0x68f23a8, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqmovuns_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqneg_s16, addr 0x68e7e18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqneg_s32, addr 0x68e7e88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqneg_s64, addr 0x68f4684, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqneg_s8, addr 0x68e7da8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegb_s8, addr 0x68f46f4, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqnegb_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegd_s64, addr 0x68f479c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqnegd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegh_s16, addr 0x68f472c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqnegh_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegq_s16, addr 0x68e7e50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegq_s32, addr 0x68e7ec0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegq_s64, addr 0x68f46bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegq_s8, addr 0x68e7de0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegs_s32, addr 0x68f4764, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqnegs_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_lane_s16, addr 0x68f8c14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_lane_s32, addr 0x68f8cf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_laneq_s16, addr 0x68f8c84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_laneq_s32, addr 0x68f8d64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_s16, addr 0x68f8a54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_s32, addr 0x68f8a8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahh_lane_s16, addr 0x68f9074, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlahh_lane_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahh_laneq_s16, addr 0x68f90ac, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlahh_laneq_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahh_s16, addr 0x68f8f94, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlahh_s16(int16_t a0, int16_t a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_lane_s16, addr 0x68f8c4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_lane_s32, addr 0x68f8d2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_laneq_s16, addr 0x68f8cbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_laneq_s32, addr 0x68f8d9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_s16, addr 0x68f8ac4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_s32, addr 0x68f8afc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahs_lane_s32, addr 0x68f90e4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlahs_lane_s32(int32_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahs_s32, addr 0x68f8fcc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlahs_s32(int32_t a0, int32_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_lane_s16, addr 0x68f8dd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_lane_s32, addr 0x68f8eb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_laneq_s16, addr 0x68f8e44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_laneq_s32, addr 0x68f8f24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_s16, addr 0x68f8b34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_s32, addr 0x68f8b6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshh_lane_s16, addr 0x68f911c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlshh_lane_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshh_laneq_s16, addr 0x68f9154, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlshh_laneq_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshh_s16, addr 0x68f9004, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlshh_s16(int16_t a0, int16_t a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_lane_s16, addr 0x68f8e0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_lane_s32, addr 0x68f8eec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_laneq_s16, addr 0x68f8e7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_laneq_s32, addr 0x68f8f5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_s16, addr 0x68f8ba4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_s32, addr 0x68f8bdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshs_lane_s32, addr 0x68f918c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlshs_lane_s32(int32_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshs_s32, addr 0x68f903c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlshs_s32(int32_t a0, int32_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_lane_s16, addr 0x68e70f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_lane_s32, addr 0x68e7168, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_laneq_s16, addr 0x68f3f14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_laneq_s32, addr 0x68f3f84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_n_s16, addr 0x68e7018, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_n_s32, addr 0x68e7088, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_s16, addr 0x68dfd60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_s32, addr 0x68dfdd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhh_lane_s16, addr 0x68f3ea4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmulhh_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhh_laneq_s16, addr 0x68f3ff4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmulhh_laneq_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhh_s16, addr 0x68ec038, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmulhh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_lane_s16, addr 0x68e7130, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_lane_s32, addr 0x68e71a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_laneq_s16, addr 0x68f3f4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_laneq_s32, addr 0x68f3fbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_n_s16, addr 0x68e7050, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_n_s32, addr 0x68e70c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_s16, addr 0x68dfd98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_s32, addr 0x68dfe08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhs_lane_s32, addr 0x68f3edc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmulhs_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhs_laneq_s32, addr 0x68f402c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmulhs_laneq_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhs_s32, addr 0x68ec070, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmulhs_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_s16, addr 0x68e3860, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_s32, addr 0x68e38d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_s64, addr 0x68e3940, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_s8, addr 0x68e37f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_u16, addr 0x68e3a20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_u32, addr 0x68e3a90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_u64, addr 0x68e3b00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_u8, addr 0x68e39b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlb_s8, addr 0x68ef3f8, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqrshlb_s8(int8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlb_u8, addr 0x68ef4d8, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqrshlb_u8(uint8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshld_s64, addr 0x68ef4a0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqrshld_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshld_u64, addr 0x68ef580, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqrshld_u64(uint64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlh_s16, addr 0x68ef430, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrshlh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlh_u16, addr 0x68ef510, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqrshlh_u16(uint16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_s16, addr 0x68e3898, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_s32, addr 0x68e3908, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_s64, addr 0x68e3978, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_s8, addr 0x68e3828, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_u16, addr 0x68e3a58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_u32, addr 0x68e3ac8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_u64, addr 0x68e3b38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_u8, addr 0x68e39e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshls_s32, addr 0x68ef468, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrshls_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshls_u32, addr 0x68ef548, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqrshls_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_s16, addr 0x68f02a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_s32, addr 0x68f02d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_s64, addr 0x68f0310, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_u16, addr 0x68f0348, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_u32, addr 0x68f0380, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_u64, addr 0x68f03b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_s16, addr 0x68e4e70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_s32, addr 0x68e4ea8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_s64, addr 0x68e4ee0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_u16, addr 0x68e4f18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_u32, addr 0x68e4f50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_u64, addr 0x68e4f88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrnd_n_s64, addr 0x68f01c0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrshrnd_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrnd_n_u64, addr 0x68f0268, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqrshrnd_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrnh_n_s16, addr 0x68f0150, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqrshrnh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrnh_n_u16, addr 0x68f01f8, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqrshrnh_n_u16(uint16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrns_n_s32, addr 0x68f0188, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrshrns_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrns_n_u32, addr 0x68f0230, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqrshrns_n_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_high_n_s16, addr 0x68efcb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_high_n_s32, addr 0x68efcf0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_high_n_s64, addr 0x68efd28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_n_s16, addr 0x68e4b28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_n_s32, addr 0x68e4b60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_n_s64, addr 0x68e4b98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrund_n_s64, addr 0x68efc80, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqrshrund_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrunh_n_s16, addr 0x68efc10, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqrshrunh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshruns_n_s32, addr 0x68efc48, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqrshruns_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_s16, addr 0x68e4700, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_s32, addr 0x68e4710, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_s64, addr 0x68e4720, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_s8, addr 0x68e46f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_u16, addr 0x68e4740, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_u32, addr 0x68e4750, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_u64, addr 0x68e4760, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_u8, addr 0x68e4730, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_s16, addr 0x68e3160, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_s32, addr 0x68e31d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_s64, addr 0x68e3240, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_s8, addr 0x68e30f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_u16, addr 0x68e3320, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_u32, addr 0x68e3390, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_u64, addr 0x68e3400, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_u8, addr 0x68e32b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlb_n_s8, addr 0x68ef6d0, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqshlb_n_s8(int8_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlb_n_u8, addr 0x68ef7b0, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshlb_n_u8(uint8_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlb_s8, addr 0x68ef1c8, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqshlb_s8(int8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlb_u8, addr 0x68ef2a8, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshlb_u8(uint8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshld_n_s64, addr 0x68ef778, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqshld_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshld_n_u64, addr 0x68ef858, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqshld_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshld_s64, addr 0x68ef270, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqshld_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshld_u64, addr 0x68ef350, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqshld_u64(uint64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlh_n_s16, addr 0x68ef708, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqshlh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlh_n_u16, addr 0x68ef7e8, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshlh_n_u16(uint16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlh_s16, addr 0x68ef200, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqshlh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlh_u16, addr 0x68ef2e0, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshlh_u16(uint16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_s16, addr 0x68e4708, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_s32, addr 0x68e4718, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_s64, addr 0x68e4728, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_s8, addr 0x68e46f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_u16, addr 0x68e4748, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_u32, addr 0x68e4758, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_u64, addr 0x68e4768, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_u8, addr 0x68e4738, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_s16, addr 0x68e3198, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_s32, addr 0x68e3208, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_s64, addr 0x68e3278, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_s8, addr 0x68e3128, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_u16, addr 0x68e3358, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_u32, addr 0x68e33c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_u64, addr 0x68e3438, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_u8, addr 0x68e32e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshls_n_s32, addr 0x68ef740, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqshls_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshls_n_u32, addr 0x68ef820, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshls_n_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshls_s32, addr 0x68ef238, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqshls_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshls_u32, addr 0x68ef318, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshls_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlu_n_s16, addr 0x68e47e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlu_n_s32, addr 0x68e4850, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlu_n_s64, addr 0x68e48c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlu_n_s8, addr 0x68e4770, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlub_n_s8, addr 0x68ef890, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshlub_n_s8(int8_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlud_n_s64, addr 0x68ef938, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqshlud_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshluh_n_s16, addr 0x68ef8c8, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshluh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshluq_n_s16, addr 0x68e4818, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshluq_n_s32, addr 0x68e4888, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshluq_n_s64, addr 0x68e48f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshluq_n_s8, addr 0x68e47a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlus_n_s32, addr 0x68ef900, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshlus_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_s16, addr 0x68efeb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_s32, addr 0x68efee8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_s64, addr 0x68eff20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_u16, addr 0x68eff58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_u32, addr 0x68eff90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_u64, addr 0x68effc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_s16, addr 0x68e4bd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_s32, addr 0x68e4c08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_s64, addr 0x68e4c40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_u16, addr 0x68e4c78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_u32, addr 0x68e4cb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_u64, addr 0x68e4ce8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrnd_n_s64, addr 0x68efdd0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqshrnd_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrnd_n_u64, addr 0x68efe78, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshrnd_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrnh_n_s16, addr 0x68efd60, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqshrnh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrnh_n_u16, addr 0x68efe08, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshrnh_n_u16(uint16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrns_n_s32, addr 0x68efd98, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqshrns_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrns_n_u32, addr 0x68efe40, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshrns_n_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_high_n_s16, addr 0x68efb68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_high_n_s32, addr 0x68efba0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_high_n_s64, addr 0x68efbd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_n_s16, addr 0x68e4a80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_n_s32, addr 0x68e4ab8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_n_s64, addr 0x68e4af0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrund_n_s64, addr 0x68efb30, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshrund_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrunh_n_s16, addr 0x68efac0, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshrunh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshruns_n_s32, addr 0x68efaf8, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshruns_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_s16, addr 0x68e0900, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_s32, addr 0x68e0970, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_s64, addr 0x68e09e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_s8, addr 0x68e0890, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_u16, addr 0x68e0ac0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_u32, addr 0x68e0b30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_u64, addr 0x68e0ba0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_u8, addr 0x68e0a50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubb_s8, addr 0x68ec818, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqsubb_s8(int8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubb_u8, addr 0x68ec8f8, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqsubb_u8(uint8_t a0, uint8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubd_s64, addr 0x68ec8c0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqsubd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubd_u64, addr 0x68ec9a0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqsubd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubh_s16, addr 0x68ec850, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqsubh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubh_u16, addr 0x68ec930, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqsubh_u16(uint16_t a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_s16, addr 0x68e0938, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_s32, addr 0x68e09a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_s64, addr 0x68e0a18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_s8, addr 0x68e08c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_u16, addr 0x68e0af8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_u32, addr 0x68e0b68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_u64, addr 0x68e0bd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_u8, addr 0x68e0a88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubs_s32, addr 0x68ec888, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqsubs_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubs_u32, addr 0x68ec968, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqsubs_u32(uint32_t a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbl1_s8, addr 0x68f7f8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbl1_u8, addr 0x68f7ffc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbl1q_s8, addr 0x68f7fc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbl1q_u8, addr 0x68f8004, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbx1_s8, addr 0x68f800c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbx1_u8, addr 0x68f807c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbx1q_s8, addr 0x68f8044, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbx1q_u8, addr 0x68f8084, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_s16, addr 0x68eb148, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_s32, addr 0x68eb180, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_s64, addr 0x68eb1b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_u16, addr 0x68eb1f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_u32, addr 0x68eb1f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_u64, addr 0x68eb200, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_s16, addr 0x68df270, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_s32, addr 0x68df2a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_s64, addr 0x68df2e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_u16, addr 0x68df318, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_u32, addr 0x68df320, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_u64, addr 0x68df328, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrbit_s8, addr 0x68f5474, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrbit_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrbit_u8, addr 0x68f54e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrbit_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrbitq_s8, addr 0x68f54ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrbitq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrbitq_u8, addr 0x68f54ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrbitq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpe_f32, addr 0x68e82b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpe_f64, addr 0x68f47d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpe_u32, addr 0x68e8248, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecpe_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecped_f64, addr 0x68f487c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrecped_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpeq_f32, addr 0x68e82f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpeq_f64, addr 0x68f480c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpeq_u32, addr 0x68e8280, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpes_f32, addr 0x68f4844, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrecpes_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecps_f32, addr 0x68e8328, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecps_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecps_f64, addr 0x68f48b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecps_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpsd_f64, addr 0x68f495c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrecpsd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpsq_f32, addr 0x68e8360, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpsq_f64, addr 0x68f48ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpss_f32, addr 0x68f4924, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrecpss_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpxd_f64, addr 0x68f8144, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrecpxd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpxs_f32, addr 0x68f810c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrecpxs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev16_s8, addr 0x68e9d80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev16_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev16_u8, addr 0x68e9df0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev16_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev16q_s8, addr 0x68e9db8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev16q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev16q_u8, addr 0x68e9df8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev16q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32_s16, addr 0x68e9cf0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32_s8, addr 0x68e9c80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32_u16, addr 0x68e9d70, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32_u8, addr 0x68e9d60, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32q_s16, addr 0x68e9d28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32q_s8, addr 0x68e9cb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32q_u16, addr 0x68e9d78, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32q_u8, addr 0x68e9d68, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_f32, addr 0x68e9c70, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_s16, addr 0x68e9b60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_s32, addr 0x68e9bd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_s8, addr 0x68e9af0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_u16, addr 0x68e9c50, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_u32, addr 0x68e9c60, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_u8, addr 0x68e9c40, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_f32, addr 0x68e9c78, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_s16, addr 0x68e9b98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_s32, addr 0x68e9c08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_s8, addr 0x68e9b28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_u16, addr 0x68e9c58, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_u32, addr 0x68e9c68, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_u8, addr 0x68e9c48, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_s16, addr 0x68dec00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_s32, addr 0x68dec70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_s8, addr 0x68deb90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_u16, addr 0x68ded50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_u32, addr 0x68dedc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_u8, addr 0x68dece0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_s16, addr 0x68dec38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_s32, addr 0x68deca8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_s8, addr 0x68debc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_u16, addr 0x68ded88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_u32, addr 0x68dedf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_u8, addr 0x68ded18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrnd_f32, addr 0x68f1928, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnd_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrnd_f64, addr 0x68f1998, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnd_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrnda_f32, addr 0x68f1ce0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnda_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrnda_f64, addr 0x68f1d50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnda_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndaq_f32, addr 0x68f1d18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndaq_f64, addr 0x68f1d88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndi_f32, addr 0x68f1dc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndi_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndi_f64, addr 0x68f1e30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndi_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndiq_f32, addr 0x68f1df8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndiq_f64, addr 0x68f1e68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndm_f32, addr 0x68f1b20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndm_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndm_f64, addr 0x68f1b90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndm_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndmq_f32, addr 0x68f1b58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndmq_f64, addr 0x68f1bc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndn_f32, addr 0x68f1a08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndn_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndn_f64, addr 0x68f1a78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndn_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndnq_f32, addr 0x68f1a40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndnq_f64, addr 0x68f1ab0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndns_f32, addr 0x68f1ae8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrndns_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndp_f32, addr 0x68f1c00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndp_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndp_f64, addr 0x68f1c70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndp_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndpq_f32, addr 0x68f1c38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndpq_f64, addr 0x68f1ca8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndq_f32, addr 0x68f1960, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndq_f64, addr 0x68f19d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndx_f32, addr 0x68f1ea0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndx_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndx_f64, addr 0x68f1f10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndx_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndxq_f32, addr 0x68f1ed8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndxq_f64, addr 0x68f1f48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_s16, addr 0x68e34e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_s32, addr 0x68e3550, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_s64, addr 0x68e35c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_s8, addr 0x68e3470, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_u16, addr 0x68e36a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_u32, addr 0x68e3710, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_u64, addr 0x68e3780, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_u8, addr 0x68e3630, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshld_s64, addr 0x68ef388, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vrshld_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshld_u64, addr 0x68ef3c0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vrshld_u64(uint64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_s16, addr 0x68e3518, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_s32, addr 0x68e3588, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_s64, addr 0x68e35f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_s8, addr 0x68e34a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_u16, addr 0x68e36d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_u32, addr 0x68e3748, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_u64, addr 0x68e37b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_u8, addr 0x68e3668, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_s16, addr 0x68e4280, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_s32, addr 0x68e4290, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_s64, addr 0x68e42a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_s8, addr 0x68e4270, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_u16, addr 0x68e42c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_u32, addr 0x68e42d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_u64, addr 0x68e42e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_u8, addr 0x68e42b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrd_n_s64, addr 0x68ef5d8, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vrshrd_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrd_n_u64, addr 0x68ef610, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vrshrd_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_s16, addr 0x68f0000, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_s32, addr 0x68f0038, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_s64, addr 0x68f0070, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_u16, addr 0x68f00a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_u32, addr 0x68f00e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_u64, addr 0x68f0118, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_s16, addr 0x68e4d20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_s32, addr 0x68e4d58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_s64, addr 0x68e4d90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_u16, addr 0x68e4dc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_u32, addr 0x68e4e00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_u64, addr 0x68e4e38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_s16, addr 0x68e4288, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_s32, addr 0x68e4298, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_s64, addr 0x68e42a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_s8, addr 0x68e4278, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_u16, addr 0x68e42c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_u32, addr 0x68e42d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_u64, addr 0x68e42e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_u8, addr 0x68e42b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrte_f32, addr 0x68e8408, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrte_f64, addr 0x68f4a74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrte_u32, addr 0x68e8398, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrted_f64, addr 0x68f4b1c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrsqrted_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrteq_f32, addr 0x68e8440, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrteq_f64, addr 0x68f4aac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrteq_u32, addr 0x68e83d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrtes_f32, addr 0x68f4ae4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrsqrtes_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrts_f32, addr 0x68e8478, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrts_f64, addr 0x68f4b54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrtsd_f64, addr 0x68f4bfc, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrsqrtsd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrtsq_f32, addr 0x68e84b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrtsq_f64, addr 0x68f4b8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrtss_f32, addr 0x68f4bc4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrsqrtss_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_s16, addr 0x68e4680, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_s32, addr 0x68e4690, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_s64, addr 0x68e46a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_s8, addr 0x68e4670, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_u16, addr 0x68e46c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_u32, addr 0x68e46d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_u64, addr 0x68e46e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_u8, addr 0x68e46b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsrad_n_s64, addr 0x68ef660, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vrsrad_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsrad_n_u64, addr 0x68ef698, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vrsrad_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_s16, addr 0x68e4688, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_s32, addr 0x68e4698, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_s64, addr 0x68e46a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_s8, addr 0x68e4678, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_u16, addr 0x68e46c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_u32, addr 0x68e46d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_u64, addr 0x68e46e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_u8, addr 0x68e46b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_s16, addr 0x68eca98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_s32, addr 0x68ecad0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_s64, addr 0x68ecb08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_u16, addr 0x68ecb40, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_u32, addr 0x68ecb48, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_u64, addr 0x68ecb50, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_s16, addr 0x68e0cd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_s32, addr 0x68e0d08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_s64, addr 0x68e0d40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_u16, addr 0x68e0d78, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_u32, addr 0x68e0d80, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_u64, addr 0x68e0d88, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_f32, addr 0x68ea360, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_f64, addr 0x68f80cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_s16, addr 0x68ea2ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_s32, addr 0x68ea324, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_s64, addr 0x68ea35c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s64(int64_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_s8, addr 0x68ea2b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s8(int8_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_u16, addr 0x68ea240, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u16(uint16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_u32, addr 0x68ea278, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u32(uint32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_u64, addr 0x68ea2b0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u64(uint64_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_u8, addr 0x68ea208, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u8(uint8_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_f32, addr 0x68ea558, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_f64, addr 0x68f80d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_s16, addr 0x68ea4b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_s32, addr 0x68ea4e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_s64, addr 0x68ea520, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s64(int64_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_s8, addr 0x68ea478, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s8(int8_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_u16, addr 0x68ea3d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u16(uint16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_u32, addr 0x68ea408, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u32(uint32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_u64, addr 0x68ea440, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u64(uint64_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_u8, addr 0x68ea398, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u8(uint8_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1cq_u32, addr 0x68f82d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1cq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1h_u32, addr 0x68f837c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vsha1h_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1mq_u32, addr 0x68f8344, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1mq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1pq_u32, addr 0x68f830c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1pq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1su0q_u32, addr 0x68f83b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1su0q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1su1q_u32, addr 0x68f83ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1su1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsha256h2q_u32, addr 0x68f845c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256h2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha256hq_u32, addr 0x68f8424, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256hq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha256su0q_u32, addr 0x68f8494, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256su0q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsha256su1q_u32, addr 0x68f84cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256su1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_s16, addr 0x68e3f60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_s32, addr 0x68e3fd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_s64, addr 0x68e4040, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_s8, addr 0x68e3ef0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_u16, addr 0x68e4120, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_u32, addr 0x68e4190, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_u64, addr 0x68e4200, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_u8, addr 0x68e40b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_s16, addr 0x68e2de0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_s32, addr 0x68e2e50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_s64, addr 0x68e2ec0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_s8, addr 0x68e2d70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_u16, addr 0x68e2fa0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_u32, addr 0x68e3010, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_u64, addr 0x68e3080, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_u8, addr 0x68e2f30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshld_n_s64, addr 0x68ef5c8, size 0x8, virtual false, abstract: false, final false
  static inline int64_t vshld_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshld_n_u64, addr 0x68ef5d0, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t vshld_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshld_s64, addr 0x68ef158, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vshld_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshld_u64, addr 0x68ef190, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vshld_u64(uint64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_s16, addr 0x68f0428, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_s32, addr 0x68f0460, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_s8, addr 0x68f03f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_u16, addr 0x68f04d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_u32, addr 0x68f0508, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_u8, addr 0x68f0498, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_s16, addr 0x68e4ff8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_s32, addr 0x68e5030, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_s8, addr 0x68e4fc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_u16, addr 0x68e50a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_u32, addr 0x68e50d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_u8, addr 0x68e5068, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_s16, addr 0x68e3f98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_s32, addr 0x68e4008, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_s64, addr 0x68e4078, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_s8, addr 0x68e3f28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_u16, addr 0x68e4158, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_u32, addr 0x68e41c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_u64, addr 0x68e4238, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_u8, addr 0x68e40e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_s16, addr 0x68e2e18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_s32, addr 0x68e2e88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_s64, addr 0x68e2ef8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_s8, addr 0x68e2da8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_u16, addr 0x68e2fd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_u32, addr 0x68e3048, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_u64, addr 0x68e30b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_u8, addr 0x68e2f68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_s16, addr 0x68e3be0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_s32, addr 0x68e3c50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_s64, addr 0x68e3cc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_s8, addr 0x68e3b70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_u16, addr 0x68e3da0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_u32, addr 0x68e3e10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_u64, addr 0x68e3e80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_u8, addr 0x68e3d30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrd_n_s64, addr 0x68ef5b8, size 0x8, virtual false, abstract: false, final false
  static inline int64_t vshrd_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrd_n_u64, addr 0x68ef5c0, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t vshrd_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_s16, addr 0x68ef970, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_s32, addr 0x68ef9a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_s64, addr 0x68ef9e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_u16, addr 0x68efa18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_u32, addr 0x68efa50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_u64, addr 0x68efa88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_s16, addr 0x68e4930, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_s32, addr 0x68e4968, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_s64, addr 0x68e49a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_u16, addr 0x68e49d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_u32, addr 0x68e4a10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_u64, addr 0x68e4a48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_s16, addr 0x68e3c18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_s32, addr 0x68e3c88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_s64, addr 0x68e3cf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_s8, addr 0x68e3ba8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_u16, addr 0x68e3dd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_u32, addr 0x68e3e48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_u64, addr 0x68e3eb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_u8, addr 0x68e3d68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_s16, addr 0x68e5500, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_s32, addr 0x68e5570, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_s64, addr 0x68e55e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_s8, addr 0x68e5490, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_u16, addr 0x68e56c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_u32, addr 0x68e5730, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_u64, addr 0x68e57a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_u8, addr 0x68e5650, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vslid_n_s64, addr 0x68f05b0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vslid_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vslid_n_u64, addr 0x68f05e8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vslid_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_s16, addr 0x68e5538, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_s32, addr 0x68e55a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_s64, addr 0x68e5618, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_s8, addr 0x68e54c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_u16, addr 0x68e56f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_u32, addr 0x68e5768, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_u64, addr 0x68e57d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_u8, addr 0x68e5688, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsqadd_u16, addr 0x68eae58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqadd_u32, addr 0x68eaec8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqadd_u64, addr 0x68eaf38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqadd_u8, addr 0x68eade8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddb_u8, addr 0x68eafa8, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vsqaddb_u8(uint8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddd_u64, addr 0x68eb050, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vsqaddd_u64(uint64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddh_u16, addr 0x68eafe0, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vsqaddh_u16(uint16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddq_u16, addr 0x68eae90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddq_u32, addr 0x68eaf00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddq_u64, addr 0x68eaf70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddq_u8, addr 0x68eae20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqadds_u32, addr 0x68eb018, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vsqadds_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqrt_f32, addr 0x68f4994, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vsqrt_f64, addr 0x68f4a04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vsqrtq_f32, addr 0x68f49cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vsqrtq_f64, addr 0x68f4a3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_s16, addr 0x68e4360, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_s32, addr 0x68e43d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_s64, addr 0x68e4440, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_s8, addr 0x68e42f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_u16, addr 0x68e4520, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_u32, addr 0x68e4590, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_u64, addr 0x68e4600, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_u8, addr 0x68e44b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsrad_n_s64, addr 0x68ef648, size 0xc, virtual false, abstract: false, final false
  static inline int64_t vsrad_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsrad_n_u64, addr 0x68ef654, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t vsrad_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_s16, addr 0x68e4398, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_s32, addr 0x68e4408, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_s64, addr 0x68e4478, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_s8, addr 0x68e4328, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_u16, addr 0x68e4558, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_u32, addr 0x68e45c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_u64, addr 0x68e4638, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_u8, addr 0x68e44e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_s16, addr 0x68e5180, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_s32, addr 0x68e51f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_s64, addr 0x68e5260, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_s8, addr 0x68e5110, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_u16, addr 0x68e5340, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_u32, addr 0x68e53b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_u64, addr 0x68e5420, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_u8, addr 0x68e52d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsrid_n_s64, addr 0x68f0540, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vsrid_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsrid_n_u64, addr 0x68f0578, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vsrid_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_s16, addr 0x68e51b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_s32, addr 0x68e5228, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_s64, addr 0x68e5298, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_s8, addr 0x68e5148, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_u16, addr 0x68e5378, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_u32, addr 0x68e53e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_u64, addr 0x68e5458, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_u8, addr 0x68e5308, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_f32, addr 0x68f95fc, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_f32(float_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_f64, addr 0x68f960c, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_f64(double_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_s16, addr 0x68f958c, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s16(int16_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_s32, addr 0x68f959c, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s32(int32_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_s64, addr 0x68f95ac, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s64(int64_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_s8, addr 0x68f957c, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s8(int8_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_u16, addr 0x68f95cc, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u16(uint16_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_u32, addr 0x68f95dc, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u32(uint32_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_u64, addr 0x68f95ec, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u64(uint64_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_u8, addr 0x68f95bc, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u8(uint8_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_f32, addr 0x68f9604, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_f32(float_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_f64, addr 0x68f9614, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_f64(double_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_s16, addr 0x68f9594, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s16(int16_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_s32, addr 0x68f95a4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s32(int32_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_s64, addr 0x68f95b4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s64(int64_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_s8, addr 0x68f9584, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s8(int8_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_u16, addr 0x68f95d4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u16(uint16_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_u32, addr 0x68f95e4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u32(uint32_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_u64, addr 0x68f95f4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u64(uint64_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_u8, addr 0x68f95c4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u8(uint8_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_f32, addr 0x68e02e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_f64, addr 0x68ec498, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_s16, addr 0x68e0150, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_s32, addr 0x68e01c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_s64, addr 0x68e0230, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_s8, addr 0x68e00e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_u16, addr 0x68e02b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_u32, addr 0x68e02c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_u64, addr 0x68e02d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_u8, addr 0x68e02a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubd_s64, addr 0x68ec508, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vsubd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubd_u64, addr 0x68ec540, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vsubd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_s16, addr 0x68ec9d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_s32, addr 0x68eca10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_s64, addr 0x68eca48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_u16, addr 0x68eca80, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_u32, addr 0x68eca88, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_u64, addr 0x68eca90, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_s16, addr 0x68e0c10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_s32, addr 0x68e0c48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_s64, addr 0x68e0c80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_u16, addr 0x68e0cb8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_u32, addr 0x68e0cc0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_u64, addr 0x68e0cc8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_s16, addr 0x68ec5b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_s32, addr 0x68ec5e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_s8, addr 0x68ec578, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_u16, addr 0x68ec658, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_u32, addr 0x68ec690, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_u8, addr 0x68ec620, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_s16, addr 0x68e0388, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_s32, addr 0x68e03c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_s8, addr 0x68e0350, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_u16, addr 0x68e0430, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_u32, addr 0x68e0468, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_u8, addr 0x68e03f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_f32, addr 0x68e0318, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_f64, addr 0x68ec4d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_s16, addr 0x68e0188, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_s32, addr 0x68e01f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_s64, addr 0x68e0268, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_s8, addr 0x68e0118, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_u16, addr 0x68e02b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_u32, addr 0x68e02c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_u64, addr 0x68e02d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_u8, addr 0x68e02a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_s16, addr 0x68ec700, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_s32, addr 0x68ec738, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_s8, addr 0x68ec6c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_u16, addr 0x68ec7a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_u32, addr 0x68ec7e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_u8, addr 0x68ec770, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_s16, addr 0x68e04d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_s32, addr 0x68e0510, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_s8, addr 0x68e04a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_u16, addr 0x68e0580, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_u32, addr 0x68e05b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_u8, addr 0x68e0548, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtbl1_s8, addr 0x68e9e00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbl1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtbl1_u8, addr 0x68e9e38, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbl1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtbx1_s8, addr 0x68e9e40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbx1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vtbx1_u8, addr 0x68e9e78, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbx1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_f32, addr 0x68f7d9c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_s16, addr 0x68f7c4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_s32, addr 0x68f7cbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_s8, addr 0x68f7bdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_u16, addr 0x68f7d74, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_u32, addr 0x68f7d84, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_u8, addr 0x68f7d64, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_f32, addr 0x68f7da4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_f64, addr 0x68f7dac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_s16, addr 0x68f7c84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_s32, addr 0x68f7cf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_s64, addr 0x68f7d2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_s8, addr 0x68f7c14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_u16, addr 0x68f7d7c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_u32, addr 0x68f7d8c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_u64, addr 0x68f7d94, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_u8, addr 0x68f7d6c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_f32, addr 0x68f7f74, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_s16, addr 0x68f7e24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_s32, addr 0x68f7e94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_s8, addr 0x68f7db4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_u16, addr 0x68f7f4c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_u32, addr 0x68f7f5c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_u8, addr 0x68f7f3c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_f32, addr 0x68f7f7c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_f64, addr 0x68f7f84, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_s16, addr 0x68f7e5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_s32, addr 0x68f7ecc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_s64, addr 0x68f7f04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_s8, addr 0x68f7dec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_u16, addr 0x68f7f54, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_u32, addr 0x68f7f64, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_u64, addr 0x68f7f6c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_u8, addr 0x68f7f44, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_s16, addr 0x68e1df0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_s32, addr 0x68e1e60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_s64, addr 0x68eea48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_s8, addr 0x68e1d80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_u16, addr 0x68e1ee0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_u32, addr 0x68e1ef0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_u64, addr 0x68eeab8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_u8, addr 0x68e1ed0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstd_s64, addr 0x68eeac8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vtstd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstd_u64, addr 0x68eeb00, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vtstd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_s16, addr 0x68e1e28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_s32, addr 0x68e1e98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_s64, addr 0x68eea80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_s8, addr 0x68e1db8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_u16, addr 0x68e1ee8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_u32, addr 0x68e1ef8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_u64, addr 0x68eeac0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_u8, addr 0x68e1ed8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqadd_s16, addr 0x68eabb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqadd_s32, addr 0x68eac28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqadd_s64, addr 0x68eac98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqadd_s8, addr 0x68eab48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddb_s8, addr 0x68ead08, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vuqaddb_s8(int8_t a0, uint8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddd_s64, addr 0x68eadb0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vuqaddd_s64(int64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddh_s16, addr 0x68ead40, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vuqaddh_s16(int16_t a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddq_s16, addr 0x68eabf0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddq_s32, addr 0x68eac60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddq_s64, addr 0x68eacd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddq_s8, addr 0x68eab80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqadds_s32, addr 0x68ead78, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vuqadds_s32(int32_t a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_f32, addr 0x68f79ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_s16, addr 0x68f789c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_s32, addr 0x68f790c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_s8, addr 0x68f782c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_u16, addr 0x68f79c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_u32, addr 0x68f79d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_u8, addr 0x68f79b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_f32, addr 0x68f79f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_f64, addr 0x68f79fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_s16, addr 0x68f78d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_s32, addr 0x68f7944, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_s64, addr 0x68f797c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_s8, addr 0x68f7864, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_u16, addr 0x68f79cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_u32, addr 0x68f79dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_u64, addr 0x68f79e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_u8, addr 0x68f79bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_f32, addr 0x68f7bc4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_s16, addr 0x68f7a74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_s32, addr 0x68f7ae4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_s8, addr 0x68f7a04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_u16, addr 0x68f7b9c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_u32, addr 0x68f7bac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_u8, addr 0x68f7b8c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_f32, addr 0x68f7bcc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_f64, addr 0x68f7bd4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_s16, addr 0x68f7aac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_s32, addr 0x68f7b1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_s64, addr 0x68f7b54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_s8, addr 0x68f7a3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_u16, addr 0x68f7ba4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_u32, addr 0x68f7bb4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_u64, addr 0x68f7bbc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_u8, addr 0x68f7b94, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_f32, addr 0x68f763c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_s16, addr 0x68f74ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_s32, addr 0x68f755c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_s8, addr 0x68f747c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_u16, addr 0x68f7614, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_u32, addr 0x68f7624, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_u8, addr 0x68f7604, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_f32, addr 0x68f7644, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_f64, addr 0x68f764c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_s16, addr 0x68f7524, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_s32, addr 0x68f7594, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_s64, addr 0x68f75cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_s8, addr 0x68f74b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_u16, addr 0x68f761c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_u32, addr 0x68f762c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_u64, addr 0x68f7634, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_u8, addr 0x68f760c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_f32, addr 0x68f7814, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_s16, addr 0x68f76c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_s32, addr 0x68f7734, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_s8, addr 0x68f7654, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_u16, addr 0x68f77ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_u32, addr 0x68f77fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_u8, addr 0x68f77dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_f32, addr 0x68f781c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_f64, addr 0x68f7824, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_s16, addr 0x68f76fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_s32, addr 0x68f776c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_s64, addr 0x68f77a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_s8, addr 0x68f768c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_u16, addr 0x68f77f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_u32, addr 0x68f7804, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_u64, addr 0x68f780c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_u8, addr 0x68f77e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Arm_Neon();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Arm_Neon", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Arm_Neon(Arm_Neon&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Arm_Neon", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Arm_Neon(Arm_Neon const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17762 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::Arm_Neon) == 0x10, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Arm", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Arm(Arm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Arm", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Arm(Arm const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17763 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::Arm) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
