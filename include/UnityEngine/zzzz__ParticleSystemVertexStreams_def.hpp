#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemVertexStreams.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemVertexStreams)
// Forward declare root types
namespace UnityEngine {
struct ParticleSystemVertexStreams;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleSystemVertexStreams);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemVertexStreams
struct CORDL_TYPE ParticleSystemVertexStreams {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ParticleSystemVertexStreams_Unwrapped
  enum struct __ParticleSystemVertexStreams_Unwrapped : int32_t {
    __E_Position = static_cast<int32_t>(0x1),
    __E_Normal = static_cast<int32_t>(0x2),
    __E_Tangent = static_cast<int32_t>(0x4),
    __E_Color = static_cast<int32_t>(0x8),
    __E_UV = static_cast<int32_t>(0x10),
    __E_UV2BlendAndFrame = static_cast<int32_t>(0x20),
    __E_CenterAndVertexID = static_cast<int32_t>(0x40),
    __E_Size = static_cast<int32_t>(0x80),
    __E_Rotation = static_cast<int32_t>(0x100),
    __E_Velocity = static_cast<int32_t>(0x200),
    __E_Lifetime = static_cast<int32_t>(0x400),
    __E_Custom1 = static_cast<int32_t>(0x800),
    __E_Custom2 = static_cast<int32_t>(0x1000),
    __E_Random = static_cast<int32_t>(0x2000),
    __E_None = static_cast<int32_t>(0x0),
    __E_All = static_cast<int32_t>(0x7fffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ParticleSystemVertexStreams_Unwrapped() const noexcept {
    return static_cast<__ParticleSystemVertexStreams_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemVertexStreams();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParticleSystemVertexStreams(int32_t value__) noexcept;

  /// @brief Field All value: I32(2147483647)
  static ::UnityEngine::ParticleSystemVertexStreams const All;

  /// @brief Field CenterAndVertexID value: I32(64)
  static ::UnityEngine::ParticleSystemVertexStreams const CenterAndVertexID;

  /// @brief Field Color value: I32(8)
  static ::UnityEngine::ParticleSystemVertexStreams const Color;

  /// @brief Field Custom1 value: I32(2048)
  static ::UnityEngine::ParticleSystemVertexStreams const Custom1;

  /// @brief Field Custom2 value: I32(4096)
  static ::UnityEngine::ParticleSystemVertexStreams const Custom2;

  /// @brief Field Lifetime value: I32(1024)
  static ::UnityEngine::ParticleSystemVertexStreams const Lifetime;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::ParticleSystemVertexStreams const None;

  /// @brief Field Normal value: I32(2)
  static ::UnityEngine::ParticleSystemVertexStreams const Normal;

  /// @brief Field Position value: I32(1)
  static ::UnityEngine::ParticleSystemVertexStreams const Position;

  /// @brief Field Random value: I32(8192)
  static ::UnityEngine::ParticleSystemVertexStreams const Random;

  /// @brief Field Rotation value: I32(256)
  static ::UnityEngine::ParticleSystemVertexStreams const Rotation;

  /// @brief Field Size value: I32(128)
  static ::UnityEngine::ParticleSystemVertexStreams const Size;

  /// @brief Field Tangent value: I32(4)
  static ::UnityEngine::ParticleSystemVertexStreams const Tangent;

  /// @brief Field UV value: I32(16)
  static ::UnityEngine::ParticleSystemVertexStreams const UV;

  /// @brief Field UV2BlendAndFrame value: I32(32)
  static ::UnityEngine::ParticleSystemVertexStreams const UV2BlendAndFrame;

  /// @brief Field Velocity value: I32(512)
  static ::UnityEngine::ParticleSystemVertexStreams const Velocity;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20658 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemVertexStreams, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemVertexStreams, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemVertexStreams, "UnityEngine", "ParticleSystemVertexStreams");
