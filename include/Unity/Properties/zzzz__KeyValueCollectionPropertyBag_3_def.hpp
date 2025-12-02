#pragma once
// IWYU pragma private; include "Unity/Properties/KeyValueCollectionPropertyBag_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyValueCollectionPropertyBag_3)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
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
template <typename TDictionary, typename TKey, typename TValue> class Enumerable_KeyValueCollectionPropertyBag_3_Enumerator;
}
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
class IDictionaryElementProperty;
}
namespace Unity::Properties {
template <typename TContainer> class IDictionaryPropertyBagAccept_1;
}
namespace Unity::Properties {
class IDictionaryPropertyBagVisitor;
}
namespace Unity::Properties {
template <typename TDictionary, typename TKey, typename TValue> class IDictionaryPropertyBag_3;
}
namespace Unity::Properties {
template <typename TContainer, typename TKey> class IKeyedProperties_2;
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
template <typename TDictionary, typename TKey, typename TValue> struct KeyValueCollectionPropertyBag_3_Enumerable;
}
namespace Unity::Properties {
template <typename TDictionary, typename TKey, typename TValue> class KeyValueCollectionPropertyBag_3_KeyValuePairProperty;
}
namespace Unity::Properties {
template <typename TContainer> struct PropertyCollection_1;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TDictionary, typename TKey, typename TValue> class Enumerable_KeyValueCollectionPropertyBag_3_Enumerator;
}
namespace Unity::Properties {
template <typename TDictionary, typename TKey, typename TValue> class KeyValueCollectionPropertyBag_3;
}
namespace Unity::Properties {
template <typename TDictionary, typename TKey, typename TValue> class KeyValueCollectionPropertyBag_3_KeyValuePairProperty;
}
namespace Unity::Properties {
template <typename TDictionary, typename TKey, typename TValue> struct KeyValueCollectionPropertyBag_3_Enumerable;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator);
MARK_GEN_REF_PTR_T(::Unity::Properties::KeyValueCollectionPropertyBag_3);
MARK_GEN_REF_PTR_T(::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty);
MARK_GEN_VAL_T(::Unity::Properties::KeyValueCollectionPropertyBag_3_Enumerable);
// Dependencies System.Collections.Generic.KeyValuePair`2<TKey, TValue>, Unity.Properties.Property`2<TContainer, TValue>
namespace Unity::Properties {
// cpp template
template <typename TDictionary, typename TKey, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.KeyValueCollectionPropertyBag`3/KeyValuePairProperty<TDictionary,TKey,TValue>
class CORDL_TYPE KeyValueCollectionPropertyBag_3_KeyValuePairProperty : public ::Unity::Properties::Property_2<TDictionary, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Key, put = set_Key)) TKey Key;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ObjectKey)) ::System::Object* ObjectKey;

  /// @brief Field <Key>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField)) TKey _Key_k__BackingField;

  /// @brief Convert operator to "::Unity::Properties::IDictionaryElementProperty"
  constexpr operator ::Unity::Properties::IDictionaryElementProperty*() noexcept;

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> GetValue(::ByRef<TDictionary> container);

  static inline ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* New_ctor();

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<TDictionary> container, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> value);

  constexpr TKey const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr TKey& __cordl_internal_get__Key_k__BackingField();

  constexpr void __cordl_internal_set__Key_k__BackingField(TKey value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TKey get_Key();

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ObjectKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* get_ObjectKey();

  /// @brief Convert to "::Unity::Properties::IDictionaryElementProperty"
  constexpr ::Unity::Properties::IDictionaryElementProperty* i___Unity__Properties__IDictionaryElementProperty() noexcept;

  /// @brief Method set_Key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Key(TKey value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyValueCollectionPropertyBag_3_KeyValuePairProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyValueCollectionPropertyBag_3_KeyValuePairProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyValueCollectionPropertyBag_3_KeyValuePairProperty(KeyValueCollectionPropertyBag_3_KeyValuePairProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyValueCollectionPropertyBag_3_KeyValuePairProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyValueCollectionPropertyBag_3_KeyValuePairProperty(KeyValueCollectionPropertyBag_3_KeyValuePairProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19349 };

  /// @brief Field <Key>k__BackingField, offset: 0x18, size: 0x8, def value: None
  TKey ____Key_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies System.Object
namespace Unity::Properties {
// cpp template
template <typename TDictionary, typename TKey, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.KeyValueCollectionPropertyBag`3/Enumerable/Enumerator<TDictionary,TKey,TValue>
class CORDL_TYPE Enumerable_KeyValueCollectionPropertyBag_3_Enumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::Unity::Properties::IProperty_1<TDictionary>* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field m_Dictionary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Dictionary, put = __cordl_internal_set_m_Dictionary)) TDictionary m_Dictionary;

  /// @brief Field m_Keys, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Keys, put = __cordl_internal_set_m_Keys)) ::System::Collections::Generic::List_1<TKey>* m_Keys;

  /// @brief Field m_Position, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Position, put = __cordl_internal_set_m_Position)) int32_t m_Position;

  /// @brief Field m_Previous, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Previous, put = __cordl_internal_set_m_Previous)) TKey m_Previous;

  /// @brief Field m_Property, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Property,
                      put = __cordl_internal_set_m_Property)) ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* m_Property;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TDictionary>*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TDictionary>*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>*
  New_ctor(TDictionary dictionary, ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* property);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr TDictionary const& __cordl_internal_get_m_Dictionary() const;

  constexpr TDictionary& __cordl_internal_get_m_Dictionary();

  constexpr ::System::Collections::Generic::List_1<TKey>* const& __cordl_internal_get_m_Keys() const;

  constexpr ::System::Collections::Generic::List_1<TKey>*& __cordl_internal_get_m_Keys();

  constexpr int32_t const& __cordl_internal_get_m_Position() const;

  constexpr int32_t& __cordl_internal_get_m_Position();

  constexpr TKey const& __cordl_internal_get_m_Previous() const;

  constexpr TKey& __cordl_internal_get_m_Previous();

  constexpr ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* const& __cordl_internal_get_m_Property() const;

  constexpr ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*& __cordl_internal_get_m_Property();

  constexpr void __cordl_internal_set_m_Dictionary(TDictionary value);

  constexpr void __cordl_internal_set_m_Keys(::System::Collections::Generic::List_1<TKey>* value);

  constexpr void __cordl_internal_set_m_Position(int32_t value);

  constexpr void __cordl_internal_set_m_Previous(TKey value);

  constexpr void __cordl_internal_set_m_Property(::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TDictionary dictionary, ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* property);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Properties::IProperty_1<TDictionary>* get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TDictionary>*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TDictionary>*>*
  i___System__Collections__Generic__IEnumerator_1___Unity__Properties__IProperty_1_TDictionary___() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable_KeyValueCollectionPropertyBag_3_Enumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable_KeyValueCollectionPropertyBag_3_Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable_KeyValueCollectionPropertyBag_3_Enumerator(Enumerable_KeyValueCollectionPropertyBag_3_Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable_KeyValueCollectionPropertyBag_3_Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable_KeyValueCollectionPropertyBag_3_Enumerator(Enumerable_KeyValueCollectionPropertyBag_3_Enumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19350 };

  /// @brief Field m_Dictionary, offset: 0x10, size: 0x8, def value: None
  TDictionary ___m_Dictionary;

  /// @brief Field m_Property, offset: 0x18, size: 0x8, def value: None
  ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* ___m_Property;

  /// @brief Field m_Previous, offset: 0x20, size: 0x8, def value: None
  TKey ___m_Previous;

  /// @brief Field m_Keys, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<TKey>* ___m_Keys;

  /// @brief Field m_Position, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_Position;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies
namespace Unity::Properties {
// cpp template
template <typename TDictionary, typename TKey, typename TValue>
// Is value type: true
// CS Name: Unity.Properties.KeyValueCollectionPropertyBag`3/Enumerable<TDictionary,TKey,TValue>
struct CORDL_TYPE KeyValueCollectionPropertyBag_3_Enumerable {
public:
  // Declarations
  using Enumerator = ::Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method System.Collections.Generic.IEnumerable<Unity.Properties.IProperty<TDictionary>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TDictionary>*>* System_Collections_Generic_IEnumerable_Unity_Properties_IProperty_TDictionary___GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TDictionary dictionary, ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* property);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>*
  i___System__Collections__Generic__IEnumerable_1___Unity__Properties__IProperty_1_TDictionary___();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyValueCollectionPropertyBag_3_Enumerable();

  // Ctor Parameters [CppParam { name: "m_Dictionary", ty: "TDictionary", modifiers: "", def_value: None }, CppParam { name: "m_Property", ty:
  // "::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary,TKey,TValue>*", modifiers: "", def_value: None }]
  constexpr KeyValueCollectionPropertyBag_3_Enumerable(TDictionary m_Dictionary,
                                                       ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* m_Property) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19351 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Dictionary, offset: 0x0, size: 0x8, def value: None
  TDictionary m_Dictionary;

  /// @brief Field m_Property, offset: 0x8, size: 0x8, def value: None
  ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* m_Property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies Unity.Properties.PropertyBag`1<TContainer>
namespace Unity::Properties {
// cpp template
template <typename TDictionary, typename TKey, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.KeyValueCollectionPropertyBag`3<TDictionary,TKey,TValue>
class CORDL_TYPE KeyValueCollectionPropertyBag_3 : public ::Unity::Properties::PropertyBag_1<TDictionary> {
public:
  // Declarations
  using Enumerable = ::Unity::Properties::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary, TKey, TValue>;

  using KeyValuePairProperty = ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>;

  /// @brief Field m_KeyValuePairProperty, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_KeyValuePairProperty,
                      put = __cordl_internal_set_m_KeyValuePairProperty)) ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* m_KeyValuePairProperty;

  /// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBagAccept_1<TDictionary>"
  constexpr operator ::Unity::Properties::ICollectionPropertyBagAccept_1<TDictionary>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBag_2<TDictionary,::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::Unity::Properties::ICollectionPropertyBag_2<TDictionary, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IDictionaryPropertyBagAccept_1<TDictionary>"
  constexpr operator ::Unity::Properties::IDictionaryPropertyBagAccept_1<TDictionary>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IDictionaryPropertyBag_3<TDictionary,TKey,TValue>"
  constexpr operator ::Unity::Properties::IDictionaryPropertyBag_3<TDictionary, TKey, TValue>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IKeyedProperties_2<TDictionary,::System::Object*>"
  constexpr operator ::Unity::Properties::IKeyedProperties_2<TDictionary, ::System::Object*>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag"
  constexpr operator ::Unity::Properties::IPropertyBag*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TDictionary>"
  constexpr operator ::Unity::Properties::IPropertyBag_1<TDictionary>*() noexcept;

  /// @brief Method GetProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::PropertyCollection_1<TDictionary> GetProperties();

  /// @brief Method GetProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::PropertyCollection_1<TDictionary> GetProperties(::ByRef<TDictionary> container);

  static inline ::Unity::Properties::KeyValueCollectionPropertyBag_3<TDictionary, TKey, TValue>* New_ctor();

  /// @brief Method Unity.Properties.ICollectionPropertyBagAccept<TDictionary>.Accept, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Unity_Properties_ICollectionPropertyBagAccept_TDictionary__Accept(::Unity::Properties::ICollectionPropertyBagVisitor* visitor, ::ByRef<TDictionary> container);

  /// @brief Method Unity.Properties.IDictionaryPropertyBagAccept<TDictionary>.Accept, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Unity_Properties_IDictionaryPropertyBagAccept_TDictionary__Accept(::Unity::Properties::IDictionaryPropertyBagVisitor* visitor, ::ByRef<TDictionary> container);

  /// @brief Method Unity.Properties.IKeyedProperties<TDictionary,System.Object>.TryGetProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Unity_Properties_IKeyedProperties_TDictionary_System_Object__TryGetProperty(::ByRef<TDictionary> container, ::System::Object* key,
                                                                                          ::ByRef<::Unity::Properties::IProperty_1<TDictionary>*> property);

  constexpr ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* const& __cordl_internal_get_m_KeyValuePairProperty() const;

  constexpr ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>*& __cordl_internal_get_m_KeyValuePairProperty();

  constexpr void __cordl_internal_set_m_KeyValuePairProperty(::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Properties::ICollectionPropertyBagAccept_1<TDictionary>"
  constexpr ::Unity::Properties::ICollectionPropertyBagAccept_1<TDictionary>* i___Unity__Properties__ICollectionPropertyBagAccept_1_TDictionary_() noexcept;

  /// @brief Convert to "::Unity::Properties::ICollectionPropertyBag_2<TDictionary,::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::Unity::Properties::ICollectionPropertyBag_2<TDictionary, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___Unity__Properties__ICollectionPropertyBag_2_TDictionary___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert to "::Unity::Properties::IDictionaryPropertyBagAccept_1<TDictionary>"
  constexpr ::Unity::Properties::IDictionaryPropertyBagAccept_1<TDictionary>* i___Unity__Properties__IDictionaryPropertyBagAccept_1_TDictionary_() noexcept;

  /// @brief Convert to "::Unity::Properties::IDictionaryPropertyBag_3<TDictionary,TKey,TValue>"
  constexpr ::Unity::Properties::IDictionaryPropertyBag_3<TDictionary, TKey, TValue>* i___Unity__Properties__IDictionaryPropertyBag_3_TDictionary_TKey_TValue_() noexcept;

  /// @brief Convert to "::Unity::Properties::IKeyedProperties_2<TDictionary,::System::Object*>"
  constexpr ::Unity::Properties::IKeyedProperties_2<TDictionary, ::System::Object*>* i___Unity__Properties__IKeyedProperties_2_TDictionary___System__Object__() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag"
  constexpr ::Unity::Properties::IPropertyBag* i___Unity__Properties__IPropertyBag() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag_1<TDictionary>"
  constexpr ::Unity::Properties::IPropertyBag_1<TDictionary>* i___Unity__Properties__IPropertyBag_1_TDictionary_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyValueCollectionPropertyBag_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyValueCollectionPropertyBag_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyValueCollectionPropertyBag_3(KeyValueCollectionPropertyBag_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyValueCollectionPropertyBag_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyValueCollectionPropertyBag_3(KeyValueCollectionPropertyBag_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19352 };

  /// @brief Field m_KeyValuePairProperty, offset: 0x18, size: 0x8, def value: None
  ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary, TKey, TValue>* ___m_KeyValuePairProperty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator, "Unity.Properties", "KeyValueCollectionPropertyBag`3/Enumerable/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::KeyValueCollectionPropertyBag_3, "Unity.Properties", "KeyValueCollectionPropertyBag`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty, "Unity.Properties", "KeyValueCollectionPropertyBag`3/KeyValuePairProperty");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Properties::KeyValueCollectionPropertyBag_3_Enumerable, "Unity.Properties", "KeyValueCollectionPropertyBag`3/Enumerable");
