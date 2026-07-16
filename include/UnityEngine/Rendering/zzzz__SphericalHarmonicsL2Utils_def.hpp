#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SphericalHarmonicsL2Utils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SphericalHarmonicsL2Utils)
namespace UnityEngine::Rendering {
struct SphericalHarmonicsL2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class SphericalHarmonicsL2Utils;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::SphericalHarmonicsL2Utils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::SphericalHarmonicsL2Utils*, "UnityEngine.Rendering", "SphericalHarmonicsL2Utils");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SphericalHarmonicsL2Utils
class CORDL_TYPE SphericalHarmonicsL2Utils : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCoefficient, addr 0x67941e0, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetCoefficient(::UnityEngine::Rendering::SphericalHarmonicsL2 sh, int32_t index);

  /// @brief Method GetL1, addr 0x6794084, size 0x34, virtual false, abstract: false, final false
  static inline void GetL1(::UnityEngine::Rendering::SphericalHarmonicsL2 sh, ::by_ref<::UnityEngine::Vector3> L1_R, ::by_ref<::UnityEngine::Vector3> L1_G, ::by_ref<::UnityEngine::Vector3> L1_B);

  /// @brief Method GetL2, addr 0x67940b8, size 0x68, virtual false, abstract: false, final false
  static inline void GetL2(::UnityEngine::Rendering::SphericalHarmonicsL2 sh, ::by_ref<::UnityEngine::Vector3> L2_0, ::by_ref<::UnityEngine::Vector3> L2_1, ::by_ref<::UnityEngine::Vector3> L2_2,
                           ::by_ref<::UnityEngine::Vector3> L2_3, ::by_ref<::UnityEngine::Vector3> L2_4);

  static inline ::UnityEngine::Rendering::SphericalHarmonicsL2Utils* New_ctor();

  /// @brief Method SetCoefficient, addr 0x6794178, size 0x68, virtual false, abstract: false, final false
  static inline void SetCoefficient(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, int32_t index, ::UnityEngine::Vector3 coefficient);

  /// @brief Method SetL0, addr 0x6794120, size 0x10, virtual false, abstract: false, final false
  static inline void SetL0(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, ::UnityEngine::Vector3 L0);

  /// @brief Method SetL1, addr 0x6794154, size 0x24, virtual false, abstract: false, final false
  static inline void SetL1(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, ::UnityEngine::Vector3 L1_R, ::UnityEngine::Vector3 L1_G, ::UnityEngine::Vector3 L1_B);

  /// @brief Method SetL1B, addr 0x6794148, size 0xc, virtual false, abstract: false, final false
  static inline void SetL1B(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, ::UnityEngine::Vector3 L1_B);

  /// @brief Method SetL1G, addr 0x679413c, size 0xc, virtual false, abstract: false, final false
  static inline void SetL1G(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, ::UnityEngine::Vector3 L1_G);

  /// @brief Method SetL1R, addr 0x6794130, size 0xc, virtual false, abstract: false, final false
  static inline void SetL1R(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, ::UnityEngine::Vector3 L1_R);

  /// @brief Method .ctor, addr 0x6794250, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SphericalHarmonicsL2Utils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SphericalHarmonicsL2Utils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SphericalHarmonicsL2Utils(SphericalHarmonicsL2Utils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SphericalHarmonicsL2Utils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SphericalHarmonicsL2Utils(SphericalHarmonicsL2Utils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12135 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::SphericalHarmonicsL2Utils) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
