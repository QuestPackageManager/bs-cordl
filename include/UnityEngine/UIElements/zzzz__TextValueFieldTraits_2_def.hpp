#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextValueFieldTraits_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
CORDL_MODULE_EXPORT(TextValueFieldTraits_2)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TValueType, typename TValueUxmlAttributeType> class TextValueFieldTraits_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::TextValueFieldTraits_2);
// Type: UnityEngine.UIElements::TextValueFieldTraits`2
// SizeInfo { instance_size: 152, native_size: 152, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType, typename TValueUxmlAttributeType>
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TextValueFieldTraits`2<TValueType,TValueUxmlAttributeType>*
class CORDL_TYPE TextValueFieldTraits_2 : public ::UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType> {
public:
  // Declarations
  /// @brief Field m_IsDelayed, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IsDelayed, put = __cordl_internal_set_m_IsDelayed)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_IsDelayed;

  /// @brief Field m_IsReadOnly, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IsReadOnly, put = __cordl_internal_set_m_IsReadOnly)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_IsReadOnly;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_IsDelayed();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_IsDelayed() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_IsReadOnly();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_IsReadOnly() const;

  constexpr void __cordl_internal_set_m_IsDelayed(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_IsReadOnly(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextValueFieldTraits_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextValueFieldTraits_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextValueFieldTraits_2(TextValueFieldTraits_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextValueFieldTraits_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextValueFieldTraits_2(TextValueFieldTraits_2 const&) = delete;

  /// @brief Field m_IsReadOnly, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_IsReadOnly;

  /// @brief Field m_IsDelayed, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_IsDelayed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5671 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TextValueFieldTraits_2, "UnityEngine.UIElements", "TextValueFieldTraits`2");
