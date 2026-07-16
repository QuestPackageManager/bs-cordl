#pragma once
// IWYU pragma private; include "UnityEngine/FixedJoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Joint_def.hpp"
CORDL_MODULE_EXPORT(FixedJoint)
// Forward declare root types
namespace UnityEngine {
class FixedJoint;
}
// Write type traits
MARK_REF_T(::UnityEngine::FixedJoint*);
DEFINE_IL2CPP_CLASS(::UnityEngine::FixedJoint*, "UnityEngine", "FixedJoint");
// Dependencies UnityEngine.Joint
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.FixedJoint
class CORDL_TYPE FixedJoint : public ::UnityEngine::Joint {
public:
  // Declarations
  static inline ::UnityEngine::FixedJoint* New_ctor();

  /// @brief Method .ctor, addr 0x6b8cc98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedJoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedJoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedJoint(FixedJoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedJoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedJoint(FixedJoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18619 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::FixedJoint) == 0x18, "Size mismatch!");

} // namespace UnityEngine
