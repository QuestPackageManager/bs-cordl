#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: UnityEngine.UIElements::StyleRule
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7276))
// CS Name: ::UnityEngine.UIElements::StyleRule*
class CORDL_TYPE StyleRule : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Properties, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Properties, put = __set_m_Properties))::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> m_Properties;

  /// @brief Field line, offset 0x18, size 0x4
  __declspec(property(get = __get_line, put = __set_line)) int32_t line;

  /// @brief Field customPropertiesCount, offset 0x1c, size 0x4
  __declspec(property(get = __get_customPropertiesCount, put = __set_customPropertiesCount)) int32_t customPropertiesCount;

  __declspec(property(get = get_properties))::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> properties;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*>& __get_m_Properties();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> const& __get_m_Properties() const;

  constexpr void __set_m_Properties(::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> value);

  constexpr int32_t& __get_line();

  constexpr int32_t const& __get_line() const;

  constexpr void __set_line(int32_t value);

  constexpr int32_t& __get_customPropertiesCount();

  constexpr int32_t const& __get_customPropertiesCount() const;

  constexpr void __set_customPropertiesCount(int32_t value);

  /// @brief Method get_properties addr 0x2e6b52c size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> get_properties();

  static inline ::UnityEngine::UIElements::StyleRule* New_ctor();

  /// @brief Method .ctor addr 0x2e6b534 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StyleRule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleRule(StyleRule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleRule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleRule(StyleRule const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleRule();

public:
  /// @brief Field m_Properties, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> ___m_Properties;

  /// @brief Field line, offset: 0x18, size: 0x4, def value: None
  int32_t ___line;

  /// @brief Field customPropertiesCount, offset: 0x1c, size: 0x4, def value: None
  int32_t ___customPropertiesCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleRule, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleRule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleRule*, "UnityEngine.UIElements", "StyleRule");
