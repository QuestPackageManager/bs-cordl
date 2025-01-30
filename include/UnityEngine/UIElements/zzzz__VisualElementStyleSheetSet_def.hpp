#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementStyleSheetSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElementStyleSheetSet)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct VisualElementStyleSheetSet;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::VisualElementStyleSheetSet);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualElementStyleSheetSet
struct CORDL_TYPE VisualElementStyleSheetSet {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::VisualElementStyleSheetSet>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::VisualElementStyleSheetSet>*();

  /// @brief Method Add, addr 0x49a1588, size 0x1c4, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::UIElements::StyleSheet* styleSheet);

  /// @brief Method Equals, addr 0x49a1888, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x49a187c, size 0xc, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::VisualElementStyleSheetSet other);

  /// @brief Method GetHashCode, addr 0x49a1904, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Remove, addr 0x49a174c, size 0x130, virtual false, abstract: false, final false
  inline bool Remove(::UnityEngine::UIElements::StyleSheet* styleSheet);

  /// @brief Method .ctor, addr 0x49a1580, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::VisualElementStyleSheetSet>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::VisualElementStyleSheetSet>* i___System__IEquatable_1___UnityEngine__UIElements__VisualElementStyleSheetSet_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementStyleSheetSet();

  // Ctor Parameters [CppParam { name: "m_Element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }]
  constexpr VisualElementStyleSheetSet(::UnityEngine::UIElements::VisualElement* m_Element) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6330 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Element, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* m_Element;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElementStyleSheetSet, m_Element) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementStyleSheetSet, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementStyleSheetSet, "UnityEngine.UIElements", "VisualElementStyleSheetSet");
