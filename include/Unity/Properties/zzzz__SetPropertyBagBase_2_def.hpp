#pragma once
// IWYU pragma private; include "Unity/Properties/SetPropertyBagBase_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SetPropertyBagBase_2)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
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
template <typename TContainer> class ICollectionPropertyBagAccept_1;
}
namespace Unity::Properties {
class ICollectionPropertyBagVisitor;
}
namespace Unity::Properties {
template <typename TCollection, typename TElement> class ICollectionPropertyBag_2;
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
class ISetElementProperty;
}
namespace Unity::Properties {
template <typename TContainer> class ISetPropertyBagAccept_1;
}
namespace Unity::Properties {
class ISetPropertyBagVisitor;
}
namespace Unity::Properties {
template <typename TSet, typename TElement> class ISetPropertyBag_2;
}
namespace Unity::Properties {
template <typename TContainer> struct PropertyCollection_1;
}
namespace Unity::Properties {
template <typename TSet, typename TElement> class SetPropertyBagBase_2_SetElementProperty;
}
namespace Unity::Properties {
template <typename TSet, typename TElement> class SetPropertyBagBase_2__GetPropertiesEnumerable_d__4;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TSet, typename TElement> class SetPropertyBagBase_2;
}
namespace Unity::Properties {
template <typename TSet, typename TElement> class SetPropertyBagBase_2_SetElementProperty;
}
namespace Unity::Properties {
template <typename TSet, typename TElement> class SetPropertyBagBase_2__GetPropertiesEnumerable_d__4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::SetPropertyBagBase_2);
MARK_GEN_REF_PTR_T(::Unity::Properties::SetPropertyBagBase_2_SetElementProperty);
MARK_GEN_REF_PTR_T(::Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4);
// Dependencies Unity.Properties.Property`2<TContainer, TValue>
namespace Unity::Properties {
// cpp template
template <typename TSet, typename TElement>
// Is value type: false
// CS Name: Unity.Properties.SetPropertyBagBase`2/SetElementProperty<TSet,TElement>
class CORDL_TYPE SetPropertyBagBase_2_SetElementProperty : public ::Unity::Properties::Property_2<TSet, TElement> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ObjectKey)) ::System::Object* ObjectKey;

  /// @brief Field m_Value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) TElement m_Value;

  /// @brief Convert operator to "::Unity::Properties::ISetElementProperty"
  constexpr operator ::Unity::Properties::ISetElementProperty*() noexcept;

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TElement GetValue(::ByRef<TSet> container);

  static inline ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>* New_ctor();

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<TSet> container, TElement value);

  constexpr TElement const& __cordl_internal_get_m_Value() const;

  constexpr TElement& __cordl_internal_get_m_Value();

  constexpr void __cordl_internal_set_m_Value(TElement value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ObjectKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* get_ObjectKey();

  /// @brief Convert to "::Unity::Properties::ISetElementProperty"
  constexpr ::Unity::Properties::ISetElementProperty* i___Unity__Properties__ISetElementProperty() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetPropertyBagBase_2_SetElementProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetPropertyBagBase_2_SetElementProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetPropertyBagBase_2_SetElementProperty(SetPropertyBagBase_2_SetElementProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetPropertyBagBase_2_SetElementProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetPropertyBagBase_2_SetElementProperty(SetPropertyBagBase_2_SetElementProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19362 };

  /// @brief Field m_Value, offset: 0x18, size: 0x8, def value: None
  TElement ___m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies System.Object
namespace Unity::Properties {
// cpp template
template <typename TSet, typename TElement>
// Is value type: false
// CS Name: Unity.Properties.SetPropertyBagBase`2/<GetPropertiesEnumerable>d__4<TSet,TElement>
class CORDL_TYPE SetPropertyBagBase_2__GetPropertiesEnumerable_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Unity_Properties_IProperty_TSet___get_Current)) ::Unity::Properties::IProperty_1<TSet>*
      System_Collections_Generic_IEnumerator_Unity_Properties_IProperty_TSet___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::Unity::Properties::IProperty_1<TSet>* __2__current;

  /// @brief Field <>3__container, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__container, put = __cordl_internal_set___3__container)) TSet __3__container;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>s__1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___s__1, put = __cordl_internal_set___s__1)) ::System::Collections::Generic::IEnumerator_1<TElement>* __s__1;

  /// @brief Field <element>5__2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__element_5__2, put = __cordl_internal_set__element_5__2)) TElement _element_5__2;

  /// @brief Field container, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container)) TSet container;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TSet>*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TSet>*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TSet>*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TSet>*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Unity.Properties.IProperty<TSet>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TSet>*>* System_Collections_Generic_IEnumerable_Unity_Properties_IProperty_TSet___GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Unity.Properties.IProperty<TSet>>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Properties::IProperty_1<TSet>* System_Collections_Generic_IEnumerator_Unity_Properties_IProperty_TSet___get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Unity::Properties::IProperty_1<TSet>* const& __cordl_internal_get___2__current() const;

  constexpr ::Unity::Properties::IProperty_1<TSet>*& __cordl_internal_get___2__current();

  constexpr TSet const& __cordl_internal_get___3__container() const;

  constexpr TSet& __cordl_internal_get___3__container();

  constexpr ::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>* const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerator_1<TElement>* const& __cordl_internal_get___s__1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<TElement>*& __cordl_internal_get___s__1();

  constexpr TElement const& __cordl_internal_get__element_5__2() const;

  constexpr TElement& __cordl_internal_get__element_5__2();

  constexpr TSet const& __cordl_internal_get_container() const;

  constexpr TSet& __cordl_internal_get_container();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Unity::Properties::IProperty_1<TSet>* value);

  constexpr void __cordl_internal_set___3__container(TSet value);

  constexpr void __cordl_internal_set___4__this(::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set___s__1(::System::Collections::Generic::IEnumerator_1<TElement>* value);

  constexpr void __cordl_internal_set__element_5__2(TElement value);

  constexpr void __cordl_internal_set_container(TSet value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TSet>*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TSet>*>* i___System__Collections__Generic__IEnumerable_1___Unity__Properties__IProperty_1_TSet___() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TSet>*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TSet>*>* i___System__Collections__Generic__IEnumerator_1___Unity__Properties__IProperty_1_TSet___() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetPropertyBagBase_2__GetPropertiesEnumerable_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetPropertyBagBase_2__GetPropertiesEnumerable_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetPropertyBagBase_2__GetPropertiesEnumerable_d__4(SetPropertyBagBase_2__GetPropertiesEnumerable_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetPropertyBagBase_2__GetPropertiesEnumerable_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetPropertyBagBase_2__GetPropertiesEnumerable_d__4(SetPropertyBagBase_2__GetPropertiesEnumerable_d__4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19363 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Unity::Properties::IProperty_1<TSet>* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field container, offset: 0x28, size: 0x8, def value: None
  TSet ___container;

  /// @brief Field <>3__container, offset: 0x30, size: 0x8, def value: None
  TSet _____3__container;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>* _____4__this;

  /// @brief Field <>s__1, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TElement>* _____s__1;

  /// @brief Field <element>5__2, offset: 0x48, size: 0x8, def value: None
  TElement ____element_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies Unity.Properties.PropertyBag`1<TContainer>
namespace Unity::Properties {
// cpp template
template <typename TSet, typename TElement>
// Is value type: false
// CS Name: Unity.Properties.SetPropertyBagBase`2<TSet,TElement>
class CORDL_TYPE SetPropertyBagBase_2 : public ::Unity::Properties::PropertyBag_1<TSet> {
public:
  // Declarations
  using SetElementProperty = ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>;

  using _GetPropertiesEnumerable_d__4 = ::Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4<TSet, TElement>;

  /// @brief Field m_Property, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Property, put = __cordl_internal_set_m_Property)) ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>* m_Property;

  /// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>"
  constexpr operator ::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBag_2<TSet,TElement>"
  constexpr operator ::Unity::Properties::ICollectionPropertyBag_2<TSet, TElement>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IKeyedProperties_2<TSet,::System::Object*>"
  constexpr operator ::Unity::Properties::IKeyedProperties_2<TSet, ::System::Object*>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag"
  constexpr operator ::Unity::Properties::IPropertyBag*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TSet>"
  constexpr operator ::Unity::Properties::IPropertyBag_1<TSet>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::ISetPropertyBagAccept_1<TSet>"
  constexpr operator ::Unity::Properties::ISetPropertyBagAccept_1<TSet>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::ISetPropertyBag_2<TSet,TElement>"
  constexpr operator ::Unity::Properties::ISetPropertyBag_2<TSet, TElement>*() noexcept;

  /// @brief Method GetProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::PropertyCollection_1<TSet> GetProperties();

  /// @brief Method GetProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::PropertyCollection_1<TSet> GetProperties(::ByRef<TSet> container);

  /// @brief Method GetPropertiesEnumerable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TSet>*>* GetPropertiesEnumerable(TSet container);

  static inline ::Unity::Properties::SetPropertyBagBase_2<TSet, TElement>* New_ctor();

  /// @brief Method TryGetProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool TryGetProperty(::ByRef<TSet> container, ::System::Object* key, ::ByRef<::Unity::Properties::IProperty_1<TSet>*> property);

  /// @brief Method Unity.Properties.ICollectionPropertyBagAccept<TSet>.Accept, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Unity_Properties_ICollectionPropertyBagAccept_TSet__Accept(::Unity::Properties::ICollectionPropertyBagVisitor* visitor, ::ByRef<TSet> container);

  /// @brief Method Unity.Properties.ISetPropertyBagAccept<TSet>.Accept, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Unity_Properties_ISetPropertyBagAccept_TSet__Accept(::Unity::Properties::ISetPropertyBagVisitor* visitor, ::ByRef<TSet> container);

  constexpr ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>* const& __cordl_internal_get_m_Property() const;

  constexpr ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>*& __cordl_internal_get_m_Property();

  constexpr void __cordl_internal_set_m_Property(::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>"
  constexpr ::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>* i___Unity__Properties__ICollectionPropertyBagAccept_1_TSet_() noexcept;

  /// @brief Convert to "::Unity::Properties::ICollectionPropertyBag_2<TSet,TElement>"
  constexpr ::Unity::Properties::ICollectionPropertyBag_2<TSet, TElement>* i___Unity__Properties__ICollectionPropertyBag_2_TSet_TElement_() noexcept;

  /// @brief Convert to "::Unity::Properties::IKeyedProperties_2<TSet,::System::Object*>"
  constexpr ::Unity::Properties::IKeyedProperties_2<TSet, ::System::Object*>* i___Unity__Properties__IKeyedProperties_2_TSet___System__Object__() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag"
  constexpr ::Unity::Properties::IPropertyBag* i___Unity__Properties__IPropertyBag() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag_1<TSet>"
  constexpr ::Unity::Properties::IPropertyBag_1<TSet>* i___Unity__Properties__IPropertyBag_1_TSet_() noexcept;

  /// @brief Convert to "::Unity::Properties::ISetPropertyBagAccept_1<TSet>"
  constexpr ::Unity::Properties::ISetPropertyBagAccept_1<TSet>* i___Unity__Properties__ISetPropertyBagAccept_1_TSet_() noexcept;

  /// @brief Convert to "::Unity::Properties::ISetPropertyBag_2<TSet,TElement>"
  constexpr ::Unity::Properties::ISetPropertyBag_2<TSet, TElement>* i___Unity__Properties__ISetPropertyBag_2_TSet_TElement_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetPropertyBagBase_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetPropertyBagBase_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetPropertyBagBase_2(SetPropertyBagBase_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetPropertyBagBase_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetPropertyBagBase_2(SetPropertyBagBase_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19364 };

  /// @brief Field m_Property, offset: 0x18, size: 0x8, def value: None
  ::Unity::Properties::SetPropertyBagBase_2_SetElementProperty<TSet, TElement>* ___m_Property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::SetPropertyBagBase_2, "Unity.Properties", "SetPropertyBagBase`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::SetPropertyBagBase_2_SetElementProperty, "Unity.Properties", "SetPropertyBagBase`2/SetElementProperty");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::SetPropertyBagBase_2__GetPropertiesEnumerable_d__4, "Unity.Properties", "SetPropertyBagBase`2/<GetPropertiesEnumerable>d__4");
