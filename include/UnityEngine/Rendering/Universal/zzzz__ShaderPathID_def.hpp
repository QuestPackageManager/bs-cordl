#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShaderPathID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderPathID)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct ShaderPathID;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::ShaderPathID);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ShaderPathID
struct CORDL_TYPE ShaderPathID {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ShaderPathID_Unwrapped
  enum struct __ShaderPathID_Unwrapped : int32_t {
    __E_Lit = static_cast<int32_t>(0x0),
    __E_SimpleLit = static_cast<int32_t>(0x1),
    __E_Unlit = static_cast<int32_t>(0x2),
    __E_TerrainLit = static_cast<int32_t>(0x3),
    __E_ParticlesLit = static_cast<int32_t>(0x4),
    __E_ParticlesSimpleLit = static_cast<int32_t>(0x5),
    __E_ParticlesUnlit = static_cast<int32_t>(0x6),
    __E_BakedLit = static_cast<int32_t>(0x7),
    __E_SpeedTree7 = static_cast<int32_t>(0x8),
    __E_SpeedTree7Billboard = static_cast<int32_t>(0x9),
    __E_SpeedTree8 = static_cast<int32_t>(0xa),
    __E_SpeedTree9 = static_cast<int32_t>(0xb),
    __E_ComplexLit = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ShaderPathID_Unwrapped() const noexcept {
    return static_cast<__ShaderPathID_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderPathID();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ShaderPathID(int32_t value__) noexcept;

  /// @brief Field BakedLit value: I32(7)
  static ::UnityEngine::Rendering::Universal::ShaderPathID const BakedLit;

  /// @brief Field ComplexLit value: I32(12)
  static ::UnityEngine::Rendering::Universal::ShaderPathID const ComplexLit;

  /// @brief Field Lit value: I32(0)
  static ::UnityEngine::Rendering::Universal::ShaderPathID const Lit;

  /// @brief Field ParticlesLit value: I32(4)
  static ::UnityEngine::Rendering::Universal::ShaderPathID const ParticlesLit;

  /// @brief Field ParticlesSimpleLit value: I32(5)
  static ::UnityEngine::Rendering::Universal::ShaderPathID const ParticlesSimpleLit;

  /// @brief Field ParticlesUnlit value: I32(6)
  static ::UnityEngine::Rendering::Universal::ShaderPathID const ParticlesUnlit;

  /// @brief Field SimpleLit value: I32(1)
  static ::UnityEngine::Rendering::Universal::ShaderPathID const SimpleLit;

  /// @brief Field SpeedTree7 value: I32(8)
  static ::UnityEngine::Rendering::Universal::ShaderPathID const SpeedTree7;

  /// @brief Field SpeedTree7Billboard value: I32(9)
  static ::UnityEngine::Rendering::Universal::ShaderPathID const SpeedTree7Billboard;

  /// @brief Field SpeedTree8 value: I32(10)
  static ::UnityEngine::Rendering::Universal::ShaderPathID const SpeedTree8;

  /// @brief Field SpeedTree9 value: I32(11)
  static ::UnityEngine::Rendering::Universal::ShaderPathID const SpeedTree9;

  /// @brief Field TerrainLit value: I32(3)
  static ::UnityEngine::Rendering::Universal::ShaderPathID const TerrainLit;

  /// @brief Field Unlit value: I32(2)
  static ::UnityEngine::Rendering::Universal::ShaderPathID const Unlit;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12926 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderPathID, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShaderPathID, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShaderPathID, "UnityEngine.Rendering.Universal", "ShaderPathID");
