#pragma once
// IWYU pragma private; include "GlobalNamespace\GroundShadow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GroundShadow)
// Forward declare root types
namespace GlobalNamespace {
class GroundShadow;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GroundShadow*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GroundShadow*, "", "GroundShadow");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GroundShadow
class CORDL_TYPE GroundShadow : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::GroundShadow* New_ctor();

  /// @brief Method OnEnable, addr 0x58735dc, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x5873674, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method Setup, addr 0x58735e0, size 0x94, virtual false, abstract: false, final false
  inline void Setup();

  /// @brief Method .ctor, addr 0x5873678, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GroundShadow();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GroundShadow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GroundShadow(GroundShadow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GroundShadow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GroundShadow(GroundShadow const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19005 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GroundShadow) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
