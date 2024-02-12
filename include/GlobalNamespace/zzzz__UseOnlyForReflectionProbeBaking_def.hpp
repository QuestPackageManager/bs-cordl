#pragma once
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
// Type: ::UseOnlyForReflectionProbeBaking
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5158))
// CS Name: ::UseOnlyForReflectionProbeBaking*
class CORDL_TYPE UseOnlyForReflectionProbeBaking : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Awake, addr 0x2324e10, size 0x24, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::UseOnlyForReflectionProbeBaking* New_ctor();

  /// @brief Method .ctor, addr 0x2324e34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UseOnlyForReflectionProbeBaking", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UseOnlyForReflectionProbeBaking(UseOnlyForReflectionProbeBaking&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UseOnlyForReflectionProbeBaking", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UseOnlyForReflectionProbeBaking(UseOnlyForReflectionProbeBaking const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UseOnlyForReflectionProbeBaking();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UseOnlyForReflectionProbeBaking, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UseOnlyForReflectionProbeBaking);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UseOnlyForReflectionProbeBaking*, "", "UseOnlyForReflectionProbeBaking");
