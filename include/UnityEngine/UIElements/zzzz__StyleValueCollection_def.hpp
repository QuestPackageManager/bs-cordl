#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(StyleValueCollection)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
struct StyleInt;
}
namespace UnityEngine::UIElements {
struct StyleFloat;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValue;
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
// Type: UnityEngine.UIElements::StyleValueCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7308))
// CS Name: ::UnityEngine.UIElements::StyleValueCollection*
class CORDL_TYPE StyleValueCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Values, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Values, put = __set_m_Values))::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValue>* m_Values;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValue>*& __get_m_Values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValue>*> const& __get_m_Values() const;

  constexpr void __set_m_Values(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValue>* value);

  /// @brief Method GetStyleLength, addr 0x2e71b14, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleLength GetStyleLength(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method GetStyleFloat, addr 0x2e71d48, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleFloat GetStyleFloat(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method GetStyleInt, addr 0x2e71da0, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleInt GetStyleInt(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method TryGetStyleValue, addr 0x2e71b88, size 0x1c0, virtual false, abstract: false, final false
  inline bool TryGetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ByRef<::UnityEngine::UIElements::StyleSheets::StyleValue> value);

  /// @brief Method SetStyleValue, addr 0x2e71e24, size 0x1fc, virtual false, abstract: false, final false
  inline void SetStyleValue(::UnityEngine::UIElements::StyleSheets::StyleValue value);

  static inline ::UnityEngine::UIElements::StyleValueCollection* New_ctor();

  /// @brief Method .ctor, addr 0x2e72020, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StyleValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleValueCollection(StyleValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleValueCollection(StyleValueCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValueCollection();

public:
  /// @brief Field m_Values, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValue>* ___m_Values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleValueCollection, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleValueCollection, ___m_Values) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleValueCollection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueCollection*, "UnityEngine.UIElements", "StyleValueCollection");
