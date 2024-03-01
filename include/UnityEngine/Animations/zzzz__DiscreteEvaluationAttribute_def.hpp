#pragma once
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
// Type: UnityEngine.Animations::DiscreteEvaluationAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Animations {
// Is value type: false
// CS Name: ::UnityEngine.Animations::DiscreteEvaluationAttribute*
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::DiscreteEvaluationAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Animations
NEED_NO_BOX(::UnityEngine::Animations::DiscreteEvaluationAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::DiscreteEvaluationAttribute*, "UnityEngine.Animations", "DiscreteEvaluationAttribute");
