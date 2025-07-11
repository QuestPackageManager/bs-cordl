#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSelectorPart.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleSelectorType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StyleSelectorPart)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct StyleSelectorType;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleSelectorPart;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSelectorPart);
// Dependencies UnityEngine.UIElements.StyleSelectorType
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSelectorPart
struct CORDL_TYPE StyleSelectorPart {
public:
  // Declarations
  __declspec(property(get = get_type, put = set_type)) ::UnityEngine::UIElements::StyleSelectorType type;

  __declspec(property(get = get_value)) ::StringW value;

  /// @brief Method CreateClass, addr 0x4a8d8e0, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleSelectorPart CreateClass(::StringW className);

  /// @brief Method CreateId, addr 0x4a8d8f8, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleSelectorPart CreateId(::StringW Id);

  /// @brief Method CreatePredicate, addr 0x4a8d910, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleSelectorPart CreatePredicate(::System::Object* predicate);

  /// @brief Method ToString, addr 0x4a8d7c8, size 0x110, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_type, addr 0x4a8ce04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSelectorType get_type();

  /// @brief Method get_value, addr 0x4a8ce0c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_value();

  /// @brief Method set_type, addr 0x4a8d8d8, size 0x8, virtual false, abstract: false, final false
  inline void set_type(::UnityEngine::UIElements::StyleSelectorType value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSelectorPart();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "::UnityEngine::UIElements::StyleSelectorType", modifiers: "",
  // def_value: None }, CppParam { name: "tempData", ty: "::System::Object*", modifiers: "", def_value: None }]
  constexpr StyleSelectorPart(::StringW m_Value, ::UnityEngine::UIElements::StyleSelectorType m_Type, ::System::Object* tempData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6177 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Value, offset: 0x0, size: 0x8, def value: None
  ::StringW m_Value;

  /// @brief Field m_Type, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSelectorType m_Type;

  /// @brief Field tempData, offset: 0x10, size: 0x8, def value: None
  ::System::Object* tempData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSelectorPart, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSelectorPart, m_Type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSelectorPart, tempData) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSelectorPart, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSelectorPart, "UnityEngine.UIElements", "StyleSelectorPart");
