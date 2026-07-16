#pragma once
// IWYU pragma private; include "GlobalNamespace/AOTEnforcer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AOTEnforcer)
// Forward declare root types
namespace GlobalNamespace {
class AOTEnforcer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AOTEnforcer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AOTEnforcer*, "", "AOTEnforcer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AOTEnforcer
class CORDL_TYPE AOTEnforcer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Awake, addr 0x5854564, size 0x6c, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::AOTEnforcer* New_ctor();

  /// @brief Method .ctor, addr 0x58545d0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AOTEnforcer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AOTEnforcer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AOTEnforcer(AOTEnforcer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AOTEnforcer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AOTEnforcer(AOTEnforcer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22703 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AOTEnforcer) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
