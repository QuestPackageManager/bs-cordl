#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElementStyleSheetSet)
namespace System {
template <typename T> class IEquatable_1;
}
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
// Type: UnityEngine.UIElements::VisualElementStyleSheetSet
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6859))
// CS Name: ::UnityEngine.UIElements::VisualElementStyleSheetSet
struct CORDL_TYPE VisualElementStyleSheetSet {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::VisualElementStyleSheetSet>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::VisualElementStyleSheetSet>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::VisualElementStyleSheetSet>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::VisualElementStyleSheetSet>* i___System__IEquatable_1___UnityEngine__UIElements__VisualElementStyleSheetSet_();

  /// @brief Method .ctor, addr 0x2dc7ff0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method Add, addr 0x2dc7ff8, size 0x1d0, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::UIElements::StyleSheet* styleSheet);

  /// @brief Method Remove, addr 0x2dc81c8, size 0x134, virtual false, abstract: false, final false
  inline bool Remove(::UnityEngine::UIElements::StyleSheet* styleSheet);

  /// @brief Method Equals, addr 0x2dc82fc, size 0xc, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::VisualElementStyleSheetSet other);

  /// @brief Method Equals, addr 0x2dc8308, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2dc8384, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "m_Element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }]
  constexpr VisualElementStyleSheetSet(::UnityEngine::UIElements::VisualElement* m_Element) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementStyleSheetSet();

  /// @brief Field m_Element, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* m_Element;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementStyleSheetSet, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementStyleSheetSet, m_Element) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementStyleSheetSet, "UnityEngine.UIElements", "VisualElementStyleSheetSet");
