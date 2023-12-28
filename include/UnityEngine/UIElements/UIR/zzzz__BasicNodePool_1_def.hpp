#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__BasicNode_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
CORDL_MODULE_EXPORT(BasicNodePool_1)
namespace UnityEngine::UIElements::UIR {
template <typename T> class BasicNode_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template <typename T> class BasicNodePool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UIR::BasicNodePool_1);
// Type: UnityEngine.UIElements.UIR::BasicNodePool`1
// SizeInfo { instance_size: 56, native_size: 52, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7401), inst: 929 }),
// TypeDefinitionIndex(TypeDefinitionIndex(7400)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7400), inst: 3982 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7402)) CS
// Name: ::UnityEngine.UIElements.UIR::BasicNodePool`1<T>*
class CORDL_TYPE BasicNodePool_1 : public ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::BasicNode_1<T>*> {
public:
  // Declarations
  /// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void Reset(::UnityEngine::UIElements::UIR::BasicNode_1<T>* node);

  /// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::UnityEngine::UIElements::UIR::BasicNode_1<T>* Create();

  static inline ::UnityEngine::UIElements::UIR::BasicNodePool_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BasicNodePool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicNodePool_1(BasicNodePool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicNodePool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicNodePool_1(BasicNodePool_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicNodePool_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::BasicNodePool_1, "UnityEngine.UIElements.UIR", "BasicNodePool`1");
