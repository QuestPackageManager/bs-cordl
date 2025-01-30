#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseFieldTraits_2.hpp"
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
// Dependencies UnityEngine.UIElements.BaseField`1::UxmlTraits<TValueType>
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType, typename TValueUxmlAttributeType>
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseFieldTraits`2<TValueType,TValueUxmlAttributeType>
class CORDL_TYPE BaseFieldTraits_2 : public ::UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType> {
public:
  // Declarations
  /// @brief Field m_Value, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) TValueUxmlAttributeType m_Value;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>* New_ctor();

  constexpr TValueUxmlAttributeType const& __cordl_internal_get_m_Value() const;

  constexpr TValueUxmlAttributeType& __cordl_internal_get_m_Value();

  constexpr void __cordl_internal_set_m_Value(TValueUxmlAttributeType value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseFieldTraits_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseFieldTraits_2(BaseFieldTraits_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseFieldTraits_2(BaseFieldTraits_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5606 };

  /// @brief Field m_Value, offset: 0x80, size: 0x8, def value: None
  TValueUxmlAttributeType ___m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BaseFieldTraits_2, "UnityEngine.UIElements", "BaseFieldTraits`2");
