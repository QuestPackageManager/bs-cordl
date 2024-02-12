#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SharedBetweenAnimatorsAttribute)
// Forward declare root types
namespace UnityEngine {
class SharedBetweenAnimatorsAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SharedBetweenAnimatorsAttribute);
// Type: UnityEngine::SharedBetweenAnimatorsAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2547))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14759))
// CS Name: ::UnityEngine::SharedBetweenAnimatorsAttribute*
class CORDL_TYPE SharedBetweenAnimatorsAttribute : public ::System::Attribute {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "SharedBetweenAnimatorsAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedBetweenAnimatorsAttribute(SharedBetweenAnimatorsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedBetweenAnimatorsAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedBetweenAnimatorsAttribute(SharedBetweenAnimatorsAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedBetweenAnimatorsAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SharedBetweenAnimatorsAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SharedBetweenAnimatorsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SharedBetweenAnimatorsAttribute*, "UnityEngine", "SharedBetweenAnimatorsAttribute");
