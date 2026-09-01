#pragma once
// IWYU pragma private; include "UnityEngine\SharedBetweenAnimatorsAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SharedBetweenAnimatorsAttribute)
// Forward declare root types
namespace UnityEngine {
class SharedBetweenAnimatorsAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::SharedBetweenAnimatorsAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SharedBetweenAnimatorsAttribute*, "UnityEngine", "SharedBetweenAnimatorsAttribute");
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SharedBetweenAnimatorsAttribute
class CORDL_TYPE SharedBetweenAnimatorsAttribute : public ::System::Attribute {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedBetweenAnimatorsAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedBetweenAnimatorsAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedBetweenAnimatorsAttribute(SharedBetweenAnimatorsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedBetweenAnimatorsAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedBetweenAnimatorsAttribute(SharedBetweenAnimatorsAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20198 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SharedBetweenAnimatorsAttribute) == 0x10, "Size mismatch!");

} // namespace UnityEngine
