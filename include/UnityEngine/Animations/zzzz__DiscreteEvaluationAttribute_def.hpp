#pragma once
// IWYU pragma private; include "UnityEngine/Animations/DiscreteEvaluationAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DiscreteEvaluationAttribute)
// Forward declare root types
namespace UnityEngine::Animations {
class DiscreteEvaluationAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Animations::DiscreteEvaluationAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Animations {
// Is value type: false
// CS Name: UnityEngine.Animations.DiscreteEvaluationAttribute
class CORDL_TYPE DiscreteEvaluationAttribute : public ::System::Attribute {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiscreteEvaluationAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiscreteEvaluationAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiscreteEvaluationAttribute(DiscreteEvaluationAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiscreteEvaluationAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiscreteEvaluationAttribute(DiscreteEvaluationAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16883 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::DiscreteEvaluationAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Animations
NEED_NO_BOX(::UnityEngine::Animations::DiscreteEvaluationAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::DiscreteEvaluationAttribute*, "UnityEngine.Animations", "DiscreteEvaluationAttribute");
