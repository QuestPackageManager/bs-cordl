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
  /// @brief Method __crc32b, addr 0x68f7424, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32b(uint32_t a0, uint8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32cb, addr 0x68f7504, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32cb(uint32_t a0, uint8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32cd, addr 0x68f75ac, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32cd(uint32_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32ch, addr 0x68f753c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32ch(uint32_t a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32cw, addr 0x68f7574, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32cw(uint32_t a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32d, addr 0x68f74cc, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32d(uint32_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32h, addr 0x68f745c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32h(uint32_t a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method __crc32w, addr 0x68f7494, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t __crc32w(uint32_t a0, uint32_t a1);

  /// @brief Method .ctor, addr 0x68f853c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsNeonArmv82FeaturesSupported, addr 0x68e9520, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonArmv82FeaturesSupported();

  /// @brief Method get_IsNeonCryptoSupported, addr 0x68f71ec, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonCryptoSupported();

  /// @brief Method get_IsNeonDotProdSupported, addr 0x68f76c4, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonDotProdSupported();

  /// @brief Method get_IsNeonRDMASupported, addr 0x68f796c, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonRDMASupported();

  /// @brief Method get_IsNeonSupported, addr 0x68dd2f8, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsNeonSupported();

  /// [DebuggerStepThrough]
  /// @brief Method vaba_s16, addr 0x68e12f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaba_s32, addr 0x68e1360, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaba_s8, addr 0x68e1280, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaba_u16, addr 0x68e1440, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaba_u32, addr 0x68e14b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaba_u8, addr 0x68e13d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaba_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_s16, addr 0x68edcc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_s32, addr 0x68edcf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_s8, addr 0x68edc88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_u16, addr 0x68edd68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_u32, addr 0x68edda0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_high_u8, addr 0x68edd30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_s16, addr 0x68e1558, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_s32, addr 0x68e1590, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_s8, addr 0x68e1520, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_u16, addr 0x68e1600, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_u32, addr 0x68e1638, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabal_u8, addr 0x68e15c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabal_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_s16, addr 0x68e1328, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_s32, addr 0x68e1398, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_s8, addr 0x68e12b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_u16, addr 0x68e1478, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_u32, addr 0x68e14e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabaq_u8, addr 0x68e1408, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabaq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_f32, addr 0x68e10c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_f64, addr 0x68eda58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_s16, addr 0x68e0e90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_s32, addr 0x68e0f00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_s8, addr 0x68e0e20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_u16, addr 0x68e0fe0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_u32, addr 0x68e1050, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabd_u8, addr 0x68e0f70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdd_f64, addr 0x68edb00, size 0x38, virtual false, abstract: false, final false
  static inline double_t vabdd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_s16, addr 0x68edb70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_s32, addr 0x68edba8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_s8, addr 0x68edb38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_u16, addr 0x68edc18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_u32, addr 0x68edc50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_high_u8, addr 0x68edbe0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_s16, addr 0x68e1168, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_s32, addr 0x68e11a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_s8, addr 0x68e1130, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_u16, addr 0x68e1210, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_u32, addr 0x68e1248, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdl_u8, addr 0x68e11d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_f32, addr 0x68e10f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_f64, addr 0x68eda90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_s16, addr 0x68e0ec8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_s32, addr 0x68e0f38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_s8, addr 0x68e0e58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_u16, addr 0x68e1018, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_u32, addr 0x68e1088, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabdq_u8, addr 0x68e0fa8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabdq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabds_f32, addr 0x68edac8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vabds_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_f32, addr 0x68e6948, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_f64, addr 0x68f32cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_s16, addr 0x68e6868, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_s32, addr 0x68e68d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_s64, addr 0x68f3224, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabs_s8, addr 0x68e67f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vabs_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsd_s64, addr 0x68f325c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vabsd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_f32, addr 0x68e6980, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_f64, addr 0x68f3304, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_s16, addr 0x68e68a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_s32, addr 0x68e6910, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_s64, addr 0x68f3294, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vabsq_s8, addr 0x68e6830, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vabsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_f32, addr 0x68dd500, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_f64, addr 0x68e9528, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_s16, addr 0x68dd370, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_s32, addr 0x68dd3e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_s64, addr 0x68dd450, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_s8, addr 0x68dd300, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_u16, addr 0x68dd4d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_u32, addr 0x68dd4e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_u64, addr 0x68dd4f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vadd_u8, addr 0x68dd4c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddd_s64, addr 0x68e9598, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddd_u64, addr 0x68e95d0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_s16, addr 0x68e9fa8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_s32, addr 0x68e9fe0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_s64, addr 0x68ea018, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_u16, addr 0x68ea050, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_u32, addr 0x68ea058, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_high_u64, addr 0x68ea060, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_s16, addr 0x68de0d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_s32, addr 0x68de108, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_s64, addr 0x68de140, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_u16, addr 0x68de178, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_u32, addr 0x68de180, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddhn_u64, addr 0x68de188, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_s16, addr 0x68e9640, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_s32, addr 0x68e9678, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_s8, addr 0x68e9608, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_u16, addr 0x68e96e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_u32, addr 0x68e9720, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_high_u8, addr 0x68e96b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_s16, addr 0x68dd5a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_s32, addr 0x68dd5e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_s8, addr 0x68dd570, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_u16, addr 0x68dd650, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_u32, addr 0x68dd688, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddl_u8, addr 0x68dd618, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_s16, addr 0x68f5950, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddlv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_s32, addr 0x68f59c0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddlv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_s8, addr 0x68f58e0, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddlv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_u16, addr 0x68f5aa0, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddlv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_u32, addr 0x68f5b10, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddlv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlv_u8, addr 0x68f5a30, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddlv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_s16, addr 0x68f5988, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddlvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_s32, addr 0x68f59f8, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddlvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_s8, addr 0x68f5918, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddlvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_u16, addr 0x68f5ad8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddlvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_u32, addr 0x68f5b48, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddlvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddlvq_u8, addr 0x68f5a68, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddlvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_f32, addr 0x68dd538, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_f64, addr 0x68e9560, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_s16, addr 0x68dd3a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_s32, addr 0x68dd418, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_s64, addr 0x68dd488, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_s8, addr 0x68dd338, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_u16, addr 0x68dd4d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_u32, addr 0x68dd4e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_u64, addr 0x68dd4f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddq_u8, addr 0x68dd4c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_f32, addr 0x68f5838, size 0x38, virtual false, abstract: false, final false
  static inline float_t vaddv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_s16, addr 0x68f5598, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_s32, addr 0x68f5608, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_s8, addr 0x68f5528, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vaddv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_u16, addr 0x68f5720, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_u32, addr 0x68f5790, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddv_u8, addr 0x68f56b0, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vaddv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_f32, addr 0x68f5870, size 0x38, virtual false, abstract: false, final false
  static inline float_t vaddvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_f64, addr 0x68f58a8, size 0x38, virtual false, abstract: false, final false
  static inline double_t vaddvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_s16, addr 0x68f55d0, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vaddvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_s32, addr 0x68f5640, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vaddvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_s64, addr 0x68f5678, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vaddvq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_s8, addr 0x68f5560, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vaddvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_u16, addr 0x68f5758, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vaddvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_u32, addr 0x68f57c8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vaddvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_u64, addr 0x68f5800, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vaddvq_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddvq_u8, addr 0x68f56e8, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vaddvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_s16, addr 0x68e9790, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_s32, addr 0x68e97c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_s8, addr 0x68e9758, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_u16, addr 0x68e9838, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_u32, addr 0x68e9870, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_high_u8, addr 0x68e9800, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_s16, addr 0x68dd6f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_s32, addr 0x68dd730, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_s8, addr 0x68dd6c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_u16, addr 0x68dd7a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_u32, addr 0x68dd7d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaddw_u8, addr 0x68dd768, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaddw_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaesdq_u8, addr 0x68f761c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaesdq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaeseq_u8, addr 0x68f75e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaeseq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vaesimcq_u8, addr 0x68f768c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaesimcq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vaesmcq_u8, addr 0x68f7654, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vaesmcq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vand_s16, addr 0x68e7538, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_s32, addr 0x68e7548, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_s64, addr 0x68e7558, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_s8, addr 0x68e74c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_u16, addr 0x68e7578, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_u32, addr 0x68e7588, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_u64, addr 0x68e7598, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vand_u8, addr 0x68e7568, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vand_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_s16, addr 0x68e7540, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_s32, addr 0x68e7550, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_s64, addr 0x68e7560, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_s8, addr 0x68e7500, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_u16, addr 0x68e7580, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_u32, addr 0x68e7590, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_u64, addr 0x68e75a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vandq_u8, addr 0x68e7570, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vandq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_s16, addr 0x68e77d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_s32, addr 0x68e77e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_s64, addr 0x68e77f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_s8, addr 0x68e7768, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_u16, addr 0x68e7818, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_u32, addr 0x68e7828, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_u64, addr 0x68e7838, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbic_u8, addr 0x68e7808, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbic_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_s16, addr 0x68e77e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_s32, addr 0x68e77f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_s64, addr 0x68e7800, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_s8, addr 0x68e77a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_u16, addr 0x68e7820, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_u32, addr 0x68e7830, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_u64, addr 0x68e7840, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbicq_u8, addr 0x68e7810, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbicq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_f32, addr 0x68e7a08, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_f64, addr 0x68f3b54, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_s16, addr 0x68e7998, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_s32, addr 0x68e79a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_s64, addr 0x68e79b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_s8, addr 0x68e7928, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_u16, addr 0x68e79d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_u32, addr 0x68e79e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_u64, addr 0x68e79f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbsl_u8, addr 0x68e79c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vbsl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_f32, addr 0x68e7a10, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_f64, addr 0x68f3b5c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_s16, addr 0x68e79a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_s32, addr 0x68e79b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_s64, addr 0x68e79c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_s8, addr 0x68e7960, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_u16, addr 0x68e79e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_u32, addr 0x68e79f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_u64, addr 0x68e7a00, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vbslq_u8, addr 0x68e79d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vbslq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vcage_f32, addr 0x68e0ae0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcage_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcage_f64, addr 0x68ed5e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcage_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaged_f64, addr 0x68ed690, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcaged_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcageq_f32, addr 0x68e0b18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcageq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcageq_f64, addr 0x68ed620, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcageq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcages_f32, addr 0x68ed658, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcages_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagt_f32, addr 0x68e0bc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcagt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagt_f64, addr 0x68ed7a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcagt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagtd_f64, addr 0x68ed850, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcagtd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagtq_f32, addr 0x68e0bf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagtq_f64, addr 0x68ed7e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcagts_f32, addr 0x68ed818, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcagts_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcale_f32, addr 0x68e0b50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcale_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcale_f64, addr 0x68ed6c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcale_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaled_f64, addr 0x68ed770, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcaled_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaleq_f32, addr 0x68e0b88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaleq_f64, addr 0x68ed700, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcales_f32, addr 0x68ed738, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcales_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcalt_f32, addr 0x68e0c30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcalt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcalt_f64, addr 0x68ed888, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcalt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaltd_f64, addr 0x68ed930, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcaltd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaltq_f32, addr 0x68e0c68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcaltq_f64, addr 0x68ed8c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcalts_f32, addr 0x68ed8f8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcalts_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_f32, addr 0x68dfe30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_f64, addr 0x68ebaf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_s16, addr 0x68dfd20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_s32, addr 0x68dfd90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_s64, addr 0x68eba78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_s8, addr 0x68dfcb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_u16, addr 0x68dfe10, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_u32, addr 0x68dfe20, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_u64, addr 0x68ebae8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceq_u8, addr 0x68dfe00, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceq_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqd_f64, addr 0x68ebc10, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqd_s64, addr 0x68ebb68, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqd_u64, addr 0x68ebba0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_f32, addr 0x68dfe68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_f64, addr 0x68ebb30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_s16, addr 0x68dfd58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_s32, addr 0x68dfdc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_s64, addr 0x68ebab0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_s8, addr 0x68dfce8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_u16, addr 0x68dfe18, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_u32, addr 0x68dfe28, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_u64, addr 0x68ebaf0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqq_u8, addr 0x68dfe08, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqs_f32, addr 0x68ebbd8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vceqs_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_f32, addr 0x68ebdc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_f64, addr 0x68ebeb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_s16, addr 0x68ebcb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_s32, addr 0x68ebd28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_s64, addr 0x68ebe38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_s8, addr 0x68ebc48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_u16, addr 0x68ebda8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_u32, addr 0x68ebdb8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_u64, addr 0x68ebea8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqz_u8, addr 0x68ebd98, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vceqz_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzd_f64, addr 0x68ebfd0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqzd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzd_s64, addr 0x68ebf28, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqzd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzd_u64, addr 0x68ebf60, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vceqzd_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_f32, addr 0x68ebe00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_f64, addr 0x68ebef0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_s16, addr 0x68ebcf0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_s32, addr 0x68ebd60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_s64, addr 0x68ebe70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_s8, addr 0x68ebc80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_u16, addr 0x68ebdb0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_u32, addr 0x68ebdc0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_u64, addr 0x68ebeb0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzq_u8, addr 0x68ebda0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vceqzs_f32, addr 0x68ebf98, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vceqzs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_f32, addr 0x68e0140, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_f64, addr 0x68ec0e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_s16, addr 0x68dff10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_s32, addr 0x68dff80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_s64, addr 0x68ec008, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_s8, addr 0x68dfea0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_u16, addr 0x68e0060, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_u32, addr 0x68e00d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_u64, addr 0x68ec078, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcge_u8, addr 0x68dfff0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcge_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcged_f64, addr 0x68ec200, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcged_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcged_s64, addr 0x68ec158, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcged_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcged_u64, addr 0x68ec190, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcged_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_f32, addr 0x68e0178, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_f64, addr 0x68ec120, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_s16, addr 0x68dff48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_s32, addr 0x68dffb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_s64, addr 0x68ec040, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_s8, addr 0x68dfed8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_u16, addr 0x68e0098, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_u32, addr 0x68e0108, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_u64, addr 0x68ec0b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgeq_u8, addr 0x68e0028, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcges_f32, addr 0x68ec1c8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcges_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_f32, addr 0x68ec3f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_f64, addr 0x68ec468, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_s16, addr 0x68ec2a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_s32, addr 0x68ec318, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_s64, addr 0x68ec388, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgez_s8, addr 0x68ec238, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgez_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezd_f64, addr 0x68ec548, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgezd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezd_s64, addr 0x68ec4d8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgezd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_f32, addr 0x68ec430, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_f64, addr 0x68ec4a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_s16, addr 0x68ec2e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_s32, addr 0x68ec350, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_s64, addr 0x68ec3c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezq_s8, addr 0x68ec270, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgezs_f32, addr 0x68ec510, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcgezs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_f32, addr 0x68e0760, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_f64, addr 0x68ecbd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_s16, addr 0x68e0530, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_s32, addr 0x68e05a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_s64, addr 0x68ecaf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_s8, addr 0x68e04c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_u16, addr 0x68e0680, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_u32, addr 0x68e06f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_u64, addr 0x68ecb68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgt_u8, addr 0x68e0610, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgt_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtd_f64, addr 0x68eccf0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtd_s64, addr 0x68ecc48, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtd_u64, addr 0x68ecc80, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_f32, addr 0x68e0798, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_f64, addr 0x68ecc10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_s16, addr 0x68e0568, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_s32, addr 0x68e05d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_s64, addr 0x68ecb30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_s8, addr 0x68e04f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_u16, addr 0x68e06b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_u32, addr 0x68e0728, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_u64, addr 0x68ecba0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtq_u8, addr 0x68e0648, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgts_f32, addr 0x68eccb8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcgts_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_f32, addr 0x68ecee8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_f64, addr 0x68ecf58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_s16, addr 0x68ecd98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_s32, addr 0x68ece08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_s64, addr 0x68ece78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtz_s8, addr 0x68ecd28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzd_f64, addr 0x68ed038, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtzd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzd_s64, addr 0x68ecfc8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcgtzd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_f32, addr 0x68ecf20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_f64, addr 0x68ecf90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_s16, addr 0x68ecdd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_s32, addr 0x68ece40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_s64, addr 0x68eceb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzq_s8, addr 0x68ecd60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcgtzs_f32, addr 0x68ed000, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcgtzs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_f32, addr 0x68e0450, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_f64, addr 0x68ec660, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_s16, addr 0x68e0220, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_s32, addr 0x68e0290, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_s64, addr 0x68ec580, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_s8, addr 0x68e01b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_u16, addr 0x68e0370, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_u32, addr 0x68e03e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_u64, addr 0x68ec5f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcle_u8, addr 0x68e0300, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcle_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcled_f64, addr 0x68ec778, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcled_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcled_s64, addr 0x68ec6d0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcled_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcled_u64, addr 0x68ec708, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcled_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_f32, addr 0x68e0488, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_f64, addr 0x68ec698, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_s16, addr 0x68e0258, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_s32, addr 0x68e02c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_s64, addr 0x68ec5b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_s8, addr 0x68e01e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_u16, addr 0x68e03a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_u32, addr 0x68e0418, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_u64, addr 0x68ec628, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcleq_u8, addr 0x68e0338, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcleq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcles_f32, addr 0x68ec740, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcles_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_f32, addr 0x68ec970, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_f64, addr 0x68ec9e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_s16, addr 0x68ec820, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_s32, addr 0x68ec890, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_s64, addr 0x68ec900, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclez_s8, addr 0x68ec7b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclez_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezd_f64, addr 0x68ecac0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vclezd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezd_s64, addr 0x68eca50, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vclezd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_f32, addr 0x68ec9a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_f64, addr 0x68eca18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_s16, addr 0x68ec858, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_s32, addr 0x68ec8c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_s64, addr 0x68ec938, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezq_s8, addr 0x68ec7e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclezq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclezs_f32, addr 0x68eca88, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vclezs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcls_s16, addr 0x68e6e88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcls_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcls_s32, addr 0x68e6ef8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcls_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcls_s8, addr 0x68e6e18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcls_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclsq_s16, addr 0x68e6ec0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclsq_s32, addr 0x68e6f30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclsq_s8, addr 0x68e6e50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_f32, addr 0x68e0a70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_f64, addr 0x68ed150, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_s16, addr 0x68e0840, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_s32, addr 0x68e08b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_s64, addr 0x68ed070, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_s8, addr 0x68e07d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_u16, addr 0x68e0990, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_u32, addr 0x68e0a00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_u64, addr 0x68ed0e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclt_u8, addr 0x68e0920, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclt_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltd_f64, addr 0x68ed268, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltd_s64, addr 0x68ed1c0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltd_u64, addr 0x68ed1f8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_f32, addr 0x68e0aa8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_f64, addr 0x68ed188, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_s16, addr 0x68e0878, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_s32, addr 0x68e08e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_s64, addr 0x68ed0a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_s8, addr 0x68e0808, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_u16, addr 0x68e09c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_u32, addr 0x68e0a38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_u64, addr 0x68ed118, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltq_u8, addr 0x68e0958, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vclts_f32, addr 0x68ed230, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vclts_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_f32, addr 0x68ed460, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_f64, addr 0x68ed4d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_s16, addr 0x68ed310, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_s32, addr 0x68ed380, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_s64, addr 0x68ed3f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltz_s8, addr 0x68ed2a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcltz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzd_f64, addr 0x68ed5b0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltzd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzd_s64, addr 0x68ed540, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcltzd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_f32, addr 0x68ed498, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_f64, addr 0x68ed508, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_s16, addr 0x68ed348, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_s32, addr 0x68ed3b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_s64, addr 0x68ed428, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzq_s8, addr 0x68ed2d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcltzs_f32, addr 0x68ed578, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcltzs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_s16, addr 0x68e6fd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_s32, addr 0x68e7048, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_s8, addr 0x68e6f68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_u16, addr 0x68e70c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_u32, addr 0x68e70d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclz_u8, addr 0x68e70b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vclz_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_s16, addr 0x68e7010, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_s32, addr 0x68e7080, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_s8, addr 0x68e6fa0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_u16, addr 0x68e70d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_u32, addr 0x68e70e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vclzq_u8, addr 0x68e70c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vclzq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcnt_s8, addr 0x68e70e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcnt_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcnt_u8, addr 0x68e7158, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcnt_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcntq_s8, addr 0x68e7120, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcntq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcntq_u8, addr 0x68e7160, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcntq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_f16, addr 0x68f8350, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_f16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_f32, addr 0x68f8354, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_f64, addr 0x68f8358, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_s16, addr 0x68f8334, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_s32, addr 0x68f8338, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_s64, addr 0x68f833c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_s8, addr 0x68f8330, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_u16, addr 0x68f8344, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_u32, addr 0x68f8348, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_u64, addr 0x68f834c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcombine_u8, addr 0x68f8340, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcombine_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_f32, addr 0x68f3e84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_f64, addr 0x68f3ef4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_s16, addr 0x68f3bd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_s32, addr 0x68f3c44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_s64, addr 0x68f3cb4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_s8, addr 0x68f3b64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_u16, addr 0x68f3d64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_u32, addr 0x68f3dd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_u64, addr 0x68f3e44, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_lane_u8, addr 0x68f3cf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_f32, addr 0x68f42b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_f64, addr 0x68f4324, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_s16, addr 0x68f3fa4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_s32, addr 0x68f4014, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_s64, addr 0x68f4084, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_s8, addr 0x68f3f34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_u16, addr 0x68f4164, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_u32, addr 0x68f41d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_u64, addr 0x68f4244, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopy_laneq_u8, addr 0x68f40f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_f32, addr 0x68f3ebc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_f64, addr 0x68f3efc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_s16, addr 0x68f3c0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_s32, addr 0x68f3c7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_s64, addr 0x68f3cbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_s8, addr 0x68f3b9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_u16, addr 0x68f3d9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_u32, addr 0x68f3e0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_u64, addr 0x68f3e4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_lane_u8, addr 0x68f3d2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_f32, addr 0x68f42ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_f64, addr 0x68f435c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_s16, addr 0x68f3fdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_s32, addr 0x68f404c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_s64, addr 0x68f40bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_s8, addr 0x68f3f6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_u16, addr 0x68f419c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_u32, addr 0x68f420c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_u64, addr 0x68f427c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcopyq_laneq_u8, addr 0x68f412c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_f16, addr 0x68f8104, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f16(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_f32, addr 0x68f8108, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f32(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_f64, addr 0x68f810c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_f64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_s16, addr 0x68f80e8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s16(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_s32, addr 0x68f80ec, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s32(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_s64, addr 0x68f80f0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_s8, addr 0x68f80e4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_s8(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_u16, addr 0x68f80f8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u16(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_u32, addr 0x68f80fc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u32(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_u64, addr 0x68f8100, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcreate_u8, addr 0x68f80f4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcreate_u8(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f32_f64, addr 0x68f06c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f32_s32, addr 0x68e48f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f32_u32, addr 0x68e4960, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f64_f32, addr 0x68f0730, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvt_f64_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f64_s64, addr 0x68f03b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_f64_u64, addr 0x68f0420, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_u64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_high_f32_f64, addr 0x68f06f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f32_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_high_f64_f32, addr 0x68f0768, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f64_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_f32_s32, addr 0x68e49d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_f32_u32, addr 0x68e4a40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_f64_s64, addr 0x68f0570, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_f64_u64, addr 0x68f05e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_s32_f32, addr 0x68e4810, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s32_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_s64_f64, addr 0x68f01f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s64_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_u32_f32, addr 0x68e4880, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u32_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_n_u64_f64, addr 0x68f0260, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u64_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_s32_f32, addr 0x68e4730, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_s64_f64, addr 0x68efaf0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_u32_f32, addr 0x68e47a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvt_u64_f64, addr 0x68efb60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvt_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvta_s32_f32, addr 0x68ef7e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvta_s64_f64, addr 0x68efe70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvta_u32_f32, addr 0x68ef850, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvta_u64_f64, addr 0x68efee0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvta_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtad_s64_f64, addr 0x68f0110, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtad_s64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtad_u64_f64, addr 0x68f0148, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtad_u64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtaq_s32_f32, addr 0x68ef818, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtaq_s64_f64, addr 0x68efea8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtaq_u32_f32, addr 0x68ef888, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtaq_u64_f64, addr 0x68eff18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtas_s32_f32, addr 0x68efa80, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtas_s32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtas_u32_f32, addr 0x68efab8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtas_u32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_f64_s64, addr 0x68f0490, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_f64_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_f64_u64, addr 0x68f04c8, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_f64_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_n_f64_s64, addr 0x68f0650, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_n_f64_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_n_f64_u64, addr 0x68f0688, size 0x38, virtual false, abstract: false, final false
  static inline double_t vcvtd_n_f64_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_n_s64_f64, addr 0x68f02d0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtd_n_s64_f64(double_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_n_u64_f64, addr 0x68f0308, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtd_n_u64_f64(double_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_s64_f64, addr 0x68eff50, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtd_s64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtd_u64_f64, addr 0x68eff88, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtd_u64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtm_s32_f32, addr 0x68ef620, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtm_s64_f64, addr 0x68efcb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtm_u32_f32, addr 0x68ef690, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtm_u64_f64, addr 0x68efd20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmd_s64_f64, addr 0x68f0030, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtmd_s64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmd_u64_f64, addr 0x68f0068, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtmd_u64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmq_s32_f32, addr 0x68ef658, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmq_s64_f64, addr 0x68efce8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmq_u32_f32, addr 0x68ef6c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtmq_u64_f64, addr 0x68efd58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtms_s32_f32, addr 0x68ef9a0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtms_s32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtms_u32_f32, addr 0x68ef9d8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtms_u32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtn_s32_f32, addr 0x68ef540, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtn_s64_f64, addr 0x68efbd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtn_u32_f32, addr 0x68ef5b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtn_u64_f64, addr 0x68efc40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnd_s64_f64, addr 0x68effc0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtnd_s64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnd_u64_f64, addr 0x68efff8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtnd_u64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnq_s32_f32, addr 0x68ef578, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnq_s64_f64, addr 0x68efc08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnq_u32_f32, addr 0x68ef5e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtnq_u64_f64, addr 0x68efc78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtns_s32_f32, addr 0x68ef930, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtns_s32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtns_u32_f32, addr 0x68ef968, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtns_u32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtp_s32_f32, addr 0x68ef700, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtp_s64_f64, addr 0x68efd90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtp_u32_f32, addr 0x68ef770, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u32_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtp_u64_f64, addr 0x68efe00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u64_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpd_s64_f64, addr 0x68f00a0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vcvtpd_s64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpd_u64_f64, addr 0x68f00d8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vcvtpd_u64_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpq_s32_f32, addr 0x68ef738, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpq_s64_f64, addr 0x68efdc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpq_u32_f32, addr 0x68ef7a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtpq_u64_f64, addr 0x68efe38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtps_s32_f32, addr 0x68efa10, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvtps_s32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtps_u32_f32, addr 0x68efa48, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvtps_u32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_f32_s32, addr 0x68e4928, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_f32_u32, addr 0x68e4998, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_f64_s64, addr 0x68f03e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_f64_u64, addr 0x68f0458, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_f32_s32, addr 0x68e4a08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_f32_u32, addr 0x68e4a78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_f64_s64, addr 0x68f05a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_f64_u64, addr 0x68f0618, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_s32_f32, addr 0x68e4848, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s32_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_s64_f64, addr 0x68f0228, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s64_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_u32_f32, addr 0x68e48b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u32_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_n_u64_f64, addr 0x68f0298, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u64_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_s32_f32, addr 0x68e4768, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_s64_f64, addr 0x68efb28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_u32_f32, addr 0x68e47d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u32_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtq_u64_f64, addr 0x68efb98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u64_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_f32_s32, addr 0x68f0340, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_f32_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_f32_u32, addr 0x68f0378, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_f32_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_n_f32_s32, addr 0x68f0500, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_n_f32_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_n_f32_u32, addr 0x68f0538, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvts_n_f32_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_n_s32_f32, addr 0x68f0180, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvts_n_s32_f32(float_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_n_u32_f32, addr 0x68f01b8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvts_n_u32_f32(float_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_s32_f32, addr 0x68ef8c0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vcvts_s32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvts_u32_f32, addr 0x68ef8f8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vcvts_u32_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtx_f32_f64, addr 0x68f07a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vcvtx_f32_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtx_high_f32_f64, addr 0x68f0810, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vcvtx_high_f32_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vcvtxd_f32_f64, addr 0x68f07d8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vcvtxd_f32_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdiv_f32, addr 0x68ea528, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdiv_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdiv_f64, addr 0x68ea598, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdiv_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdivq_f32, addr 0x68ea560, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdivq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdivq_f64, addr 0x68ea5d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdivq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_lane_s32, addr 0x68f77e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_lane_u32, addr 0x68f77ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_laneq_s32, addr 0x68f78c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_laneq_u32, addr 0x68f788c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_s32, addr 0x68f7704, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vdot_u32, addr 0x68f76cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdot_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_lane_s32, addr 0x68f7934, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_lane_u32, addr 0x68f78fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_laneq_s32, addr 0x68f7854, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_laneq_u32, addr 0x68f781c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_s32, addr 0x68f7774, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vdotq_u32, addr 0x68f773c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdotq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_f32, addr 0x68e7cd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_f64, addr 0x68f4414, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_s16, addr 0x68e7a88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_s32, addr 0x68e7af8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_s64, addr 0x68e7b68, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_s8, addr 0x68e7a18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_u16, addr 0x68e7be4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_u32, addr 0x68e7c54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_u64, addr 0x68e7cc4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_lane_u8, addr 0x68e7b74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_f32, addr 0x68f47a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_f64, addr 0x68f4810, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_s16, addr 0x68f4490, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_s32, addr 0x68f4500, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_s64, addr 0x68f4570, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_s8, addr 0x68f4420, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_u16, addr 0x68f4650, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_u32, addr 0x68f46c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_u64, addr 0x68f4730, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_laneq_u8, addr 0x68f45e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_f32, addr 0x68f81f0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_f64, addr 0x68f820c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_s16, addr 0x68f8134, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_s32, addr 0x68f8158, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_s64, addr 0x68f8174, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_s8, addr 0x68f8110, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_u16, addr 0x68f81a4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u16(uint16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_u32, addr 0x68f81c8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_u64, addr 0x68f81e4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdup_n_u8, addr 0x68f8180, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u8(uint8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupb_lane_s8, addr 0x68f4880, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vdupb_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupb_lane_u8, addr 0x68f492c, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vdupb_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupb_laneq_s8, addr 0x68f4a18, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vdupb_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupb_laneq_u8, addr 0x68f4af8, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vdupb_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_lane_f64, addr 0x68f4a10, size 0x8, virtual false, abstract: false, final false
  static inline double_t vdupd_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_lane_s64, addr 0x68f4928, size 0x4, virtual false, abstract: false, final false
  static inline int64_t vdupd_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_lane_u64, addr 0x68f49d4, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t vdupd_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_laneq_f64, addr 0x68f4c10, size 0x38, virtual false, abstract: false, final false
  static inline double_t vdupd_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_laneq_s64, addr 0x68f4ac0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vdupd_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupd_laneq_u64, addr 0x68f4ba0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vdupd_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vduph_lane_s16, addr 0x68f48b8, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vduph_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vduph_lane_u16, addr 0x68f4964, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vduph_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vduph_laneq_s16, addr 0x68f4a50, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vduph_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vduph_laneq_u16, addr 0x68f4b30, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vduph_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_f32, addr 0x68e7d08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_f64, addr 0x68f4418, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_s16, addr 0x68e7ac0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_s32, addr 0x68e7b30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_s64, addr 0x68e7b6c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_s8, addr 0x68e7a50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_u16, addr 0x68e7c1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_u32, addr 0x68e7c8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_u64, addr 0x68e7cc8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_lane_u8, addr 0x68e7bac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_f32, addr 0x68f47d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_f64, addr 0x68f4848, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_s16, addr 0x68f44c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_s32, addr 0x68f4538, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_s64, addr 0x68f45a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_s8, addr 0x68f4458, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_u16, addr 0x68f4688, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_u32, addr 0x68f46f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_u64, addr 0x68f4768, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_laneq_u8, addr 0x68f4618, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_f32, addr 0x68f81fc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_f64, addr 0x68f8214, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_s16, addr 0x68f8144, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_s32, addr 0x68f8164, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_s64, addr 0x68f8178, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_s8, addr 0x68f8120, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_u16, addr 0x68f81b4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u16(uint16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_u32, addr 0x68f81d4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_u64, addr 0x68f81e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdupq_n_u8, addr 0x68f8190, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u8(uint8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_lane_f32, addr 0x68f49d8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vdups_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_lane_s32, addr 0x68f48f0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vdups_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_lane_u32, addr 0x68f499c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vdups_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_laneq_f32, addr 0x68f4bd8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vdups_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_laneq_s32, addr 0x68f4a88, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vdups_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vdups_laneq_u32, addr 0x68f4b68, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vdups_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_s16, addr 0x68e76f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_s32, addr 0x68e7708, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_s64, addr 0x68e7718, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_s8, addr 0x68e7688, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_u16, addr 0x68e7738, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_u32, addr 0x68e7748, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_u64, addr 0x68e7758, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veor_u8, addr 0x68e7728, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 veor_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_s16, addr 0x68e7700, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_s32, addr 0x68e7710, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_s64, addr 0x68e7720, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_s8, addr 0x68e76c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_u16, addr 0x68e7740, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_u32, addr 0x68e7750, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_u64, addr 0x68e7760, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method veorq_u8, addr 0x68e7730, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 veorq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vext_f32, addr 0x68e89a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_f64, addr 0x68f6360, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_s16, addr 0x68e86f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_s32, addr 0x68e8768, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_s64, addr 0x68e87d8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_s8, addr 0x68e8688, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_u16, addr 0x68e8884, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_u32, addr 0x68e88f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_u64, addr 0x68e8964, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vext_u8, addr 0x68e8814, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vext_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_f32, addr 0x68e89d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_f64, addr 0x68f6364, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_s16, addr 0x68e8730, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_s32, addr 0x68e87a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_s64, addr 0x68e87dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_s8, addr 0x68e86c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_u16, addr 0x68e88bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_u32, addr 0x68e892c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_u64, addr 0x68e8968, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vextq_u8, addr 0x68e884c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vextq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_f32, addr 0x68deac0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_f64, addr 0x68ea988, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_lane_f32, addr 0x68ea9f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)9)]
  /// @brief Method vfma_lane_f64, addr 0x68eaa68, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_laneq_f32, addr 0x68eaae8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_laneq_f64, addr 0x68eab58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_n_f32, addr 0x68e94b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfma_n_f64, addr 0x68f710c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, double_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)9)]
  /// @brief Method vfmad_lane_f64, addr 0x68eaae0, size 0x8, virtual false, abstract: false, final false
  static inline double_t vfmad_lane_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmad_laneq_f64, addr 0x68eac00, size 0x38, virtual false, abstract: false, final false
  static inline double_t vfmad_laneq_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_f32, addr 0x68deaf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_f64, addr 0x68ea9c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_lane_f32, addr 0x68eaa30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_lane_f64, addr 0x68eaa70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_laneq_f32, addr 0x68eab20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_laneq_f64, addr 0x68eab90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_n_f32, addr 0x68e94e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmaq_n_f64, addr 0x68f7144, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, double_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmas_lane_f32, addr 0x68eaaa8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmas_lane_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmas_laneq_f32, addr 0x68eabc8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmas_laneq_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_f32, addr 0x68deb30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_f64, addr 0x68eac38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_lane_f32, addr 0x68eaca8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)9)]
  /// @brief Method vfms_lane_f64, addr 0x68ead18, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_laneq_f32, addr 0x68ead98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_laneq_f64, addr 0x68eae08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_n_f32, addr 0x68f709c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfms_n_f64, addr 0x68f717c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, double_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)9)]
  /// @brief Method vfmsd_lane_f64, addr 0x68ead90, size 0x8, virtual false, abstract: false, final false
  static inline double_t vfmsd_lane_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsd_laneq_f64, addr 0x68eaeb0, size 0x38, virtual false, abstract: false, final false
  static inline double_t vfmsd_laneq_f64(double_t a0, double_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_f32, addr 0x68deb68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_f64, addr 0x68eac70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_lane_f32, addr 0x68eace0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_lane_f64, addr 0x68ead20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_laneq_f32, addr 0x68eadd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_laneq_f64, addr 0x68eae40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_n_f32, addr 0x68f70d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmsq_n_f64, addr 0x68f71b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, double_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vfmss_lane_f32, addr 0x68ead58, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmss_lane_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vfmss_laneq_f32, addr 0x68eae78, size 0x38, virtual false, abstract: false, final false
  static inline float_t vfmss_laneq_f32(float_t a0, float_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_f32, addr 0x68f839c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_f64, addr 0x68f83a4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_s16, addr 0x68f8364, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_s32, addr 0x68f836c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_s64, addr 0x68f8374, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_s8, addr 0x68f835c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_u16, addr 0x68f8384, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_u32, addr 0x68f838c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_u64, addr 0x68f8394, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_high_u8, addr 0x68f837c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_high_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_f32, addr 0x68e8ef8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vget_lane_f32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_f64, addr 0x68f6fac, size 0x8, virtual false, abstract: false, final false
  static inline double_t vget_lane_f64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_s16, addr 0x68e8e84, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vget_lane_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_s32, addr 0x68e8ebc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vget_lane_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_s64, addr 0x68e8ef4, size 0x4, virtual false, abstract: false, final false
  static inline int64_t vget_lane_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_s8, addr 0x68e8e4c, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vget_lane_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_u16, addr 0x68e8dd8, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vget_lane_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_u32, addr 0x68e8e10, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vget_lane_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_u64, addr 0x68e8e48, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t vget_lane_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_lane_u8, addr 0x68e8da0, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vget_lane_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_f32, addr 0x68f83cc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_f64, addr 0x68f83d0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_s16, addr 0x68f83b0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_s32, addr 0x68f83b4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_s64, addr 0x68f83b8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_s8, addr 0x68f83ac, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_u16, addr 0x68f83c0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_u32, addr 0x68f83c4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_u64, addr 0x68f83c8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vget_low_u8, addr 0x68f83bc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vget_low_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_f32, addr 0x68e90f0, size 0x38, virtual false, abstract: false, final false
  static inline float_t vgetq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_f64, addr 0x68f6fb4, size 0x38, virtual false, abstract: false, final false
  static inline double_t vgetq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_s16, addr 0x68e9048, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vgetq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_s32, addr 0x68e9080, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vgetq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_s64, addr 0x68e90b8, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vgetq_lane_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_s8, addr 0x68e9010, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vgetq_lane_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_u16, addr 0x68e8f68, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vgetq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_u32, addr 0x68e8fa0, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vgetq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_u64, addr 0x68e8fd8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vgetq_lane_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vgetq_lane_u8, addr 0x68e8f30, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vgetq_lane_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_s16, addr 0x68dd880, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_s32, addr 0x68dd8f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_s8, addr 0x68dd810, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_u16, addr 0x68dd9d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_u32, addr 0x68dda40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhadd_u8, addr 0x68dd960, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_s16, addr 0x68dd8b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_s32, addr 0x68dd928, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_s8, addr 0x68dd848, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_u16, addr 0x68dda08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_u32, addr 0x68dda78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhaddq_u8, addr 0x68dd998, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_s16, addr 0x68df580, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_s32, addr 0x68df5f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_s8, addr 0x68df510, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_u16, addr 0x68df6d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_u32, addr 0x68df740, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsub_u8, addr 0x68df660, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vhsub_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_s16, addr 0x68df5b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_s32, addr 0x68df628, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_s8, addr 0x68df548, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_u16, addr 0x68df708, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_u32, addr 0x68df778, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vhsubq_u8, addr 0x68df698, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_f32, addr 0x68f8474, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_f32(float_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_f64, addr 0x68f8488, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_f64(double_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_s16, addr 0x68f83e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s16(int16_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_s32, addr 0x68f83fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s32(int32_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_s64, addr 0x68f8410, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s64(int64_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_s8, addr 0x68f83d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_s8(int8_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_u16, addr 0x68f8438, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u16(uint16_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_u32, addr 0x68f844c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u32(uint32_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_u64, addr 0x68f8460, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u64(uint64_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1_u8, addr 0x68f8424, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vld1_u8(uint8_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_f32, addr 0x68f847c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_f32(float_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_f64, addr 0x68f8490, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_f64(double_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_s16, addr 0x68f83f0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s16(int16_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_s32, addr 0x68f8404, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s32(int32_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_s64, addr 0x68f8418, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s64(int64_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_s8, addr 0x68f83dc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_s8(int8_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_u16, addr 0x68f8440, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u16(uint16_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_u32, addr 0x68f8454, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u32(uint32_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_u64, addr 0x68f8468, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u64(uint64_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vld1q_u8, addr 0x68f842c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vld1q_u8(uint8_t* a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_f32, addr 0x68e1910, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_f64, addr 0x68eddd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_s16, addr 0x68e16e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_s32, addr 0x68e1750, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_s8, addr 0x68e1670, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_u16, addr 0x68e1830, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_u32, addr 0x68e18a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmax_u8, addr 0x68e17c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmax_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnm_f32, addr 0x68edeb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnm_f64, addr 0x68edf28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnmq_f32, addr 0x68edef0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnmq_f64, addr 0x68edf60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnmv_f32, addr 0x68f6210, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxnmv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnmvq_f32, addr 0x68f6248, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxnmvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxnmvq_f64, addr 0x68f6280, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmaxnmvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_f32, addr 0x68e1948, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_f64, addr 0x68ede10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_s16, addr 0x68e1718, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_s32, addr 0x68e1788, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_s8, addr 0x68e16a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_u16, addr 0x68e1868, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_u32, addr 0x68e18d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxq_u8, addr 0x68e17f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_f32, addr 0x68f5e20, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_s16, addr 0x68f5bf0, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vmaxv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_s32, addr 0x68f5c60, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vmaxv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_s8, addr 0x68f5b80, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vmaxv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_u16, addr 0x68f5d40, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vmaxv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_u32, addr 0x68f5db0, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vmaxv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxv_u8, addr 0x68f5cd0, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vmaxv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_f32, addr 0x68f5e58, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmaxvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_f64, addr 0x68f5e90, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmaxvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_s16, addr 0x68f5c28, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vmaxvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_s32, addr 0x68f5c98, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vmaxvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_s8, addr 0x68f5bb8, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vmaxvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_u16, addr 0x68f5d78, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vmaxvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_u32, addr 0x68f5de8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vmaxvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmaxvq_u8, addr 0x68f5d08, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vmaxvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_f32, addr 0x68e1c20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_f64, addr 0x68ede48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_s16, addr 0x68e19f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_s32, addr 0x68e1a60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_s8, addr 0x68e1980, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_u16, addr 0x68e1b40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_u32, addr 0x68e1bb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmin_u8, addr 0x68e1ad0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmin_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminnm_f32, addr 0x68edf98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vminnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminnm_f64, addr 0x68ee008, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vminnm_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminnmq_f32, addr 0x68edfd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminnmq_f64, addr 0x68ee040, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminnmv_f32, addr 0x68f62b8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminnmv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminnmvq_f32, addr 0x68f62f0, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminnmvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminnmvq_f64, addr 0x68f6328, size 0x38, virtual false, abstract: false, final false
  static inline double_t vminnmvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_f32, addr 0x68e1c58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_f64, addr 0x68ede80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_s16, addr 0x68e1a28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_s32, addr 0x68e1a98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_s8, addr 0x68e19b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_u16, addr 0x68e1b78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_u32, addr 0x68e1be8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminq_u8, addr 0x68e1b08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vminq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_f32, addr 0x68f6168, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminv_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_s16, addr 0x68f5f38, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vminv_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_s32, addr 0x68f5fa8, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vminv_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_s8, addr 0x68f5ec8, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vminv_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_u16, addr 0x68f6088, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vminv_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_u32, addr 0x68f60f8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vminv_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminv_u8, addr 0x68f6018, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vminv_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_f32, addr 0x68f61a0, size 0x38, virtual false, abstract: false, final false
  static inline float_t vminvq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_f64, addr 0x68f61d8, size 0x38, virtual false, abstract: false, final false
  static inline double_t vminvq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_s16, addr 0x68f5f70, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vminvq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_s32, addr 0x68f5fe0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vminvq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_s8, addr 0x68f5f00, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vminvq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_u16, addr 0x68f60c0, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vminvq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_u32, addr 0x68f6130, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vminvq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vminvq_u8, addr 0x68f6050, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vminvq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_f32, addr 0x68de5c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_f64, addr 0x68ea608, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_lane_f32, addr 0x68e5138, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_lane_s16, addr 0x68e4f78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_lane_s32, addr 0x68e4fe8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_lane_u16, addr 0x68e5058, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_lane_u32, addr 0x68e50c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_laneq_f32, addr 0x68f15a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_laneq_s16, addr 0x68f13e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_laneq_s32, addr 0x68f1450, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_laneq_u16, addr 0x68f14c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_laneq_u32, addr 0x68f1530, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_n_f32, addr 0x68e62b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_n_s16, addr 0x68e60f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_n_s32, addr 0x68e6168, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_n_u16, addr 0x68e61d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_n_u32, addr 0x68e6248, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_s16, addr 0x68de4b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_s32, addr 0x68de520, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_s8, addr 0x68de440, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_u16, addr 0x68de5a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_u32, addr 0x68de5b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmla_u8, addr 0x68de590, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmla_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_lane_s16, addr 0x68f1610, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_lane_s32, addr 0x68f1648, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_lane_u16, addr 0x68f1680, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_lane_u32, addr 0x68f16b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_laneq_s16, addr 0x68f17d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_laneq_s32, addr 0x68f1808, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_laneq_u16, addr 0x68f1840, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_laneq_u32, addr 0x68f1878, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_n_s16, addr 0x68f2f84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_n_s32, addr 0x68f2fbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_n_u16, addr 0x68f2ff4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_n_u32, addr 0x68f302c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_s16, addr 0x68ea6b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_s32, addr 0x68ea6e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_s8, addr 0x68ea678, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_u16, addr 0x68ea758, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_u32, addr 0x68ea790, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_high_u8, addr 0x68ea720, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_lane_s16, addr 0x68e51a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_lane_s32, addr 0x68e51e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_lane_u16, addr 0x68e5218, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_lane_u32, addr 0x68e5250, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_laneq_s16, addr 0x68f16f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_laneq_s32, addr 0x68f1728, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_laneq_u16, addr 0x68f1760, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_laneq_u32, addr 0x68f1798, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_n_s16, addr 0x68e6328, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_n_s32, addr 0x68e6360, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_n_u16, addr 0x68e6398, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_n_u32, addr 0x68e63d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_s16, addr 0x68de668, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_s32, addr 0x68de6a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_s8, addr 0x68de630, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_u16, addr 0x68de710, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_u32, addr 0x68de748, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlal_u8, addr 0x68de6d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlal_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_f32, addr 0x68de5f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_f64, addr 0x68ea640, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_lane_f32, addr 0x68e5170, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_lane_s16, addr 0x68e4fb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_lane_s32, addr 0x68e5020, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_lane_u16, addr 0x68e5090, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_lane_u32, addr 0x68e5100, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_laneq_f32, addr 0x68f15d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_laneq_s16, addr 0x68f1418, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_laneq_s32, addr 0x68f1488, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_laneq_u16, addr 0x68f14f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_laneq_u32, addr 0x68f1568, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_n_f32, addr 0x68e62f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_n_s16, addr 0x68e6130, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_n_s32, addr 0x68e61a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_n_u16, addr 0x68e6210, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_n_u32, addr 0x68e6280, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_s16, addr 0x68de4e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_s32, addr 0x68de558, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_s8, addr 0x68de478, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_u16, addr 0x68de5a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_u32, addr 0x68de5b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlaq_u8, addr 0x68de598, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_f32, addr 0x68de900, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_f64, addr 0x68ea7c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_lane_f32, addr 0x68e54b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_lane_s16, addr 0x68e52f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_lane_s32, addr 0x68e5368, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_lane_u16, addr 0x68e53d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_lane_u32, addr 0x68e5448, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_laneq_f32, addr 0x68f1ca0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_laneq_s16, addr 0x68f1ae0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_laneq_s32, addr 0x68f1b50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_laneq_u16, addr 0x68f1bc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_laneq_u32, addr 0x68f1c30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_n_f32, addr 0x68e6638, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_n_s16, addr 0x68e6478, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_n_s32, addr 0x68e64e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_n_u16, addr 0x68e6558, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_n_u32, addr 0x68e65c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_s16, addr 0x68de7f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_s32, addr 0x68de860, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_s8, addr 0x68de780, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_u16, addr 0x68de8e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_u32, addr 0x68de8f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmls_u8, addr 0x68de8d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmls_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_lane_s16, addr 0x68f1d10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_lane_s32, addr 0x68f1d48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_lane_u16, addr 0x68f1d80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_lane_u32, addr 0x68f1db8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_laneq_s16, addr 0x68f1ed0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_laneq_s32, addr 0x68f1f08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_laneq_u16, addr 0x68f1f40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_laneq_u32, addr 0x68f1f78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_n_s16, addr 0x68f30d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_n_s32, addr 0x68f310c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_n_u16, addr 0x68f3144, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_n_u32, addr 0x68f317c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_s16, addr 0x68ea870, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_s32, addr 0x68ea8a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_s8, addr 0x68ea838, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_u16, addr 0x68ea918, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_u32, addr 0x68ea950, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_high_u8, addr 0x68ea8e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_lane_s16, addr 0x68e5528, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_lane_s32, addr 0x68e5560, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_lane_u16, addr 0x68e5598, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_lane_u32, addr 0x68e55d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_laneq_s16, addr 0x68f1df0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_laneq_s32, addr 0x68f1e28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_laneq_u16, addr 0x68f1e60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_laneq_u32, addr 0x68f1e98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_n_s16, addr 0x68e66a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_n_s32, addr 0x68e66e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_n_u16, addr 0x68e6718, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_n_u32, addr 0x68e6750, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_s16, addr 0x68de9a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_s32, addr 0x68de9e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_s8, addr 0x68de970, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_u16, addr 0x68dea50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_u32, addr 0x68dea88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsl_u8, addr 0x68dea18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_f32, addr 0x68de938, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_f64, addr 0x68ea800, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_lane_f32, addr 0x68e54f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_lane_s16, addr 0x68e5330, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_lane_s32, addr 0x68e53a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_lane_u16, addr 0x68e5410, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_lane_u32, addr 0x68e5480, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_laneq_f32, addr 0x68f1cd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_laneq_s16, addr 0x68f1b18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_laneq_s32, addr 0x68f1b88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_laneq_u16, addr 0x68f1bf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_laneq_u32, addr 0x68f1c68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_n_f32, addr 0x68e6670, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, float_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_n_s16, addr 0x68e64b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_n_s32, addr 0x68e6520, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_n_u16, addr 0x68e6590, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_n_u32, addr 0x68e6600, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, uint32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_s16, addr 0x68de828, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_s32, addr 0x68de898, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_s8, addr 0x68de7b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_u16, addr 0x68de8e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_u32, addr 0x68de8f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmlsq_u8, addr 0x68de8d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_f32, addr 0x68f8300, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_f64, addr 0x68f831c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_s16, addr 0x68f8244, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_s32, addr 0x68f8268, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_s64, addr 0x68f8284, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_s8, addr 0x68f8220, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_u16, addr 0x68f82b4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u16(uint16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_u32, addr 0x68f82d8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_u64, addr 0x68f82f4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmov_n_u8, addr 0x68f8290, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u8(uint8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_s16, addr 0x68f0ed8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_s32, addr 0x68f0f10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_s8, addr 0x68f0ea0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_u16, addr 0x68f0f80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_u32, addr 0x68f0fb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_high_u8, addr 0x68f0f48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_s16, addr 0x68e4c68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_s32, addr 0x68e4ca0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_s8, addr 0x68e4c30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_u16, addr 0x68e4d10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_u32, addr 0x68e4d48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovl_u8, addr 0x68e4cd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovl_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_s16, addr 0x68e4b70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_s32, addr 0x68e4ba8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_s64, addr 0x68e4be0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_u16, addr 0x68e4c18, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_u32, addr 0x68e4c20, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_high_u64, addr 0x68e4c28, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_s16, addr 0x68e4ab0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_s32, addr 0x68e4ae8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_s64, addr 0x68e4b20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_u16, addr 0x68e4b58, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_u32, addr 0x68e4b60, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovn_u64, addr 0x68e4b68, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmovn_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_f32, addr 0x68f830c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_f64, addr 0x68f8324, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_s16, addr 0x68f8254, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_s32, addr 0x68f8274, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_s64, addr 0x68f8288, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_s8, addr 0x68f8230, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_u16, addr 0x68f82c4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u16(uint16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_u32, addr 0x68f82e4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_u64, addr 0x68f82f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmovq_n_u8, addr 0x68f82a0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u8(uint8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_f32, addr 0x68de3d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_f64, addr 0x68ea128, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_lane_f32, addr 0x68e5a68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)9)]
  /// @brief Method vmul_lane_f64, addr 0x68f2250, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_lane_s16, addr 0x68e58a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_lane_s32, addr 0x68e5918, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_lane_u16, addr 0x68e5988, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_lane_u32, addr 0x68e59f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_f32, addr 0x68f2494, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_f64, addr 0x68f2504, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_s16, addr 0x68f22d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_s32, addr 0x68f2344, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_u16, addr 0x68f23b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_laneq_u32, addr 0x68f2424, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_f32, addr 0x68e5838, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f32(::Unity::Burst::Intrinsics::v64 a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_f64, addr 0x68f21e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f64(::Unity::Burst::Intrinsics::v64 a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_s16, addr 0x68e5678, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_s32, addr 0x68e56e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_u16, addr 0x68e5758, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u16(::Unity::Burst::Intrinsics::v64 a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_n_u32, addr 0x68e57c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u32(::Unity::Burst::Intrinsics::v64 a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_s16, addr 0x68de2c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_s32, addr 0x68de330, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_s8, addr 0x68de250, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_u16, addr 0x68de3b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_u32, addr 0x68de3c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmul_u8, addr 0x68de3a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmul_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmuld_lane_f64, addr 0x68f22c8, size 0xc, virtual false, abstract: false, final false
  static inline double_t vmuld_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmuld_laneq_f64, addr 0x68f25ac, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmuld_laneq_f64(double_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_lane_s16, addr 0x68f26c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_lane_s32, addr 0x68f26fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_lane_u16, addr 0x68f2734, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_lane_u32, addr 0x68f276c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_laneq_s16, addr 0x68f2884, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_laneq_s32, addr 0x68f28bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_laneq_u16, addr 0x68f28f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_laneq_u32, addr 0x68f292c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_n_s16, addr 0x68f25e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_n_s32, addr 0x68f261c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_n_u16, addr 0x68f2654, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_n_u32, addr 0x68f268c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_s16, addr 0x68eb1c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_s32, addr 0x68eb1f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_s8, addr 0x68eb188, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_u16, addr 0x68eb268, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_u32, addr 0x68eb2a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_high_u8, addr 0x68eb230, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_lane_s16, addr 0x68e5bb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_lane_s32, addr 0x68e5bf0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_lane_u16, addr 0x68e5c28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_lane_u32, addr 0x68e5c60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_laneq_s16, addr 0x68f27a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_laneq_s32, addr 0x68f27dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_laneq_u16, addr 0x68f2814, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_laneq_u32, addr 0x68f284c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_n_s16, addr 0x68e5ad8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_n_s32, addr 0x68e5b10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_n_u16, addr 0x68e5b48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u16(::Unity::Burst::Intrinsics::v64 a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_n_u32, addr 0x68e5b80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u32(::Unity::Burst::Intrinsics::v64 a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_s16, addr 0x68dee78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_s32, addr 0x68deeb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_s8, addr 0x68dee40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_u16, addr 0x68def20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_u32, addr 0x68def58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmull_u8, addr 0x68deee8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmull_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_f32, addr 0x68de408, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_f64, addr 0x68ea160, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_f32, addr 0x68e5aa0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_f64, addr 0x68f2258, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_s16, addr 0x68e58e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_s32, addr 0x68e5950, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_u16, addr 0x68e59c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_lane_u32, addr 0x68e5a30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_f32, addr 0x68f24cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_f64, addr 0x68f253c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_s16, addr 0x68f230c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_s32, addr 0x68f237c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_u16, addr 0x68f23ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_laneq_u32, addr 0x68f245c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_f32, addr 0x68e5870, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f32(::Unity::Burst::Intrinsics::v128 a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_f64, addr 0x68f2218, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f64(::Unity::Burst::Intrinsics::v128 a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_s16, addr 0x68e56b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_s32, addr 0x68e5720, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_u16, addr 0x68e5790, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u16(::Unity::Burst::Intrinsics::v128 a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_n_u32, addr 0x68e5800, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_s16, addr 0x68de2f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_s32, addr 0x68de368, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_s8, addr 0x68de288, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_u16, addr 0x68de3b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_u32, addr 0x68de3c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulq_u8, addr 0x68de3a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmuls_lane_f32, addr 0x68f2290, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmuls_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmuls_laneq_f32, addr 0x68f2574, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmuls_laneq_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_f32, addr 0x68ea198, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_f64, addr 0x68ea208, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_lane_f32, addr 0x68ea2e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_lane_f64, addr 0x68ea358, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_laneq_f32, addr 0x68ea3d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulx_laneq_f64, addr 0x68ea448, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxd_f64, addr 0x68ea2b0, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmulxd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxd_lane_f64, addr 0x68ea3d0, size 0x8, virtual false, abstract: false, final false
  static inline double_t vmulxd_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxd_laneq_f64, addr 0x68ea4f0, size 0x38, virtual false, abstract: false, final false
  static inline double_t vmulxd_laneq_f64(double_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_f32, addr 0x68ea1d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_f64, addr 0x68ea240, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_lane_f32, addr 0x68ea320, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_lane_f64, addr 0x68ea360, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_laneq_f32, addr 0x68ea410, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxq_laneq_f64, addr 0x68ea480, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxs_f32, addr 0x68ea278, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmulxs_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxs_lane_f32, addr 0x68ea398, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmulxs_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmulxs_laneq_f32, addr 0x68ea4b8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vmulxs_laneq_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_s16, addr 0x68e7478, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_s32, addr 0x68e7488, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_s8, addr 0x68e7408, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_u16, addr 0x68e74a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_u32, addr 0x68e74b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvn_u8, addr 0x68e7498, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vmvn_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_s16, addr 0x68e7480, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_s32, addr 0x68e7490, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_s8, addr 0x68e7440, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_u16, addr 0x68e74b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_u32, addr 0x68e74c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vmvnq_u8, addr 0x68e74a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_f32, addr 0x68e6c58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_f64, addr 0x68f3534, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_s16, addr 0x68e6b78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_s32, addr 0x68e6be8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_s64, addr 0x68f348c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vneg_s8, addr 0x68e6b08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vneg_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegd_s64, addr 0x68f34c4, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vnegd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_f32, addr 0x68e6c90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_f64, addr 0x68f356c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_s16, addr 0x68e6bb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_s32, addr 0x68e6c20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_s64, addr 0x68f34fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vnegq_s8, addr 0x68e6b40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vnegq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_s16, addr 0x68e78b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_s32, addr 0x68e78c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_s64, addr 0x68e78d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_s8, addr 0x68e7848, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_u16, addr 0x68e78f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_u32, addr 0x68e7908, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_u64, addr 0x68e7918, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorn_u8, addr 0x68e78e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorn_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_s16, addr 0x68e78c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_s32, addr 0x68e78d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_s64, addr 0x68e78e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_s8, addr 0x68e7880, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_u16, addr 0x68e7900, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_u32, addr 0x68e7910, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_u64, addr 0x68e7920, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vornq_u8, addr 0x68e78f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vornq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_s16, addr 0x68e7618, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_s32, addr 0x68e7628, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_s64, addr 0x68e7638, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_s8, addr 0x68e75a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_u16, addr 0x68e7658, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_u32, addr 0x68e7668, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_u64, addr 0x68e7678, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorr_u8, addr 0x68e7648, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vorr_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_s16, addr 0x68e7620, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_s32, addr 0x68e7630, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_s64, addr 0x68e7640, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_s8, addr 0x68e75e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_u16, addr 0x68e7660, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_u32, addr 0x68e7670, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_u64, addr 0x68e7680, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vorrq_u8, addr 0x68e7650, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vorrq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_s16, addr 0x68e8148, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_s32, addr 0x68e81b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_s8, addr 0x68e80d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_u16, addr 0x68e8298, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_u32, addr 0x68e8308, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadal_u8, addr 0x68e8228, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadal_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_s16, addr 0x68e8180, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_s32, addr 0x68e81f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_s8, addr 0x68e8110, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_u16, addr 0x68e82d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_u32, addr 0x68e8340, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadalq_u8, addr 0x68e8260, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_f32, addr 0x68e7e00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_s16, addr 0x68e7d78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_s32, addr 0x68e7db0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_s8, addr 0x68e7d40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_u16, addr 0x68e7df0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_u32, addr 0x68e7df8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadd_u8, addr 0x68e7de8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddd_f64, addr 0x68f5330, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpaddd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddd_s64, addr 0x68f5288, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vpaddd_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddd_u64, addr 0x68f52c0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vpaddd_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_s16, addr 0x68e7ea8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_s32, addr 0x68e7f18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_s8, addr 0x68e7e38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_u16, addr 0x68e7ff8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_u32, addr 0x68e8068, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddl_u8, addr 0x68e7f88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_s16, addr 0x68e7ee0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_s32, addr 0x68e7f50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_s8, addr 0x68e7e70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_u16, addr 0x68e8030, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_u32, addr 0x68e80a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddlq_u8, addr 0x68e7fc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_f32, addr 0x68f4d48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_f64, addr 0x68f4d80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_s16, addr 0x68f4c80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_s32, addr 0x68f4cb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_s64, addr 0x68f4cf0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_s8, addr 0x68f4c48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_u16, addr 0x68f4d30, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_u32, addr 0x68f4d38, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_u64, addr 0x68f4d40, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpaddq_u8, addr 0x68f4d28, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpadds_f32, addr 0x68f52f8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpadds_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_f32, addr 0x68e84c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_s16, addr 0x68e83b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_s32, addr 0x68e83e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_s8, addr 0x68e8378, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_u16, addr 0x68e8458, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_u32, addr 0x68e8490, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmax_u8, addr 0x68e8420, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmax_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxnm_f32, addr 0x68f5138, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmaxnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxnmq_f32, addr 0x68f5170, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxnmq_f64, addr 0x68f51a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxnmqd_f64, addr 0x68f5480, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpmaxnmqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxnms_f32, addr 0x68f5448, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpmaxnms_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_f32, addr 0x68f4f08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_f64, addr 0x68f4f40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_s16, addr 0x68f4df0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_s32, addr 0x68f4e28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_s8, addr 0x68f4db8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_u16, addr 0x68f4e98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_u32, addr 0x68f4ed0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxq_u8, addr 0x68f4e60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxqd_f64, addr 0x68f53a0, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpmaxqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmaxs_f32, addr 0x68f5368, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpmaxs_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_f32, addr 0x68e8650, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_s16, addr 0x68e8538, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_s32, addr 0x68e8570, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_s8, addr 0x68e8500, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_u16, addr 0x68e85e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_u32, addr 0x68e8618, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpmin_u8, addr 0x68e85a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpmin_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminnm_f32, addr 0x68f51e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vpminnm_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminnmq_f32, addr 0x68f5218, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminnmq_f64, addr 0x68f5250, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminnmqd_f64, addr 0x68f54f0, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpminnmqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpminnms_f32, addr 0x68f54b8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpminnms_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_f32, addr 0x68f50c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_f64, addr 0x68f5100, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_s16, addr 0x68f4fb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_s32, addr 0x68f4fe8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_s8, addr 0x68f4f78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_u16, addr 0x68f5058, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_u32, addr 0x68f5090, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminq_u8, addr 0x68f5020, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vpminq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vpminqd_f64, addr 0x68f5410, size 0x38, virtual false, abstract: false, final false
  static inline double_t vpminqd_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vpmins_f32, addr 0x68f53d8, size 0x38, virtual false, abstract: false, final false
  static inline float_t vpmins_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabs_s16, addr 0x68e6a28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabs_s32, addr 0x68e6a98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabs_s64, addr 0x68f333c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabs_s8, addr 0x68e69b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqabs_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsb_s8, addr 0x68f33ac, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqabsb_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsd_s64, addr 0x68f3454, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqabsd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsh_s16, addr 0x68f33e4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqabsh_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsq_s16, addr 0x68e6a60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsq_s32, addr 0x68e6ad0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsq_s64, addr 0x68f3374, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabsq_s8, addr 0x68e69f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqabss_s32, addr 0x68f341c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqabss_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_s16, addr 0x68dddc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_s32, addr 0x68dde30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_s64, addr 0x68ddea0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_s8, addr 0x68ddd50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_u16, addr 0x68ddf80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_u32, addr 0x68ddff0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_u64, addr 0x68de060, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadd_u8, addr 0x68ddf10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddb_s8, addr 0x68e98a8, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqaddb_s8(int8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddb_u8, addr 0x68e9988, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqaddb_u8(uint8_t a0, uint8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddd_s64, addr 0x68e9950, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqaddd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddd_u64, addr 0x68e9a30, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqaddd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddh_s16, addr 0x68e98e0, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqaddh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddh_u16, addr 0x68e99c0, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqaddh_u16(uint16_t a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_s16, addr 0x68dddf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_s32, addr 0x68dde68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_s64, addr 0x68dded8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_s8, addr 0x68ddd88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_u16, addr 0x68ddfb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_u32, addr 0x68de028, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_u64, addr 0x68de098, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqaddq_u8, addr 0x68ddf48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadds_s32, addr 0x68e9918, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqadds_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqadds_u32, addr 0x68e99f8, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqadds_u32(uint32_t a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_lane_s16, addr 0x68f1920, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_lane_s32, addr 0x68f1958, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_laneq_s16, addr 0x68f1a70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_laneq_s32, addr 0x68f1aa8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_n_s16, addr 0x68f3064, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_n_s32, addr 0x68f309c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_s16, addr 0x68eb038, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_high_s32, addr 0x68eb070, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_lane_s16, addr 0x68e5288, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_lane_s32, addr 0x68e52c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_laneq_s16, addr 0x68f1990, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_laneq_s32, addr 0x68f19c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_n_s16, addr 0x68e6408, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_n_s32, addr 0x68e6440, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_s16, addr 0x68ded60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlal_s32, addr 0x68ded98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlalh_lane_s16, addr 0x68f18b0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlalh_lane_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlalh_laneq_s16, addr 0x68f1a00, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlalh_laneq_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlalh_s16, addr 0x68eafc8, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlalh_s16(int32_t a0, int16_t a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlals_lane_s32, addr 0x68f18e8, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlals_lane_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlals_laneq_s32, addr 0x68f1a38, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlals_laneq_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlals_s32, addr 0x68eb000, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlals_s32(int64_t a0, int32_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_lane_s16, addr 0x68f2020, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_lane_s32, addr 0x68f2058, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_laneq_s16, addr 0x68f2170, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_laneq_s32, addr 0x68f21a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_n_s16, addr 0x68f31b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_n_s32, addr 0x68f31ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_s16, addr 0x68eb118, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_high_s32, addr 0x68eb150, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_lane_s16, addr 0x68e5608, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_lane_s32, addr 0x68e5640, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_laneq_s16, addr 0x68f2090, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_laneq_s32, addr 0x68f20c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_n_s16, addr 0x68e6788, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_n_s32, addr 0x68e67c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_s16, addr 0x68dedd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsl_s32, addr 0x68dee08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlslh_lane_s16, addr 0x68f1fb0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlslh_lane_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlslh_laneq_s16, addr 0x68f2100, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlslh_laneq_s16(int32_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlslh_s16, addr 0x68eb0a8, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmlslh_s16(int32_t a0, int16_t a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsls_lane_s32, addr 0x68f1fe8, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlsls_lane_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsls_laneq_s32, addr 0x68f2138, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlsls_laneq_s32(int64_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmlsls_s32, addr 0x68eb0e0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmlsls_s32(int64_t a0, int32_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_lane_s16, addr 0x68e5e58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_lane_s32, addr 0x68e5ec8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_laneq_s16, addr 0x68f2c74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_laneq_s32, addr 0x68f2ce4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_n_s16, addr 0x68e5d78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_n_s32, addr 0x68e5de8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_s16, addr 0x68deba0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulh_s32, addr 0x68dec10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhh_lane_s16, addr 0x68f2c04, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqdmulhh_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhh_laneq_s16, addr 0x68f2d54, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqdmulhh_laneq_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhh_s16, addr 0x68eaee8, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqdmulhh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_lane_s16, addr 0x68e5e90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_lane_s32, addr 0x68e5f00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_laneq_s16, addr 0x68f2cac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_laneq_s32, addr 0x68f2d1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_n_s16, addr 0x68e5db0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_n_s32, addr 0x68e5e20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_s16, addr 0x68debd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhq_s32, addr 0x68dec48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhs_lane_s32, addr 0x68f2c3c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmulhs_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhs_laneq_s32, addr 0x68f2d8c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmulhs_laneq_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulhs_s32, addr 0x68eaf20, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmulhs_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_lane_s16, addr 0x68f2a44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_lane_s32, addr 0x68f2a7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_laneq_s16, addr 0x68f2b94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_laneq_s32, addr 0x68f2bcc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_n_s16, addr 0x68f2964, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_n_s32, addr 0x68f299c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_s16, addr 0x68eb348, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_high_s32, addr 0x68eb380, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_lane_s16, addr 0x68e5d08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_lane_s32, addr 0x68e5d40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_laneq_s16, addr 0x68f2ab4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_laneq_s32, addr 0x68f2aec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_n_s16, addr 0x68e5c98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_n_s32, addr 0x68e5cd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_s16, addr 0x68def90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmull_s32, addr 0x68defc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmullh_lane_s16, addr 0x68f29d4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmullh_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmullh_laneq_s16, addr 0x68f2b24, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmullh_laneq_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmullh_s16, addr 0x68eb2d8, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqdmullh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulls_lane_s32, addr 0x68f2a0c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmulls_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulls_laneq_s32, addr 0x68f2b5c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmulls_laneq_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqdmulls_s32, addr 0x68eb310, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqdmulls_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_s16, addr 0x68f1140, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_s32, addr 0x68f1178, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_s64, addr 0x68f11b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_u16, addr 0x68f11e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_u32, addr 0x68f1220, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_high_u64, addr 0x68f1258, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_s16, addr 0x68e4d80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_s32, addr 0x68e4db8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_s64, addr 0x68e4df0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_u16, addr 0x68e4e28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_u32, addr 0x68e4e60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovn_u64, addr 0x68e4e98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovnd_s64, addr 0x68f1060, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqmovnd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovnd_u64, addr 0x68f1108, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqmovnd_u64(uint64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovnh_s16, addr 0x68f0ff0, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqmovnh_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovnh_u16, addr 0x68f1098, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqmovnh_u16(uint16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovns_s32, addr 0x68f1028, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqmovns_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovns_u32, addr 0x68f10d0, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqmovns_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_high_s16, addr 0x68f1338, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_high_s32, addr 0x68f1370, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_high_s64, addr 0x68f13a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_s16, addr 0x68e4ed0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_s32, addr 0x68e4f08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovun_s64, addr 0x68e4f40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovund_s64, addr 0x68f1300, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqmovund_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovunh_s16, addr 0x68f1290, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqmovunh_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqmovuns_s32, addr 0x68f12c8, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqmovuns_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqneg_s16, addr 0x68e6d38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqneg_s32, addr 0x68e6da8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqneg_s64, addr 0x68f35a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqneg_s8, addr 0x68e6cc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqneg_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegb_s8, addr 0x68f3614, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqnegb_s8(int8_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegd_s64, addr 0x68f36bc, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqnegd_s64(int64_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegh_s16, addr 0x68f364c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqnegh_s16(int16_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegq_s16, addr 0x68e6d70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegq_s32, addr 0x68e6de0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegq_s64, addr 0x68f35dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegq_s8, addr 0x68e6d00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqnegs_s32, addr 0x68f3684, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqnegs_s32(int32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_lane_s16, addr 0x68f7b34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_lane_s32, addr 0x68f7c14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_laneq_s16, addr 0x68f7ba4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_laneq_s32, addr 0x68f7c84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_s16, addr 0x68f7974, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlah_s32, addr 0x68f79ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahh_lane_s16, addr 0x68f7f94, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlahh_lane_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahh_laneq_s16, addr 0x68f7fcc, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlahh_laneq_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahh_s16, addr 0x68f7eb4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlahh_s16(int16_t a0, int16_t a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_lane_s16, addr 0x68f7b6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_lane_s32, addr 0x68f7c4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_laneq_s16, addr 0x68f7bdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_laneq_s32, addr 0x68f7cbc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_s16, addr 0x68f79e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahq_s32, addr 0x68f7a1c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahs_lane_s32, addr 0x68f8004, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlahs_lane_s32(int32_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlahs_s32, addr 0x68f7eec, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlahs_s32(int32_t a0, int32_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_lane_s16, addr 0x68f7cf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_lane_s32, addr 0x68f7dd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_laneq_s16, addr 0x68f7d64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_laneq_s32, addr 0x68f7e44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_s16, addr 0x68f7a54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlsh_s32, addr 0x68f7a8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshh_lane_s16, addr 0x68f803c, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlshh_lane_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshh_laneq_s16, addr 0x68f8074, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlshh_laneq_s16(int16_t a0, int16_t a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshh_s16, addr 0x68f7f24, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmlshh_s16(int16_t a0, int16_t a1, int16_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_lane_s16, addr 0x68f7d2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_lane_s32, addr 0x68f7e0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_laneq_s16, addr 0x68f7d9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_laneq_s32, addr 0x68f7e7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_s16, addr 0x68f7ac4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshq_s32, addr 0x68f7afc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshs_lane_s32, addr 0x68f80ac, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlshs_lane_s32(int32_t a0, int32_t a1, ::Unity::Burst::Intrinsics::v64 a2, int32_t a3);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmlshs_s32, addr 0x68f7f5c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmlshs_s32(int32_t a0, int32_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_lane_s16, addr 0x68e6018, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_lane_s32, addr 0x68e6088, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_laneq_s16, addr 0x68f2e34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_laneq_s32, addr 0x68f2ea4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_n_s16, addr 0x68e5f38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s16(::Unity::Burst::Intrinsics::v64 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_n_s32, addr 0x68e5fa8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_s16, addr 0x68dec80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulh_s32, addr 0x68decf0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhh_lane_s16, addr 0x68f2dc4, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmulhh_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhh_laneq_s16, addr 0x68f2f14, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmulhh_laneq_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhh_s16, addr 0x68eaf58, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrdmulhh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_lane_s16, addr 0x68e6050, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_lane_s32, addr 0x68e60c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_laneq_s16, addr 0x68f2e6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_laneq_s32, addr 0x68f2edc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_n_s16, addr 0x68e5f70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_n_s32, addr 0x68e5fe0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_s16, addr 0x68decb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhq_s32, addr 0x68ded28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhs_lane_s32, addr 0x68f2dfc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmulhs_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhs_laneq_s32, addr 0x68f2f4c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmulhs_laneq_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrdmulhs_s32, addr 0x68eaf90, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrdmulhs_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_s16, addr 0x68e2780, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_s32, addr 0x68e27f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_s64, addr 0x68e2860, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_s8, addr 0x68e2710, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_u16, addr 0x68e2940, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_u32, addr 0x68e29b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_u64, addr 0x68e2a20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshl_u8, addr 0x68e28d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlb_s8, addr 0x68ee318, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqrshlb_s8(int8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlb_u8, addr 0x68ee3f8, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqrshlb_u8(uint8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshld_s64, addr 0x68ee3c0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqrshld_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshld_u64, addr 0x68ee4a0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqrshld_u64(uint64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlh_s16, addr 0x68ee350, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrshlh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlh_u16, addr 0x68ee430, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqrshlh_u16(uint16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_s16, addr 0x68e27b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_s32, addr 0x68e2828, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_s64, addr 0x68e2898, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_s8, addr 0x68e2748, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_u16, addr 0x68e2978, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_u32, addr 0x68e29e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_u64, addr 0x68e2a58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshlq_u8, addr 0x68e2908, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshls_s32, addr 0x68ee388, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrshls_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshls_u32, addr 0x68ee468, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqrshls_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_s16, addr 0x68ef1c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_s32, addr 0x68ef1f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_s64, addr 0x68ef230, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_u16, addr 0x68ef268, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_u32, addr 0x68ef2a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_high_n_u64, addr 0x68ef2d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_s16, addr 0x68e3d90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_s32, addr 0x68e3dc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_s64, addr 0x68e3e00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_u16, addr 0x68e3e38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_u32, addr 0x68e3e70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrn_n_u64, addr 0x68e3ea8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrnd_n_s64, addr 0x68ef0e0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqrshrnd_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrnd_n_u64, addr 0x68ef188, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqrshrnd_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrnh_n_s16, addr 0x68ef070, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqrshrnh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrnh_n_u16, addr 0x68ef118, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqrshrnh_n_u16(uint16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrns_n_s32, addr 0x68ef0a8, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqrshrns_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrns_n_u32, addr 0x68ef150, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqrshrns_n_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_high_n_s16, addr 0x68eebd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_high_n_s32, addr 0x68eec10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_high_n_s64, addr 0x68eec48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_n_s16, addr 0x68e3a48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_n_s32, addr 0x68e3a80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrun_n_s64, addr 0x68e3ab8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrund_n_s64, addr 0x68eeba0, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqrshrund_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshrunh_n_s16, addr 0x68eeb30, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqrshrunh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqrshruns_n_s32, addr 0x68eeb68, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqrshruns_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_s16, addr 0x68e3620, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_s32, addr 0x68e3630, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_s64, addr 0x68e3640, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_s8, addr 0x68e3610, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_u16, addr 0x68e3660, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_u32, addr 0x68e3670, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_u64, addr 0x68e3680, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshl_n_u8, addr 0x68e3650, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_s16, addr 0x68e2080, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_s32, addr 0x68e20f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_s64, addr 0x68e2160, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_s8, addr 0x68e2010, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_u16, addr 0x68e2240, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_u32, addr 0x68e22b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_u64, addr 0x68e2320, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshl_u8, addr 0x68e21d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlb_n_s8, addr 0x68ee5f0, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqshlb_n_s8(int8_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlb_n_u8, addr 0x68ee6d0, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshlb_n_u8(uint8_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlb_s8, addr 0x68ee0e8, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqshlb_s8(int8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlb_u8, addr 0x68ee1c8, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshlb_u8(uint8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshld_n_s64, addr 0x68ee698, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqshld_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshld_n_u64, addr 0x68ee778, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqshld_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshld_s64, addr 0x68ee190, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqshld_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshld_u64, addr 0x68ee270, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqshld_u64(uint64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlh_n_s16, addr 0x68ee628, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqshlh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlh_n_u16, addr 0x68ee708, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshlh_n_u16(uint16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlh_s16, addr 0x68ee120, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqshlh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlh_u16, addr 0x68ee200, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshlh_u16(uint16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_s16, addr 0x68e3628, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_s32, addr 0x68e3638, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_s64, addr 0x68e3648, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_s8, addr 0x68e3618, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_u16, addr 0x68e3668, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_u32, addr 0x68e3678, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_u64, addr 0x68e3688, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vqshlq_n_u8, addr 0x68e3658, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_s16, addr 0x68e20b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_s32, addr 0x68e2128, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_s64, addr 0x68e2198, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_s8, addr 0x68e2048, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_u16, addr 0x68e2278, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_u32, addr 0x68e22e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_u64, addr 0x68e2358, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlq_u8, addr 0x68e2208, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshls_n_s32, addr 0x68ee660, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqshls_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshls_n_u32, addr 0x68ee740, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshls_n_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshls_s32, addr 0x68ee158, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqshls_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshls_u32, addr 0x68ee238, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshls_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlu_n_s16, addr 0x68e3700, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlu_n_s32, addr 0x68e3770, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlu_n_s64, addr 0x68e37e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlu_n_s8, addr 0x68e3690, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlub_n_s8, addr 0x68ee7b0, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshlub_n_s8(int8_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlud_n_s64, addr 0x68ee858, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqshlud_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshluh_n_s16, addr 0x68ee7e8, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshluh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshluq_n_s16, addr 0x68e3738, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshluq_n_s32, addr 0x68e37a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshluq_n_s64, addr 0x68e3818, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshluq_n_s8, addr 0x68e36c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshlus_n_s32, addr 0x68ee820, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshlus_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_s16, addr 0x68eedd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_s32, addr 0x68eee08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_s64, addr 0x68eee40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_u16, addr 0x68eee78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_u32, addr 0x68eeeb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_high_n_u64, addr 0x68eeee8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_s16, addr 0x68e3af0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_s32, addr 0x68e3b28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_s64, addr 0x68e3b60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_u16, addr 0x68e3b98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_u32, addr 0x68e3bd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrn_n_u64, addr 0x68e3c08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrnd_n_s64, addr 0x68eecf0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqshrnd_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrnd_n_u64, addr 0x68eed98, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshrnd_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrnh_n_s16, addr 0x68eec80, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqshrnh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrnh_n_u16, addr 0x68eed28, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshrnh_n_u16(uint16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrns_n_s32, addr 0x68eecb8, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqshrns_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrns_n_u32, addr 0x68eed60, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshrns_n_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_high_n_s16, addr 0x68eea88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_high_n_s32, addr 0x68eeac0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_high_n_s64, addr 0x68eeaf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_n_s16, addr 0x68e39a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_n_s32, addr 0x68e39d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrun_n_s64, addr 0x68e3a10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrund_n_s64, addr 0x68eea50, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqshrund_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshrunh_n_s16, addr 0x68ee9e0, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqshrunh_n_s16(int16_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqshruns_n_s32, addr 0x68eea18, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqshruns_n_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_s16, addr 0x68df820, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_s32, addr 0x68df890, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_s64, addr 0x68df900, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_s8, addr 0x68df7b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_u16, addr 0x68df9e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_u32, addr 0x68dfa50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_u64, addr 0x68dfac0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsub_u8, addr 0x68df970, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqsub_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubb_s8, addr 0x68eb738, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vqsubb_s8(int8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubb_u8, addr 0x68eb818, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vqsubb_u8(uint8_t a0, uint8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubd_s64, addr 0x68eb7e0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vqsubd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubd_u64, addr 0x68eb8c0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vqsubd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubh_s16, addr 0x68eb770, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vqsubh_s16(int16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubh_u16, addr 0x68eb850, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vqsubh_u16(uint16_t a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_s16, addr 0x68df858, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_s32, addr 0x68df8c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_s64, addr 0x68df938, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_s8, addr 0x68df7e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_u16, addr 0x68dfa18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_u32, addr 0x68dfa88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_u64, addr 0x68dfaf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubq_u8, addr 0x68df9a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubs_s32, addr 0x68eb7a8, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vqsubs_s32(int32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqsubs_u32, addr 0x68eb888, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vqsubs_u32(uint32_t a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbl1_s8, addr 0x68f6eac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbl1_u8, addr 0x68f6f1c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbl1q_s8, addr 0x68f6ee4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbl1q_u8, addr 0x68f6f24, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbx1_s8, addr 0x68f6f2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbx1_u8, addr 0x68f6f9c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbx1q_s8, addr 0x68f6f64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vqtbx1q_u8, addr 0x68f6fa4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_s16, addr 0x68ea068, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_s32, addr 0x68ea0a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_s64, addr 0x68ea0d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_u16, addr 0x68ea110, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_u32, addr 0x68ea118, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_high_u64, addr 0x68ea120, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_s16, addr 0x68de190, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_s32, addr 0x68de1c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_s64, addr 0x68de200, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_u16, addr 0x68de238, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_u32, addr 0x68de240, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vraddhn_u64, addr 0x68de248, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrbit_s8, addr 0x68f4394, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrbit_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrbit_u8, addr 0x68f4404, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrbit_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrbitq_s8, addr 0x68f43cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrbitq_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrbitq_u8, addr 0x68f440c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrbitq_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpe_f32, addr 0x68e71d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpe_f64, addr 0x68f36f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpe_u32, addr 0x68e7168, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecpe_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecped_f64, addr 0x68f379c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrecped_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpeq_f32, addr 0x68e7210, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpeq_f64, addr 0x68f372c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpeq_u32, addr 0x68e71a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpes_f32, addr 0x68f3764, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrecpes_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecps_f32, addr 0x68e7248, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecps_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecps_f64, addr 0x68f37d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrecps_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpsd_f64, addr 0x68f387c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrecpsd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpsq_f32, addr 0x68e7280, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpsq_f64, addr 0x68f380c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpss_f32, addr 0x68f3844, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrecpss_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpxd_f64, addr 0x68f7064, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrecpxd_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrecpxs_f32, addr 0x68f702c, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrecpxs_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev16_s8, addr 0x68e8ca0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev16_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev16_u8, addr 0x68e8d10, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev16_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev16q_s8, addr 0x68e8cd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev16q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev16q_u8, addr 0x68e8d18, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev16q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32_s16, addr 0x68e8c10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32_s8, addr 0x68e8ba0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32_u16, addr 0x68e8c90, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32_u8, addr 0x68e8c80, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev32_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32q_s16, addr 0x68e8c48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32q_s8, addr 0x68e8bd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32q_u16, addr 0x68e8c98, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev32q_u8, addr 0x68e8c88, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_f32, addr 0x68e8b90, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_s16, addr 0x68e8a80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_s16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_s32, addr 0x68e8af0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_s32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_s8, addr 0x68e8a10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_s8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_u16, addr 0x68e8b70, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_u16(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_u32, addr 0x68e8b80, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64_u8, addr 0x68e8b60, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrev64_u8(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_f32, addr 0x68e8b98, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_s16, addr 0x68e8ab8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_s32, addr 0x68e8b28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_s8, addr 0x68e8a48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_u16, addr 0x68e8b78, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u16(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_u32, addr 0x68e8b88, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrev64q_u8, addr 0x68e8b68, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u8(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_s16, addr 0x68ddb20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_s32, addr 0x68ddb90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_s8, addr 0x68ddab0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_u16, addr 0x68ddc70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_u32, addr 0x68ddce0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhadd_u8, addr 0x68ddc00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_s16, addr 0x68ddb58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_s32, addr 0x68ddbc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_s8, addr 0x68ddae8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_u16, addr 0x68ddca8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_u32, addr 0x68ddd18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrhaddq_u8, addr 0x68ddc38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrnd_f32, addr 0x68f0848, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnd_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrnd_f64, addr 0x68f08b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnd_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrnda_f32, addr 0x68f0c00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnda_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrnda_f64, addr 0x68f0c70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrnda_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndaq_f32, addr 0x68f0c38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndaq_f64, addr 0x68f0ca8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndi_f32, addr 0x68f0ce0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndi_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndi_f64, addr 0x68f0d50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndi_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndiq_f32, addr 0x68f0d18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndiq_f64, addr 0x68f0d88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndm_f32, addr 0x68f0a40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndm_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndm_f64, addr 0x68f0ab0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndm_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndmq_f32, addr 0x68f0a78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndmq_f64, addr 0x68f0ae8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndn_f32, addr 0x68f0928, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndn_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndn_f64, addr 0x68f0998, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndn_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndnq_f32, addr 0x68f0960, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndnq_f64, addr 0x68f09d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndns_f32, addr 0x68f0a08, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrndns_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndp_f32, addr 0x68f0b20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndp_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndp_f64, addr 0x68f0b90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndp_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndpq_f32, addr 0x68f0b58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndpq_f64, addr 0x68f0bc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndq_f32, addr 0x68f0880, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndq_f64, addr 0x68f08f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndx_f32, addr 0x68f0dc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndx_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndx_f64, addr 0x68f0e30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrndx_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndxq_f32, addr 0x68f0df8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrndxq_f64, addr 0x68f0e68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_s16, addr 0x68e2400, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_s32, addr 0x68e2470, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_s64, addr 0x68e24e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_s8, addr 0x68e2390, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_u16, addr 0x68e25c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_u32, addr 0x68e2630, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_u64, addr 0x68e26a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshl_u8, addr 0x68e2550, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshld_s64, addr 0x68ee2a8, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vrshld_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshld_u64, addr 0x68ee2e0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vrshld_u64(uint64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_s16, addr 0x68e2438, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_s32, addr 0x68e24a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_s64, addr 0x68e2518, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_s8, addr 0x68e23c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_u16, addr 0x68e25f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_u32, addr 0x68e2668, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_u64, addr 0x68e26d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshlq_u8, addr 0x68e2588, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_s16, addr 0x68e31a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_s32, addr 0x68e31b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_s64, addr 0x68e31c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_s8, addr 0x68e3190, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_u16, addr 0x68e31e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_u32, addr 0x68e31f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_u64, addr 0x68e3200, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshr_n_u8, addr 0x68e31d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrd_n_s64, addr 0x68ee4f8, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vrshrd_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrd_n_u64, addr 0x68ee530, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vrshrd_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_s16, addr 0x68eef20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_s32, addr 0x68eef58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_s64, addr 0x68eef90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_u16, addr 0x68eefc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_u32, addr 0x68ef000, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_high_n_u64, addr 0x68ef038, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_s16, addr 0x68e3c40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_s32, addr 0x68e3c78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_s64, addr 0x68e3cb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_u16, addr 0x68e3ce8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_u32, addr 0x68e3d20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrshrn_n_u64, addr 0x68e3d58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_s16, addr 0x68e31a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_s32, addr 0x68e31b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_s64, addr 0x68e31c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_s8, addr 0x68e3198, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_u16, addr 0x68e31e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_u32, addr 0x68e31f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_u64, addr 0x68e3208, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrshrq_n_u8, addr 0x68e31d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrte_f32, addr 0x68e7328, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrte_f64, addr 0x68f3994, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrte_u32, addr 0x68e72b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_u32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrted_f64, addr 0x68f3a3c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrsqrted_f64(double_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrteq_f32, addr 0x68e7360, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrteq_f64, addr 0x68f39cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrteq_u32, addr 0x68e72f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_u32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrtes_f32, addr 0x68f3a04, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrsqrtes_f32(float_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrts_f32, addr 0x68e7398, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrts_f64, addr 0x68f3a74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrtsd_f64, addr 0x68f3b1c, size 0x38, virtual false, abstract: false, final false
  static inline double_t vrsqrtsd_f64(double_t a0, double_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrtsq_f32, addr 0x68e73d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrtsq_f64, addr 0x68f3aac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsqrtss_f32, addr 0x68f3ae4, size 0x38, virtual false, abstract: false, final false
  static inline float_t vrsqrtss_f32(float_t a0, float_t a1);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_s16, addr 0x68e35a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_s32, addr 0x68e35b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_s64, addr 0x68e35c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_s8, addr 0x68e3590, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_u16, addr 0x68e35e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_u32, addr 0x68e35f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_u64, addr 0x68e3600, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsra_n_u8, addr 0x68e35d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsrad_n_s64, addr 0x68ee580, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vrsrad_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsrad_n_u64, addr 0x68ee5b8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vrsrad_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_s16, addr 0x68e35a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_s32, addr 0x68e35b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_s64, addr 0x68e35c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_s8, addr 0x68e3598, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_u16, addr 0x68e35e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_u32, addr 0x68e35f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_u64, addr 0x68e3608, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// [BurstTargetCpu((Unity.Burst.BurstTargetCpu)8)]
  /// @brief Method vrsraq_n_u8, addr 0x68e35d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_s16, addr 0x68eb9b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_s32, addr 0x68eb9f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_s64, addr 0x68eba28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_u16, addr 0x68eba60, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_u32, addr 0x68eba68, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_high_u64, addr 0x68eba70, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_s16, addr 0x68dfbf0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_s32, addr 0x68dfc28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_s64, addr 0x68dfc60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_u16, addr 0x68dfc98, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_u32, addr 0x68dfca0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vrsubhn_u64, addr 0x68dfca8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_f32, addr 0x68e9280, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_f64, addr 0x68f6fec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_s16, addr 0x68e920c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_s32, addr 0x68e9244, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_s64, addr 0x68e927c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s64(int64_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_s8, addr 0x68e91d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s8(int8_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_u16, addr 0x68e9160, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u16(uint16_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_u32, addr 0x68e9198, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u32(uint32_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_u64, addr 0x68e91d0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u64(uint64_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vset_lane_u8, addr 0x68e9128, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u8(uint8_t a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_f32, addr 0x68e9478, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f32(float_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_f64, addr 0x68f6ff4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f64(double_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_s16, addr 0x68e93d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s16(int16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_s32, addr 0x68e9408, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s32(int32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_s64, addr 0x68e9440, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s64(int64_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_s8, addr 0x68e9398, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s8(int8_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_u16, addr 0x68e92f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u16(uint16_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_u32, addr 0x68e9328, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u32(uint32_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_u64, addr 0x68e9360, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u64(uint64_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsetq_lane_u8, addr 0x68e92b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u8(uint8_t a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1cq_u32, addr 0x68f71f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1cq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1h_u32, addr 0x68f729c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vsha1h_u32(uint32_t a0);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1mq_u32, addr 0x68f7264, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1mq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1pq_u32, addr 0x68f722c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1pq_u32(::Unity::Burst::Intrinsics::v128 a0, uint32_t a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1su0q_u32, addr 0x68f72d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1su0q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha1su1q_u32, addr 0x68f730c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha1su1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsha256h2q_u32, addr 0x68f737c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256h2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha256hq_u32, addr 0x68f7344, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256hq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsha256su0q_u32, addr 0x68f73b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256su0q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsha256su1q_u32, addr 0x68f73ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsha256su1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_s16, addr 0x68e2e80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_s32, addr 0x68e2ef0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_s64, addr 0x68e2f60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_s8, addr 0x68e2e10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_u16, addr 0x68e3040, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_u32, addr 0x68e30b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_u64, addr 0x68e3120, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_n_u8, addr 0x68e2fd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_s16, addr 0x68e1d00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_s32, addr 0x68e1d70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_s64, addr 0x68e1de0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_s8, addr 0x68e1c90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_u16, addr 0x68e1ec0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_u32, addr 0x68e1f30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_u64, addr 0x68e1fa0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshl_u8, addr 0x68e1e50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshld_n_s64, addr 0x68ee4e8, size 0x8, virtual false, abstract: false, final false
  static inline int64_t vshld_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshld_n_u64, addr 0x68ee4f0, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t vshld_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshld_s64, addr 0x68ee078, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vshld_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshld_u64, addr 0x68ee0b0, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vshld_u64(uint64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_s16, addr 0x68ef348, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_s32, addr 0x68ef380, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_s8, addr 0x68ef310, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_u16, addr 0x68ef3f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_u32, addr 0x68ef428, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_high_n_u8, addr 0x68ef3b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_s16, addr 0x68e3f18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_s32, addr 0x68e3f50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_s8, addr 0x68e3ee0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_u16, addr 0x68e3fc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_u32, addr 0x68e3ff8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshll_n_u8, addr 0x68e3f88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_s16, addr 0x68e2eb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_s32, addr 0x68e2f28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_s64, addr 0x68e2f98, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_s8, addr 0x68e2e48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_u16, addr 0x68e3078, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_u32, addr 0x68e30e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_u64, addr 0x68e3158, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_n_u8, addr 0x68e3008, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_s16, addr 0x68e1d38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_s32, addr 0x68e1da8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_s64, addr 0x68e1e18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_s8, addr 0x68e1cc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_u16, addr 0x68e1ef8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_u32, addr 0x68e1f68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_u64, addr 0x68e1fd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshlq_u8, addr 0x68e1e88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshlq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_s16, addr 0x68e2b00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_s32, addr 0x68e2b70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_s64, addr 0x68e2be0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_s8, addr 0x68e2a90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_u16, addr 0x68e2cc0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u16(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_u32, addr 0x68e2d30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u32(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_u64, addr 0x68e2da0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u64(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshr_n_u8, addr 0x68e2c50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u8(::Unity::Burst::Intrinsics::v64 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrd_n_s64, addr 0x68ee4d8, size 0x8, virtual false, abstract: false, final false
  static inline int64_t vshrd_n_s64(int64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrd_n_u64, addr 0x68ee4e0, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t vshrd_n_u64(uint64_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_s16, addr 0x68ee890, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_s32, addr 0x68ee8c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_s64, addr 0x68ee900, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_u16, addr 0x68ee938, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_u32, addr 0x68ee970, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_high_n_u64, addr 0x68ee9a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_s16, addr 0x68e3850, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_s32, addr 0x68e3888, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_s64, addr 0x68e38c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_u16, addr 0x68e38f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_u32, addr 0x68e3930, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrn_n_u64, addr 0x68e3968, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_s16, addr 0x68e2b38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_s32, addr 0x68e2ba8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_s64, addr 0x68e2c18, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_s8, addr 0x68e2ac8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_u16, addr 0x68e2cf8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u16(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_u32, addr 0x68e2d68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u32(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_u64, addr 0x68e2dd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u64(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vshrq_n_u8, addr 0x68e2c88, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u8(::Unity::Burst::Intrinsics::v128 a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_s16, addr 0x68e4420, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_s32, addr 0x68e4490, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_s64, addr 0x68e4500, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_s8, addr 0x68e43b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_u16, addr 0x68e45e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_u32, addr 0x68e4650, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_u64, addr 0x68e46c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsli_n_u8, addr 0x68e4570, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vslid_n_s64, addr 0x68ef4d0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vslid_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vslid_n_u64, addr 0x68ef508, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vslid_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_s16, addr 0x68e4458, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_s32, addr 0x68e44c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_s64, addr 0x68e4538, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_s8, addr 0x68e43e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_u16, addr 0x68e4618, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_u32, addr 0x68e4688, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_u64, addr 0x68e46f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsliq_n_u8, addr 0x68e45a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsqadd_u16, addr 0x68e9d78, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqadd_u32, addr 0x68e9de8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqadd_u64, addr 0x68e9e58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqadd_u8, addr 0x68e9d08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddb_u8, addr 0x68e9ec8, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t vsqaddb_u8(uint8_t a0, int8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddd_u64, addr 0x68e9f70, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vsqaddd_u64(uint64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddh_u16, addr 0x68e9f00, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t vsqaddh_u16(uint16_t a0, int16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddq_u16, addr 0x68e9db0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddq_u32, addr 0x68e9e20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddq_u64, addr 0x68e9e90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqaddq_u8, addr 0x68e9d40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqadds_u32, addr 0x68e9f38, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t vsqadds_u32(uint32_t a0, int32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsqrt_f32, addr 0x68f38b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f32(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vsqrt_f64, addr 0x68f3924, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f64(::Unity::Burst::Intrinsics::v64 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vsqrtq_f32, addr 0x68f38ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f32(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vsqrtq_f64, addr 0x68f395c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f64(::Unity::Burst::Intrinsics::v128 a0);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_s16, addr 0x68e3280, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_s32, addr 0x68e32f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_s64, addr 0x68e3360, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_s8, addr 0x68e3210, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_u16, addr 0x68e3440, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_u32, addr 0x68e34b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_u64, addr 0x68e3520, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsra_n_u8, addr 0x68e33d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsrad_n_s64, addr 0x68ee568, size 0xc, virtual false, abstract: false, final false
  static inline int64_t vsrad_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsrad_n_u64, addr 0x68ee574, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t vsrad_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_s16, addr 0x68e32b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_s32, addr 0x68e3328, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_s64, addr 0x68e3398, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_s8, addr 0x68e3248, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_u16, addr 0x68e3478, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_u32, addr 0x68e34e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_u64, addr 0x68e3558, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsraq_n_u8, addr 0x68e3408, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_s16, addr 0x68e40a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_s32, addr 0x68e4110, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_s64, addr 0x68e4180, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_s8, addr 0x68e4030, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_u16, addr 0x68e4260, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_u32, addr 0x68e42d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_u64, addr 0x68e4340, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsri_n_u8, addr 0x68e41f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsrid_n_s64, addr 0x68ef460, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vsrid_n_s64(int64_t a0, int64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsrid_n_u64, addr 0x68ef498, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vsrid_n_u64(uint64_t a0, uint64_t a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_s16, addr 0x68e40d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_s32, addr 0x68e4148, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_s64, addr 0x68e41b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_s8, addr 0x68e4068, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_u16, addr 0x68e4298, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_u32, addr 0x68e4308, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_u64, addr 0x68e4378, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsriq_n_u8, addr 0x68e4228, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1, int32_t a2);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_f32, addr 0x68f851c, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_f32(float_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_f64, addr 0x68f852c, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_f64(double_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_s16, addr 0x68f84ac, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s16(int16_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_s32, addr 0x68f84bc, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s32(int32_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_s64, addr 0x68f84cc, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s64(int64_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_s8, addr 0x68f849c, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_s8(int8_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_u16, addr 0x68f84ec, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u16(uint16_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_u32, addr 0x68f84fc, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u32(uint32_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_u64, addr 0x68f850c, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u64(uint64_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1_u8, addr 0x68f84dc, size 0x8, virtual false, abstract: false, final false
  static inline void vst1_u8(uint8_t* a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_f32, addr 0x68f8524, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_f32(float_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_f64, addr 0x68f8534, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_f64(double_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_s16, addr 0x68f84b4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s16(int16_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_s32, addr 0x68f84c4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s32(int32_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_s64, addr 0x68f84d4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s64(int64_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_s8, addr 0x68f84a4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_s8(int8_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_u16, addr 0x68f84f4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u16(uint16_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_u32, addr 0x68f8504, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u32(uint32_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_u64, addr 0x68f8514, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u64(uint64_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vst1q_u8, addr 0x68f84e4, size 0x8, virtual false, abstract: false, final false
  static inline void vst1q_u8(uint8_t* a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_f32, addr 0x68df200, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_f64, addr 0x68eb3b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_f64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_s16, addr 0x68df070, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_s32, addr 0x68df0e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_s64, addr 0x68df150, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_s8, addr 0x68df000, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_u16, addr 0x68df1d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_u32, addr 0x68df1e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_u64, addr 0x68df1f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsub_u8, addr 0x68df1c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsub_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubd_s64, addr 0x68eb428, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vsubd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubd_u64, addr 0x68eb460, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vsubd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_s16, addr 0x68eb8f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_s32, addr 0x68eb930, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_s64, addr 0x68eb968, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_u16, addr 0x68eb9a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_u32, addr 0x68eb9a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_high_u64, addr 0x68eb9b0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v128 a1, ::Unity::Burst::Intrinsics::v128 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_s16, addr 0x68dfb30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_s32, addr 0x68dfb68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_s64, addr 0x68dfba0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_u16, addr 0x68dfbd8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_u32, addr 0x68dfbe0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubhn_u64, addr 0x68dfbe8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_s16, addr 0x68eb4d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_s32, addr 0x68eb508, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_s8, addr 0x68eb498, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_u16, addr 0x68eb578, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_u32, addr 0x68eb5b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_high_u8, addr 0x68eb540, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_s16, addr 0x68df2a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_s32, addr 0x68df2e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_s8, addr 0x68df270, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_u16, addr 0x68df350, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_u32, addr 0x68df388, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubl_u8, addr 0x68df318, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubl_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_f32, addr 0x68df238, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_f64, addr 0x68eb3f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_s16, addr 0x68df0a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_s32, addr 0x68df118, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_s64, addr 0x68df188, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_s8, addr 0x68df038, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_u16, addr 0x68df1d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_u32, addr 0x68df1e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_u64, addr 0x68df1f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubq_u8, addr 0x68df1c8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_s16, addr 0x68eb620, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_s32, addr 0x68eb658, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_s8, addr 0x68eb5e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_u16, addr 0x68eb6c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_u32, addr 0x68eb700, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_high_u8, addr 0x68eb690, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_s16, addr 0x68df3f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_s32, addr 0x68df430, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_s8, addr 0x68df3c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_u16, addr 0x68df4a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_u32, addr 0x68df4d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vsubw_u8, addr 0x68df468, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vsubw_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtbl1_s8, addr 0x68e8d20, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbl1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtbl1_u8, addr 0x68e8d58, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbl1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtbx1_s8, addr 0x68e8d60, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbx1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vtbx1_u8, addr 0x68e8d98, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtbx1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1, ::Unity::Burst::Intrinsics::v64 a2);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_f32, addr 0x68f6cbc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_s16, addr 0x68f6b6c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_s32, addr 0x68f6bdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_s8, addr 0x68f6afc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_u16, addr 0x68f6c94, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_u32, addr 0x68f6ca4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1_u8, addr 0x68f6c84, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_f32, addr 0x68f6cc4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_f64, addr 0x68f6ccc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_s16, addr 0x68f6ba4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_s32, addr 0x68f6c14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_s64, addr 0x68f6c4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_s8, addr 0x68f6b34, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_u16, addr 0x68f6c9c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_u32, addr 0x68f6cac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_u64, addr 0x68f6cb4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn1q_u8, addr 0x68f6c8c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_f32, addr 0x68f6e94, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_s16, addr 0x68f6d44, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_s32, addr 0x68f6db4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_s8, addr 0x68f6cd4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_u16, addr 0x68f6e6c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_u32, addr 0x68f6e7c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2_u8, addr 0x68f6e5c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_f32, addr 0x68f6e9c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_f64, addr 0x68f6ea4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_s16, addr 0x68f6d7c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_s32, addr 0x68f6dec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_s64, addr 0x68f6e24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_s8, addr 0x68f6d0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_u16, addr 0x68f6e74, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_u32, addr 0x68f6e84, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_u64, addr 0x68f6e8c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtrn2q_u8, addr 0x68f6e64, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_s16, addr 0x68e0d10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_s32, addr 0x68e0d80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_s64, addr 0x68ed968, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_s8, addr 0x68e0ca0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_u16, addr 0x68e0e00, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_u32, addr 0x68e0e10, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_u64, addr 0x68ed9d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtst_u8, addr 0x68e0df0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vtst_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstd_s64, addr 0x68ed9e8, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vtstd_s64(int64_t a0, int64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstd_u64, addr 0x68eda20, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t vtstd_u64(uint64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_s16, addr 0x68e0d48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_s32, addr 0x68e0db8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_s64, addr 0x68ed9a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_s8, addr 0x68e0cd8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_u16, addr 0x68e0e08, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_u32, addr 0x68e0e18, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_u64, addr 0x68ed9e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vtstq_u8, addr 0x68e0df8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vtstq_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqadd_s16, addr 0x68e9ad8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqadd_s32, addr 0x68e9b48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqadd_s64, addr 0x68e9bb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s64(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqadd_s8, addr 0x68e9a68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddb_s8, addr 0x68e9c28, size 0x38, virtual false, abstract: false, final false
  static inline int8_t vuqaddb_s8(int8_t a0, uint8_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddd_s64, addr 0x68e9cd0, size 0x38, virtual false, abstract: false, final false
  static inline int64_t vuqaddd_s64(int64_t a0, uint64_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddh_s16, addr 0x68e9c60, size 0x38, virtual false, abstract: false, final false
  static inline int16_t vuqaddh_s16(int16_t a0, uint16_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddq_s16, addr 0x68e9b10, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddq_s32, addr 0x68e9b80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddq_s64, addr 0x68e9bf0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqaddq_s8, addr 0x68e9aa0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuqadds_s32, addr 0x68e9c98, size 0x38, virtual false, abstract: false, final false
  static inline int32_t vuqadds_s32(int32_t a0, uint32_t a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_f32, addr 0x68f690c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_s16, addr 0x68f67bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_s32, addr 0x68f682c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_s8, addr 0x68f674c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_u16, addr 0x68f68e4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_u32, addr 0x68f68f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1_u8, addr 0x68f68d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_f32, addr 0x68f6914, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_f64, addr 0x68f691c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_s16, addr 0x68f67f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_s32, addr 0x68f6864, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_s64, addr 0x68f689c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_s8, addr 0x68f6784, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_u16, addr 0x68f68ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_u32, addr 0x68f68fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_u64, addr 0x68f6904, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp1q_u8, addr 0x68f68dc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_f32, addr 0x68f6ae4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_s16, addr 0x68f6994, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_s32, addr 0x68f6a04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_s8, addr 0x68f6924, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_u16, addr 0x68f6abc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_u32, addr 0x68f6acc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2_u8, addr 0x68f6aac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_f32, addr 0x68f6aec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_f64, addr 0x68f6af4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_s16, addr 0x68f69cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_s32, addr 0x68f6a3c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_s64, addr 0x68f6a74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_s8, addr 0x68f695c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_u16, addr 0x68f6ac4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_u32, addr 0x68f6ad4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_u64, addr 0x68f6adc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vuzp2q_u8, addr 0x68f6ab4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_f32, addr 0x68f655c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_s16, addr 0x68f640c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_s32, addr 0x68f647c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_s8, addr 0x68f639c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_u16, addr 0x68f6534, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_u32, addr 0x68f6544, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1_u8, addr 0x68f6524, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip1_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_f32, addr 0x68f6564, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_f64, addr 0x68f656c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_s16, addr 0x68f6444, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_s32, addr 0x68f64b4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_s64, addr 0x68f64ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_s8, addr 0x68f63d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_u16, addr 0x68f653c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_u32, addr 0x68f654c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_u64, addr 0x68f6554, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip1q_u8, addr 0x68f652c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_f32, addr 0x68f6734, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_f32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_s16, addr 0x68f65e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_s16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_s32, addr 0x68f6654, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_s32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_s8, addr 0x68f6574, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_s8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_u16, addr 0x68f670c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_u16(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_u32, addr 0x68f671c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_u32(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2_u8, addr 0x68f66fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v64 vzip2_u8(::Unity::Burst::Intrinsics::v64 a0, ::Unity::Burst::Intrinsics::v64 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_f32, addr 0x68f673c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_f64, addr 0x68f6744, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_s16, addr 0x68f661c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_s32, addr 0x68f668c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_s64, addr 0x68f66c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_s8, addr 0x68f65ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s8(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_u16, addr 0x68f6714, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u16(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_u32, addr 0x68f6724, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u32(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_u64, addr 0x68f672c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u64(::Unity::Burst::Intrinsics::v128 a0, ::Unity::Burst::Intrinsics::v128 a1);

  /// [DebuggerStepThrough]
  /// @brief Method vzip2q_u8, addr 0x68f6704, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17754 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17755 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::Arm) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
