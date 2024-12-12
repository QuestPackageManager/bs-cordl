#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValueCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StyleValueCollection)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValue;
}
namespace UnityEngine::UIElements {
struct StyleFloat;
}
namespace UnityEngine::UIElements {
struct StyleInt;
}
namespace UnityEngine::UIElements {
struct StyleLength;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleValueCollection;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleValueCollection);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleValueCollection
class CORDL_TYPE StyleValueCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Values, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Values, put = __cordl_internal_set_m_Values)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValue>* m_Values;

  /// @brief Method GetStyleFloat, addr 0x4a81a58, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat GetStyleFloat(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method GetStyleInt, addr 0x4a81ac4, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleInt GetStyleInt(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method GetStyleLength, addr 0x4a81800, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength GetStyleLength(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  static inline ::UnityEngine::UIElements::StyleValueCollection* New_ctor();

  /// @brief Method SetStyleValue, addr 0x4a81b48, size 0x1ec, virtual false, abstract: false, final false
  inline void SetStyleValue(::UnityEngine::UIElements::StyleSheets::StyleValue value);

  /// @brief Method TryGetStyleValue, addr 0x4a81874, size 0x1b8, virtual false, abstract: false, final false
  inline bool TryGetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::ByRef<::UnityEngine::UIElements::StyleSheets::StyleValue> value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValue>* const& __cordl_internal_get_m_Values() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValue>*& __cordl_internal_get_m_Values();

  constexpr void __cordl_internal_set_m_Values(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValue>* value);

  /// @brief Method .ctor, addr 0x4a81d34, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValueCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleValueCollection(StyleValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleValueCollection(StyleValueCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6084 };

  /// @brief Field m_Values, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValue>* ___m_Values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleValueCollection, ___m_Values) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleValueCollection, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleValueCollection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueCollection*, "UnityEngine.UIElements", "StyleValueCollection");
