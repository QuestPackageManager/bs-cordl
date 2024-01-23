#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LightProbes)
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine {
class LightProbes;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LightProbes);
// Type: UnityEngine::LightProbes
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10200))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10093))
// CS Name: ::UnityEngine::LightProbes*
class CORDL_TYPE LightProbes : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Field tetrahedralizationCompleted, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_tetrahedralizationCompleted, put = setStaticF_tetrahedralizationCompleted))::System::Action* tetrahedralizationCompleted;

  /// @brief Field needsRetetrahedralization, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_needsRetetrahedralization, put = setStaticF_needsRetetrahedralization))::System::Action* needsRetetrahedralization;

  static inline void setStaticF_tetrahedralizationCompleted(::System::Action* value);

  static inline ::System::Action* getStaticF_tetrahedralizationCompleted();

  static inline void setStaticF_needsRetetrahedralization(::System::Action* value);

  static inline ::System::Action* getStaticF_needsRetetrahedralization();

  /// @brief Method Internal_CallTetrahedralizationCompletedFunction, addr 0x2cb7238, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_CallTetrahedralizationCompletedFunction();

  /// @brief Method Internal_CallNeedsRetetrahedralizationFunction, addr 0x2cb729c, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_CallNeedsRetetrahedralizationFunction();

  // Ctor Parameters [CppParam { name: "", ty: "LightProbes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightProbes(LightProbes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightProbes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightProbes(LightProbes const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightProbes();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LightProbes, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::LightProbes);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightProbes*, "UnityEngine", "LightProbes");
