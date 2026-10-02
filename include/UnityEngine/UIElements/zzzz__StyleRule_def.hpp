#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyleRule)
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements {
class StyleProperty;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleRule;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::StyleRule*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleRule*, "UnityEngine.UIElements", "StyleRule");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies System.Object, UnityEngine.UIElements.StyleComplexSelector, UnityEngine.UIElements.StyleProperty
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleRule
class CORDL_TYPE StyleRule : public ::System::Object {
public:
  // Declarations
  /// @brief Field <styleSheet>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__styleSheet_k__BackingField, put = __cordl_internal_set__styleSheet_k__BackingField)) ::UnityW<::UnityEngine::UIElements::StyleSheet>
      _styleSheet_k__BackingField;

  __declspec(property(get = get_complexSelectors)) ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*> complexSelectors;

  /// @brief Field customPropertiesCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_customPropertiesCount, put = __cordl_internal_set_customPropertiesCount)) int32_t customPropertiesCount;

  /// @brief Field line, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_line, put = __cordl_internal_set_line)) int32_t line;

  /// @brief Field m_ComplexSelectors, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ComplexSelectors, put = __cordl_internal_set_m_ComplexSelectors)) ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*> m_ComplexSelectors;

  /// @brief Field m_Properties, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Properties, put = __cordl_internal_set_m_Properties)) ::ArrayW<::UnityEngine::UIElements::StyleProperty*> m_Properties;

  __declspec(property(get = get_properties)) ::ArrayW<::UnityEngine::UIElements::StyleProperty*> properties;

  __declspec(property(get = get_styleSheet, put = set_styleSheet)) ::UnityW<::UnityEngine::UIElements::StyleSheet> styleSheet;

  /// @brief Method AddProperty, addr 0x7115894, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleProperty* AddProperty(::StringW propertyName);

  /// @brief Method AddSelector, addr 0x7115828, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleComplexSelector* AddSelector(::StringW selectorStr);

  static inline ::UnityEngine::UIElements::StyleRule* New_ctor(::UnityEngine::UIElements::StyleSheet* styleSheet);

  /// @brief Method TryAddSelector, addr 0x71156d8, size 0x10c, virtual false, abstract: false, final false
  inline bool TryAddSelector(::StringW selectorStr, ::by_ref<::UnityEngine::UIElements::StyleComplexSelector*> selector, ::by_ref<::StringW> error);

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get__styleSheet_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get__styleSheet_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_customPropertiesCount() const;

  constexpr int32_t& __cordl_internal_get_customPropertiesCount();

  constexpr int32_t const& __cordl_internal_get_line() const;

  constexpr int32_t& __cordl_internal_get_line();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*> const& __cordl_internal_get_m_ComplexSelectors() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*>& __cordl_internal_get_m_ComplexSelectors();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*> const& __cordl_internal_get_m_Properties() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*>& __cordl_internal_get_m_Properties();

  constexpr void __cordl_internal_set__styleSheet_k__BackingField(::UnityW<::UnityEngine::UIElements::StyleSheet> value);

  constexpr void __cordl_internal_set_customPropertiesCount(int32_t value);

  constexpr void __cordl_internal_set_line(int32_t value);

  constexpr void __cordl_internal_set_m_ComplexSelectors(::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*> value);

  constexpr void __cordl_internal_set_m_Properties(::ArrayW<::UnityEngine::UIElements::StyleProperty*> value);

  /// @brief Method .ctor, addr 0x71155a4, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleSheet* styleSheet);

  /// @brief Method get_complexSelectors, addr 0x71156c8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*> get_complexSelectors();

  /// @brief Method get_properties, addr 0x71156d0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::StyleProperty*> get_properties();

  /// [CompilerGenerated]
  /// @brief Method get_styleSheet, addr 0x7115594, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::StyleSheet> get_styleSheet();

  /// [CompilerGenerated]
  /// @brief Method set_styleSheet, addr 0x711559c, size 0x8, virtual false, abstract: false, final false
  inline void set_styleSheet(::UnityEngine::UIElements::StyleSheet* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleRule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleRule", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleRule(StyleRule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleRule", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleRule(StyleRule const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5140 };

  /// [SerializeField]
  /// @brief Field m_ComplexSelectors, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*> ___m_ComplexSelectors;

  /// [SerializeField]
  /// @brief Field m_Properties, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleProperty*> ___m_Properties;

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// [SerializeField]
  /// @brief Field line, offset: 0x20, size: 0x4, def value: None
  int32_t ___line;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <styleSheet>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::StyleSheet> ____styleSheet_k__BackingField;

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Field customPropertiesCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___customPropertiesCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleRule, ___m_ComplexSelectors) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleRule, ___m_Properties) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleRule, ___line) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleRule, ____styleSheet_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleRule, ___customPropertiesCount) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleRule) == 0x38, "Size mismatch!");

} // namespace UnityEngine::UIElements
