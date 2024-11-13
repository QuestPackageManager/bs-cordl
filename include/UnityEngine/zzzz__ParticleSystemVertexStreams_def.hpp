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
// Type: UnityEngine::ParticleSystemVertexStreams
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ParticleSystemVertexStreams
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x7fffffff)
  static ::UnityEngine::ParticleSystemVertexStreams const All;

  /// @brief Field CenterAndVertexID value: static_cast<int32_t>(0x40)
  static ::UnityEngine::ParticleSystemVertexStreams const CenterAndVertexID;

  /// @brief Field Color value: static_cast<int32_t>(0x8)
  static ::UnityEngine::ParticleSystemVertexStreams const Color;

  /// @brief Field Custom1 value: static_cast<int32_t>(0x800)
  static ::UnityEngine::ParticleSystemVertexStreams const Custom1;

  /// @brief Field Custom2 value: static_cast<int32_t>(0x1000)
  static ::UnityEngine::ParticleSystemVertexStreams const Custom2;

  /// @brief Field Lifetime value: static_cast<int32_t>(0x400)
  static ::UnityEngine::ParticleSystemVertexStreams const Lifetime;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ParticleSystemVertexStreams const None;

  /// @brief Field Normal value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ParticleSystemVertexStreams const Normal;

  /// @brief Field Position value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ParticleSystemVertexStreams const Position;

  /// @brief Field Random value: static_cast<int32_t>(0x2000)
  static ::UnityEngine::ParticleSystemVertexStreams const Random;

  /// @brief Field Rotation value: static_cast<int32_t>(0x100)
  static ::UnityEngine::ParticleSystemVertexStreams const Rotation;

  /// @brief Field Size value: static_cast<int32_t>(0x80)
  static ::UnityEngine::ParticleSystemVertexStreams const Size;

  /// @brief Field Tangent value: static_cast<int32_t>(0x4)
  static ::UnityEngine::ParticleSystemVertexStreams const Tangent;

  /// @brief Field UV value: static_cast<int32_t>(0x10)
  static ::UnityEngine::ParticleSystemVertexStreams const UV;

  /// @brief Field UV2BlendAndFrame value: static_cast<int32_t>(0x20)
  static ::UnityEngine::ParticleSystemVertexStreams const UV2BlendAndFrame;

  /// @brief Field Velocity value: static_cast<int32_t>(0x200)
  static ::UnityEngine::ParticleSystemVertexStreams const Velocity;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17158 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemVertexStreams, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemVertexStreams, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemVertexStreams, "UnityEngine", "ParticleSystemVertexStreams");
