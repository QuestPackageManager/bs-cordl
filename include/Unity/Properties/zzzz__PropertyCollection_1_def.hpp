#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyCollection_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBagEnumerable_1_def.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBagEnumerator_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyCollection_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
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
class IEnumerable;
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
template <typename TContainer> class IProperty_1;
}
namespace Unity::Properties {
template <typename TContainer> struct IndexedCollectionPropertyBagEnumerable_1;
}
namespace Unity::Properties {
template <typename TContainer> struct IndexedCollectionPropertyBagEnumerator_1;
}
namespace Unity::Properties {
template <typename TContainer> struct PropertyCollection_1_EnumeratorType;
}
namespace Unity::Properties {
template <typename TContainer> struct PropertyCollection_1_Enumerator;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TContainer> struct PropertyCollection_1_EnumeratorType;
}
namespace Unity::Properties {
template <typename TContainer> struct PropertyCollection_1;
}
namespace Unity::Properties {
template <typename TContainer> struct PropertyCollection_1_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Properties::PropertyCollection_1_EnumeratorType);
MARK_GEN_VAL_T(::Unity::Properties::PropertyCollection_1);
MARK_GEN_VAL_T(::Unity::Properties::PropertyCollection_1_Enumerator);
// Dependencies
namespace Unity::Properties {
// cpp template
template <typename TContainer>
// Is value type: true
// CS Name: Unity.Properties.PropertyCollection`1/EnumeratorType<TContainer>
struct CORDL_TYPE PropertyCollection_1_EnumeratorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PropertyCollection_1_EnumeratorType_Unwrapped
  enum struct __PropertyCollection_1_EnumeratorType_Unwrapped : int32_t {
    __E_Empty = static_cast<int32_t>(0x0),
    __E_Enumerable = static_cast<int32_t>(0x1),
    __E_List = static_cast<int32_t>(0x2),
    __E_IndexedCollectionPropertyBag = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PropertyCollection_1_EnumeratorType_Unwrapped() const noexcept {
    return static_cast<__PropertyCollection_1_EnumeratorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyCollection_1_EnumeratorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PropertyCollection_1_EnumeratorType(int32_t value__) noexcept;

  /// @brief Field Empty value: I32(0)
  static ::Unity::Properties::PropertyCollection_1_EnumeratorType<TContainer> const Empty;

  /// @brief Field Enumerable value: I32(1)
  static ::Unity::Properties::PropertyCollection_1_EnumeratorType<TContainer> const Enumerable;

  /// @brief Field IndexedCollectionPropertyBag value: I32(3)
  static ::Unity::Properties::PropertyCollection_1_EnumeratorType<TContainer> const IndexedCollectionPropertyBag;

  /// @brief Field List value: I32(2)
  static ::Unity::Properties::PropertyCollection_1_EnumeratorType<TContainer> const List;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19359 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, Unity.Properties.IndexedCollectionPropertyBagEnumerator`1<TContainer>,
// Unity.Properties.PropertyCollection`1::EnumeratorType<TContainer>
namespace Unity::Properties {
// cpp template
template <typename TContainer>
// Is value type: true
// CS Name: Unity.Properties.PropertyCollection`1/Enumerator<TContainer>
struct CORDL_TYPE PropertyCollection_1_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current, put = set_Current)) ::Unity::Properties::IProperty_1<TContainer>* Current;

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
  inline void _ctor(::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>* enumerator);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer> enumerator);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1_Enumerator<::Unity::Properties::IProperty_1<TContainer>*> properties);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Properties::IProperty_1<TContainer>* get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*
  i___System__Collections__Generic__IEnumerator_1___Unity__Properties__IProperty_1_TContainer___();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Current(::Unity::Properties::IProperty_1<TContainer>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyCollection_1_Enumerator();

  // Ctor Parameters [CppParam { name: "m_Type", ty: "::Unity::Properties::PropertyCollection_1_EnumeratorType<TContainer>", modifiers: "", def_value: None }, CppParam { name: "m_Enumerator", ty:
  // "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*", modifiers: "", def_value: None }, CppParam { name: "m_Properties", ty:
  // "::System::Collections::Generic::List_1_Enumerator<::Unity::Properties::IProperty_1<TContainer>*>", modifiers: "", def_value: None }, CppParam { name: "m_IndexedCollectionPropertyBag", ty:
  // "::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>", modifiers: "", def_value: None }, CppParam { name: "_Current_k__BackingField", ty:
  // "::Unity::Properties::IProperty_1<TContainer>*", modifiers: "", def_value: None }]
  constexpr PropertyCollection_1_Enumerator(::Unity::Properties::PropertyCollection_1_EnumeratorType<TContainer> m_Type,
                                            ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>* m_Enumerator,
                                            ::System::Collections::Generic::List_1_Enumerator<::Unity::Properties::IProperty_1<TContainer>*> m_Properties,
                                            ::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer> m_IndexedCollectionPropertyBag,
                                            ::Unity::Properties::IProperty_1<TContainer>* _Current_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19360 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field m_Type, offset: 0x0, size: 0x4, def value: None
  ::Unity::Properties::PropertyCollection_1_EnumeratorType<TContainer> m_Type;

  /// @brief Field m_Enumerator, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>* m_Enumerator;

  /// @brief Field m_Properties, offset: 0x10, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::Unity::Properties::IProperty_1<TContainer>*> m_Properties;

  /// @brief Field m_IndexedCollectionPropertyBag, offset: 0x28, size: 0x20, def value: None
  ::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer> m_IndexedCollectionPropertyBag;

  /// @brief Field <Current>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::Unity::Properties::IProperty_1<TContainer>* _Current_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies Unity.Properties.IndexedCollectionPropertyBagEnumerable`1<TContainer>, Unity.Properties.PropertyCollection`1::EnumeratorType<TContainer>
namespace Unity::Properties {
// cpp template
template <typename TContainer>
// Is value type: true
// CS Name: Unity.Properties.PropertyCollection`1<TContainer>
struct CORDL_TYPE PropertyCollection_1 {
public:
  // Declarations
  using Enumerator = ::Unity::Properties::PropertyCollection_1_Enumerator<TContainer>;

  using EnumeratorType = ::Unity::Properties::PropertyCollection_1_EnumeratorType<TContainer>;

  /// @brief Field <Empty>k__BackingField, offset 0xffffffff, size 0x28
  __declspec(property(get = getStaticF__Empty_k__BackingField, put = setStaticF__Empty_k__BackingField)) ::Unity::Properties::PropertyCollection_1<TContainer> _Empty_k__BackingField;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Properties::PropertyCollection_1_Enumerator<TContainer> GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<Unity.Properties.IProperty<TContainer>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>* System_Collections_Generic_IEnumerable_Unity_Properties_IProperty_TContainer___GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>* enumerable);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer> enumerable);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>* properties);

  static inline ::Unity::Properties::PropertyCollection_1<TContainer> getStaticF__Empty_k__BackingField();

  /// @brief Method get_Empty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Properties::PropertyCollection_1<TContainer> get_Empty();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>*
  i___System__Collections__Generic__IEnumerable_1___Unity__Properties__IProperty_1_TContainer___();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  static inline void setStaticF__Empty_k__BackingField(::Unity::Properties::PropertyCollection_1<TContainer> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyCollection_1();

  // Ctor Parameters [CppParam { name: "m_Type", ty: "::Unity::Properties::PropertyCollection_1_EnumeratorType<TContainer>", modifiers: "", def_value: None }, CppParam { name: "m_Enumerable", ty:
  // "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>*", modifiers: "", def_value: None }, CppParam { name: "m_Properties", ty:
  // "::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>*", modifiers: "", def_value: None }, CppParam { name: "m_IndexedCollectionPropertyBag", ty:
  // "::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer>", modifiers: "", def_value: None }]
  constexpr PropertyCollection_1(::Unity::Properties::PropertyCollection_1_EnumeratorType<TContainer> m_Type,
                                 ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>* m_Enumerable,
                                 ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>* m_Properties,
                                 ::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer> m_IndexedCollectionPropertyBag) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19361 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field m_Type, offset: 0x0, size: 0x4, def value: None
  ::Unity::Properties::PropertyCollection_1_EnumeratorType<TContainer> m_Type;

  /// @brief Field m_Enumerable, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>* m_Enumerable;

  /// @brief Field m_Properties, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>* m_Properties;

  /// @brief Field m_IndexedCollectionPropertyBag, offset: 0x18, size: 0x10, def value: None
  ::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer> m_IndexedCollectionPropertyBag;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Properties::PropertyCollection_1_EnumeratorType, "Unity.Properties", "PropertyCollection`1/EnumeratorType");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Properties::PropertyCollection_1, "Unity.Properties", "PropertyCollection`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Properties::PropertyCollection_1_Enumerator, "Unity.Properties", "PropertyCollection`1/Enumerator");
