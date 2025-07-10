#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/ReflectedPropertyBagProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectedPropertyBagProvider)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
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
class IEnumerator;
}
namespace System::Linq {
template <typename TElement> class IOrderedEnumerable_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Unity::Properties::Internal {
class ReflectedPropertyBagProvider__GetPropertyMembers_d__22;
}
namespace Unity::Properties::Internal {
class ReflectedPropertyBagProvider___c;
}
namespace Unity::Properties::Internal {
template <typename TContainer> class ReflectedPropertyBag_1;
}
namespace Unity::Properties {
class IMemberInfo;
}
namespace Unity::Properties {
template <typename TContainer> class IPropertyBag_1;
}
namespace Unity::Properties {
class IPropertyBag;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class ReflectedPropertyBagProvider;
}
namespace Unity::Properties::Internal {
class ReflectedPropertyBagProvider__GetPropertyMembers_d__22;
}
namespace Unity::Properties::Internal {
class ReflectedPropertyBagProvider___c;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::ReflectedPropertyBagProvider);
MARK_REF_PTR_T(::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22);
MARK_REF_PTR_T(::Unity::Properties::Internal::ReflectedPropertyBagProvider___c);
// Dependencies System.Object
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.ReflectedPropertyBagProvider/<>c
class CORDL_TYPE ReflectedPropertyBagProvider___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Unity::Properties::Internal::ReflectedPropertyBagProvider___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0)) ::System::Func_2<::System::Reflection::MethodInfo*, bool>* __9__10_0;

  /// @brief Field <>9__22_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_0, put = setStaticF___9__22_0)) ::System::Func_2<::System::Reflection::MemberInfo*, int32_t>* __9__22_0;

  static inline ::Unity::Properties::Internal::ReflectedPropertyBagProvider___c* New_ctor();

  /// @brief Method <GetPropertyMembers>b__22_0, addr 0x4917f70, size 0x28, virtual false, abstract: false, final false
  inline int32_t _GetPropertyMembers_b__22_0(::System::Reflection::MemberInfo* x);

  /// @brief Method <.ctor>b__10_0, addr 0x4917ee8, size 0x88, virtual false, abstract: false, final false
  inline bool __ctor_b__10_0(::System::Reflection::MethodInfo* x);

  /// @brief Method .ctor, addr 0x4917ee0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Properties::Internal::ReflectedPropertyBagProvider___c* getStaticF___9();

  static inline ::System::Func_2<::System::Reflection::MethodInfo*, bool>* getStaticF___9__10_0();

  static inline ::System::Func_2<::System::Reflection::MemberInfo*, int32_t>* getStaticF___9__22_0();

  static inline void setStaticF___9(::Unity::Properties::Internal::ReflectedPropertyBagProvider___c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::System::Reflection::MethodInfo*, bool>* value);

  static inline void setStaticF___9__22_0(::System::Func_2<::System::Reflection::MemberInfo*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectedPropertyBagProvider___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectedPropertyBagProvider___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectedPropertyBagProvider___c(ReflectedPropertyBagProvider___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectedPropertyBagProvider___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectedPropertyBagProvider___c(ReflectedPropertyBagProvider___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17547 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::ReflectedPropertyBagProvider___c, 0x10>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.ReflectedPropertyBagProvider/<GetPropertyMembers>d__22
class CORDL_TYPE ReflectedPropertyBagProvider__GetPropertyMembers_d__22 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Reflection_MemberInfo__get_Current)) ::System::Reflection::MemberInfo*
      System_Collections_Generic_IEnumerator_System_Reflection_MemberInfo__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Reflection::MemberInfo* __2__current;

  /// @brief Field <>3__type, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__type, put = __cordl_internal_set___3__type)) ::System::Type* __3__type;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>s__2, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___s__2, put = __cordl_internal_set___s__2)) ::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>* __s__2;

  /// @brief Field <field>5__8, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__field_5__8, put = __cordl_internal_set__field_5__8)) ::System::Reflection::FieldInfo* _field_5__8;

  /// @brief Field <hasCreatePropertyAttribute>5__5, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__hasCreatePropertyAttribute_5__5, put = __cordl_internal_set__hasCreatePropertyAttribute_5__5)) bool _hasCreatePropertyAttribute_5__5;

  /// @brief Field <hasDontCreatePropertyAttribute>5__4, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__hasDontCreatePropertyAttribute_5__4, put = __cordl_internal_set__hasDontCreatePropertyAttribute_5__4)) bool _hasDontCreatePropertyAttribute_5__4;

  /// @brief Field <hasNonSerializedAttribute>5__6, offset 0x52, size 0x1
  __declspec(property(get = __cordl_internal_get__hasNonSerializedAttribute_5__6, put = __cordl_internal_set__hasNonSerializedAttribute_5__6)) bool _hasNonSerializedAttribute_5__6;

  /// @brief Field <hasSerializedFieldAttribute>5__7, offset 0x53, size 0x1
  __declspec(property(get = __cordl_internal_get__hasSerializedFieldAttribute_5__7, put = __cordl_internal_set__hasSerializedFieldAttribute_5__7)) bool _hasSerializedFieldAttribute_5__7;

  /// @brief Field <member>5__3, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__member_5__3, put = __cordl_internal_set__member_5__3)) ::System::Reflection::MemberInfo* _member_5__3;

  /// @brief Field <members>5__1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__members_5__1, put = __cordl_internal_set__members_5__1)) ::System::Linq::IOrderedEnumerable_1<::System::Reflection::MemberInfo*>* _members_5__1;

  /// @brief Field type, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x4917fc4, size 0x718, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator, addr 0x49187d4, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>* System_Collections_Generic_IEnumerable_System_Reflection_MemberInfo__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Reflection.MemberInfo>.get_Current, addr 0x491878c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Reflection::MemberInfo* System_Collections_Generic_IEnumerator_System_Reflection_MemberInfo__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x4918870, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4918794, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x49187cc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4917f98, size 0x2c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Reflection::MemberInfo* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get___2__current();

  constexpr ::System::Type* const& __cordl_internal_get___3__type() const;

  constexpr ::System::Type*& __cordl_internal_get___3__type();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>* const& __cordl_internal_get___s__2() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>*& __cordl_internal_get___s__2();

  constexpr ::System::Reflection::FieldInfo* const& __cordl_internal_get__field_5__8() const;

  constexpr ::System::Reflection::FieldInfo*& __cordl_internal_get__field_5__8();

  constexpr bool const& __cordl_internal_get__hasCreatePropertyAttribute_5__5() const;

  constexpr bool& __cordl_internal_get__hasCreatePropertyAttribute_5__5();

  constexpr bool const& __cordl_internal_get__hasDontCreatePropertyAttribute_5__4() const;

  constexpr bool& __cordl_internal_get__hasDontCreatePropertyAttribute_5__4();

  constexpr bool const& __cordl_internal_get__hasNonSerializedAttribute_5__6() const;

  constexpr bool& __cordl_internal_get__hasNonSerializedAttribute_5__6();

  constexpr bool const& __cordl_internal_get__hasSerializedFieldAttribute_5__7() const;

  constexpr bool& __cordl_internal_get__hasSerializedFieldAttribute_5__7();

  constexpr ::System::Reflection::MemberInfo* const& __cordl_internal_get__member_5__3() const;

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get__member_5__3();

  constexpr ::System::Linq::IOrderedEnumerable_1<::System::Reflection::MemberInfo*>* const& __cordl_internal_get__members_5__1() const;

  constexpr ::System::Linq::IOrderedEnumerable_1<::System::Reflection::MemberInfo*>*& __cordl_internal_get__members_5__1();

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Reflection::MemberInfo* value);

  constexpr void __cordl_internal_set___3__type(::System::Type* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set___s__2(::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>* value);

  constexpr void __cordl_internal_set__field_5__8(::System::Reflection::FieldInfo* value);

  constexpr void __cordl_internal_set__hasCreatePropertyAttribute_5__5(bool value);

  constexpr void __cordl_internal_set__hasDontCreatePropertyAttribute_5__4(bool value);

  constexpr void __cordl_internal_set__hasNonSerializedAttribute_5__6(bool value);

  constexpr void __cordl_internal_set__hasSerializedFieldAttribute_5__7(bool value);

  constexpr void __cordl_internal_set__member_5__3(::System::Reflection::MemberInfo* value);

  constexpr void __cordl_internal_set__members_5__1(::System::Linq::IOrderedEnumerable_1<::System::Reflection::MemberInfo*>* value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method <>m__Finally1, addr 0x49186dc, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x4917c24, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* i___System__Collections__Generic__IEnumerable_1___System__Reflection__MemberInfo__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>* i___System__Collections__Generic__IEnumerator_1___System__Reflection__MemberInfo__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectedPropertyBagProvider__GetPropertyMembers_d__22();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectedPropertyBagProvider__GetPropertyMembers_d__22", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectedPropertyBagProvider__GetPropertyMembers_d__22(ReflectedPropertyBagProvider__GetPropertyMembers_d__22&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectedPropertyBagProvider__GetPropertyMembers_d__22", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectedPropertyBagProvider__GetPropertyMembers_d__22(ReflectedPropertyBagProvider__GetPropertyMembers_d__22 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17548 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field type, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field <>3__type, offset: 0x30, size: 0x8, def value: None
  ::System::Type* _____3__type;

  /// @brief Field <members>5__1, offset: 0x38, size: 0x8, def value: None
  ::System::Linq::IOrderedEnumerable_1<::System::Reflection::MemberInfo*>* ____members_5__1;

  /// @brief Field <>s__2, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>* _____s__2;

  /// @brief Field <member>5__3, offset: 0x48, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ____member_5__3;

  /// @brief Field <hasDontCreatePropertyAttribute>5__4, offset: 0x50, size: 0x1, def value: None
  bool ____hasDontCreatePropertyAttribute_5__4;

  /// @brief Field <hasCreatePropertyAttribute>5__5, offset: 0x51, size: 0x1, def value: None
  bool ____hasCreatePropertyAttribute_5__5;

  /// @brief Field <hasNonSerializedAttribute>5__6, offset: 0x52, size: 0x1, def value: None
  bool ____hasNonSerializedAttribute_5__6;

  /// @brief Field <hasSerializedFieldAttribute>5__7, offset: 0x53, size: 0x1, def value: None
  bool ____hasSerializedFieldAttribute_5__7;

  /// @brief Field <field>5__8, offset: 0x58, size: 0x8, def value: None
  ::System::Reflection::FieldInfo* ____field_5__8;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22, ___type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22, _____3__type) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22, ____members_5__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22, _____s__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22, ____member_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22, ____hasDontCreatePropertyAttribute_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22, ____hasCreatePropertyAttribute_5__5) == 0x51, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22, ____hasNonSerializedAttribute_5__6) == 0x52, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22, ____hasSerializedFieldAttribute_5__7) == 0x53, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22, ____field_5__8) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22, 0x60>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies System.Object
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.ReflectedPropertyBagProvider
class CORDL_TYPE ReflectedPropertyBagProvider : public ::System::Object {
public:
  // Declarations
  using _GetPropertyMembers_d__22 = ::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22;

  using __c = ::Unity::Properties::Internal::ReflectedPropertyBagProvider___c;

  /// @brief Field m_CreateArrayPropertyBagMethod, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CreateArrayPropertyBagMethod,
                      put = __cordl_internal_set_m_CreateArrayPropertyBagMethod)) ::System::Reflection::MethodInfo* m_CreateArrayPropertyBagMethod;

  /// @brief Field m_CreateDictionaryPropertyBagMethod, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CreateDictionaryPropertyBagMethod,
                      put = __cordl_internal_set_m_CreateDictionaryPropertyBagMethod)) ::System::Reflection::MethodInfo* m_CreateDictionaryPropertyBagMethod;

  /// @brief Field m_CreateHashSetPropertyBagMethod, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CreateHashSetPropertyBagMethod,
                      put = __cordl_internal_set_m_CreateHashSetPropertyBagMethod)) ::System::Reflection::MethodInfo* m_CreateHashSetPropertyBagMethod;

  /// @brief Field m_CreateIndexedCollectionPropertyBagMethod, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CreateIndexedCollectionPropertyBagMethod,
                      put = __cordl_internal_set_m_CreateIndexedCollectionPropertyBagMethod)) ::System::Reflection::MethodInfo* m_CreateIndexedCollectionPropertyBagMethod;

  /// @brief Field m_CreateKeyValueCollectionPropertyBagMethod, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CreateKeyValueCollectionPropertyBagMethod,
                      put = __cordl_internal_set_m_CreateKeyValueCollectionPropertyBagMethod)) ::System::Reflection::MethodInfo* m_CreateKeyValueCollectionPropertyBagMethod;

  /// @brief Field m_CreateKeyValuePairPropertyBagMethod, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CreateKeyValuePairPropertyBagMethod,
                      put = __cordl_internal_set_m_CreateKeyValuePairPropertyBagMethod)) ::System::Reflection::MethodInfo* m_CreateKeyValuePairPropertyBagMethod;

  /// @brief Field m_CreateListPropertyBagMethod, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CreateListPropertyBagMethod,
                      put = __cordl_internal_set_m_CreateListPropertyBagMethod)) ::System::Reflection::MethodInfo* m_CreateListPropertyBagMethod;

  /// @brief Field m_CreatePropertyBagMethod, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CreatePropertyBagMethod, put = __cordl_internal_set_m_CreatePropertyBagMethod)) ::System::Reflection::MethodInfo* m_CreatePropertyBagMethod;

  /// @brief Field m_CreatePropertyMethod, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CreatePropertyMethod, put = __cordl_internal_set_m_CreatePropertyMethod)) ::System::Reflection::MethodInfo* m_CreatePropertyMethod;

  /// @brief Field m_CreateSetPropertyBagMethod, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CreateSetPropertyBagMethod, put = __cordl_internal_set_m_CreateSetPropertyBagMethod)) ::System::Reflection::MethodInfo* m_CreateSetPropertyBagMethod;

  /// @brief Method CreateArrayPropertyBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TElement> inline ::Unity::Properties::IPropertyBag_1<::ArrayW<TElement, ::Array<TElement>*>>* CreateArrayPropertyBag();

  /// @brief Method CreateDictionaryPropertyBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> inline ::Unity::Properties::IPropertyBag_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>* CreateDictionaryPropertyBag();

  /// @brief Method CreateHashSetPropertyBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TElement> inline ::Unity::Properties::IPropertyBag_1<::System::Collections::Generic::HashSet_1<TElement>*>* CreateHashSetPropertyBag();

  /// @brief Method CreateIndexedCollectionPropertyBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TList, typename TElement> inline ::Unity::Properties::IPropertyBag_1<TList>* CreateIndexedCollectionPropertyBag();

  /// @brief Method CreateKeyValueCollectionPropertyBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDictionary, typename TKey, typename TValue> inline ::Unity::Properties::IPropertyBag_1<TDictionary>* CreateKeyValueCollectionPropertyBag();

  /// @brief Method CreateKeyValuePairPropertyBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> inline ::Unity::Properties::IPropertyBag_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* CreateKeyValuePairPropertyBag();

  /// @brief Method CreateListPropertyBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TElement> inline ::Unity::Properties::IPropertyBag_1<::System::Collections::Generic::List_1<TElement>*>* CreateListPropertyBag();

  /// @brief Method CreateProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContainer, typename TValue> inline void CreateProperty(::Unity::Properties::IMemberInfo* member, ::Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>* propertyBag);

  /// @brief Method CreatePropertyBag, addr 0x4917a88, size 0x124, virtual false, abstract: false, final false
  inline ::Unity::Properties::IPropertyBag* CreatePropertyBag(::System::Type* type);

  /// @brief Method CreatePropertyBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContainer> inline ::Unity::Properties::IPropertyBag_1<TContainer>* CreatePropertyBag();

  /// @brief Method CreateSetPropertyBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSet, typename TValue> inline ::Unity::Properties::IPropertyBag_1<TSet>* CreateSetPropertyBag();

  /// @brief Method GetPropertyMembers, addr 0x4917bb4, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* GetPropertyMembers(::System::Type* type);

  /// @brief Method IsValidMember, addr 0x4917c58, size 0x138, virtual false, abstract: false, final false
  static inline bool IsValidMember(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method IsValidPropertyType, addr 0x4917d90, size 0xf4, virtual false, abstract: false, final false
  static inline bool IsValidPropertyType(::System::Type* type);

  static inline ::Unity::Properties::Internal::ReflectedPropertyBagProvider* New_ctor();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_m_CreateArrayPropertyBagMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_m_CreateArrayPropertyBagMethod();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_m_CreateDictionaryPropertyBagMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_m_CreateDictionaryPropertyBagMethod();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_m_CreateHashSetPropertyBagMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_m_CreateHashSetPropertyBagMethod();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_m_CreateIndexedCollectionPropertyBagMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_m_CreateIndexedCollectionPropertyBagMethod();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_m_CreateKeyValueCollectionPropertyBagMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_m_CreateKeyValueCollectionPropertyBagMethod();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_m_CreateKeyValuePairPropertyBagMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_m_CreateKeyValuePairPropertyBagMethod();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_m_CreateListPropertyBagMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_m_CreateListPropertyBagMethod();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_m_CreatePropertyBagMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_m_CreatePropertyBagMethod();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_m_CreatePropertyMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_m_CreatePropertyMethod();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_m_CreateSetPropertyBagMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_m_CreateSetPropertyBagMethod();

  constexpr void __cordl_internal_set_m_CreateArrayPropertyBagMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_m_CreateDictionaryPropertyBagMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_m_CreateHashSetPropertyBagMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_m_CreateIndexedCollectionPropertyBagMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_m_CreateKeyValueCollectionPropertyBagMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_m_CreateKeyValuePairPropertyBagMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_m_CreateListPropertyBagMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_m_CreatePropertyBagMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_m_CreatePropertyMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_m_CreateSetPropertyBagMethod(::System::Reflection::MethodInfo* value);

  /// @brief Method .ctor, addr 0x49176f8, size 0x390, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectedPropertyBagProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectedPropertyBagProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectedPropertyBagProvider(ReflectedPropertyBagProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectedPropertyBagProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectedPropertyBagProvider(ReflectedPropertyBagProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17549 };

  /// @brief Field m_CreatePropertyMethod, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___m_CreatePropertyMethod;

  /// @brief Field m_CreatePropertyBagMethod, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___m_CreatePropertyBagMethod;

  /// @brief Field m_CreateIndexedCollectionPropertyBagMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___m_CreateIndexedCollectionPropertyBagMethod;

  /// @brief Field m_CreateSetPropertyBagMethod, offset: 0x28, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___m_CreateSetPropertyBagMethod;

  /// @brief Field m_CreateKeyValueCollectionPropertyBagMethod, offset: 0x30, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___m_CreateKeyValueCollectionPropertyBagMethod;

  /// @brief Field m_CreateKeyValuePairPropertyBagMethod, offset: 0x38, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___m_CreateKeyValuePairPropertyBagMethod;

  /// @brief Field m_CreateArrayPropertyBagMethod, offset: 0x40, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___m_CreateArrayPropertyBagMethod;

  /// @brief Field m_CreateListPropertyBagMethod, offset: 0x48, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___m_CreateListPropertyBagMethod;

  /// @brief Field m_CreateHashSetPropertyBagMethod, offset: 0x50, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___m_CreateHashSetPropertyBagMethod;

  /// @brief Field m_CreateDictionaryPropertyBagMethod, offset: 0x58, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___m_CreateDictionaryPropertyBagMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider, ___m_CreatePropertyMethod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider, ___m_CreatePropertyBagMethod) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider, ___m_CreateIndexedCollectionPropertyBagMethod) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider, ___m_CreateSetPropertyBagMethod) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider, ___m_CreateKeyValueCollectionPropertyBagMethod) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider, ___m_CreateKeyValuePairPropertyBagMethod) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider, ___m_CreateArrayPropertyBagMethod) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider, ___m_CreateListPropertyBagMethod) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider, ___m_CreateHashSetPropertyBagMethod) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::Internal::ReflectedPropertyBagProvider, ___m_CreateDictionaryPropertyBagMethod) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::ReflectedPropertyBagProvider, 0x60>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::ReflectedPropertyBagProvider);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::ReflectedPropertyBagProvider*, "Unity.Properties.Internal", "ReflectedPropertyBagProvider");
NEED_NO_BOX(::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::ReflectedPropertyBagProvider__GetPropertyMembers_d__22*, "Unity.Properties.Internal", "ReflectedPropertyBagProvider/<GetPropertyMembers>d__22");
NEED_NO_BOX(::Unity::Properties::Internal::ReflectedPropertyBagProvider___c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::ReflectedPropertyBagProvider___c*, "Unity.Properties.Internal", "ReflectedPropertyBagProvider/<>c");
