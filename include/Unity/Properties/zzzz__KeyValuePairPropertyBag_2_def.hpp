#pragma once
// IWYU pragma private; include "Unity/Properties/KeyValuePairPropertyBag_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyValuePairPropertyBag_2)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
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
template <typename TContainer, typename TValue> class DelegateProperty_2;
}
namespace Unity::Properties {
template <typename TContainer> class INamedProperties_1;
}
namespace Unity::Properties {
template <typename TContainer> class IProperty_1;
}
namespace Unity::Properties {
template <typename TKey, typename TValue> class KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4;
}
namespace Unity::Properties {
template <typename TKey, typename TValue> class KeyValuePairPropertyBag_2___c;
}
namespace Unity::Properties {
template <typename TContainer> struct PropertyCollection_1;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TKey, typename TValue> class KeyValuePairPropertyBag_2;
}
namespace Unity::Properties {
template <typename TKey, typename TValue> class KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4;
}
namespace Unity::Properties {
template <typename TKey, typename TValue> class KeyValuePairPropertyBag_2___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::KeyValuePairPropertyBag_2);
MARK_GEN_REF_PTR_T(::Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4);
MARK_GEN_REF_PTR_T(::Unity::Properties::KeyValuePairPropertyBag_2___c);
// Dependencies System.Object
namespace Unity::Properties {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.KeyValuePairPropertyBag`2/<>c<TKey,TValue>
class CORDL_TYPE KeyValuePairPropertyBag_2___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>* __9;

  static inline ::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>* New_ctor();

  /// @brief Method <.cctor>b__7_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey __cctor_b__7_0(::ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> container);

  /// @brief Method <.cctor>b__7_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue __cctor_b__7_1(::ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> container);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>* getStaticF___9();

  static inline void setStaticF___9(::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyValuePairPropertyBag_2___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyValuePairPropertyBag_2___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyValuePairPropertyBag_2___c(KeyValuePairPropertyBag_2___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyValuePairPropertyBag_2___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyValuePairPropertyBag_2___c(KeyValuePairPropertyBag_2___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19353 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies System.Object
namespace Unity::Properties {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.KeyValuePairPropertyBag`2/<GetPropertiesEnumerable>d__4<TKey,TValue>
class CORDL_TYPE KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Unity_Properties_IProperty_System_Collections_Generic_KeyValuePair_TKey_TValue____get_Current)) ::Unity::Properties::IProperty_1<
      ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* System_Collections_Generic_IEnumerator_Unity_Properties_IProperty_System_Collections_Generic_KeyValuePair_TKey_TValue____Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current,
                      put = __cordl_internal_set___2__current)) ::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Unity.Properties.IProperty<System.Collections.Generic.KeyValuePair<TKey,TValue>>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual
  /// true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>*
  System_Collections_Generic_IEnumerable_Unity_Properties_IProperty_System_Collections_Generic_KeyValuePair_TKey_TValue____GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Unity.Properties.IProperty<System.Collections.Generic.KeyValuePair<TKey,TValue>>>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual
  /// true, abstract: false, final true
  inline ::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  System_Collections_Generic_IEnumerator_Unity_Properties_IProperty_System_Collections_Generic_KeyValuePair_TKey_TValue____get_Current();

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

  constexpr ::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* const& __cordl_internal_get___2__current() const;

  constexpr ::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*& __cordl_internal_get___2__current();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>*
  i___System__Collections__Generic__IEnumerable_1___Unity__Properties__IProperty_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue____() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>*
  i___System__Collections__Generic__IEnumerator_1___Unity__Properties__IProperty_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue____() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4(KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4(KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19354 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies System.Collections.Generic.KeyValuePair`2<TKey, TValue>, Unity.Properties.PropertyBag`1<TContainer>
namespace Unity::Properties {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.KeyValuePairPropertyBag`2<TKey,TValue>
class CORDL_TYPE KeyValuePairPropertyBag_2 : public ::Unity::Properties::PropertyBag_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> {
public:
  // Declarations
  using _GetPropertiesEnumerable_d__4 = ::Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4<TKey, TValue>;

  using __c = ::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>;

  /// @brief Field s_KeyProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_KeyProperty,
                      put = setStaticF_s_KeyProperty)) ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>* s_KeyProperty;

  /// @brief Field s_ValueProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ValueProperty,
                      put = setStaticF_s_ValueProperty)) ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>* s_ValueProperty;

  /// @brief Convert operator to "::Unity::Properties::INamedProperties_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::Unity::Properties::INamedProperties_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Method GetProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::PropertyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> GetProperties();

  /// @brief Method GetProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::PropertyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>
  GetProperties(::ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> container);

  /// @brief Method GetPropertiesEnumerable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>* GetPropertiesEnumerable();

  static inline ::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>* New_ctor();

  /// @brief Method TryGetProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool TryGetProperty(::ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> container, ::StringW name,
                             ::ByRef<::Unity::Properties::IProperty_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> property);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>* getStaticF_s_KeyProperty();

  static inline ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>* getStaticF_s_ValueProperty();

  /// @brief Convert to "::Unity::Properties::INamedProperties_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::Unity::Properties::INamedProperties_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___Unity__Properties__INamedProperties_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  static inline void setStaticF_s_KeyProperty(::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>* value);

  static inline void setStaticF_s_ValueProperty(::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyValuePairPropertyBag_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyValuePairPropertyBag_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyValuePairPropertyBag_2(KeyValuePairPropertyBag_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyValuePairPropertyBag_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyValuePairPropertyBag_2(KeyValuePairPropertyBag_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19355 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::KeyValuePairPropertyBag_2, "Unity.Properties", "KeyValuePairPropertyBag`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::KeyValuePairPropertyBag_2__GetPropertiesEnumerable_d__4, "Unity.Properties", "KeyValuePairPropertyBag`2/<GetPropertiesEnumerable>d__4");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::KeyValuePairPropertyBag_2___c, "Unity.Properties", "KeyValuePairPropertyBag`2/<>c");
