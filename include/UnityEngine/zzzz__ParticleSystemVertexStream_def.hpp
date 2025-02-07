#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemVertexStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemVertexStream)
// Forward declare root types
namespace UnityEngine {
struct ParticleSystemVertexStream;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleSystemVertexStream);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemVertexStream
struct CORDL_TYPE ParticleSystemVertexStream {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ParticleSystemVertexStream_Unwrapped
  enum struct __ParticleSystemVertexStream_Unwrapped : int32_t {
    __E_Position = static_cast<int32_t>(0x0),
    __E_Normal = static_cast<int32_t>(0x1),
    __E_Tangent = static_cast<int32_t>(0x2),
    __E_Color = static_cast<int32_t>(0x3),
    __E_UV = static_cast<int32_t>(0x4),
    __E_UV2 = static_cast<int32_t>(0x5),
    __E_UV3 = static_cast<int32_t>(0x6),
    __E_UV4 = static_cast<int32_t>(0x7),
    __E_AnimBlend = static_cast<int32_t>(0x8),
    __E_AnimFrame = static_cast<int32_t>(0x9),
    __E_Center = static_cast<int32_t>(0xa),
    __E_VertexID = static_cast<int32_t>(0xb),
    __E_SizeX = static_cast<int32_t>(0xc),
    __E_SizeXY = static_cast<int32_t>(0xd),
    __E_SizeXYZ = static_cast<int32_t>(0xe),
    __E_Rotation = static_cast<int32_t>(0xf),
    __E_Rotation3D = static_cast<int32_t>(0x10),
    __E_RotationSpeed = static_cast<int32_t>(0x11),
    __E_RotationSpeed3D = static_cast<int32_t>(0x12),
    __E_Velocity = static_cast<int32_t>(0x13),
    __E_Speed = static_cast<int32_t>(0x14),
    __E_AgePercent = static_cast<int32_t>(0x15),
    __E_InvStartLifetime = static_cast<int32_t>(0x16),
    __E_StableRandomX = static_cast<int32_t>(0x17),
    __E_StableRandomXY = static_cast<int32_t>(0x18),
    __E_StableRandomXYZ = static_cast<int32_t>(0x19),
    __E_StableRandomXYZW = static_cast<int32_t>(0x1a),
    __E_VaryingRandomX = static_cast<int32_t>(0x1b),
    __E_VaryingRandomXY = static_cast<int32_t>(0x1c),
    __E_VaryingRandomXYZ = static_cast<int32_t>(0x1d),
    __E_VaryingRandomXYZW = static_cast<int32_t>(0x1e),
    __E_Custom1X = static_cast<int32_t>(0x1f),
    __E_Custom1XY = static_cast<int32_t>(0x20),
    __E_Custom1XYZ = static_cast<int32_t>(0x21),
    __E_Custom1XYZW = static_cast<int32_t>(0x22),
    __E_Custom2X = static_cast<int32_t>(0x23),
    __E_Custom2XY = static_cast<int32_t>(0x24),
    __E_Custom2XYZ = static_cast<int32_t>(0x25),
    __E_Custom2XYZW = static_cast<int32_t>(0x26),
    __E_NoiseSumX = static_cast<int32_t>(0x27),
    __E_NoiseSumXY = static_cast<int32_t>(0x28),
    __E_NoiseSumXYZ = static_cast<int32_t>(0x29),
    __E_NoiseImpulseX = static_cast<int32_t>(0x2a),
    __E_NoiseImpulseXY = static_cast<int32_t>(0x2b),
    __E_NoiseImpulseXYZ = static_cast<int32_t>(0x2c),
    __E_MeshIndex = static_cast<int32_t>(0x2d),
    __E_ParticleIndex = static_cast<int32_t>(0x2e),
    __E_ColorPackedAsTwoFloats = static_cast<int32_t>(0x2f),
    __E_MeshAxisOfRotation = static_cast<int32_t>(0x30),
    __E_NextTrailCenter = static_cast<int32_t>(0x31),
    __E_PreviousTrailCenter = static_cast<int32_t>(0x32),
    __E_PercentageAlongTrail = static_cast<int32_t>(0x33),
    __E_TrailWidth = static_cast<int32_t>(0x34),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ParticleSystemVertexStream_Unwrapped() const noexcept {
    return static_cast<__ParticleSystemVertexStream_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemVertexStream();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParticleSystemVertexStream(int32_t value__) noexcept;

  /// @brief Field AgePercent value: I32(21)
  static ::UnityEngine::ParticleSystemVertexStream const AgePercent;

  /// @brief Field AnimBlend value: I32(8)
  static ::UnityEngine::ParticleSystemVertexStream const AnimBlend;

  /// @brief Field AnimFrame value: I32(9)
  static ::UnityEngine::ParticleSystemVertexStream const AnimFrame;

  /// @brief Field Center value: I32(10)
  static ::UnityEngine::ParticleSystemVertexStream const Center;

  /// @brief Field Color value: I32(3)
  static ::UnityEngine::ParticleSystemVertexStream const Color;

  /// @brief Field ColorPackedAsTwoFloats value: I32(47)
  static ::UnityEngine::ParticleSystemVertexStream const ColorPackedAsTwoFloats;

  /// @brief Field Custom1X value: I32(31)
  static ::UnityEngine::ParticleSystemVertexStream const Custom1X;

  /// @brief Field Custom1XY value: I32(32)
  static ::UnityEngine::ParticleSystemVertexStream const Custom1XY;

  /// @brief Field Custom1XYZ value: I32(33)
  static ::UnityEngine::ParticleSystemVertexStream const Custom1XYZ;

  /// @brief Field Custom1XYZW value: I32(34)
  static ::UnityEngine::ParticleSystemVertexStream const Custom1XYZW;

  /// @brief Field Custom2X value: I32(35)
  static ::UnityEngine::ParticleSystemVertexStream const Custom2X;

  /// @brief Field Custom2XY value: I32(36)
  static ::UnityEngine::ParticleSystemVertexStream const Custom2XY;

  /// @brief Field Custom2XYZ value: I32(37)
  static ::UnityEngine::ParticleSystemVertexStream const Custom2XYZ;

  /// @brief Field Custom2XYZW value: I32(38)
  static ::UnityEngine::ParticleSystemVertexStream const Custom2XYZW;

  /// @brief Field InvStartLifetime value: I32(22)
  static ::UnityEngine::ParticleSystemVertexStream const InvStartLifetime;

  /// @brief Field MeshAxisOfRotation value: I32(48)
  static ::UnityEngine::ParticleSystemVertexStream const MeshAxisOfRotation;

  /// @brief Field MeshIndex value: I32(45)
  static ::UnityEngine::ParticleSystemVertexStream const MeshIndex;

  /// @brief Field NextTrailCenter value: I32(49)
  static ::UnityEngine::ParticleSystemVertexStream const NextTrailCenter;

  /// @brief Field NoiseImpulseX value: I32(42)
  static ::UnityEngine::ParticleSystemVertexStream const NoiseImpulseX;

  /// @brief Field NoiseImpulseXY value: I32(43)
  static ::UnityEngine::ParticleSystemVertexStream const NoiseImpulseXY;

  /// @brief Field NoiseImpulseXYZ value: I32(44)
  static ::UnityEngine::ParticleSystemVertexStream const NoiseImpulseXYZ;

  /// @brief Field NoiseSumX value: I32(39)
  static ::UnityEngine::ParticleSystemVertexStream const NoiseSumX;

  /// @brief Field NoiseSumXY value: I32(40)
  static ::UnityEngine::ParticleSystemVertexStream const NoiseSumXY;

  /// @brief Field NoiseSumXYZ value: I32(41)
  static ::UnityEngine::ParticleSystemVertexStream const NoiseSumXYZ;

  /// @brief Field Normal value: I32(1)
  static ::UnityEngine::ParticleSystemVertexStream const Normal;

  /// @brief Field ParticleIndex value: I32(46)
  static ::UnityEngine::ParticleSystemVertexStream const ParticleIndex;

  /// @brief Field PercentageAlongTrail value: I32(51)
  static ::UnityEngine::ParticleSystemVertexStream const PercentageAlongTrail;

  /// @brief Field Position value: I32(0)
  static ::UnityEngine::ParticleSystemVertexStream const Position;

  /// @brief Field PreviousTrailCenter value: I32(50)
  static ::UnityEngine::ParticleSystemVertexStream const PreviousTrailCenter;

  /// @brief Field Rotation value: I32(15)
  static ::UnityEngine::ParticleSystemVertexStream const Rotation;

  /// @brief Field Rotation3D value: I32(16)
  static ::UnityEngine::ParticleSystemVertexStream const Rotation3D;

  /// @brief Field RotationSpeed value: I32(17)
  static ::UnityEngine::ParticleSystemVertexStream const RotationSpeed;

  /// @brief Field RotationSpeed3D value: I32(18)
  static ::UnityEngine::ParticleSystemVertexStream const RotationSpeed3D;

  /// @brief Field SizeX value: I32(12)
  static ::UnityEngine::ParticleSystemVertexStream const SizeX;

  /// @brief Field SizeXY value: I32(13)
  static ::UnityEngine::ParticleSystemVertexStream const SizeXY;

  /// @brief Field SizeXYZ value: I32(14)
  static ::UnityEngine::ParticleSystemVertexStream const SizeXYZ;

  /// @brief Field Speed value: I32(20)
  static ::UnityEngine::ParticleSystemVertexStream const Speed;

  /// @brief Field StableRandomX value: I32(23)
  static ::UnityEngine::ParticleSystemVertexStream const StableRandomX;

  /// @brief Field StableRandomXY value: I32(24)
  static ::UnityEngine::ParticleSystemVertexStream const StableRandomXY;

  /// @brief Field StableRandomXYZ value: I32(25)
  static ::UnityEngine::ParticleSystemVertexStream const StableRandomXYZ;

  /// @brief Field StableRandomXYZW value: I32(26)
  static ::UnityEngine::ParticleSystemVertexStream const StableRandomXYZW;

  /// @brief Field Tangent value: I32(2)
  static ::UnityEngine::ParticleSystemVertexStream const Tangent;

  /// @brief Field TrailWidth value: I32(52)
  static ::UnityEngine::ParticleSystemVertexStream const TrailWidth;

  /// @brief Field UV value: I32(4)
  static ::UnityEngine::ParticleSystemVertexStream const UV;

  /// @brief Field UV2 value: I32(5)
  static ::UnityEngine::ParticleSystemVertexStream const UV2;

  /// @brief Field UV3 value: I32(6)
  static ::UnityEngine::ParticleSystemVertexStream const UV3;

  /// @brief Field UV4 value: I32(7)
  static ::UnityEngine::ParticleSystemVertexStream const UV4;

  /// @brief Field VaryingRandomX value: I32(27)
  static ::UnityEngine::ParticleSystemVertexStream const VaryingRandomX;

  /// @brief Field VaryingRandomXY value: I32(28)
  static ::UnityEngine::ParticleSystemVertexStream const VaryingRandomXY;

  /// @brief Field VaryingRandomXYZ value: I32(29)
  static ::UnityEngine::ParticleSystemVertexStream const VaryingRandomXYZ;

  /// @brief Field VaryingRandomXYZW value: I32(30)
  static ::UnityEngine::ParticleSystemVertexStream const VaryingRandomXYZW;

  /// @brief Field Velocity value: I32(19)
  static ::UnityEngine::ParticleSystemVertexStream const Velocity;

  /// @brief Field VertexID value: I32(11)
  static ::UnityEngine::ParticleSystemVertexStream const VertexID;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17292 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemVertexStream, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemVertexStream, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemVertexStream, "UnityEngine", "ParticleSystemVertexStream");
