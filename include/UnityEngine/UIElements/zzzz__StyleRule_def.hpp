#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleRule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyleRule)
namespace UnityEngine::UIElements {
class StyleProperty;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleRule;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleRule);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleRule
class CORDL_TYPE StyleRule : public ::System::Object {
public:
  // Declarations
  /// @brief Field customPropertiesCount, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_customPropertiesCount, put = __cordl_internal_set_customPropertiesCount)) int32_t customPropertiesCount;

  /// @brief Field line, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_line, put = __cordl_internal_set_line)) int32_t line;

  /// @brief Field m_Properties, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Properties,
                      put = __cordl_internal_set_m_Properties)) ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*>
      m_Properties;

  __declspec(property(get = get_properties)) ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> properties;

  static inline ::UnityEngine::UIElements::StyleRule* New_ctor();

  constexpr int32_t const& __cordl_internal_get_customPropertiesCount() const;

  constexpr int32_t& __cordl_internal_get_customPropertiesCount();

  constexpr int32_t const& __cordl_internal_get_line() const;

  constexpr int32_t& __cordl_internal_get_line();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> const& __cordl_internal_get_m_Properties() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*>& __cordl_internal_get_m_Properties();

  constexpr void __cordl_internal_set_customPropertiesCount(int32_t value);

  constexpr void __cordl_internal_set_line(int32_t value);

  constexpr void __cordl_internal_set_m_Properties(::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> value);

  /// @brief Method .ctor, addr 0x6ad0168, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_properties, addr 0x6ad0160, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> get_properties();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleRule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleRule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleRule(StyleRule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleRule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleRule(StyleRule const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5063 };

  /// @brief Field m_Properties, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> ___m_Properties;

  /// @brief Field line, offset: 0x18, size: 0x4, def value: None
  int32_t ___line;

  /// @brief Field customPropertiesCount, offset: 0x1c, size: 0x4, def value: None
  int32_t ___customPropertiesCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleRule, ___m_Properties) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleRule, ___line) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleRule, ___customPropertiesCount) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleRule, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleRule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleRule*, "UnityEngine.UIElements", "StyleRule");
