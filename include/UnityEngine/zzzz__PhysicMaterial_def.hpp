#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PhysicMaterial)
// Forward declare root types
namespace UnityEngine {
class PhysicMaterial;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PhysicMaterial);
// Type: UnityEngine::PhysicMaterial
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10128))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15470))
// CS Name: ::UnityEngine::PhysicMaterial*
class CORDL_TYPE PhysicMaterial : public ::UnityEngine::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "PhysicMaterial", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicMaterial(PhysicMaterial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicMaterial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicMaterial(PhysicMaterial const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicMaterial();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PhysicMaterial, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::PhysicMaterial);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PhysicMaterial*, "UnityEngine", "PhysicMaterial");
