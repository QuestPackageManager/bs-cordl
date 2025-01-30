#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyNameCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StylePropertyNameCollection)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> struct List_1_Enumerator;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct StylePropertyNameCollection_Enumerator;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StylePropertyNameCollection;
}
namespace UnityEngine::UIElements {
struct StylePropertyNameCollection_Enumerator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StylePropertyNameCollection);
MARK_VAL_T(::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.Generic.List`1::Enumerator<T>, System.Collections.IEnumerator, System.IDisposable,
// UnityEngine.UIElements.StylePropertyName
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyNameCollection/Enumerator
struct CORDL_TYPE StylePropertyNameCollection_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::UnityEngine::UIElements::StylePropertyName Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x4a35e4c, size 0x48, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x4a35d48, size 0x48, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x4a35e48, size 0x4, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4a35dcc, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x4a35c6c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName> enumerator);

  /// @brief Method get_Current, addr 0x4a35d90, size 0x3c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StylePropertyName get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__UIElements__StylePropertyName_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyNameCollection_Enumerator();

  // Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName>", modifiers: "", def_value: None }]
  constexpr StylePropertyNameCollection_Enumerator(::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName> m_Enumerator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5935 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_Enumerator, offset: 0x0, size: 0x20, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName> m_Enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator, m_Enumerator) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, UnityEngine.UIElements.StylePropertyName
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyNameCollection
struct CORDL_TYPE StylePropertyNameCollection {
public:
  // Declarations
  using Enumerator = ::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method GetEnumerator, addr 0x4a35bfc, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StylePropertyName>.GetEnumerator, addr 0x4a35c78, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>* System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StylePropertyName__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x4a35ce0, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method .ctor, addr 0x4a35bf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* list);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__UIElements__StylePropertyName_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyNameCollection();

  // Ctor Parameters [CppParam { name: "propertiesList", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*", modifiers: "", def_value: None }]
  constexpr StylePropertyNameCollection(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* propertiesList) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5936 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field propertiesList, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* propertiesList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyNameCollection, propertiesList) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StylePropertyNameCollection, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StylePropertyNameCollection, "UnityEngine.UIElements", "StylePropertyNameCollection");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StylePropertyNameCollection_Enumerator, "UnityEngine.UIElements", "StylePropertyNameCollection/Enumerator");
