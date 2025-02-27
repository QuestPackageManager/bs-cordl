#pragma once
// IWYU pragma private; include "Unity/Properties/IndexedCollectionPropertyBag_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__IConstructorWithCount_1_def.hpp"
#include "Unity/Properties/zzzz__IConstructor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IndexedCollectionPropertyBag_2)
namespace Unity::Properties {
template <typename TList, typename TElement> class IndexedCollectionPropertyBag_2_ListElementProperty;
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

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field m_Index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) int32_t m_Index;

  static inline ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>* New_ctor();

  constexpr int32_t const& __cordl_internal_get_m_Index() const;

  constexpr int32_t& __cordl_internal_get_m_Index();

  constexpr void __cordl_internal_set_m_Index(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Index, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Index();

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17467 };

  /// @brief Field m_Index, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies Unity.Properties.IConstructor, Unity.Properties.IConstructorWithCount`1<T>, Unity.Properties.IPropertyBag, Unity.Properties.IPropertyBag`1<TContainer>,
// Unity.Properties.PropertyBag`1<TContainer>
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

  /// @brief Convert operator to "::Unity::Properties::IConstructor"
  constexpr operator ::Unity::Properties::IConstructor*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IConstructorWithCount_1<TList>"
  constexpr operator ::Unity::Properties::IConstructorWithCount_1<TList>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag"
  constexpr operator ::Unity::Properties::IPropertyBag*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TList>"
  constexpr operator ::Unity::Properties::IPropertyBag_1<TList>*() noexcept;

  /// @brief Method InstantiateWithCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TList InstantiateWithCount(int32_t count);

  static inline ::Unity::Properties::IndexedCollectionPropertyBag_2<TList, TElement>* New_ctor();

  /// @brief Method Unity.Properties.IConstructorWithCount<TList>.InstantiateWithCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TList Unity_Properties_IConstructorWithCount_TList__InstantiateWithCount(int32_t count);

  constexpr ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>* const& __cordl_internal_get_m_Property() const;

  constexpr ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>*& __cordl_internal_get_m_Property();

  constexpr void __cordl_internal_set_m_Property(::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Properties::IConstructor"
  constexpr ::Unity::Properties::IConstructor* i___Unity__Properties__IConstructor() noexcept;

  /// @brief Convert to "::Unity::Properties::IConstructorWithCount_1<TList>"
  constexpr ::Unity::Properties::IConstructorWithCount_1<TList>* i___Unity__Properties__IConstructorWithCount_1_TList_() noexcept;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17468 };

  /// @brief Field m_Property, offset: 0x18, size: 0x8, def value: None
  ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList, TElement>* ___m_Property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::IndexedCollectionPropertyBag_2, "Unity.Properties", "IndexedCollectionPropertyBag`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty, "Unity.Properties", "IndexedCollectionPropertyBag`2/ListElementProperty");
