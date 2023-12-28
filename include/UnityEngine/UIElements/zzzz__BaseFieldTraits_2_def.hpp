#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
CORDL_MODULE_EXPORT(BaseFieldTraits_2)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TValueType, typename TValueUxmlAttributeType> class BaseFieldTraits_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::BaseFieldTraits_2);
// Type: UnityEngine.UIElements::BaseFieldTraits`2
// SizeInfo { instance_size: 136, native_size: 136, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType, typename TValueUxmlAttributeType>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7129), inst: 5214 }), TypeDefinitionIndex(TypeDefinitionIndex(7129))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7131))
// CS Name: ::UnityEngine.UIElements::BaseFieldTraits`2<TValueType,TValueUxmlAttributeType>*
class CORDL_TYPE BaseFieldTraits_2 : public ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType> {
public:
  // Declarations
  /// @brief Field m_Value, offset 0x80, size 0x8
  __declspec(property(get = __get_m_Value, put = __set_m_Value)) TValueUxmlAttributeType m_Value;

  constexpr TValueUxmlAttributeType& __get_m_Value();

  constexpr TValueUxmlAttributeType const& __get_m_Value() const;

  constexpr void __set_m_Value(TValueUxmlAttributeType value);

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseFieldTraits_2(BaseFieldTraits_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseFieldTraits_2(BaseFieldTraits_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseFieldTraits_2();

public:
  /// @brief Field m_Value, offset: 0x80, size: 0x8, def value: None
  TValueUxmlAttributeType ___m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BaseFieldTraits_2, "UnityEngine.UIElements", "BaseFieldTraits`2");
