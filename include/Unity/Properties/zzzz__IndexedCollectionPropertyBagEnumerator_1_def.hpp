#pragma once
// IWYU pragma private; include "Unity/Properties/IndexedCollectionPropertyBagEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__IndexedCollectionSharedPropertyState_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndexedCollectionPropertyBagEnumerator_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Properties {
template <typename TContainer> class IIndexedCollectionPropertyBagEnumerator_1;
}
namespace Unity::Properties {
template <typename TContainer> class IProperty_1;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TContainer> struct IndexedCollectionPropertyBagEnumerator_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1);
// Dependencies Unity.Properties.IndexedCollectionSharedPropertyState
namespace Unity::Properties {
// cpp template
template <typename TContainer>
// Is value type: true
// CS Name: Unity.Properties.IndexedCollectionPropertyBagEnumerator`1<TContainer>
struct CORDL_TYPE IndexedCollectionPropertyBagEnumerator_1 {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::Unity::Properties::IProperty_1<TContainer>* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>* impl, TContainer container);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Properties::IProperty_1<TContainer>* get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*
  i___System__Collections__Generic__IEnumerator_1___Unity__Properties__IProperty_1_TContainer___();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexedCollectionPropertyBagEnumerator_1();

  // Ctor Parameters [CppParam { name: "m_Impl", ty: "::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>*", modifiers: "", def_value: None }, CppParam { name: "m_Previous", ty:
  // "::Unity::Properties::IndexedCollectionSharedPropertyState", modifiers: "", def_value: None }, CppParam { name: "m_Container", ty: "TContainer", modifiers: "", def_value: None }, CppParam { name:
  // "m_Position", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IndexedCollectionPropertyBagEnumerator_1(::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>* m_Impl,
                                                     ::Unity::Properties::IndexedCollectionSharedPropertyState m_Previous, TContainer m_Container, int32_t m_Position) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19370 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_Impl, offset: 0x0, size: 0x8, def value: None
  ::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>* m_Impl;

  /// @brief Field m_Previous, offset: 0x8, size: 0x8, def value: None
  ::Unity::Properties::IndexedCollectionSharedPropertyState m_Previous;

  /// @brief Field m_Container, offset: 0x10, size: 0x8, def value: None
  TContainer m_Container;

  /// @brief Field m_Position, offset: 0x18, size: 0x4, def value: None
  int32_t m_Position;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1, "Unity.Properties", "IndexedCollectionPropertyBagEnumerator`1");
