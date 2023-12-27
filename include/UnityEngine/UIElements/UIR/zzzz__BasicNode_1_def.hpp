#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(BasicNode_1)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template <typename T> class BasicNode_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UIR::BasicNode_1);
// Type: UnityEngine.UIElements.UIR::BasicNode`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7399)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7401), inst: 930 }), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(7399), inst: 3978 }), TypeDefinitionIndex(TypeDefinitionIndex(7401))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7401)) CS Name:
// ::UnityEngine.UIElements.UIR::BasicNode`1<T>*
class CORDL_TYPE BasicNode_1 : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::BasicNode_1<T>*> {
public:
  // Declarations
  /// @brief Field next, offset 0x18, size 0x8
  __declspec(property(get = __get_next, put = __set_next))::UnityEngine::UIElements::UIR::BasicNode_1<T>* next;

  /// @brief Field data, offset 0x20, size 0x8
  __declspec(property(get = __get_data, put = __set_data)) T data;

  constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<T>*& __get_next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BasicNode_1<T>*> const& __get_next() const;

  constexpr void __set_next(::UnityEngine::UIElements::UIR::BasicNode_1<T>* value);

  constexpr T& __get_data();

  constexpr T const& __get_data() const;

  constexpr void __set_data(T value);

  /// @brief Method AppendTo addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void AppendTo(ByRef<::UnityEngine::UIElements::UIR::BasicNode_1<T>*> first);

  static inline ::UnityEngine::UIElements::UIR::BasicNode_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BasicNode_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicNode_1(BasicNode_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicNode_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicNode_1(BasicNode_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicNode_1();

public:
  /// @brief Field next, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BasicNode_1<T>* ___next;

  /// @brief Field data, offset: 0x20, size: 0x8, def value: None
  T ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::BasicNode_1, "UnityEngine.UIElements.UIR", "BasicNode`1");
