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
  /// @brief Method __crc32b, addr 0x68ba7a8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32b(uint32_t a0, uint8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32cb, addr 0x68ba888, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32cb(uint32_t a0, uint8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32cd, addr 0x68ba930, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32cd(uint32_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32ch, addr 0x68ba8c0, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32ch(uint32_t a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32cw, addr 0x68ba8f8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32cw(uint32_t a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32d, addr 0x68ba850, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32d(uint32_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32h, addr 0x68ba7e0, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32h(uint32_t a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32w, addr 0x68ba818, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32w(uint32_t a0, uint32_t a1);

  /// @brief Method .ctor, addr 0x68bb8c0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsNeonArmv82FeaturesSupported, addr 0x68ac8a4, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonArmv82FeaturesSupported();

  /// @brief Method get_IsNeonCryptoSupported, addr 0x68ba570, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonCryptoSupported();

  /// @brief Method get_IsNeonDotProdSupported, addr 0x68baa48, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonDotProdSupported();

  /// @brief Method get_IsNeonRDMASupported, addr 0x68bacf0, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonRDMASupported();

  /// @brief Method get_IsNeonSupported, addr 0x68a067c, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonSupported();

  /// [DebuggerStepThrough]
  /// @brief Method vaba_s16, addr 0x68a4674, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaba_s32, addr 0x68a46e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaba_s8, addr 0x68a4604, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaba_u16, addr 0x68a47c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaba_u32, addr 0x68a4834, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaba_u8, addr 0x68a4754, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_s16, addr 0x68b1044, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_s32, addr 0x68b107c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_s8, addr 0x68b100c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_u16, addr 0x68b10ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_u32, addr 0x68b1124, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_u8, addr 0x68b10b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_s16, addr 0x68a48dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_s32, addr 0x68a4914, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_s8, addr 0x68a48a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_u16, addr 0x68a4984, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_u32, addr 0x68a49bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_u8, addr 0x68a494c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_s16, addr 0x68a46ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_s32, addr 0x68a471c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_s8, addr 0x68a463c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_u16, addr 0x68a47fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_u32, addr 0x68a486c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_u8, addr 0x68a478c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_f32, addr 0x68a4444, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_f64, addr 0x68b0ddc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_s16, addr 0x68a4214, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_s32, addr 0x68a4284, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_s8, addr 0x68a41a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_u16, addr 0x68a4364, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_u32, addr 0x68a43d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_u8, addr 0x68a42f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdd_f64, addr 0x68b0e84, size 0x38, virtual false, abstract: false, final false
  static inline double_t vabdd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_s16, addr 0x68b0ef4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_s32, addr 0x68b0f2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_s8, addr 0x68b0ebc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_u16, addr 0x68b0f9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_u32, addr 0x68b0fd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_u8, addr 0x68b0f64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_s16, addr 0x68a44ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_s32, addr 0x68a4524, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_s8, addr 0x68a44b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_u16, addr 0x68a4594, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_u32, addr 0x68a45cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_u8, addr 0x68a455c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_f32, addr 0x68a447c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_f64, addr 0x68b0e14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_s16, addr 0x68a424c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_s32, addr 0x68a42bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_s8, addr 0x68a41dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_u16, addr 0x68a439c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_u32, addr 0x68a440c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_u8, addr 0x68a432c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabds_f32, addr 0x68b0e4c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vabds_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_f32, addr 0x68a9ccc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_f64, addr 0x68b6650, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_s16, addr 0x68a9bec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_s32, addr 0x68a9c5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_s64, addr 0x68b65a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_s8, addr 0x68a9b7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsd_s64, addr 0x68b65e0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vabsd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_f32, addr 0x68a9d04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_f64, addr 0x68b6688, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_s16, addr 0x68a9c24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_s32, addr 0x68a9c94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_s64, addr 0x68b6618, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_s8, addr 0x68a9bb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_f32, addr 0x68a0884, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_f64, addr 0x68ac8ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_s16, addr 0x68a06f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_s32, addr 0x68a0764, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_s64, addr 0x68a07d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_s8, addr 0x68a0684, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_u16, addr 0x68a0854, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_u32, addr 0x68a0864, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_u64, addr 0x68a0874, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_u8, addr 0x68a0844, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddd_s64, addr 0x68ac91c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddd_u64, addr 0x68ac954, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_s16, addr 0x68ad32c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_s32, addr 0x68ad364, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_s64, addr 0x68ad39c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_u16, addr 0x68ad3d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_u32, addr 0x68ad3dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_u64, addr 0x68ad3e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_s16, addr 0x68a1454, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_s32, addr 0x68a148c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_s64, addr 0x68a14c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_u16, addr 0x68a14fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_u32, addr 0x68a1504, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_u64, addr 0x68a150c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_s16, addr 0x68ac9c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_s32, addr 0x68ac9fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_s8, addr 0x68ac98c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_u16, addr 0x68aca6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_u32, addr 0x68acaa4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_u8, addr 0x68aca34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_s16, addr 0x68a092c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_s32, addr 0x68a0964, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_s8, addr 0x68a08f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_u16, addr 0x68a09d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_u32, addr 0x68a0a0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_u8, addr 0x68a099c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_s16, addr 0x68b8cd4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddlv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_s32, addr 0x68b8d44, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddlv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_s8, addr 0x68b8c64, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddlv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_u16, addr 0x68b8e24, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddlv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_u32, addr 0x68b8e94, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddlv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_u8, addr 0x68b8db4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddlv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_s16, addr 0x68b8d0c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddlvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_s32, addr 0x68b8d7c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddlvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_s8, addr 0x68b8c9c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddlvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_u16, addr 0x68b8e5c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddlvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_u32, addr 0x68b8ecc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddlvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_u8, addr 0x68b8dec, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddlvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_f32, addr 0x68a08bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_f64, addr 0x68ac8e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_s16, addr 0x68a072c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_s32, addr 0x68a079c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_s64, addr 0x68a080c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_s8, addr 0x68a06bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_u16, addr 0x68a085c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_u32, addr 0x68a086c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_u64, addr 0x68a087c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_u8, addr 0x68a084c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_f32, addr 0x68b8bbc, size 0x38, virtual false, abstract: false, final false
  static inline float_t vaddv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_s16, addr 0x68b891c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_s32, addr 0x68b898c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_s8, addr 0x68b88ac, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vaddv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_u16, addr 0x68b8aa4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_u32, addr 0x68b8b14, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_u8, addr 0x68b8a34, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vaddv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_f32, addr 0x68b8bf4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vaddvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_f64, addr 0x68b8c2c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vaddvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_s16, addr 0x68b8954, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_s32, addr 0x68b89c4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_s64, addr 0x68b89fc, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddvq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_s8, addr 0x68b88e4, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vaddvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_u16, addr 0x68b8adc, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_u32, addr 0x68b8b4c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_u64, addr 0x68b8b84, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddvq_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_u8, addr 0x68b8a6c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vaddvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_s16, addr 0x68acb14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_s32, addr 0x68acb4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_s8, addr 0x68acadc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_u16, addr 0x68acbbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_u32, addr 0x68acbf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_u8, addr 0x68acb84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_s16, addr 0x68a0a7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_s32, addr 0x68a0ab4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_s8, addr 0x68a0a44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_u16, addr 0x68a0b24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_u32, addr 0x68a0b5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_u8, addr 0x68a0aec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaesdq_u8, addr 0x68ba9a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaesdq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaeseq_u8, addr 0x68ba968, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaeseq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaesimcq_u8, addr 0x68baa10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaesimcq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaesmcq_u8, addr 0x68ba9d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaesmcq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vand_s16, addr 0x68aa8bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_s32, addr 0x68aa8cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_s64, addr 0x68aa8dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_s8, addr 0x68aa84c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_u16, addr 0x68aa8fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_u32, addr 0x68aa90c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_u64, addr 0x68aa91c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_u8, addr 0x68aa8ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_s16, addr 0x68aa8c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_s32, addr 0x68aa8d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_s64, addr 0x68aa8e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_s8, addr 0x68aa884, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_u16, addr 0x68aa904, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_u32, addr 0x68aa914, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_u64, addr 0x68aa924, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_u8, addr 0x68aa8f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_s16, addr 0x68aab5c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_s32, addr 0x68aab6c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_s64, addr 0x68aab7c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_s8, addr 0x68aaaec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_u16, addr 0x68aab9c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_u32, addr 0x68aabac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_u64, addr 0x68aabbc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_u8, addr 0x68aab8c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_s16, addr 0x68aab64, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_s32, addr 0x68aab74, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_s64, addr 0x68aab84, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_s8, addr 0x68aab24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_u16, addr 0x68aaba4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_u32, addr 0x68aabb4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_u64, addr 0x68aabc4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_u8, addr 0x68aab94, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_f32, addr 0x68aad8c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_f64, addr 0x68b6ed8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_s16, addr 0x68aad1c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_s32, addr 0x68aad2c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_s64, addr 0x68aad3c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_s8, addr 0x68aacac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_u16, addr 0x68aad5c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_u32, addr 0x68aad6c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_u64, addr 0x68aad7c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_u8, addr 0x68aad4c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_f32, addr 0x68aad94, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_f64, addr 0x68b6ee0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_s16, addr 0x68aad24, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_s32, addr 0x68aad34, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_s64, addr 0x68aad44, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_s8, addr 0x68aace4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_u16, addr 0x68aad64, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_u32, addr 0x68aad74, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_u64, addr 0x68aad84, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_u8, addr 0x68aad54, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vcage_f32, addr 0x68a3e64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcage_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcage_f64, addr 0x68b096c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcage_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaged_f64, addr 0x68b0a14, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcaged_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcageq_f32, addr 0x68a3e9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcageq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcageq_f64, addr 0x68b09a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcageq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcages_f32, addr 0x68b09dc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcages_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagt_f32, addr 0x68a3f44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcagt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagt_f64, addr 0x68b0b2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcagt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagtd_f64, addr 0x68b0bd4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcagtd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagtq_f32, addr 0x68a3f7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagtq_f64, addr 0x68b0b64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagts_f32, addr 0x68b0b9c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcagts_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcale_f32, addr 0x68a3ed4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcale_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcale_f64, addr 0x68b0a4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcale_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaled_f64, addr 0x68b0af4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcaled_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaleq_f32, addr 0x68a3f0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaleq_f64, addr 0x68b0a84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcales_f32, addr 0x68b0abc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcales_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcalt_f32, addr 0x68a3fb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcalt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcalt_f64, addr 0x68b0c0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcalt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaltd_f64, addr 0x68b0cb4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcaltd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaltq_f32, addr 0x68a3fec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaltq_f64, addr 0x68b0c44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcalts_f32, addr 0x68b0c7c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcalts_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_f32, addr 0x68a31b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_f64, addr 0x68aee7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_s16, addr 0x68a30a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_s32, addr 0x68a3114, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_s64, addr 0x68aedfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_s8, addr 0x68a3034, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_u16, addr 0x68a3194, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_u32, addr 0x68a31a4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_u64, addr 0x68aee6c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_u8, addr 0x68a3184, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqd_f64, addr 0x68aef94, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqd_s64, addr 0x68aeeec, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqd_u64, addr 0x68aef24, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_f32, addr 0x68a31ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_f64, addr 0x68aeeb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_s16, addr 0x68a30dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_s32, addr 0x68a314c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_s64, addr 0x68aee34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_s8, addr 0x68a306c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_u16, addr 0x68a319c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_u32, addr 0x68a31ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_u64, addr 0x68aee74, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_u8, addr 0x68a318c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqs_f32, addr 0x68aef5c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vceqs_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_f32, addr 0x68af14c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_f64, addr 0x68af23c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_s16, addr 0x68af03c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_s32, addr 0x68af0ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_s64, addr 0x68af1bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_s8, addr 0x68aefcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_u16, addr 0x68af12c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_u32, addr 0x68af13c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_u64, addr 0x68af22c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_u8, addr 0x68af11c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzd_f64, addr 0x68af354, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqzd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzd_s64, addr 0x68af2ac, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqzd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzd_u64, addr 0x68af2e4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqzd_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_f32, addr 0x68af184, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_f64, addr 0x68af274, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_s16, addr 0x68af074, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_s32, addr 0x68af0e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_s64, addr 0x68af1f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_s8, addr 0x68af004, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_u16, addr 0x68af134, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_u32, addr 0x68af144, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_u64, addr 0x68af234, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_u8, addr 0x68af124, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzs_f32, addr 0x68af31c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vceqzs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_f32, addr 0x68a34c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_f64, addr 0x68af46c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_s16, addr 0x68a3294, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_s32, addr 0x68a3304, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_s64, addr 0x68af38c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_s8, addr 0x68a3224, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_u16, addr 0x68a33e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_u32, addr 0x68a3454, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_u64, addr 0x68af3fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_u8, addr 0x68a3374, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcged_f64, addr 0x68af584, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcged_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcged_s64, addr 0x68af4dc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcged_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcged_u64, addr 0x68af514, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcged_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_f32, addr 0x68a34fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_f64, addr 0x68af4a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_s16, addr 0x68a32cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_s32, addr 0x68a333c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_s64, addr 0x68af3c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_s8, addr 0x68a325c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_u16, addr 0x68a341c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_u32, addr 0x68a348c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_u64, addr 0x68af434, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_u8, addr 0x68a33ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcges_f32, addr 0x68af54c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcges_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_f32, addr 0x68af77c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_f64, addr 0x68af7ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_s16, addr 0x68af62c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_s32, addr 0x68af69c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_s64, addr 0x68af70c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_s8, addr 0x68af5bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezd_f64, addr 0x68af8cc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgezd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezd_s64, addr 0x68af85c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgezd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_f32, addr 0x68af7b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_f64, addr 0x68af824, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_s16, addr 0x68af664, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_s32, addr 0x68af6d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_s64, addr 0x68af744, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_s8, addr 0x68af5f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezs_f32, addr 0x68af894, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcgezs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_f32, addr 0x68a3ae4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_f64, addr 0x68aff5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_s16, addr 0x68a38b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_s32, addr 0x68a3924, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_s64, addr 0x68afe7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_s8, addr 0x68a3844, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_u16, addr 0x68a3a04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_u32, addr 0x68a3a74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_u64, addr 0x68afeec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_u8, addr 0x68a3994, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtd_f64, addr 0x68b0074, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtd_s64, addr 0x68affcc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtd_u64, addr 0x68b0004, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_f32, addr 0x68a3b1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_f64, addr 0x68aff94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_s16, addr 0x68a38ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_s32, addr 0x68a395c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_s64, addr 0x68afeb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_s8, addr 0x68a387c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_u16, addr 0x68a3a3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_u32, addr 0x68a3aac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_u64, addr 0x68aff24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_u8, addr 0x68a39cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgts_f32, addr 0x68b003c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcgts_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_f32, addr 0x68b026c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_f64, addr 0x68b02dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_s16, addr 0x68b011c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_s32, addr 0x68b018c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_s64, addr 0x68b01fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_s8, addr 0x68b00ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzd_f64, addr 0x68b03bc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtzd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzd_s64, addr 0x68b034c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtzd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_f32, addr 0x68b02a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_f64, addr 0x68b0314, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_s16, addr 0x68b0154, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_s32, addr 0x68b01c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_s64, addr 0x68b0234, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_s8, addr 0x68b00e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzs_f32, addr 0x68b0384, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcgtzs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_f32, addr 0x68a37d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_f64, addr 0x68af9e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_s16, addr 0x68a35a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_s32, addr 0x68a3614, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_s64, addr 0x68af904, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_s8, addr 0x68a3534, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_u16, addr 0x68a36f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_u32, addr 0x68a3764, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_u64, addr 0x68af974, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_u8, addr 0x68a3684, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcled_f64, addr 0x68afafc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcled_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcled_s64, addr 0x68afa54, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcled_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcled_u64, addr 0x68afa8c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcled_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_f32, addr 0x68a380c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_f64, addr 0x68afa1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_s16, addr 0x68a35dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_s32, addr 0x68a364c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_s64, addr 0x68af93c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_s8, addr 0x68a356c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_u16, addr 0x68a372c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_u32, addr 0x68a379c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_u64, addr 0x68af9ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_u8, addr 0x68a36bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcles_f32, addr 0x68afac4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcles_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_f32, addr 0x68afcf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_f64, addr 0x68afd64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_s16, addr 0x68afba4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_s32, addr 0x68afc14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_s64, addr 0x68afc84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_s8, addr 0x68afb34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezd_f64, addr 0x68afe44, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vclezd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezd_s64, addr 0x68afdd4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vclezd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_f32, addr 0x68afd2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_f64, addr 0x68afd9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_s16, addr 0x68afbdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_s32, addr 0x68afc4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_s64, addr 0x68afcbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_s8, addr 0x68afb6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezs_f32, addr 0x68afe0c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vclezs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcls_s16, addr 0x68aa20c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcls_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcls_s32, addr 0x68aa27c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcls_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcls_s8, addr 0x68aa19c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcls_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclsq_s16, addr 0x68aa244, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclsq_s32, addr 0x68aa2b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclsq_s8, addr 0x68aa1d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_f32, addr 0x68a3df4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_f64, addr 0x68b04d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_s16, addr 0x68a3bc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_s32, addr 0x68a3c34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_s64, addr 0x68b03f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_s8, addr 0x68a3b54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_u16, addr 0x68a3d14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_u32, addr 0x68a3d84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_u64, addr 0x68b0464, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_u8, addr 0x68a3ca4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltd_f64, addr 0x68b05ec, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltd_s64, addr 0x68b0544, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltd_u64, addr 0x68b057c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_f32, addr 0x68a3e2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_f64, addr 0x68b050c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_s16, addr 0x68a3bfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_s32, addr 0x68a3c6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_s64, addr 0x68b042c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_s8, addr 0x68a3b8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_u16, addr 0x68a3d4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_u32, addr 0x68a3dbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_u64, addr 0x68b049c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_u8, addr 0x68a3cdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclts_f32, addr 0x68b05b4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vclts_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_f32, addr 0x68b07e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_f64, addr 0x68b0854, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_s16, addr 0x68b0694, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_s32, addr 0x68b0704, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_s64, addr 0x68b0774, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_s8, addr 0x68b0624, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzd_f64, addr 0x68b0934, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltzd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzd_s64, addr 0x68b08c4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltzd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_f32, addr 0x68b081c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_f64, addr 0x68b088c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_s16, addr 0x68b06cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_s32, addr 0x68b073c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_s64, addr 0x68b07ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_s8, addr 0x68b065c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzs_f32, addr 0x68b08fc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcltzs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_s16, addr 0x68aa35c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_s32, addr 0x68aa3cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_s8, addr 0x68aa2ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_u16, addr 0x68aa44c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_u32, addr 0x68aa45c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_u8, addr 0x68aa43c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_s16, addr 0x68aa394, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_s32, addr 0x68aa404, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_s8, addr 0x68aa324, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_u16, addr 0x68aa454, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_u32, addr 0x68aa464, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_u8, addr 0x68aa444, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcnt_s8, addr 0x68aa46c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcnt_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcnt_u8, addr 0x68aa4dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcnt_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcntq_s8, addr 0x68aa4a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcntq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcntq_u8, addr 0x68aa4e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcntq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_f16, addr 0x68bb6d4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_f16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_f32, addr 0x68bb6d8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_f64, addr 0x68bb6dc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_s16, addr 0x68bb6b8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_s32, addr 0x68bb6bc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_s64, addr 0x68bb6c0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_s8, addr 0x68bb6b4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_u16, addr 0x68bb6c8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_u32, addr 0x68bb6cc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_u64, addr 0x68bb6d0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_u8, addr 0x68bb6c4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_f32, addr 0x68b7208, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_f64, addr 0x68b7278, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_s16, addr 0x68b6f58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_s32, addr 0x68b6fc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_s64, addr 0x68b7038, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_s8, addr 0x68b6ee8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_u16, addr 0x68b70e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_u32, addr 0x68b7158, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_u64, addr 0x68b71c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_u8, addr 0x68b7078, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_f32, addr 0x68b7638, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_f64, addr 0x68b76a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_s16, addr 0x68b7328, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_s32, addr 0x68b7398, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_s64, addr 0x68b7408, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_s8, addr 0x68b72b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_u16, addr 0x68b74e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_u32, addr 0x68b7558, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_u64, addr 0x68b75c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_u8, addr 0x68b7478, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_f32, addr 0x68b7240, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_f64, addr 0x68b7280, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_s16, addr 0x68b6f90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_s32, addr 0x68b7000, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_s64, addr 0x68b7040, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_s8, addr 0x68b6f20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_u16, addr 0x68b7120, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_u32, addr 0x68b7190, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_u64, addr 0x68b71d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_u8, addr 0x68b70b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_f32, addr 0x68b7670, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_f64, addr 0x68b76e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_s16, addr 0x68b7360, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_s32, addr 0x68b73d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_s64, addr 0x68b7440, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_s8, addr 0x68b72f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_u16, addr 0x68b7520, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_u32, addr 0x68b7590, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_u64, addr 0x68b7600, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_u8, addr 0x68b74b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_f16, addr 0x68bb488, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f16(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_f32, addr 0x68bb48c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f32(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_f64, addr 0x68bb490, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_s16, addr 0x68bb46c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s16(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_s32, addr 0x68bb470, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s32(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_s64, addr 0x68bb474, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_s8, addr 0x68bb468, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s8(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_u16, addr 0x68bb47c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u16(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_u32, addr 0x68bb480, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u32(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_u64, addr 0x68bb484, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_u8, addr 0x68bb478, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u8(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f32_f64, addr 0x68b3a44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f32_s32, addr 0x68a7c74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f32_u32, addr 0x68a7ce4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f64_f32, addr 0x68b3ab4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvt_f64_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f64_s64, addr 0x68b3734, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f64_u64, addr 0x68b37a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_u64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_high_f32_f64, addr 0x68b3a7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f32_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_high_f64_f32, addr 0x68b3aec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f64_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_f32_s32, addr 0x68a7d54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_f32_u32, addr 0x68a7dc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_f64_s64, addr 0x68b38f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_f64_u64, addr 0x68b3964, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_s32_f32, addr 0x68a7b94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s32_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_s64_f64, addr 0x68b3574, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s64_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_u32_f32, addr 0x68a7c04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u32_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_u64_f64, addr 0x68b35e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u64_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_s32_f32, addr 0x68a7ab4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_s64_f64, addr 0x68b2e74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_u32_f32, addr 0x68a7b24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_u64_f64, addr 0x68b2ee4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvta_s32_f32, addr 0x68b2b64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvta_s64_f64, addr 0x68b31f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvta_u32_f32, addr 0x68b2bd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvta_u64_f64, addr 0x68b3264, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtad_s64_f64, addr 0x68b3494, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtad_s64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtad_u64_f64, addr 0x68b34cc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtad_u64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtaq_s32_f32, addr 0x68b2b9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtaq_s64_f64, addr 0x68b322c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtaq_u32_f32, addr 0x68b2c0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtaq_u64_f64, addr 0x68b329c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtas_s32_f32, addr 0x68b2e04, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtas_s32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtas_u32_f32, addr 0x68b2e3c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtas_u32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_f64_s64, addr 0x68b3814, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_f64_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_f64_u64, addr 0x68b384c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_f64_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_n_f64_s64, addr 0x68b39d4, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_n_f64_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_n_f64_u64, addr 0x68b3a0c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_n_f64_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_n_s64_f64, addr 0x68b3654, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtd_n_s64_f64(double_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_n_u64_f64, addr 0x68b368c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtd_n_u64_f64(double_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_s64_f64, addr 0x68b32d4, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtd_s64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_u64_f64, addr 0x68b330c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtd_u64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtm_s32_f32, addr 0x68b29a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtm_s64_f64, addr 0x68b3034, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtm_u32_f32, addr 0x68b2a14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtm_u64_f64, addr 0x68b30a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmd_s64_f64, addr 0x68b33b4, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtmd_s64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmd_u64_f64, addr 0x68b33ec, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtmd_u64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmq_s32_f32, addr 0x68b29dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmq_s64_f64, addr 0x68b306c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmq_u32_f32, addr 0x68b2a4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmq_u64_f64, addr 0x68b30dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtms_s32_f32, addr 0x68b2d24, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtms_s32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtms_u32_f32, addr 0x68b2d5c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtms_u32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtn_s32_f32, addr 0x68b28c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtn_s64_f64, addr 0x68b2f54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtn_u32_f32, addr 0x68b2934, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtn_u64_f64, addr 0x68b2fc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnd_s64_f64, addr 0x68b3344, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtnd_s64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnd_u64_f64, addr 0x68b337c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtnd_u64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnq_s32_f32, addr 0x68b28fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnq_s64_f64, addr 0x68b2f8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnq_u32_f32, addr 0x68b296c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnq_u64_f64, addr 0x68b2ffc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtns_s32_f32, addr 0x68b2cb4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtns_s32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtns_u32_f32, addr 0x68b2cec, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtns_u32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtp_s32_f32, addr 0x68b2a84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtp_s64_f64, addr 0x68b3114, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtp_u32_f32, addr 0x68b2af4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtp_u64_f64, addr 0x68b3184, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpd_s64_f64, addr 0x68b3424, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtpd_s64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpd_u64_f64, addr 0x68b345c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtpd_u64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpq_s32_f32, addr 0x68b2abc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpq_s64_f64, addr 0x68b314c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpq_u32_f32, addr 0x68b2b2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpq_u64_f64, addr 0x68b31bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtps_s32_f32, addr 0x68b2d94, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtps_s32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtps_u32_f32, addr 0x68b2dcc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtps_u32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_f32_s32, addr 0x68a7cac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_f32_u32, addr 0x68a7d1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_f64_s64, addr 0x68b376c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_f64_u64, addr 0x68b37dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_f32_s32, addr 0x68a7d8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_f32_u32, addr 0x68a7dfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_f64_s64, addr 0x68b392c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_f64_u64, addr 0x68b399c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_s32_f32, addr 0x68a7bcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s32_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_s64_f64, addr 0x68b35ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s64_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_u32_f32, addr 0x68a7c3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u32_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_u64_f64, addr 0x68b361c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u64_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_s32_f32, addr 0x68a7aec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_s64_f64, addr 0x68b2eac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_u32_f32, addr 0x68a7b5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_u64_f64, addr 0x68b2f1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_f32_s32, addr 0x68b36c4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_f32_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_f32_u32, addr 0x68b36fc, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_f32_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_n_f32_s32, addr 0x68b3884, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_n_f32_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_n_f32_u32, addr 0x68b38bc, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_n_f32_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_n_s32_f32, addr 0x68b3504, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvts_n_s32_f32(float_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_n_u32_f32, addr 0x68b353c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvts_n_u32_f32(float_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_s32_f32, addr 0x68b2c44, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvts_s32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_u32_f32, addr 0x68b2c7c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvts_u32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtx_f32_f64, addr 0x68b3b24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtx_f32_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtx_high_f32_f64, addr 0x68b3b94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtx_high_f32_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtxd_f32_f64, addr 0x68b3b5c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvtxd_f32_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdiv_f32, addr 0x68ad8ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdiv_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdiv_f64, addr 0x68ad91c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdiv_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdivq_f32, addr 0x68ad8e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdivq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdivq_f64, addr 0x68ad954, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdivq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_lane_s32, addr 0x68bab68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_lane_u32, addr 0x68bab30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_laneq_s32, addr 0x68bac48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_laneq_u32, addr 0x68bac10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_s32, addr 0x68baa88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_u32, addr 0x68baa50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_lane_s32, addr 0x68bacb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_lane_u32, addr 0x68bac80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_laneq_s32, addr 0x68babd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_laneq_u32, addr 0x68baba0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_s32, addr 0x68baaf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_u32, addr 0x68baac0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_f32, addr 0x68ab054, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_f64, addr 0x68b7798, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_s16, addr 0x68aae0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_s32, addr 0x68aae7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_s64, addr 0x68aaeec, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_s8, addr 0x68aad9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_u16, addr 0x68aaf68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_u32, addr 0x68aafd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_u64, addr 0x68ab048, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_u8, addr 0x68aaef8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_f32, addr 0x68b7b24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_f64, addr 0x68b7b94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_s16, addr 0x68b7814, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_s32, addr 0x68b7884, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_s64, addr 0x68b78f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_s8, addr 0x68b77a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_u16, addr 0x68b79d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_u32, addr 0x68b7a44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_u64, addr 0x68b7ab4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_u8, addr 0x68b7964, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_f32, addr 0x68bb574, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_f64, addr 0x68bb590, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_s16, addr 0x68bb4b8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_s32, addr 0x68bb4dc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_s64, addr 0x68bb4f8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_s8, addr 0x68bb494, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_u16, addr 0x68bb528, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u16(uint16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_u32, addr 0x68bb54c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_u64, addr 0x68bb568, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_u8, addr 0x68bb504, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u8(uint8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupb_lane_s8, addr 0x68b7c04, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vdupb_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupb_lane_u8, addr 0x68b7cb0, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vdupb_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupb_laneq_s8, addr 0x68b7d9c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vdupb_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupb_laneq_u8, addr 0x68b7e7c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vdupb_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_lane_f64, addr 0x68b7d94, size 0x8, virtual false, abstract: false, final false
  static inline double_t vdupd_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_lane_s64, addr 0x68b7cac, size 0x4, virtual false, abstract: false, final false
  static inline int64_t vdupd_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_lane_u64, addr 0x68b7d58, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t vdupd_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_laneq_f64, addr 0x68b7f94, size 0x38, virtual false, abstract: false, final false
  static inline double_t vdupd_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_laneq_s64, addr 0x68b7e44, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vdupd_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_laneq_u64, addr 0x68b7f24, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vdupd_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vduph_lane_s16, addr 0x68b7c3c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vduph_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vduph_lane_u16, addr 0x68b7ce8, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vduph_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vduph_laneq_s16, addr 0x68b7dd4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vduph_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vduph_laneq_u16, addr 0x68b7eb4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vduph_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_f32, addr 0x68ab08c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_f64, addr 0x68b779c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_s16, addr 0x68aae44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_s32, addr 0x68aaeb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_s64, addr 0x68aaef0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_s8, addr 0x68aadd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_u16, addr 0x68aafa0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_u32, addr 0x68ab010, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_u64, addr 0x68ab04c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_u8, addr 0x68aaf30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_f32, addr 0x68b7b5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_f64, addr 0x68b7bcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_s16, addr 0x68b784c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_s32, addr 0x68b78bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_s64, addr 0x68b792c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_s8, addr 0x68b77dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_u16, addr 0x68b7a0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_u32, addr 0x68b7a7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_u64, addr 0x68b7aec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_u8, addr 0x68b799c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_f32, addr 0x68bb580, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_f64, addr 0x68bb598, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_s16, addr 0x68bb4c8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_s32, addr 0x68bb4e8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_s64, addr 0x68bb4fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_s8, addr 0x68bb4a4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_u16, addr 0x68bb538, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u16(uint16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_u32, addr 0x68bb558, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_u64, addr 0x68bb56c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_u8, addr 0x68bb514, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u8(uint8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_lane_f32, addr 0x68b7d5c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vdups_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_lane_s32, addr 0x68b7c74, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vdups_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_lane_u32, addr 0x68b7d20, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vdups_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_laneq_f32, addr 0x68b7f5c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vdups_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_laneq_s32, addr 0x68b7e0c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vdups_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_laneq_u32, addr 0x68b7eec, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vdups_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_s16, addr 0x68aaa7c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_s32, addr 0x68aaa8c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_s64, addr 0x68aaa9c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_s8, addr 0x68aaa0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_u16, addr 0x68aaabc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_u32, addr 0x68aaacc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_u64, addr 0x68aaadc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_u8, addr 0x68aaaac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_s16, addr 0x68aaa84, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_s32, addr 0x68aaa94, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_s64, addr 0x68aaaa4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_s8, addr 0x68aaa44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_u16, addr 0x68aaac4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_u32, addr 0x68aaad4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_u64, addr 0x68aaae4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_u8, addr 0x68aaab4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vext_f32, addr 0x68abd24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_f64, addr 0x68b96e4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_s16, addr 0x68aba7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_s32, addr 0x68abaec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_s64, addr 0x68abb5c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_s8, addr 0x68aba0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_u16, addr 0x68abc08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_u32, addr 0x68abc78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_u64, addr 0x68abce8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_u8, addr 0x68abb98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_f32, addr 0x68abd5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_f64, addr 0x68b96e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_s16, addr 0x68abab4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_s32, addr 0x68abb24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_s64, addr 0x68abb60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_s8, addr 0x68aba44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_u16, addr 0x68abc40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_u32, addr 0x68abcb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_u64, addr 0x68abcec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_u8, addr 0x68abbd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_f32, addr 0x68a1e44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_f64, addr 0x68add0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_lane_f32, addr 0x68add7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)9)]
  /// @brief Method vfma_lane_f64, addr 0x68addec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_laneq_f32, addr 0x68ade6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_laneq_f64, addr 0x68adedc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_n_f32, addr 0x68ac834, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_n_f64, addr 0x68ba490, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, double_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)9)]
  /// @brief Method vfmad_lane_f64, addr 0x68ade64, size 0x8, virtual false, abstract: false, final false
  static inline double_t vfmad_lane_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmad_laneq_f64, addr 0x68adf84, size 0x38, virtual false, abstract: false, final false
  static inline double_t vfmad_laneq_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_f32, addr 0x68a1e7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_f64, addr 0x68add44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_lane_f32, addr 0x68addb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_lane_f64, addr 0x68addf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_laneq_f32, addr 0x68adea4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_laneq_f64, addr 0x68adf14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_n_f32, addr 0x68ac86c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_n_f64, addr 0x68ba4c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, double_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmas_lane_f32, addr 0x68ade2c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmas_lane_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmas_laneq_f32, addr 0x68adf4c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmas_laneq_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_f32, addr 0x68a1eb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_f64, addr 0x68adfbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_lane_f32, addr 0x68ae02c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)9)]
  /// @brief Method vfms_lane_f64, addr 0x68ae09c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_laneq_f32, addr 0x68ae11c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_laneq_f64, addr 0x68ae18c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_n_f32, addr 0x68ba420, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_n_f64, addr 0x68ba500, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, double_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)9)]
  /// @brief Method vfmsd_lane_f64, addr 0x68ae114, size 0x8, virtual false, abstract: false, final false
  static inline double_t vfmsd_lane_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsd_laneq_f64, addr 0x68ae234, size 0x38, virtual false, abstract: false, final false
  static inline double_t vfmsd_laneq_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_f32, addr 0x68a1eec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_f64, addr 0x68adff4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_lane_f32, addr 0x68ae064, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_lane_f64, addr 0x68ae0a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_laneq_f32, addr 0x68ae154, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_laneq_f64, addr 0x68ae1c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_n_f32, addr 0x68ba458, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_n_f64, addr 0x68ba538, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, double_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmss_lane_f32, addr 0x68ae0dc, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmss_lane_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmss_laneq_f32, addr 0x68ae1fc, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmss_laneq_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_f32, addr 0x68bb720, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_f64, addr 0x68bb728, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_s16, addr 0x68bb6e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_s32, addr 0x68bb6f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_s64, addr 0x68bb6f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_s8, addr 0x68bb6e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_u16, addr 0x68bb708, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_u32, addr 0x68bb710, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_u64, addr 0x68bb718, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_u8, addr 0x68bb700, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_f32, addr 0x68ac27c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vget_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_f64, addr 0x68ba330, size 0x8, virtual false, abstract: false, final false
  static inline double_t vget_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_s16, addr 0x68ac208, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vget_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_s32, addr 0x68ac240, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vget_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_s64, addr 0x68ac278, size 0x4, virtual false, abstract: false, final false
  static inline int64_t vget_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_s8, addr 0x68ac1d0, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vget_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_u16, addr 0x68ac15c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vget_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_u32, addr 0x68ac194, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vget_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_u64, addr 0x68ac1cc, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t vget_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_u8, addr 0x68ac124, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vget_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_f32, addr 0x68bb750, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_f64, addr 0x68bb754, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_s16, addr 0x68bb734, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_s32, addr 0x68bb738, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_s64, addr 0x68bb73c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_s8, addr 0x68bb730, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_u16, addr 0x68bb744, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_u32, addr 0x68bb748, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_u64, addr 0x68bb74c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_u8, addr 0x68bb740, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_f32, addr 0x68ac474, size 0x38, virtual false, abstract: false, final false
  static inline float_t vgetq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_f64, addr 0x68ba338, size 0x38, virtual false, abstract: false, final false
  static inline double_t vgetq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_s16, addr 0x68ac3cc, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vgetq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_s32, addr 0x68ac404, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vgetq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_s64, addr 0x68ac43c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vgetq_lane_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_s8, addr 0x68ac394, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vgetq_lane_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_u16, addr 0x68ac2ec, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vgetq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_u32, addr 0x68ac324, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vgetq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_u64, addr 0x68ac35c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vgetq_lane_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_u8, addr 0x68ac2b4, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vgetq_lane_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_s16, addr 0x68a0c04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_s32, addr 0x68a0c74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_s8, addr 0x68a0b94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_u16, addr 0x68a0d54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_u32, addr 0x68a0dc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_u8, addr 0x68a0ce4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_s16, addr 0x68a0c3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_s32, addr 0x68a0cac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_s8, addr 0x68a0bcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_u16, addr 0x68a0d8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_u32, addr 0x68a0dfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_u8, addr 0x68a0d1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_s16, addr 0x68a2904, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_s32, addr 0x68a2974, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_s8, addr 0x68a2894, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_u16, addr 0x68a2a54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_u32, addr 0x68a2ac4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_u8, addr 0x68a29e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_s16, addr 0x68a293c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_s32, addr 0x68a29ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_s8, addr 0x68a28cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_u16, addr 0x68a2a8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_u32, addr 0x68a2afc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_u8, addr 0x68a2a1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_f32, addr 0x68bb7f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_f32(float_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_f64, addr 0x68bb80c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_f64(double_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_s16, addr 0x68bb76c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s16(int16_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_s32, addr 0x68bb780, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s32(int32_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_s64, addr 0x68bb794, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s64(int64_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_s8, addr 0x68bb758, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s8(int8_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_u16, addr 0x68bb7bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u16(uint16_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_u32, addr 0x68bb7d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u32(uint32_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_u64, addr 0x68bb7e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u64(uint64_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_u8, addr 0x68bb7a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u8(uint8_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_f32, addr 0x68bb800, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_f32(float_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_f64, addr 0x68bb814, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_f64(double_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_s16, addr 0x68bb774, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s16(int16_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_s32, addr 0x68bb788, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s32(int32_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_s64, addr 0x68bb79c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s64(int64_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_s8, addr 0x68bb760, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s8(int8_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_u16, addr 0x68bb7c4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u16(uint16_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_u32, addr 0x68bb7d8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u32(uint32_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_u64, addr 0x68bb7ec, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u64(uint64_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_u8, addr 0x68bb7b0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u8(uint8_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_f32, addr 0x68a4c94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_f64, addr 0x68b115c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_s16, addr 0x68a4a64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_s32, addr 0x68a4ad4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_s8, addr 0x68a49f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_u16, addr 0x68a4bb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_u32, addr 0x68a4c24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_u8, addr 0x68a4b44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnm_f32, addr 0x68b123c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnm_f64, addr 0x68b12ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnmq_f32, addr 0x68b1274, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnmq_f64, addr 0x68b12e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnmv_f32, addr 0x68b9594, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxnmv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnmvq_f32, addr 0x68b95cc, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxnmvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnmvq_f64, addr 0x68b9604, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmaxnmvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_f32, addr 0x68a4ccc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_f64, addr 0x68b1194, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_s16, addr 0x68a4a9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_s32, addr 0x68a4b0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_s8, addr 0x68a4a2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_u16, addr 0x68a4bec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_u32, addr 0x68a4c5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_u8, addr 0x68a4b7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_f32, addr 0x68b91a4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_s16, addr 0x68b8f74, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vmaxv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_s32, addr 0x68b8fe4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vmaxv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_s8, addr 0x68b8f04, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vmaxv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_u16, addr 0x68b90c4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vmaxv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_u32, addr 0x68b9134, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vmaxv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_u8, addr 0x68b9054, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vmaxv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_f32, addr 0x68b91dc, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_f64, addr 0x68b9214, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmaxvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_s16, addr 0x68b8fac, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vmaxvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_s32, addr 0x68b901c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vmaxvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_s8, addr 0x68b8f3c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vmaxvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_u16, addr 0x68b90fc, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vmaxvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_u32, addr 0x68b916c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vmaxvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_u8, addr 0x68b908c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vmaxvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_f32, addr 0x68a4fa4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_f64, addr 0x68b11cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_s16, addr 0x68a4d74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_s32, addr 0x68a4de4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_s8, addr 0x68a4d04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_u16, addr 0x68a4ec4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_u32, addr 0x68a4f34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_u8, addr 0x68a4e54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminnm_f32, addr 0x68b131c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vminnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminnm_f64, addr 0x68b138c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vminnm_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminnmq_f32, addr 0x68b1354, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminnmq_f64, addr 0x68b13c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminnmv_f32, addr 0x68b963c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminnmv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminnmvq_f32, addr 0x68b9674, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminnmvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminnmvq_f64, addr 0x68b96ac, size 0x38, virtual false, abstract: false, final false
  static inline double_t vminnmvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_f32, addr 0x68a4fdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_f64, addr 0x68b1204, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_s16, addr 0x68a4dac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_s32, addr 0x68a4e1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_s8, addr 0x68a4d3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_u16, addr 0x68a4efc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_u32, addr 0x68a4f6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_u8, addr 0x68a4e8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_f32, addr 0x68b94ec, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_s16, addr 0x68b92bc, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vminv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_s32, addr 0x68b932c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vminv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_s8, addr 0x68b924c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vminv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_u16, addr 0x68b940c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vminv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_u32, addr 0x68b947c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vminv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_u8, addr 0x68b939c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vminv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_f32, addr 0x68b9524, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_f64, addr 0x68b955c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vminvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_s16, addr 0x68b92f4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vminvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_s32, addr 0x68b9364, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vminvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_s8, addr 0x68b9284, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vminvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_u16, addr 0x68b9444, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vminvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_u32, addr 0x68b94b4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vminvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_u8, addr 0x68b93d4, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vminvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_f32, addr 0x68a1944, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_f64, addr 0x68ad98c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_lane_f32, addr 0x68a84bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_lane_s16, addr 0x68a82fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_lane_s32, addr 0x68a836c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_lane_u16, addr 0x68a83dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_lane_u32, addr 0x68a844c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_laneq_f32, addr 0x68b4924, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_laneq_s16, addr 0x68b4764, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_laneq_s32, addr 0x68b47d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_laneq_u16, addr 0x68b4844, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_laneq_u32, addr 0x68b48b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_n_f32, addr 0x68a963c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_n_s16, addr 0x68a947c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_n_s32, addr 0x68a94ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_n_u16, addr 0x68a955c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_n_u32, addr 0x68a95cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_s16, addr 0x68a1834, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_s32, addr 0x68a18a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_s8, addr 0x68a17c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_u16, addr 0x68a1924, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_u32, addr 0x68a1934, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_u8, addr 0x68a1914, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_lane_s16, addr 0x68b4994, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_lane_s32, addr 0x68b49cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_lane_u16, addr 0x68b4a04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_lane_u32, addr 0x68b4a3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_laneq_s16, addr 0x68b4b54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_laneq_s32, addr 0x68b4b8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_laneq_u16, addr 0x68b4bc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_laneq_u32, addr 0x68b4bfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_n_s16, addr 0x68b6308, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_n_s32, addr 0x68b6340, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_n_u16, addr 0x68b6378, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_n_u32, addr 0x68b63b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_s16, addr 0x68ada34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_s32, addr 0x68ada6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_s8, addr 0x68ad9fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_u16, addr 0x68adadc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_u32, addr 0x68adb14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_u8, addr 0x68adaa4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_lane_s16, addr 0x68a852c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_lane_s32, addr 0x68a8564, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_lane_u16, addr 0x68a859c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_lane_u32, addr 0x68a85d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_laneq_s16, addr 0x68b4a74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_laneq_s32, addr 0x68b4aac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_laneq_u16, addr 0x68b4ae4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_laneq_u32, addr 0x68b4b1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_n_s16, addr 0x68a96ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_n_s32, addr 0x68a96e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_n_u16, addr 0x68a971c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_n_u32, addr 0x68a9754, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_s16, addr 0x68a19ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_s32, addr 0x68a1a24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_s8, addr 0x68a19b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_u16, addr 0x68a1a94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_u32, addr 0x68a1acc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_u8, addr 0x68a1a5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_f32, addr 0x68a197c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_f64, addr 0x68ad9c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_lane_f32, addr 0x68a84f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_lane_s16, addr 0x68a8334, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_lane_s32, addr 0x68a83a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_lane_u16, addr 0x68a8414, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_lane_u32, addr 0x68a8484, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_laneq_f32, addr 0x68b495c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_laneq_s16, addr 0x68b479c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_laneq_s32, addr 0x68b480c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_laneq_u16, addr 0x68b487c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_laneq_u32, addr 0x68b48ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_n_f32, addr 0x68a9674, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_n_s16, addr 0x68a94b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_n_s32, addr 0x68a9524, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_n_u16, addr 0x68a9594, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_n_u32, addr 0x68a9604, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_s16, addr 0x68a186c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_s32, addr 0x68a18dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_s8, addr 0x68a17fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_u16, addr 0x68a192c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_u32, addr 0x68a193c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_u8, addr 0x68a191c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_f32, addr 0x68a1c84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_f64, addr 0x68adb4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_lane_f32, addr 0x68a883c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_lane_s16, addr 0x68a867c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_lane_s32, addr 0x68a86ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_lane_u16, addr 0x68a875c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_lane_u32, addr 0x68a87cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_laneq_f32, addr 0x68b5024, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_laneq_s16, addr 0x68b4e64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_laneq_s32, addr 0x68b4ed4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_laneq_u16, addr 0x68b4f44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_laneq_u32, addr 0x68b4fb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_n_f32, addr 0x68a99bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_n_s16, addr 0x68a97fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_n_s32, addr 0x68a986c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_n_u16, addr 0x68a98dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_n_u32, addr 0x68a994c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_s16, addr 0x68a1b74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_s32, addr 0x68a1be4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_s8, addr 0x68a1b04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_u16, addr 0x68a1c64, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_u32, addr 0x68a1c74, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_u8, addr 0x68a1c54, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_lane_s16, addr 0x68b5094, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_lane_s32, addr 0x68b50cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_lane_u16, addr 0x68b5104, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_lane_u32, addr 0x68b513c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_laneq_s16, addr 0x68b5254, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_laneq_s32, addr 0x68b528c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_laneq_u16, addr 0x68b52c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_laneq_u32, addr 0x68b52fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_n_s16, addr 0x68b6458, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_n_s32, addr 0x68b6490, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_n_u16, addr 0x68b64c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_n_u32, addr 0x68b6500, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_s16, addr 0x68adbf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_s32, addr 0x68adc2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_s8, addr 0x68adbbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_u16, addr 0x68adc9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_u32, addr 0x68adcd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_u8, addr 0x68adc64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_lane_s16, addr 0x68a88ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_lane_s32, addr 0x68a88e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_lane_u16, addr 0x68a891c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_lane_u32, addr 0x68a8954, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_laneq_s16, addr 0x68b5174, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_laneq_s32, addr 0x68b51ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_laneq_u16, addr 0x68b51e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_laneq_u32, addr 0x68b521c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_n_s16, addr 0x68a9a2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_n_s32, addr 0x68a9a64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_n_u16, addr 0x68a9a9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_n_u32, addr 0x68a9ad4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_s16, addr 0x68a1d2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_s32, addr 0x68a1d64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_s8, addr 0x68a1cf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_u16, addr 0x68a1dd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_u32, addr 0x68a1e0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_u8, addr 0x68a1d9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_f32, addr 0x68a1cbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_f64, addr 0x68adb84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_lane_f32, addr 0x68a8874, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_lane_s16, addr 0x68a86b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_lane_s32, addr 0x68a8724, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_lane_u16, addr 0x68a8794, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_lane_u32, addr 0x68a8804, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_laneq_f32, addr 0x68b505c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_laneq_s16, addr 0x68b4e9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_laneq_s32, addr 0x68b4f0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_laneq_u16, addr 0x68b4f7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_laneq_u32, addr 0x68b4fec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_n_f32, addr 0x68a99f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_n_s16, addr 0x68a9834, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_n_s32, addr 0x68a98a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_n_u16, addr 0x68a9914, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_n_u32, addr 0x68a9984, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_s16, addr 0x68a1bac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_s32, addr 0x68a1c1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_s8, addr 0x68a1b3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_u16, addr 0x68a1c6c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_u32, addr 0x68a1c7c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_u8, addr 0x68a1c5c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_f32, addr 0x68bb684, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_f64, addr 0x68bb6a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_s16, addr 0x68bb5c8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_s32, addr 0x68bb5ec, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_s64, addr 0x68bb608, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_s8, addr 0x68bb5a4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_u16, addr 0x68bb638, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u16(uint16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_u32, addr 0x68bb65c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_u64, addr 0x68bb678, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_u8, addr 0x68bb614, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u8(uint8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_s16, addr 0x68b425c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_s32, addr 0x68b4294, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_s8, addr 0x68b4224, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_u16, addr 0x68b4304, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_u32, addr 0x68b433c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_u8, addr 0x68b42cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_s16, addr 0x68a7fec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_s32, addr 0x68a8024, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_s8, addr 0x68a7fb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_u16, addr 0x68a8094, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_u32, addr 0x68a80cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_u8, addr 0x68a805c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_s16, addr 0x68a7ef4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_s32, addr 0x68a7f2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_s64, addr 0x68a7f64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_u16, addr 0x68a7f9c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_u32, addr 0x68a7fa4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_u64, addr 0x68a7fac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_s16, addr 0x68a7e34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_s32, addr 0x68a7e6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_s64, addr 0x68a7ea4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_u16, addr 0x68a7edc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_u32, addr 0x68a7ee4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_u64, addr 0x68a7eec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_f32, addr 0x68bb690, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_f64, addr 0x68bb6a8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_s16, addr 0x68bb5d8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_s32, addr 0x68bb5f8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_s64, addr 0x68bb60c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_s8, addr 0x68bb5b4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_u16, addr 0x68bb648, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u16(uint16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_u32, addr 0x68bb668, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_u64, addr 0x68bb67c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_u8, addr 0x68bb624, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u8(uint8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_f32, addr 0x68a1754, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_f64, addr 0x68ad4ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_lane_f32, addr 0x68a8dec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)9)]
  /// @brief Method vmul_lane_f64, addr 0x68b55d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_lane_s16, addr 0x68a8c2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_lane_s32, addr 0x68a8c9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_lane_u16, addr 0x68a8d0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_lane_u32, addr 0x68a8d7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_f32, addr 0x68b5818, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_f64, addr 0x68b5888, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_s16, addr 0x68b5658, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_s32, addr 0x68b56c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_u16, addr 0x68b5738, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_u32, addr 0x68b57a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_f32, addr 0x68a8bbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f32(::Unity::Burst::Intrinsics::v64 a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_f64, addr 0x68b5564, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f64(::Unity::Burst::Intrinsics::v64 a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_s16, addr 0x68a89fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_s32, addr 0x68a8a6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_u16, addr 0x68a8adc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u16(::Unity::Burst::Intrinsics::v64 a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_u32, addr 0x68a8b4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u32(::Unity::Burst::Intrinsics::v64 a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_s16, addr 0x68a1644, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_s32, addr 0x68a16b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_s8, addr 0x68a15d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_u16, addr 0x68a1734, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_u32, addr 0x68a1744, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_u8, addr 0x68a1724, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmuld_lane_f64, addr 0x68b564c, size 0xc, virtual false, abstract: false, final false
  static inline double_t vmuld_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmuld_laneq_f64, addr 0x68b5930, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmuld_laneq_f64(double_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_lane_s16, addr 0x68b5a48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_lane_s32, addr 0x68b5a80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_lane_u16, addr 0x68b5ab8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_lane_u32, addr 0x68b5af0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_laneq_s16, addr 0x68b5c08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_laneq_s32, addr 0x68b5c40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_laneq_u16, addr 0x68b5c78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_laneq_u32, addr 0x68b5cb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_n_s16, addr 0x68b5968, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_n_s32, addr 0x68b59a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_n_u16, addr 0x68b59d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_n_u32, addr 0x68b5a10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_s16, addr 0x68ae544, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_s32, addr 0x68ae57c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_s8, addr 0x68ae50c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_u16, addr 0x68ae5ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_u32, addr 0x68ae624, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_u8, addr 0x68ae5b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_lane_s16, addr 0x68a8f3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_lane_s32, addr 0x68a8f74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_lane_u16, addr 0x68a8fac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_lane_u32, addr 0x68a8fe4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_laneq_s16, addr 0x68b5b28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_laneq_s32, addr 0x68b5b60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_laneq_u16, addr 0x68b5b98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_laneq_u32, addr 0x68b5bd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_n_s16, addr 0x68a8e5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_n_s32, addr 0x68a8e94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_n_u16, addr 0x68a8ecc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u16(::Unity::Burst::Intrinsics::v64 a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_n_u32, addr 0x68a8f04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u32(::Unity::Burst::Intrinsics::v64 a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_s16, addr 0x68a21fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_s32, addr 0x68a2234, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_s8, addr 0x68a21c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_u16, addr 0x68a22a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_u32, addr 0x68a22dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_u8, addr 0x68a226c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_f32, addr 0x68a178c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_f64, addr 0x68ad4e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_f32, addr 0x68a8e24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_f64, addr 0x68b55dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_s16, addr 0x68a8c64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_s32, addr 0x68a8cd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_u16, addr 0x68a8d44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_u32, addr 0x68a8db4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_f32, addr 0x68b5850, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_f64, addr 0x68b58c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_s16, addr 0x68b5690, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_s32, addr 0x68b5700, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_u16, addr 0x68b5770, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_u32, addr 0x68b57e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_f32, addr 0x68a8bf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f32(::Unity::Burst::Intrinsics::v128 a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_f64, addr 0x68b559c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f64(::Unity::Burst::Intrinsics::v128 a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_s16, addr 0x68a8a34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_s32, addr 0x68a8aa4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_u16, addr 0x68a8b14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u16(::Unity::Burst::Intrinsics::v128 a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_u32, addr 0x68a8b84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_s16, addr 0x68a167c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_s32, addr 0x68a16ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_s8, addr 0x68a160c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_u16, addr 0x68a173c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_u32, addr 0x68a174c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_u8, addr 0x68a172c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmuls_lane_f32, addr 0x68b5614, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmuls_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmuls_laneq_f32, addr 0x68b58f8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmuls_laneq_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_f32, addr 0x68ad51c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_f64, addr 0x68ad58c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_lane_f32, addr 0x68ad66c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_lane_f64, addr 0x68ad6dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_laneq_f32, addr 0x68ad75c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_laneq_f64, addr 0x68ad7cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxd_f64, addr 0x68ad634, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmulxd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxd_lane_f64, addr 0x68ad754, size 0x8, virtual false, abstract: false, final false
  static inline double_t vmulxd_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxd_laneq_f64, addr 0x68ad874, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmulxd_laneq_f64(double_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_f32, addr 0x68ad554, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_f64, addr 0x68ad5c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_lane_f32, addr 0x68ad6a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_lane_f64, addr 0x68ad6e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_laneq_f32, addr 0x68ad794, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_laneq_f64, addr 0x68ad804, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxs_f32, addr 0x68ad5fc, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmulxs_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxs_lane_f32, addr 0x68ad71c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmulxs_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxs_laneq_f32, addr 0x68ad83c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmulxs_laneq_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_s16, addr 0x68aa7fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_s32, addr 0x68aa80c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_s8, addr 0x68aa78c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_u16, addr 0x68aa82c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_u32, addr 0x68aa83c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_u8, addr 0x68aa81c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_s16, addr 0x68aa804, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_s32, addr 0x68aa814, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_s8, addr 0x68aa7c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_u16, addr 0x68aa834, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_u32, addr 0x68aa844, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_u8, addr 0x68aa824, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_f32, addr 0x68a9fdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_f64, addr 0x68b68b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_s16, addr 0x68a9efc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_s32, addr 0x68a9f6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_s64, addr 0x68b6810, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_s8, addr 0x68a9e8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegd_s64, addr 0x68b6848, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vnegd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_f32, addr 0x68aa014, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_f64, addr 0x68b68f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_s16, addr 0x68a9f34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_s32, addr 0x68a9fa4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_s64, addr 0x68b6880, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_s8, addr 0x68a9ec4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_s16, addr 0x68aac3c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_s32, addr 0x68aac4c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_s64, addr 0x68aac5c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_s8, addr 0x68aabcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_u16, addr 0x68aac7c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_u32, addr 0x68aac8c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_u64, addr 0x68aac9c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_u8, addr 0x68aac6c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_s16, addr 0x68aac44, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_s32, addr 0x68aac54, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_s64, addr 0x68aac64, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_s8, addr 0x68aac04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_u16, addr 0x68aac84, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_u32, addr 0x68aac94, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_u64, addr 0x68aaca4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_u8, addr 0x68aac74, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_s16, addr 0x68aa99c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_s32, addr 0x68aa9ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_s64, addr 0x68aa9bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_s8, addr 0x68aa92c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_u16, addr 0x68aa9dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_u32, addr 0x68aa9ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_u64, addr 0x68aa9fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_u8, addr 0x68aa9cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_s16, addr 0x68aa9a4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_s32, addr 0x68aa9b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_s64, addr 0x68aa9c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_s8, addr 0x68aa964, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_u16, addr 0x68aa9e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_u32, addr 0x68aa9f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_u64, addr 0x68aaa04, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_u8, addr 0x68aa9d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_s16, addr 0x68ab4cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_s32, addr 0x68ab53c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_s8, addr 0x68ab45c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_u16, addr 0x68ab61c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_u32, addr 0x68ab68c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_u8, addr 0x68ab5ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_s16, addr 0x68ab504, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_s32, addr 0x68ab574, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_s8, addr 0x68ab494, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_u16, addr 0x68ab654, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_u32, addr 0x68ab6c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_u8, addr 0x68ab5e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_f32, addr 0x68ab184, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_s16, addr 0x68ab0fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_s32, addr 0x68ab134, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_s8, addr 0x68ab0c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_u16, addr 0x68ab174, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_u32, addr 0x68ab17c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_u8, addr 0x68ab16c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddd_f64, addr 0x68b86b4, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpaddd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddd_s64, addr 0x68b860c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vpaddd_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddd_u64, addr 0x68b8644, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vpaddd_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_s16, addr 0x68ab22c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_s32, addr 0x68ab29c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_s8, addr 0x68ab1bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_u16, addr 0x68ab37c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_u32, addr 0x68ab3ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_u8, addr 0x68ab30c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_s16, addr 0x68ab264, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_s32, addr 0x68ab2d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_s8, addr 0x68ab1f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_u16, addr 0x68ab3b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_u32, addr 0x68ab424, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_u8, addr 0x68ab344, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_f32, addr 0x68b80cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_f64, addr 0x68b8104, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_s16, addr 0x68b8004, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_s32, addr 0x68b803c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_s64, addr 0x68b8074, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_s8, addr 0x68b7fcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_u16, addr 0x68b80b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_u32, addr 0x68b80bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_u64, addr 0x68b80c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_u8, addr 0x68b80ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadds_f32, addr 0x68b867c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpadds_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_f32, addr 0x68ab84c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_s16, addr 0x68ab734, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_s32, addr 0x68ab76c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_s8, addr 0x68ab6fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_u16, addr 0x68ab7dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_u32, addr 0x68ab814, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_u8, addr 0x68ab7a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxnm_f32, addr 0x68b84bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmaxnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxnmq_f32, addr 0x68b84f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxnmq_f64, addr 0x68b852c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxnmqd_f64, addr 0x68b8804, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpmaxnmqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxnms_f32, addr 0x68b87cc, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpmaxnms_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_f32, addr 0x68b828c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_f64, addr 0x68b82c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_s16, addr 0x68b8174, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_s32, addr 0x68b81ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_s8, addr 0x68b813c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_u16, addr 0x68b821c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_u32, addr 0x68b8254, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_u8, addr 0x68b81e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxqd_f64, addr 0x68b8724, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpmaxqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxs_f32, addr 0x68b86ec, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpmaxs_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_f32, addr 0x68ab9d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_s16, addr 0x68ab8bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_s32, addr 0x68ab8f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_s8, addr 0x68ab884, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_u16, addr 0x68ab964, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_u32, addr 0x68ab99c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_u8, addr 0x68ab92c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminnm_f32, addr 0x68b8564, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpminnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminnmq_f32, addr 0x68b859c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminnmq_f64, addr 0x68b85d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminnmqd_f64, addr 0x68b8874, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpminnmqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpminnms_f32, addr 0x68b883c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpminnms_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_f32, addr 0x68b844c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_f64, addr 0x68b8484, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_s16, addr 0x68b8334, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_s32, addr 0x68b836c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_s8, addr 0x68b82fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_u16, addr 0x68b83dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_u32, addr 0x68b8414, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_u8, addr 0x68b83a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminqd_f64, addr 0x68b8794, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpminqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmins_f32, addr 0x68b875c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpmins_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabs_s16, addr 0x68a9dac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabs_s32, addr 0x68a9e1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabs_s64, addr 0x68b66c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabs_s8, addr 0x68a9d3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsb_s8, addr 0x68b6730, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqabsb_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsd_s64, addr 0x68b67d8, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqabsd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsh_s16, addr 0x68b6768, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqabsh_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsq_s16, addr 0x68a9de4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsq_s32, addr 0x68a9e54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsq_s64, addr 0x68b66f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsq_s8, addr 0x68a9d74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabss_s32, addr 0x68b67a0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqabss_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_s16, addr 0x68a1144, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_s32, addr 0x68a11b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_s64, addr 0x68a1224, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_s8, addr 0x68a10d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_u16, addr 0x68a1304, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_u32, addr 0x68a1374, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_u64, addr 0x68a13e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_u8, addr 0x68a1294, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddb_s8, addr 0x68acc2c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqaddb_s8(int8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddb_u8, addr 0x68acd0c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqaddb_u8(uint8_t a0, uint8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddd_s64, addr 0x68accd4, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqaddd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddd_u64, addr 0x68acdb4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqaddd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddh_s16, addr 0x68acc64, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqaddh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddh_u16, addr 0x68acd44, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqaddh_u16(uint16_t a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_s16, addr 0x68a117c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_s32, addr 0x68a11ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_s64, addr 0x68a125c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_s8, addr 0x68a110c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_u16, addr 0x68a133c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_u32, addr 0x68a13ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_u64, addr 0x68a141c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_u8, addr 0x68a12cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadds_s32, addr 0x68acc9c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqadds_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadds_u32, addr 0x68acd7c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqadds_u32(uint32_t a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_lane_s16, addr 0x68b4ca4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_lane_s32, addr 0x68b4cdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_laneq_s16, addr 0x68b4df4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_laneq_s32, addr 0x68b4e2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_n_s16, addr 0x68b63e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_n_s32, addr 0x68b6420, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_s16, addr 0x68ae3bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_s32, addr 0x68ae3f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_lane_s16, addr 0x68a860c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_lane_s32, addr 0x68a8644, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_laneq_s16, addr 0x68b4d14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_laneq_s32, addr 0x68b4d4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_n_s16, addr 0x68a978c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_n_s32, addr 0x68a97c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_s16, addr 0x68a20e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_s32, addr 0x68a211c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlalh_lane_s16, addr 0x68b4c34, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlalh_lane_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlalh_laneq_s16, addr 0x68b4d84, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlalh_laneq_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlalh_s16, addr 0x68ae34c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlalh_s16(int32_t a0, int16_t a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlals_lane_s32, addr 0x68b4c6c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlals_lane_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlals_laneq_s32, addr 0x68b4dbc, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlals_laneq_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlals_s32, addr 0x68ae384, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlals_s32(int64_t a0, int32_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_lane_s16, addr 0x68b53a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_lane_s32, addr 0x68b53dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_laneq_s16, addr 0x68b54f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_laneq_s32, addr 0x68b552c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_n_s16, addr 0x68b6538, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_n_s32, addr 0x68b6570, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_s16, addr 0x68ae49c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_s32, addr 0x68ae4d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_lane_s16, addr 0x68a898c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_lane_s32, addr 0x68a89c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_laneq_s16, addr 0x68b5414, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_laneq_s32, addr 0x68b544c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_n_s16, addr 0x68a9b0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_n_s32, addr 0x68a9b44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_s16, addr 0x68a2154, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_s32, addr 0x68a218c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlslh_lane_s16, addr 0x68b5334, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlslh_lane_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlslh_laneq_s16, addr 0x68b5484, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlslh_laneq_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlslh_s16, addr 0x68ae42c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlslh_s16(int32_t a0, int16_t a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsls_lane_s32, addr 0x68b536c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlsls_lane_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsls_laneq_s32, addr 0x68b54bc, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlsls_laneq_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsls_s32, addr 0x68ae464, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlsls_s32(int64_t a0, int32_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_lane_s16, addr 0x68a91dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_lane_s32, addr 0x68a924c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_laneq_s16, addr 0x68b5ff8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_laneq_s32, addr 0x68b6068, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_n_s16, addr 0x68a90fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_n_s32, addr 0x68a916c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_s16, addr 0x68a1f24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_s32, addr 0x68a1f94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhh_lane_s16, addr 0x68b5f88, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqdmulhh_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhh_laneq_s16, addr 0x68b60d8, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqdmulhh_laneq_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhh_s16, addr 0x68ae26c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqdmulhh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_lane_s16, addr 0x68a9214, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_lane_s32, addr 0x68a9284, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_laneq_s16, addr 0x68b6030, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_laneq_s32, addr 0x68b60a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_n_s16, addr 0x68a9134, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_n_s32, addr 0x68a91a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_s16, addr 0x68a1f5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_s32, addr 0x68a1fcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhs_lane_s32, addr 0x68b5fc0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmulhs_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhs_laneq_s32, addr 0x68b6110, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmulhs_laneq_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhs_s32, addr 0x68ae2a4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmulhs_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_lane_s16, addr 0x68b5dc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_lane_s32, addr 0x68b5e00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_laneq_s16, addr 0x68b5f18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_laneq_s32, addr 0x68b5f50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_n_s16, addr 0x68b5ce8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_n_s32, addr 0x68b5d20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_s16, addr 0x68ae6cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_s32, addr 0x68ae704, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_lane_s16, addr 0x68a908c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_lane_s32, addr 0x68a90c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_laneq_s16, addr 0x68b5e38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_laneq_s32, addr 0x68b5e70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_n_s16, addr 0x68a901c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_n_s32, addr 0x68a9054, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_s16, addr 0x68a2314, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_s32, addr 0x68a234c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmullh_lane_s16, addr 0x68b5d58, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmullh_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmullh_laneq_s16, addr 0x68b5ea8, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmullh_laneq_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmullh_s16, addr 0x68ae65c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmullh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulls_lane_s32, addr 0x68b5d90, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmulls_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulls_laneq_s32, addr 0x68b5ee0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmulls_laneq_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulls_s32, addr 0x68ae694, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmulls_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_s16, addr 0x68b44c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_s32, addr 0x68b44fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_s64, addr 0x68b4534, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_u16, addr 0x68b456c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_u32, addr 0x68b45a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_u64, addr 0x68b45dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_s16, addr 0x68a8104, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_s32, addr 0x68a813c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_s64, addr 0x68a8174, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_u16, addr 0x68a81ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_u32, addr 0x68a81e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_u64, addr 0x68a821c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovnd_s64, addr 0x68b43e4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqmovnd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovnd_u64, addr 0x68b448c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqmovnd_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovnh_s16, addr 0x68b4374, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqmovnh_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovnh_u16, addr 0x68b441c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqmovnh_u16(uint16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovns_s32, addr 0x68b43ac, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqmovns_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovns_u32, addr 0x68b4454, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqmovns_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_high_s16, addr 0x68b46bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_high_s32, addr 0x68b46f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_high_s64, addr 0x68b472c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_s16, addr 0x68a8254, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_s32, addr 0x68a828c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_s64, addr 0x68a82c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovund_s64, addr 0x68b4684, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqmovund_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovunh_s16, addr 0x68b4614, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqmovunh_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovuns_s32, addr 0x68b464c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqmovuns_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqneg_s16, addr 0x68aa0bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqneg_s32, addr 0x68aa12c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqneg_s64, addr 0x68b6928, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqneg_s8, addr 0x68aa04c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegb_s8, addr 0x68b6998, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqnegb_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegd_s64, addr 0x68b6a40, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqnegd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegh_s16, addr 0x68b69d0, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqnegh_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegq_s16, addr 0x68aa0f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegq_s32, addr 0x68aa164, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegq_s64, addr 0x68b6960, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegq_s8, addr 0x68aa084, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegs_s32, addr 0x68b6a08, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqnegs_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_lane_s16, addr 0x68baeb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_lane_s32, addr 0x68baf98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_laneq_s16, addr 0x68baf28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_laneq_s32, addr 0x68bb008, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_s16, addr 0x68bacf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_s32, addr 0x68bad30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahh_lane_s16, addr 0x68bb318, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlahh_lane_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahh_laneq_s16, addr 0x68bb350, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlahh_laneq_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahh_s16, addr 0x68bb238, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlahh_s16(int16_t a0, int16_t a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_lane_s16, addr 0x68baef0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_lane_s32, addr 0x68bafd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_laneq_s16, addr 0x68baf60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_laneq_s32, addr 0x68bb040, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_s16, addr 0x68bad68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_s32, addr 0x68bada0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahs_lane_s32, addr 0x68bb388, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlahs_lane_s32(int32_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahs_s32, addr 0x68bb270, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlahs_s32(int32_t a0, int32_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_lane_s16, addr 0x68bb078, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_lane_s32, addr 0x68bb158, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_laneq_s16, addr 0x68bb0e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_laneq_s32, addr 0x68bb1c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_s16, addr 0x68badd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_s32, addr 0x68bae10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshh_lane_s16, addr 0x68bb3c0, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlshh_lane_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshh_laneq_s16, addr 0x68bb3f8, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlshh_laneq_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshh_s16, addr 0x68bb2a8, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlshh_s16(int16_t a0, int16_t a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_lane_s16, addr 0x68bb0b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_lane_s32, addr 0x68bb190, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_laneq_s16, addr 0x68bb120, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_laneq_s32, addr 0x68bb200, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_s16, addr 0x68bae48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_s32, addr 0x68bae80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshs_lane_s32, addr 0x68bb430, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlshs_lane_s32(int32_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshs_s32, addr 0x68bb2e0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlshs_s32(int32_t a0, int32_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_lane_s16, addr 0x68a939c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_lane_s32, addr 0x68a940c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_laneq_s16, addr 0x68b61b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_laneq_s32, addr 0x68b6228, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_n_s16, addr 0x68a92bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_n_s32, addr 0x68a932c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_s16, addr 0x68a2004, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_s32, addr 0x68a2074, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhh_lane_s16, addr 0x68b6148, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmulhh_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhh_laneq_s16, addr 0x68b6298, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmulhh_laneq_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhh_s16, addr 0x68ae2dc, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmulhh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_lane_s16, addr 0x68a93d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_lane_s32, addr 0x68a9444, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_laneq_s16, addr 0x68b61f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_laneq_s32, addr 0x68b6260, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_n_s16, addr 0x68a92f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_n_s32, addr 0x68a9364, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_s16, addr 0x68a203c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_s32, addr 0x68a20ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhs_lane_s32, addr 0x68b6180, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmulhs_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhs_laneq_s32, addr 0x68b62d0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmulhs_laneq_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhs_s32, addr 0x68ae314, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmulhs_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_s16, addr 0x68a5b04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_s32, addr 0x68a5b74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_s64, addr 0x68a5be4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_s8, addr 0x68a5a94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_u16, addr 0x68a5cc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_u32, addr 0x68a5d34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_u64, addr 0x68a5da4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_u8, addr 0x68a5c54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlb_s8, addr 0x68b169c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqrshlb_s8(int8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlb_u8, addr 0x68b177c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqrshlb_u8(uint8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshld_s64, addr 0x68b1744, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqrshld_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshld_u64, addr 0x68b1824, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqrshld_u64(uint64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlh_s16, addr 0x68b16d4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrshlh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlh_u16, addr 0x68b17b4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqrshlh_u16(uint16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_s16, addr 0x68a5b3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_s32, addr 0x68a5bac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_s64, addr 0x68a5c1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_s8, addr 0x68a5acc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_u16, addr 0x68a5cfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_u32, addr 0x68a5d6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_u64, addr 0x68a5ddc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_u8, addr 0x68a5c8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshls_s32, addr 0x68b170c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrshls_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshls_u32, addr 0x68b17ec, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqrshls_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_s16, addr 0x68b2544, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_s32, addr 0x68b257c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_s64, addr 0x68b25b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_u16, addr 0x68b25ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_u32, addr 0x68b2624, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_u64, addr 0x68b265c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_s16, addr 0x68a7114, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_s32, addr 0x68a714c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_s64, addr 0x68a7184, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_u16, addr 0x68a71bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_u32, addr 0x68a71f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_u64, addr 0x68a722c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrnd_n_s64, addr 0x68b2464, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrshrnd_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrnd_n_u64, addr 0x68b250c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqrshrnd_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrnh_n_s16, addr 0x68b23f4, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqrshrnh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrnh_n_u16, addr 0x68b249c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqrshrnh_n_u16(uint16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrns_n_s32, addr 0x68b242c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrshrns_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrns_n_u32, addr 0x68b24d4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqrshrns_n_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_high_n_s16, addr 0x68b1f5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_high_n_s32, addr 0x68b1f94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_high_n_s64, addr 0x68b1fcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_n_s16, addr 0x68a6dcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_n_s32, addr 0x68a6e04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_n_s64, addr 0x68a6e3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrund_n_s64, addr 0x68b1f24, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqrshrund_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrunh_n_s16, addr 0x68b1eb4, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqrshrunh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshruns_n_s32, addr 0x68b1eec, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqrshruns_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_s16, addr 0x68a69a4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_s32, addr 0x68a69b4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_s64, addr 0x68a69c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_s8, addr 0x68a6994, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_u16, addr 0x68a69e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_u32, addr 0x68a69f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_u64, addr 0x68a6a04, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_u8, addr 0x68a69d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_s16, addr 0x68a5404, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_s32, addr 0x68a5474, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_s64, addr 0x68a54e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_s8, addr 0x68a5394, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_u16, addr 0x68a55c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_u32, addr 0x68a5634, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_u64, addr 0x68a56a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_u8, addr 0x68a5554, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlb_n_s8, addr 0x68b1974, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqshlb_n_s8(int8_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlb_n_u8, addr 0x68b1a54, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshlb_n_u8(uint8_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlb_s8, addr 0x68b146c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqshlb_s8(int8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlb_u8, addr 0x68b154c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshlb_u8(uint8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshld_n_s64, addr 0x68b1a1c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqshld_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshld_n_u64, addr 0x68b1afc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqshld_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshld_s64, addr 0x68b1514, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqshld_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshld_u64, addr 0x68b15f4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqshld_u64(uint64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlh_n_s16, addr 0x68b19ac, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqshlh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlh_n_u16, addr 0x68b1a8c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshlh_n_u16(uint16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlh_s16, addr 0x68b14a4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqshlh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlh_u16, addr 0x68b1584, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshlh_u16(uint16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_s16, addr 0x68a69ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_s32, addr 0x68a69bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_s64, addr 0x68a69cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_s8, addr 0x68a699c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_u16, addr 0x68a69ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_u32, addr 0x68a69fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_u64, addr 0x68a6a0c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_u8, addr 0x68a69dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_s16, addr 0x68a543c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_s32, addr 0x68a54ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_s64, addr 0x68a551c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_s8, addr 0x68a53cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_u16, addr 0x68a55fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_u32, addr 0x68a566c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_u64, addr 0x68a56dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_u8, addr 0x68a558c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshls_n_s32, addr 0x68b19e4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqshls_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshls_n_u32, addr 0x68b1ac4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshls_n_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshls_s32, addr 0x68b14dc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqshls_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshls_u32, addr 0x68b15bc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshls_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlu_n_s16, addr 0x68a6a84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlu_n_s32, addr 0x68a6af4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlu_n_s64, addr 0x68a6b64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlu_n_s8, addr 0x68a6a14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlub_n_s8, addr 0x68b1b34, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshlub_n_s8(int8_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlud_n_s64, addr 0x68b1bdc, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqshlud_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshluh_n_s16, addr 0x68b1b6c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshluh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshluq_n_s16, addr 0x68a6abc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshluq_n_s32, addr 0x68a6b2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshluq_n_s64, addr 0x68a6b9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshluq_n_s8, addr 0x68a6a4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlus_n_s32, addr 0x68b1ba4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshlus_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_s16, addr 0x68b2154, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_s32, addr 0x68b218c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_s64, addr 0x68b21c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_u16, addr 0x68b21fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_u32, addr 0x68b2234, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_u64, addr 0x68b226c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_s16, addr 0x68a6e74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_s32, addr 0x68a6eac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_s64, addr 0x68a6ee4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_u16, addr 0x68a6f1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_u32, addr 0x68a6f54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_u64, addr 0x68a6f8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrnd_n_s64, addr 0x68b2074, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqshrnd_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrnd_n_u64, addr 0x68b211c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshrnd_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrnh_n_s16, addr 0x68b2004, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqshrnh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrnh_n_u16, addr 0x68b20ac, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshrnh_n_u16(uint16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrns_n_s32, addr 0x68b203c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqshrns_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrns_n_u32, addr 0x68b20e4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshrns_n_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_high_n_s16, addr 0x68b1e0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_high_n_s32, addr 0x68b1e44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_high_n_s64, addr 0x68b1e7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_n_s16, addr 0x68a6d24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_n_s32, addr 0x68a6d5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_n_s64, addr 0x68a6d94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrund_n_s64, addr 0x68b1dd4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshrund_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrunh_n_s16, addr 0x68b1d64, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshrunh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshruns_n_s32, addr 0x68b1d9c, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshruns_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_s16, addr 0x68a2ba4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_s32, addr 0x68a2c14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_s64, addr 0x68a2c84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_s8, addr 0x68a2b34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_u16, addr 0x68a2d64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_u32, addr 0x68a2dd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_u64, addr 0x68a2e44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_u8, addr 0x68a2cf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubb_s8, addr 0x68aeabc, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqsubb_s8(int8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubb_u8, addr 0x68aeb9c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqsubb_u8(uint8_t a0, uint8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubd_s64, addr 0x68aeb64, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqsubd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubd_u64, addr 0x68aec44, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqsubd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubh_s16, addr 0x68aeaf4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqsubh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubh_u16, addr 0x68aebd4, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqsubh_u16(uint16_t a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_s16, addr 0x68a2bdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_s32, addr 0x68a2c4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_s64, addr 0x68a2cbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_s8, addr 0x68a2b6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_u16, addr 0x68a2d9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_u32, addr 0x68a2e0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_u64, addr 0x68a2e7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_u8, addr 0x68a2d2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubs_s32, addr 0x68aeb2c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqsubs_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubs_u32, addr 0x68aec0c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqsubs_u32(uint32_t a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbl1_s8, addr 0x68ba230, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbl1_u8, addr 0x68ba2a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbl1q_s8, addr 0x68ba268, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbl1q_u8, addr 0x68ba2a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbx1_s8, addr 0x68ba2b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbx1_u8, addr 0x68ba320, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbx1q_s8, addr 0x68ba2e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbx1q_u8, addr 0x68ba328, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_s16, addr 0x68ad3ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_s32, addr 0x68ad424, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_s64, addr 0x68ad45c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_u16, addr 0x68ad494, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_u32, addr 0x68ad49c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_u64, addr 0x68ad4a4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_s16, addr 0x68a1514, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_s32, addr 0x68a154c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_s64, addr 0x68a1584, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_u16, addr 0x68a15bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_u32, addr 0x68a15c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_u64, addr 0x68a15cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrbit_s8, addr 0x68b7718, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrbit_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrbit_u8, addr 0x68b7788, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrbit_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrbitq_s8, addr 0x68b7750, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrbitq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrbitq_u8, addr 0x68b7790, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrbitq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpe_f32, addr 0x68aa55c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpe_f64, addr 0x68b6a78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpe_u32, addr 0x68aa4ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecpe_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecped_f64, addr 0x68b6b20, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrecped_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpeq_f32, addr 0x68aa594, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpeq_f64, addr 0x68b6ab0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpeq_u32, addr 0x68aa524, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpes_f32, addr 0x68b6ae8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrecpes_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecps_f32, addr 0x68aa5cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecps_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecps_f64, addr 0x68b6b58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecps_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpsd_f64, addr 0x68b6c00, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrecpsd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpsq_f32, addr 0x68aa604, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpsq_f64, addr 0x68b6b90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpss_f32, addr 0x68b6bc8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrecpss_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpxd_f64, addr 0x68ba3e8, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrecpxd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpxs_f32, addr 0x68ba3b0, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrecpxs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev16_s8, addr 0x68ac024, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev16_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev16_u8, addr 0x68ac094, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev16_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev16q_s8, addr 0x68ac05c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev16q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev16q_u8, addr 0x68ac09c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev16q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32_s16, addr 0x68abf94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32_s8, addr 0x68abf24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32_u16, addr 0x68ac014, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32_u8, addr 0x68ac004, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32q_s16, addr 0x68abfcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32q_s8, addr 0x68abf5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32q_u16, addr 0x68ac01c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32q_u8, addr 0x68ac00c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_f32, addr 0x68abf14, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_s16, addr 0x68abe04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_s32, addr 0x68abe74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_s8, addr 0x68abd94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_u16, addr 0x68abef4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_u32, addr 0x68abf04, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_u8, addr 0x68abee4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_f32, addr 0x68abf1c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_s16, addr 0x68abe3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_s32, addr 0x68abeac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_s8, addr 0x68abdcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_u16, addr 0x68abefc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_u32, addr 0x68abf0c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_u8, addr 0x68abeec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_s16, addr 0x68a0ea4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_s32, addr 0x68a0f14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_s8, addr 0x68a0e34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_u16, addr 0x68a0ff4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_u32, addr 0x68a1064, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_u8, addr 0x68a0f84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_s16, addr 0x68a0edc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_s32, addr 0x68a0f4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_s8, addr 0x68a0e6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_u16, addr 0x68a102c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_u32, addr 0x68a109c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_u8, addr 0x68a0fbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrnd_f32, addr 0x68b3bcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnd_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrnd_f64, addr 0x68b3c3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnd_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrnda_f32, addr 0x68b3f84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnda_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrnda_f64, addr 0x68b3ff4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnda_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndaq_f32, addr 0x68b3fbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndaq_f64, addr 0x68b402c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndi_f32, addr 0x68b4064, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndi_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndi_f64, addr 0x68b40d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndi_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndiq_f32, addr 0x68b409c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndiq_f64, addr 0x68b410c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndm_f32, addr 0x68b3dc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndm_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndm_f64, addr 0x68b3e34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndm_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndmq_f32, addr 0x68b3dfc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndmq_f64, addr 0x68b3e6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndn_f32, addr 0x68b3cac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndn_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndn_f64, addr 0x68b3d1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndn_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndnq_f32, addr 0x68b3ce4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndnq_f64, addr 0x68b3d54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndns_f32, addr 0x68b3d8c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrndns_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndp_f32, addr 0x68b3ea4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndp_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndp_f64, addr 0x68b3f14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndp_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndpq_f32, addr 0x68b3edc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndpq_f64, addr 0x68b3f4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndq_f32, addr 0x68b3c04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndq_f64, addr 0x68b3c74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndx_f32, addr 0x68b4144, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndx_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndx_f64, addr 0x68b41b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndx_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndxq_f32, addr 0x68b417c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndxq_f64, addr 0x68b41ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_s16, addr 0x68a5784, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_s32, addr 0x68a57f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_s64, addr 0x68a5864, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_s8, addr 0x68a5714, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_u16, addr 0x68a5944, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_u32, addr 0x68a59b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_u64, addr 0x68a5a24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_u8, addr 0x68a58d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshld_s64, addr 0x68b162c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vrshld_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshld_u64, addr 0x68b1664, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vrshld_u64(uint64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_s16, addr 0x68a57bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_s32, addr 0x68a582c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_s64, addr 0x68a589c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_s8, addr 0x68a574c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_u16, addr 0x68a597c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_u32, addr 0x68a59ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_u64, addr 0x68a5a5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_u8, addr 0x68a590c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_s16, addr 0x68a6524, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_s32, addr 0x68a6534, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_s64, addr 0x68a6544, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_s8, addr 0x68a6514, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_u16, addr 0x68a6564, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_u32, addr 0x68a6574, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_u64, addr 0x68a6584, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_u8, addr 0x68a6554, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrd_n_s64, addr 0x68b187c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vrshrd_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrd_n_u64, addr 0x68b18b4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vrshrd_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_s16, addr 0x68b22a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_s32, addr 0x68b22dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_s64, addr 0x68b2314, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_u16, addr 0x68b234c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_u32, addr 0x68b2384, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_u64, addr 0x68b23bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_s16, addr 0x68a6fc4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_s32, addr 0x68a6ffc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_s64, addr 0x68a7034, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_u16, addr 0x68a706c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_u32, addr 0x68a70a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_u64, addr 0x68a70dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_s16, addr 0x68a652c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_s32, addr 0x68a653c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_s64, addr 0x68a654c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_s8, addr 0x68a651c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_u16, addr 0x68a656c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_u32, addr 0x68a657c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_u64, addr 0x68a658c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_u8, addr 0x68a655c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrte_f32, addr 0x68aa6ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrte_f64, addr 0x68b6d18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrte_u32, addr 0x68aa63c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrted_f64, addr 0x68b6dc0, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrsqrted_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrteq_f32, addr 0x68aa6e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrteq_f64, addr 0x68b6d50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrteq_u32, addr 0x68aa674, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrtes_f32, addr 0x68b6d88, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrsqrtes_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrts_f32, addr 0x68aa71c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrts_f64, addr 0x68b6df8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrtsd_f64, addr 0x68b6ea0, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrsqrtsd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrtsq_f32, addr 0x68aa754, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrtsq_f64, addr 0x68b6e30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrtss_f32, addr 0x68b6e68, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrsqrtss_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_s16, addr 0x68a6924, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_s32, addr 0x68a6934, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_s64, addr 0x68a6944, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_s8, addr 0x68a6914, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_u16, addr 0x68a6964, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_u32, addr 0x68a6974, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_u64, addr 0x68a6984, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_u8, addr 0x68a6954, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsrad_n_s64, addr 0x68b1904, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vrsrad_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsrad_n_u64, addr 0x68b193c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vrsrad_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_s16, addr 0x68a692c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_s32, addr 0x68a693c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_s64, addr 0x68a694c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_s8, addr 0x68a691c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_u16, addr 0x68a696c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_u32, addr 0x68a697c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_u64, addr 0x68a698c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_u8, addr 0x68a695c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_s16, addr 0x68aed3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_s32, addr 0x68aed74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_s64, addr 0x68aedac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_u16, addr 0x68aede4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_u32, addr 0x68aedec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_u64, addr 0x68aedf4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_s16, addr 0x68a2f74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_s32, addr 0x68a2fac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_s64, addr 0x68a2fe4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_u16, addr 0x68a301c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_u32, addr 0x68a3024, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_u64, addr 0x68a302c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_f32, addr 0x68ac604, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_f64, addr 0x68ba370, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_s16, addr 0x68ac590, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_s32, addr 0x68ac5c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_s64, addr 0x68ac600, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s64(int64_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_s8, addr 0x68ac558, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s8(int8_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_u16, addr 0x68ac4e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u16(uint16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_u32, addr 0x68ac51c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u32(uint32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_u64, addr 0x68ac554, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u64(uint64_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_u8, addr 0x68ac4ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u8(uint8_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_f32, addr 0x68ac7fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_f64, addr 0x68ba378, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_s16, addr 0x68ac754, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_s32, addr 0x68ac78c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_s64, addr 0x68ac7c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s64(int64_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_s8, addr 0x68ac71c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s8(int8_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_u16, addr 0x68ac674, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u16(uint16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_u32, addr 0x68ac6ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u32(uint32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_u64, addr 0x68ac6e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u64(uint64_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_u8, addr 0x68ac63c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u8(uint8_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1cq_u32, addr 0x68ba578, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1cq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1h_u32, addr 0x68ba620, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vsha1h_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1mq_u32, addr 0x68ba5e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1mq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1pq_u32, addr 0x68ba5b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1pq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1su0q_u32, addr 0x68ba658, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1su0q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1su1q_u32, addr 0x68ba690, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1su1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsha256h2q_u32, addr 0x68ba700, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256h2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha256hq_u32, addr 0x68ba6c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256hq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha256su0q_u32, addr 0x68ba738, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256su0q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsha256su1q_u32, addr 0x68ba770, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256su1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_s16, addr 0x68a6204, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_s32, addr 0x68a6274, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_s64, addr 0x68a62e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_s8, addr 0x68a6194, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_u16, addr 0x68a63c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_u32, addr 0x68a6434, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_u64, addr 0x68a64a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_u8, addr 0x68a6354, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_s16, addr 0x68a5084, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_s32, addr 0x68a50f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_s64, addr 0x68a5164, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_s8, addr 0x68a5014, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_u16, addr 0x68a5244, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_u32, addr 0x68a52b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_u64, addr 0x68a5324, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_u8, addr 0x68a51d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshld_n_s64, addr 0x68b186c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t vshld_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshld_n_u64, addr 0x68b1874, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t vshld_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshld_s64, addr 0x68b13fc, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vshld_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshld_u64, addr 0x68b1434, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vshld_u64(uint64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_s16, addr 0x68b26cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_s32, addr 0x68b2704, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_s8, addr 0x68b2694, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_u16, addr 0x68b2774, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_u32, addr 0x68b27ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_u8, addr 0x68b273c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_s16, addr 0x68a729c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_s32, addr 0x68a72d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_s8, addr 0x68a7264, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_u16, addr 0x68a7344, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_u32, addr 0x68a737c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_u8, addr 0x68a730c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_s16, addr 0x68a623c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_s32, addr 0x68a62ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_s64, addr 0x68a631c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_s8, addr 0x68a61cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_u16, addr 0x68a63fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_u32, addr 0x68a646c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_u64, addr 0x68a64dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_u8, addr 0x68a638c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_s16, addr 0x68a50bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_s32, addr 0x68a512c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_s64, addr 0x68a519c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_s8, addr 0x68a504c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_u16, addr 0x68a527c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_u32, addr 0x68a52ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_u64, addr 0x68a535c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_u8, addr 0x68a520c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_s16, addr 0x68a5e84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_s32, addr 0x68a5ef4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_s64, addr 0x68a5f64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_s8, addr 0x68a5e14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_u16, addr 0x68a6044, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_u32, addr 0x68a60b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_u64, addr 0x68a6124, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_u8, addr 0x68a5fd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrd_n_s64, addr 0x68b185c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t vshrd_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrd_n_u64, addr 0x68b1864, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t vshrd_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_s16, addr 0x68b1c14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_s32, addr 0x68b1c4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_s64, addr 0x68b1c84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_u16, addr 0x68b1cbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_u32, addr 0x68b1cf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_u64, addr 0x68b1d2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_s16, addr 0x68a6bd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_s32, addr 0x68a6c0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_s64, addr 0x68a6c44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_u16, addr 0x68a6c7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_u32, addr 0x68a6cb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_u64, addr 0x68a6cec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_s16, addr 0x68a5ebc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_s32, addr 0x68a5f2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_s64, addr 0x68a5f9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_s8, addr 0x68a5e4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_u16, addr 0x68a607c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_u32, addr 0x68a60ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_u64, addr 0x68a615c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_u8, addr 0x68a600c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_s16, addr 0x68a77a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_s32, addr 0x68a7814, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_s64, addr 0x68a7884, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_s8, addr 0x68a7734, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_u16, addr 0x68a7964, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_u32, addr 0x68a79d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_u64, addr 0x68a7a44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_u8, addr 0x68a78f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vslid_n_s64, addr 0x68b2854, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vslid_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vslid_n_u64, addr 0x68b288c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vslid_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_s16, addr 0x68a77dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_s32, addr 0x68a784c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_s64, addr 0x68a78bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_s8, addr 0x68a776c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_u16, addr 0x68a799c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_u32, addr 0x68a7a0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_u64, addr 0x68a7a7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_u8, addr 0x68a792c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsqadd_u16, addr 0x68ad0fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqadd_u32, addr 0x68ad16c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqadd_u64, addr 0x68ad1dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqadd_u8, addr 0x68ad08c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddb_u8, addr 0x68ad24c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vsqaddb_u8(uint8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddd_u64, addr 0x68ad2f4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vsqaddd_u64(uint64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddh_u16, addr 0x68ad284, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vsqaddh_u16(uint16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddq_u16, addr 0x68ad134, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddq_u32, addr 0x68ad1a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddq_u64, addr 0x68ad214, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddq_u8, addr 0x68ad0c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqadds_u32, addr 0x68ad2bc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vsqadds_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqrt_f32, addr 0x68b6c38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vsqrt_f64, addr 0x68b6ca8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vsqrtq_f32, addr 0x68b6c70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vsqrtq_f64, addr 0x68b6ce0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_s16, addr 0x68a6604, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_s32, addr 0x68a6674, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_s64, addr 0x68a66e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_s8, addr 0x68a6594, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_u16, addr 0x68a67c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_u32, addr 0x68a6834, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_u64, addr 0x68a68a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_u8, addr 0x68a6754, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsrad_n_s64, addr 0x68b18ec, size 0xc, virtual false, abstract: false, final false
  static inline int64_t vsrad_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsrad_n_u64, addr 0x68b18f8, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t vsrad_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_s16, addr 0x68a663c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_s32, addr 0x68a66ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_s64, addr 0x68a671c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_s8, addr 0x68a65cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_u16, addr 0x68a67fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_u32, addr 0x68a686c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_u64, addr 0x68a68dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_u8, addr 0x68a678c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_s16, addr 0x68a7424, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_s32, addr 0x68a7494, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_s64, addr 0x68a7504, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_s8, addr 0x68a73b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_u16, addr 0x68a75e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_u32, addr 0x68a7654, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_u64, addr 0x68a76c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_u8, addr 0x68a7574, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsrid_n_s64, addr 0x68b27e4, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vsrid_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsrid_n_u64, addr 0x68b281c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vsrid_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_s16, addr 0x68a745c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_s32, addr 0x68a74cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_s64, addr 0x68a753c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_s8, addr 0x68a73ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_u16, addr 0x68a761c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_u32, addr 0x68a768c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_u64, addr 0x68a76fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_u8, addr 0x68a75ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_f32, addr 0x68bb8a0, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_f32(float_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_f64, addr 0x68bb8b0, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_f64(double_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_s16, addr 0x68bb830, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s16(int16_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_s32, addr 0x68bb840, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s32(int32_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_s64, addr 0x68bb850, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s64(int64_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_s8, addr 0x68bb820, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s8(int8_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_u16, addr 0x68bb870, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u16(uint16_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_u32, addr 0x68bb880, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u32(uint32_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_u64, addr 0x68bb890, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u64(uint64_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_u8, addr 0x68bb860, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u8(uint8_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_f32, addr 0x68bb8a8, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_f32(float_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_f64, addr 0x68bb8b8, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_f64(double_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_s16, addr 0x68bb838, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s16(int16_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_s32, addr 0x68bb848, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s32(int32_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_s64, addr 0x68bb858, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s64(int64_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_s8, addr 0x68bb828, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s8(int8_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_u16, addr 0x68bb878, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u16(uint16_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_u32, addr 0x68bb888, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u32(uint32_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_u64, addr 0x68bb898, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u64(uint64_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_u8, addr 0x68bb868, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u8(uint8_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_f32, addr 0x68a2584, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_f64, addr 0x68ae73c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_s16, addr 0x68a23f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_s32, addr 0x68a2464, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_s64, addr 0x68a24d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_s8, addr 0x68a2384, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_u16, addr 0x68a2554, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_u32, addr 0x68a2564, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_u64, addr 0x68a2574, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_u8, addr 0x68a2544, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubd_s64, addr 0x68ae7ac, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vsubd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubd_u64, addr 0x68ae7e4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vsubd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_s16, addr 0x68aec7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_s32, addr 0x68aecb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_s64, addr 0x68aecec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_u16, addr 0x68aed24, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_u32, addr 0x68aed2c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_u64, addr 0x68aed34, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_s16, addr 0x68a2eb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_s32, addr 0x68a2eec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_s64, addr 0x68a2f24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_u16, addr 0x68a2f5c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_u32, addr 0x68a2f64, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_u64, addr 0x68a2f6c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_s16, addr 0x68ae854, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_s32, addr 0x68ae88c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_s8, addr 0x68ae81c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_u16, addr 0x68ae8fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_u32, addr 0x68ae934, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_u8, addr 0x68ae8c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_s16, addr 0x68a262c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_s32, addr 0x68a2664, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_s8, addr 0x68a25f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_u16, addr 0x68a26d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_u32, addr 0x68a270c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_u8, addr 0x68a269c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_f32, addr 0x68a25bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_f64, addr 0x68ae774, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_s16, addr 0x68a242c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_s32, addr 0x68a249c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_s64, addr 0x68a250c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_s8, addr 0x68a23bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_u16, addr 0x68a255c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_u32, addr 0x68a256c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_u64, addr 0x68a257c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_u8, addr 0x68a254c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_s16, addr 0x68ae9a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_s32, addr 0x68ae9dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_s8, addr 0x68ae96c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_u16, addr 0x68aea4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_u32, addr 0x68aea84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_u8, addr 0x68aea14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_s16, addr 0x68a277c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_s32, addr 0x68a27b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_s8, addr 0x68a2744, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_u16, addr 0x68a2824, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_u32, addr 0x68a285c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_u8, addr 0x68a27ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtbl1_s8, addr 0x68ac0a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbl1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtbl1_u8, addr 0x68ac0dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbl1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtbx1_s8, addr 0x68ac0e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbx1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vtbx1_u8, addr 0x68ac11c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbx1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_f32, addr 0x68ba040, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_s16, addr 0x68b9ef0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_s32, addr 0x68b9f60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_s8, addr 0x68b9e80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_u16, addr 0x68ba018, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_u32, addr 0x68ba028, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_u8, addr 0x68ba008, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_f32, addr 0x68ba048, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_f64, addr 0x68ba050, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_s16, addr 0x68b9f28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_s32, addr 0x68b9f98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_s64, addr 0x68b9fd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_s8, addr 0x68b9eb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_u16, addr 0x68ba020, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_u32, addr 0x68ba030, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_u64, addr 0x68ba038, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_u8, addr 0x68ba010, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_f32, addr 0x68ba218, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_s16, addr 0x68ba0c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_s32, addr 0x68ba138, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_s8, addr 0x68ba058, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_u16, addr 0x68ba1f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_u32, addr 0x68ba200, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_u8, addr 0x68ba1e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_f32, addr 0x68ba220, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_f64, addr 0x68ba228, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_s16, addr 0x68ba100, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_s32, addr 0x68ba170, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_s64, addr 0x68ba1a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_s8, addr 0x68ba090, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_u16, addr 0x68ba1f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_u32, addr 0x68ba208, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_u64, addr 0x68ba210, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_u8, addr 0x68ba1e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_s16, addr 0x68a4094, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_s32, addr 0x68a4104, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_s64, addr 0x68b0cec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_s8, addr 0x68a4024, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_u16, addr 0x68a4184, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_u32, addr 0x68a4194, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_u64, addr 0x68b0d5c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_u8, addr 0x68a4174, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstd_s64, addr 0x68b0d6c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vtstd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstd_u64, addr 0x68b0da4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vtstd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_s16, addr 0x68a40cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_s32, addr 0x68a413c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_s64, addr 0x68b0d24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_s8, addr 0x68a405c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_u16, addr 0x68a418c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_u32, addr 0x68a419c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_u64, addr 0x68b0d64, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_u8, addr 0x68a417c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqadd_s16, addr 0x68ace5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqadd_s32, addr 0x68acecc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqadd_s64, addr 0x68acf3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqadd_s8, addr 0x68acdec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddb_s8, addr 0x68acfac, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vuqaddb_s8(int8_t a0, uint8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddd_s64, addr 0x68ad054, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vuqaddd_s64(int64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddh_s16, addr 0x68acfe4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vuqaddh_s16(int16_t a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddq_s16, addr 0x68ace94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddq_s32, addr 0x68acf04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddq_s64, addr 0x68acf74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddq_s8, addr 0x68ace24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqadds_s32, addr 0x68ad01c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vuqadds_s32(int32_t a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_f32, addr 0x68b9c90, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_s16, addr 0x68b9b40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_s32, addr 0x68b9bb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_s8, addr 0x68b9ad0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_u16, addr 0x68b9c68, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_u32, addr 0x68b9c78, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_u8, addr 0x68b9c58, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_f32, addr 0x68b9c98, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_f64, addr 0x68b9ca0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_s16, addr 0x68b9b78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_s32, addr 0x68b9be8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_s64, addr 0x68b9c20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_s8, addr 0x68b9b08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_u16, addr 0x68b9c70, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_u32, addr 0x68b9c80, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_u64, addr 0x68b9c88, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_u8, addr 0x68b9c60, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_f32, addr 0x68b9e68, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_s16, addr 0x68b9d18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_s32, addr 0x68b9d88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_s8, addr 0x68b9ca8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_u16, addr 0x68b9e40, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_u32, addr 0x68b9e50, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_u8, addr 0x68b9e30, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_f32, addr 0x68b9e70, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_f64, addr 0x68b9e78, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_s16, addr 0x68b9d50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_s32, addr 0x68b9dc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_s64, addr 0x68b9df8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_s8, addr 0x68b9ce0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_u16, addr 0x68b9e48, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_u32, addr 0x68b9e58, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_u64, addr 0x68b9e60, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_u8, addr 0x68b9e38, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_f32, addr 0x68b98e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_s16, addr 0x68b9790, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_s32, addr 0x68b9800, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_s8, addr 0x68b9720, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_u16, addr 0x68b98b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_u32, addr 0x68b98c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_u8, addr 0x68b98a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_f32, addr 0x68b98e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_f64, addr 0x68b98f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_s16, addr 0x68b97c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_s32, addr 0x68b9838, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_s64, addr 0x68b9870, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_s8, addr 0x68b9758, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_u16, addr 0x68b98c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_u32, addr 0x68b98d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_u64, addr 0x68b98d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_u8, addr 0x68b98b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_f32, addr 0x68b9ab8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_s16, addr 0x68b9968, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_s32, addr 0x68b99d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_s8, addr 0x68b98f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_u16, addr 0x68b9a90, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_u32, addr 0x68b9aa0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_u8, addr 0x68b9a80, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_f32, addr 0x68b9ac0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_f64, addr 0x68b9ac8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_s16, addr 0x68b99a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_s32, addr 0x68b9a10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_s64, addr 0x68b9a48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_s8, addr 0x68b9930, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_u16, addr 0x68b9a98, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_u32, addr 0x68b9aa8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_u64, addr 0x68b9ab0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_u8, addr 0x68b9a88, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17721 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17722 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::Arm) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
