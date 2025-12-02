#pragma once
// IWYU pragma private; include "GlobalNamespace/UseOnlyForReflectionProbeBaking.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(UseOnlyForReflectionProbeBaking)
// Forward declare root types
namespace GlobalNamespace {
class UseOnlyForReflectionProbeBaking;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UseOnlyForReflectionProbeBaking);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: UseOnlyForReflectionProbeBaking
class CORDL_TYPE UseOnlyForReflectionProbeBaking : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Awake, addr 0x56f55d8, size 0x24, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::UseOnlyForReflectionProbeBaking* New_ctor();

  /// @brief Method .ctor, addr 0x56f55fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UseOnlyForReflectionProbeBaking();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UseOnlyForReflectionProbeBaking", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UseOnlyForReflectionProbeBaking(UseOnlyForReflectionProbeBaking&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UseOnlyForReflectionProbeBaking", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UseOnlyForReflectionProbeBaking(UseOnlyForReflectionProbeBaking const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6633 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UseOnlyForReflectionProbeBaking, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UseOnlyForReflectionProbeBaking);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UseOnlyForReflectionProbeBaking*, "", "UseOnlyForReflectionProbeBaking");
