#pragma once
// IWYU pragma private; include "Unity/Properties/IndexedCollectionPropertyBag_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__PropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IndexedCollectionPropertyBag_2)
namespace Unity::Properties {
template <typename TContainer> class ICollectionPropertyBagAccept_1;
}
namespace Unity::Properties {
class ICollectionPropertyBagVisitor;
}
namespace Unity::Properties {
template <typename TCollection, typename TElement> class ICollectionPropertyBag_2;
}
namespace Unity::Properties {
template <typename T> class IConstructorWithCount_1;
}
namespace Unity::Properties {
class IConstructor;
}
namespace Unity::Properties {
template <typename TContainer> class IIndexedCollectionPropertyBagEnumerator_1;
}
namespace Unity::Properties {
template <typename TContainer> class IIndexedProperties_1;
}
namespace Unity::Properties {
class IListElementProperty;
}
namespace Unity::Properties {
template <typename TList> class IListPropertyAccept_1;
}
namespace Unity::Properties {
template <typename TContainer> class IListPropertyBagAccept_1;
}
namespace Unity::Properties {
class IListPropertyBagVisitor;
}
namespace Unity::Properties {
template <typename TList, typename TElement> class IListPropertyBag_2;
}
namespace Unity::Properties {
class IListPropertyVisitor;
}
namespace Unity::Properties {
template <typename TContainer> class IPropertyBag_1;
}
namespace Unity::Properties {
class IPropertyBag;
}
namespace Unity::Properties {
template <typename TContainer> class IProperty_1;
}
namespace Unity::Properties {
template <typename TList, typename TElement> class IndexedCollectionPropertyBag_2_ListElementProperty;
}
namespace Unity::Properties {
struct IndexedCollectionSharedPropertyState;
}
namespace Unity::Properties {
template <typename TContainer> struct PropertyCollection_1;
}
namespace Unity::Properties {
template <typename TContainer, typename TValue> class Property_2;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TList, typename TElement> class IndexedCollectionPropertyBag_2;
}
namespace Unity::Properties {
template <typename TList, typename TElement> class IndexedCollectionPropertyBag_2_ListElementProperty;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::IndexedCollectionPropertyBag_2);
MARK_GEN_REF_PTR_T(::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty);
// Dependencies Unity.Properties.Property`2<TContainer, TValue>
namespace Unity::Properties {
// cpp template
template <typename TList, typename TElement>
// Is value type: false
// CS Name: Unity.Properties.IndexedCollectionPropertyBag`2/ListElementProperty<TList,TElement>
class CORDL_TYPE IndexedCollectionPropertyBag_2_ListElementProperty : public ::Unity::Properties::Property_2<TList, TElement> {
public:
  // Declarations
  __declspec(property(get = get_Index)) int32_t Index;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field m_Index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) int32_t m_Index;

  /// @brief Field m_IsReadOnly, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsReadOnly, put = __cordl_internal_set_m_IsReadOnly)) bool m_IsReadOnly;

  /// @brief Convert operator to "::Unity::Properties::IListElementProperty"
  constexpr operator ::Unity::Properties::IListElementProperty*() noexcept;

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TElement GetValue(::ByRef<TList> container);

  static inline ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>* New_ctor();

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<TList> container, TElement value);

  constexpr int32_t const& __cordl_internal_get_m_Index() const;

  constexpr int32_t& __cordl_internal_get_m_Index();

  constexpr bool const& __cordl_internal_get_m_IsReadOnly() const;

  constexpr bool& __cordl_internal_get_m_IsReadOnly();

  constexpr void __cordl_internal_set_m_Index(int32_t value);

  constexpr void __cordl_internal_set_m_IsReadOnly(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Index, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Index();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Convert to "::Unity::Properties::IListElementProperty"
  constexpr ::Unity::Properties::IListElementProperty* i___Unity__Properties__IListElementProperty() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexedCollectionPropertyBag_2_ListElementProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IndexedCollectionPropertyBag_2_ListElementProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IndexedCollectionPropertyBag_2_ListElementProperty(IndexedCollectionPropertyBag_2_ListElementProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IndexedCollectionPropertyBag_2_ListElementProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IndexedCollectionPropertyBag_2_ListElementProperty(IndexedCollectionPropertyBag_2_ListElementProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19347 };

  /// @brief Field m_Index, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Index;

  /// @brief Field m_IsReadOnly, offset: 0x1c, size: 0x1, def value: None
  bool ___m_IsReadOnly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies Unity.Properties.PropertyBag`1<TContainer>
namespace Unity::Properties {
// cpp template
template <typename TList, typename TElement>
// Is value type: false
// CS Name: Unity.Properties.IndexedCollectionPropertyBag`2<TList,TElement>
class CORDL_TYPE IndexedCollectionPropertyBag_2 : public ::Unity::Properties::PropertyBag_1<TList> {
public:
  // Declarations
  using ListElementProperty = ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>;

  /// @brief Field m_Property, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Property,
                      put = __cordl_internal_set_m_Property)) ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>* m_Property;

  /// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBagAccept_1<TList>"
  constexpr operator ::Unity::Properties::ICollectionPropertyBagAccept_1<TList>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBag_2<TList,TElement>"
  constexpr operator ::Unity::Properties::ICollectionPropertyBag_2<TList, TElement>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IConstructor"
  constexpr operator ::Unity::Properties::IConstructor*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IConstructorWithCount_1<TList>"
  constexpr operator ::Unity::Properties::IConstructorWithCount_1<TList>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TList>"
  constexpr operator ::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TList>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IIndexedProperties_1<TList>"
  constexpr operator ::Unity::Properties::IIndexedProperties_1<TList>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IListPropertyAccept_1<TList>"
  constexpr operator ::Unity::Properties::IListPropertyAccept_1<TList>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IListPropertyBagAccept_1<TList>"
  constexpr operator ::Unity::Properties::IListPropertyBagAccept_1<TList>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IListPropertyBag_2<TList,TElement>"
  constexpr operator ::Unity::Properties::IListPropertyBag_2<TList, TElement>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag"
  constexpr operator ::Unity::Properties::IPropertyBag*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TList>"
  constexpr operator ::Unity::Properties::IPropertyBag_1<TList>*() noexcept;

  /// @brief Method GetProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::PropertyCollection_1<TList> GetProperties();

  /// @brief Method GetProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::PropertyCollection_1<TList> GetProperties(::ByRef<TList> container);

  /// @brief Method InstantiateWithCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TList InstantiateWithCount(int32_t count);

  static inline ::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>* New_ctor();

  /// @brief Method TryGetProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool TryGetProperty(::ByRef<TList> container, int32_t index, ::ByRef<::Unity::Properties::IProperty_1<TList>*> property);

  /// @brief Method Unity.Properties.ICollectionPropertyBagAccept<TList>.Accept, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Unity_Properties_ICollectionPropertyBagAccept_TList__Accept(::Unity::Properties::ICollectionPropertyBagVisitor* visitor, ::ByRef<TList> container);

  /// @brief Method Unity.Properties.IConstructorWithCount<TList>.InstantiateWithCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TList Unity_Properties_IConstructorWithCount_TList__InstantiateWithCount(int32_t count);

  /// @brief Method Unity.Properties.IIndexedCollectionPropertyBagEnumerator<TList>.GetCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t Unity_Properties_IIndexedCollectionPropertyBagEnumerator_TList__GetCount(::ByRef<TList> container);

  /// @brief Method Unity.Properties.IIndexedCollectionPropertyBagEnumerator<TList>.GetSharedProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Properties::IProperty_1<TList>* Unity_Properties_IIndexedCollectionPropertyBagEnumerator_TList__GetSharedProperty();

  /// @brief Method Unity.Properties.IIndexedCollectionPropertyBagEnumerator<TList>.GetSharedPropertyState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Properties::IndexedCollectionSharedPropertyState Unity_Properties_IIndexedCollectionPropertyBagEnumerator_TList__GetSharedPropertyState();

  /// @brief Method Unity.Properties.IIndexedCollectionPropertyBagEnumerator<TList>.SetSharedPropertyState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Unity_Properties_IIndexedCollectionPropertyBagEnumerator_TList__SetSharedPropertyState(::Unity::Properties::IndexedCollectionSharedPropertyState state);

  /// @brief Method Unity.Properties.IListPropertyAccept<TList>.Accept, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TContainer>
  inline void Unity_Properties_IListPropertyAccept_TList__Accept(::Unity::Properties::IListPropertyVisitor* visitor, ::Unity::Properties::Property_2<TContainer, TList>* property,
                                                                 ::ByRef<TContainer> container, ::ByRef<TList> list);

  /// @brief Method Unity.Properties.IListPropertyBagAccept<TList>.Accept, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Unity_Properties_IListPropertyBagAccept_TList__Accept(::Unity::Properties::IListPropertyBagVisitor* visitor, ::ByRef<TList> list);

  constexpr ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>* const& __cordl_internal_get_m_Property() const;

  constexpr ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>*& __cordl_internal_get_m_Property();

  constexpr void __cordl_internal_set_m_Property(::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Properties::ICollectionPropertyBagAccept_1<TList>"
  constexpr ::Unity::Properties::ICollectionPropertyBagAccept_1<TList>* i___Unity__Properties__ICollectionPropertyBagAccept_1_TList_() noexcept;

  /// @brief Convert to "::Unity::Properties::ICollectionPropertyBag_2<TList,TElement>"
  constexpr ::Unity::Properties::ICollectionPropertyBag_2<TList, TElement>* i___Unity__Properties__ICollectionPropertyBag_2_TList_TElement_() noexcept;

  /// @brief Convert to "::Unity::Properties::IConstructor"
  constexpr ::Unity::Properties::IConstructor* i___Unity__Properties__IConstructor() noexcept;

  /// @brief Convert to "::Unity::Properties::IConstructorWithCount_1<TList>"
  constexpr ::Unity::Properties::IConstructorWithCount_1<TList>* i___Unity__Properties__IConstructorWithCount_1_TList_() noexcept;

  /// @brief Convert to "::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TList>"
  constexpr ::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TList>* i___Unity__Properties__IIndexedCollectionPropertyBagEnumerator_1_TList_() noexcept;

  /// @brief Convert to "::Unity::Properties::IIndexedProperties_1<TList>"
  constexpr ::Unity::Properties::IIndexedProperties_1<TList>* i___Unity__Properties__IIndexedProperties_1_TList_() noexcept;

  /// @brief Convert to "::Unity::Properties::IListPropertyAccept_1<TList>"
  constexpr ::Unity::Properties::IListPropertyAccept_1<TList>* i___Unity__Properties__IListPropertyAccept_1_TList_() noexcept;

  /// @brief Convert to "::Unity::Properties::IListPropertyBagAccept_1<TList>"
  constexpr ::Unity::Properties::IListPropertyBagAccept_1<TList>* i___Unity__Properties__IListPropertyBagAccept_1_TList_() noexcept;

  /// @brief Convert to "::Unity::Properties::IListPropertyBag_2<TList,TElement>"
  constexpr ::Unity::Properties::IListPropertyBag_2<TList, TElement>* i___Unity__Properties__IListPropertyBag_2_TList_TElement_() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag"
  constexpr ::Unity::Properties::IPropertyBag* i___Unity__Properties__IPropertyBag() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag_1<TList>"
  constexpr ::Unity::Properties::IPropertyBag_1<TList>* i___Unity__Properties__IPropertyBag_1_TList_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexedCollectionPropertyBag_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IndexedCollectionPropertyBag_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IndexedCollectionPropertyBag_2(IndexedCollectionPropertyBag_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IndexedCollectionPropertyBag_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IndexedCollectionPropertyBag_2(IndexedCollectionPropertyBag_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19348 };

  /// @brief Field m_Property, offset: 0x18, size: 0x8, def value: None
  ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>* ___m_Property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::IndexedCollectionPropertyBag_2, "Unity.Properties", "IndexedCollectionPropertyBag`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty, "Unity.Properties", "IndexedCollectionPropertyBag`2/ListElementProperty");
