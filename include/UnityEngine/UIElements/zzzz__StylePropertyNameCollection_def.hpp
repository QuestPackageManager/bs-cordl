#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StylePropertyNameCollection)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
struct __StylePropertyNameCollection__Enumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> struct __List_1__Enumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StylePropertyNameCollection;
}
namespace UnityEngine::UIElements {
struct __StylePropertyNameCollection__Enumerator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StylePropertyNameCollection);
MARK_VAL_T(::UnityEngine::UIElements::__StylePropertyNameCollection__Enumerator);
// Type: ::Enumerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3842), inst: 1693 }), TypeDefinitionIndex(TypeDefinitionIndex(6791)),
// TypeDefinitionIndex(TypeDefinitionIndex(3842))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7186)) CS Name: ::StylePropertyNameCollection::Enumerator
struct CORDL_TYPE __StylePropertyNameCollection__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current))::UnityEngine::UIElements::StylePropertyName Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor, addr 0x2e4e6e0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StylePropertyName> enumerator);

  /// @brief Method MoveNext, addr 0x2e4e7bc, size 0x48, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method get_Current, addr 0x2e4e804, size 0x3c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StylePropertyName get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2e4e840, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method Reset, addr 0x2e4e8bc, size 0x4, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method Dispose, addr 0x2e4e8c0, size 0x48, virtual true, abstract: false, final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StylePropertyName>", modifiers: "", def_value: None }]
  constexpr __StylePropertyNameCollection__Enumerator(::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StylePropertyName> m_Enumerator) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyNameCollection__Enumerator();

  /// @brief Field m_Enumerator, offset: 0x0, size: 0x20, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StylePropertyName> m_Enumerator;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyNameCollection__Enumerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyNameCollection__Enumerator, m_Enumerator) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::StylePropertyNameCollection
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7187))
// CS Name: ::UnityEngine.UIElements::StylePropertyNameCollection
struct CORDL_TYPE StylePropertyNameCollection {
public:
  // Declarations
  using Enumerator = ::UnityEngine::UIElements::__StylePropertyNameCollection__Enumerator;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method .ctor, addr 0x2e4e668, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* list);

  /// @brief Method GetEnumerator, addr 0x2e4e670, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__StylePropertyNameCollection__Enumerator GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StylePropertyName>.GetEnumerator, addr 0x2e4e6ec, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>* System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StylePropertyName__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2e4e754, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "propertiesList", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*", modifiers: "", def_value: None }]
  constexpr StylePropertyNameCollection(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* propertiesList) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyNameCollection();

  /// @brief Field propertiesList, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* propertiesList;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StylePropertyNameCollection, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyNameCollection, propertiesList) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StylePropertyNameCollection, "UnityEngine.UIElements", "StylePropertyNameCollection");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyNameCollection__Enumerator, "UnityEngine.UIElements", "StylePropertyNameCollection/Enumerator");
