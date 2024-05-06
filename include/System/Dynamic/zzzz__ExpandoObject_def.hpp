#pragma once
// IWYU pragma private; include "System/Dynamic/ExpandoObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExpandoObject)
namespace GlobalNamespace {
class __ExpandoObject__KeyCollection___GetEnumerator_d__15;
}
namespace GlobalNamespace {
class __ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6;
}
namespace GlobalNamespace {
class __ExpandoObject__MetaExpando____c__DisplayClass3_0;
}
namespace GlobalNamespace {
class __ExpandoObject__ValueCollection___GetEnumerator_d__15;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
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
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System::Dynamic {
class BindingRestrictions;
}
namespace System::Dynamic {
class DeleteMemberBinder;
}
namespace System::Dynamic {
class DynamicMetaObjectBinder;
}
namespace System::Dynamic {
class DynamicMetaObject;
}
namespace System::Dynamic {
class ExpandoClass;
}
namespace System::Dynamic {
class GetMemberBinder;
}
namespace System::Dynamic {
class IDynamicMetaObjectProvider;
}
namespace System::Dynamic {
class InvokeMemberBinder;
}
namespace System::Dynamic {
class SetMemberBinder;
}
namespace System::Dynamic {
class __ExpandoObject__ExpandoData;
}
namespace System::Dynamic {
class __ExpandoObject__KeyCollectionDebugView;
}
namespace System::Dynamic {
class __ExpandoObject__KeyCollection;
}
namespace System::Dynamic {
class __ExpandoObject__MetaExpando;
}
namespace System::Dynamic {
class __ExpandoObject__ValueCollectionDebugView;
}
namespace System::Dynamic {
class __ExpandoObject__ValueCollection;
}
namespace System::Dynamic {
class __ExpandoObject___GetExpandoEnumerator_d__51;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class __ExpandoObject__KeyCollection___GetEnumerator_d__15;
}
namespace GlobalNamespace {
class __ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6;
}
namespace GlobalNamespace {
class __ExpandoObject__MetaExpando____c__DisplayClass3_0;
}
namespace GlobalNamespace {
class __ExpandoObject__ValueCollection___GetEnumerator_d__15;
}
namespace System::Dynamic {
class ExpandoObject;
}
namespace System::Dynamic {
class __ExpandoObject__ExpandoData;
}
namespace System::Dynamic {
class __ExpandoObject__KeyCollection;
}
namespace System::Dynamic {
class __ExpandoObject__KeyCollectionDebugView;
}
namespace System::Dynamic {
class __ExpandoObject__MetaExpando;
}
namespace System::Dynamic {
class __ExpandoObject__ValueCollection;
}
namespace System::Dynamic {
class __ExpandoObject__ValueCollectionDebugView;
}
namespace System::Dynamic {
class __ExpandoObject___GetExpandoEnumerator_d__51;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__ExpandoObject__KeyCollection___GetEnumerator_d__15);
MARK_REF_PTR_T(::GlobalNamespace::__ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6);
MARK_REF_PTR_T(::GlobalNamespace::__ExpandoObject__MetaExpando____c__DisplayClass3_0);
MARK_REF_PTR_T(::GlobalNamespace::__ExpandoObject__ValueCollection___GetEnumerator_d__15);
MARK_REF_PTR_T(::System::Dynamic::ExpandoObject);
MARK_REF_PTR_T(::System::Dynamic::__ExpandoObject__ExpandoData);
MARK_REF_PTR_T(::System::Dynamic::__ExpandoObject__KeyCollection);
MARK_REF_PTR_T(::System::Dynamic::__ExpandoObject__KeyCollectionDebugView);
MARK_REF_PTR_T(::System::Dynamic::__ExpandoObject__MetaExpando);
MARK_REF_PTR_T(::System::Dynamic::__ExpandoObject__ValueCollection);
MARK_REF_PTR_T(::System::Dynamic::__ExpandoObject__ValueCollectionDebugView);
MARK_REF_PTR_T(::System::Dynamic::__ExpandoObject___GetExpandoEnumerator_d__51);
// Type: ::KeyCollectionDebugView
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::ExpandoObject::KeyCollectionDebugView*
class CORDL_TYPE __ExpandoObject__KeyCollectionDebugView : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpandoObject__KeyCollectionDebugView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__KeyCollectionDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExpandoObject__KeyCollectionDebugView(__ExpandoObject__KeyCollectionDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__KeyCollectionDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExpandoObject__KeyCollectionDebugView(__ExpandoObject__KeyCollectionDebugView const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::__ExpandoObject__KeyCollectionDebugView, 0x10>, "Size mismatch!");

} // namespace System::Dynamic
// Type: ::<GetEnumerator>d__15
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ExpandoObject::KeyCollection::<GetEnumerator>d__15*
class CORDL_TYPE __ExpandoObject__KeyCollection___GetEnumerator_d__15 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_String__get_Current))::StringW System_Collections_Generic_IEnumerator_System_String__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::StringW __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::System::Dynamic::__ExpandoObject__KeyCollection* __4__this;

  /// @brief Field <i>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  /// @brief Field <n>5__3, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__n_5__3, put = __cordl_internal_set__n_5__3)) int32_t _n_5__3;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2c518b8, size 0x14c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ExpandoObject__KeyCollection___GetEnumerator_d__15* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current, addr 0x2c51a34, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2c51a3c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2c51a7c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2c518b4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::StringW const& __cordl_internal_get___2__current() const;

  constexpr ::StringW& __cordl_internal_get___2__current();

  constexpr ::System::Dynamic::__ExpandoObject__KeyCollection*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::__ExpandoObject__KeyCollection*> const& __cordl_internal_get___4__this() const;

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr int32_t const& __cordl_internal_get__n_5__3() const;

  constexpr int32_t& __cordl_internal_get__n_5__3();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::StringW value);

  constexpr void __cordl_internal_set___4__this(::System::Dynamic::__ExpandoObject__KeyCollection* value);

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  constexpr void __cordl_internal_set__n_5__3(int32_t value);

  /// @brief Method .ctor, addr 0x2c5188c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpandoObject__KeyCollection___GetEnumerator_d__15();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__KeyCollection___GetEnumerator_d__15", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExpandoObject__KeyCollection___GetEnumerator_d__15(__ExpandoObject__KeyCollection___GetEnumerator_d__15&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__KeyCollection___GetEnumerator_d__15", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExpandoObject__KeyCollection___GetEnumerator_d__15(__ExpandoObject__KeyCollection___GetEnumerator_d__15 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::StringW _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Dynamic::__ExpandoObject__KeyCollection* _____4__this;

  /// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
  int32_t ____i_5__2;

  /// @brief Field <n>5__3, offset: 0x2c, size: 0x4, def value: None
  int32_t ____n_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ExpandoObject__KeyCollection___GetEnumerator_d__15, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__KeyCollection___GetEnumerator_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__KeyCollection___GetEnumerator_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__KeyCollection___GetEnumerator_d__15, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__KeyCollection___GetEnumerator_d__15, ____i_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__KeyCollection___GetEnumerator_d__15, ____n_5__3) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::KeyCollection
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::ExpandoObject::KeyCollection*
class CORDL_TYPE __ExpandoObject__KeyCollection : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__15 = ::GlobalNamespace::__ExpandoObject__KeyCollection___GetEnumerator_d__15;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  /// @brief Field _expando, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__expando, put = __cordl_internal_set__expando))::System::Dynamic::ExpandoObject* _expando;

  /// @brief Field _expandoCount, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__expandoCount, put = __cordl_internal_set__expandoCount)) int32_t _expandoCount;

  /// @brief Field _expandoData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__expandoData, put = __cordl_internal_set__expandoData))::System::Dynamic::__ExpandoObject__ExpandoData* _expandoData;

  /// @brief Field _expandoVersion, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__expandoVersion, put = __cordl_internal_set__expandoVersion)) int32_t _expandoVersion;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::StringW>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x2c503e8, size 0x28, virtual true, abstract: false, final true
  inline void Add(::StringW item);

  /// @brief Method CheckVersion, addr 0x2c50388, size 0x60, virtual false, abstract: false, final false
  inline void CheckVersion();

  /// @brief Method Clear, addr 0x2c50410, size 0x28, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x2c50438, size 0xf8, virtual true, abstract: false, final true
  inline bool Contains(::StringW item);

  /// @brief Method CopyTo, addr 0x2c50530, size 0x2a8, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::StringW, ::Array<::StringW>*> array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x2c50820, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::StringW>* GetEnumerator();

  static inline ::System::Dynamic::__ExpandoObject__KeyCollection* New_ctor(::System::Dynamic::ExpandoObject* expando);

  /// @brief Method Remove, addr 0x2c507f8, size 0x28, virtual true, abstract: false, final true
  inline bool Remove(::StringW item);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2c50888, size 0x1004, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Dynamic::ExpandoObject*& __cordl_internal_get__expando();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::ExpandoObject*> const& __cordl_internal_get__expando() const;

  constexpr int32_t const& __cordl_internal_get__expandoCount() const;

  constexpr int32_t& __cordl_internal_get__expandoCount();

  constexpr ::System::Dynamic::__ExpandoObject__ExpandoData*& __cordl_internal_get__expandoData();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::__ExpandoObject__ExpandoData*> const& __cordl_internal_get__expandoData() const;

  constexpr int32_t const& __cordl_internal_get__expandoVersion() const;

  constexpr int32_t& __cordl_internal_get__expandoVersion();

  constexpr void __cordl_internal_set__expando(::System::Dynamic::ExpandoObject* value);

  constexpr void __cordl_internal_set__expandoCount(int32_t value);

  constexpr void __cordl_internal_set__expandoData(::System::Dynamic::__ExpandoObject__ExpandoData* value);

  constexpr void __cordl_internal_set__expandoVersion(int32_t value);

  /// @brief Method .ctor, addr 0x2c4f570, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::System::Dynamic::ExpandoObject* expando);

  /// @brief Method get_Count, addr 0x2c507d8, size 0x18, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x2c507f0, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::StringW>"
  constexpr ::System::Collections::Generic::ICollection_1<::StringW>* i___System__Collections__Generic__ICollection_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpandoObject__KeyCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__KeyCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExpandoObject__KeyCollection(__ExpandoObject__KeyCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__KeyCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExpandoObject__KeyCollection(__ExpandoObject__KeyCollection const&) = delete;

  /// @brief Field _expando, offset: 0x10, size: 0x8, def value: None
  ::System::Dynamic::ExpandoObject* ____expando;

  /// @brief Field _expandoVersion, offset: 0x18, size: 0x4, def value: None
  int32_t ____expandoVersion;

  /// @brief Field _expandoCount, offset: 0x1c, size: 0x4, def value: None
  int32_t ____expandoCount;

  /// @brief Field _expandoData, offset: 0x20, size: 0x8, def value: None
  ::System::Dynamic::__ExpandoObject__ExpandoData* ____expandoData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::__ExpandoObject__KeyCollection, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Dynamic::__ExpandoObject__KeyCollection, ____expando) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::__ExpandoObject__KeyCollection, ____expandoVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::__ExpandoObject__KeyCollection, ____expandoCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::__ExpandoObject__KeyCollection, ____expandoData) == 0x20, "Offset mismatch!");

} // namespace System::Dynamic
// Type: ::ValueCollectionDebugView
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::ExpandoObject::ValueCollectionDebugView*
class CORDL_TYPE __ExpandoObject__ValueCollectionDebugView : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpandoObject__ValueCollectionDebugView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__ValueCollectionDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExpandoObject__ValueCollectionDebugView(__ExpandoObject__ValueCollectionDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__ValueCollectionDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExpandoObject__ValueCollectionDebugView(__ExpandoObject__ValueCollectionDebugView const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::__ExpandoObject__ValueCollectionDebugView, 0x10>, "Size mismatch!");

} // namespace System::Dynamic
// Type: ::<GetEnumerator>d__15
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ExpandoObject::ValueCollection::<GetEnumerator>d__15*
class CORDL_TYPE __ExpandoObject__ValueCollection___GetEnumerator_d__15 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::System::Dynamic::__ExpandoObject__ValueCollection* __4__this;

  /// @brief Field <data>5__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__data_5__2, put = __cordl_internal_set__data_5__2))::System::Dynamic::__ExpandoObject__ExpandoData* _data_5__2;

  /// @brief Field <i>5__3, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__3, put = __cordl_internal_set__i_5__3)) int32_t _i_5__3;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2c52138, size 0x124, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ExpandoObject__ValueCollection___GetEnumerator_d__15* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2c5225c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2c52264, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2c522a4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2c52134, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Dynamic::__ExpandoObject__ValueCollection*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::__ExpandoObject__ValueCollection*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Dynamic::__ExpandoObject__ExpandoData*& __cordl_internal_get__data_5__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::__ExpandoObject__ExpandoData*> const& __cordl_internal_get__data_5__2() const;

  constexpr int32_t const& __cordl_internal_get__i_5__3() const;

  constexpr int32_t& __cordl_internal_get__i_5__3();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::System::Dynamic::__ExpandoObject__ValueCollection* value);

  constexpr void __cordl_internal_set__data_5__2(::System::Dynamic::__ExpandoObject__ExpandoData* value);

  constexpr void __cordl_internal_set__i_5__3(int32_t value);

  /// @brief Method .ctor, addr 0x2c52108, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpandoObject__ValueCollection___GetEnumerator_d__15();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__ValueCollection___GetEnumerator_d__15", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExpandoObject__ValueCollection___GetEnumerator_d__15(__ExpandoObject__ValueCollection___GetEnumerator_d__15&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__ValueCollection___GetEnumerator_d__15", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExpandoObject__ValueCollection___GetEnumerator_d__15(__ExpandoObject__ValueCollection___GetEnumerator_d__15 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Dynamic::__ExpandoObject__ValueCollection* _____4__this;

  /// @brief Field <data>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Dynamic::__ExpandoObject__ExpandoData* ____data_5__2;

  /// @brief Field <i>5__3, offset: 0x30, size: 0x4, def value: None
  int32_t ____i_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ExpandoObject__ValueCollection___GetEnumerator_d__15, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__ValueCollection___GetEnumerator_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__ValueCollection___GetEnumerator_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__ValueCollection___GetEnumerator_d__15, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__ValueCollection___GetEnumerator_d__15, ____data_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__ValueCollection___GetEnumerator_d__15, ____i_5__3) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ValueCollection
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::ExpandoObject::ValueCollection*
class CORDL_TYPE __ExpandoObject__ValueCollection : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__15 = ::GlobalNamespace::__ExpandoObject__ValueCollection___GetEnumerator_d__15;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  /// @brief Field _expando, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__expando, put = __cordl_internal_set__expando))::System::Dynamic::ExpandoObject* _expando;

  /// @brief Field _expandoCount, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__expandoCount, put = __cordl_internal_set__expandoCount)) int32_t _expandoCount;

  /// @brief Field _expandoData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__expandoData, put = __cordl_internal_set__expandoData))::System::Dynamic::__ExpandoObject__ExpandoData* _expandoData;

  /// @brief Field _expandoVersion, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__expandoVersion, put = __cordl_internal_set__expandoVersion)) int32_t _expandoVersion;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x2c51bd8, size 0x28, virtual true, abstract: false, final true
  inline void Add(::System::Object* item);

  /// @brief Method CheckVersion, addr 0x2c51b78, size 0x60, virtual false, abstract: false, final false
  inline void CheckVersion();

  /// @brief Method Clear, addr 0x2c51c00, size 0x28, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x2c51c28, size 0x164, virtual true, abstract: false, final true
  inline bool Contains(::System::Object* item);

  /// @brief Method CopyTo, addr 0x2c51d8c, size 0x278, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::System::Object*, ::Array<::System::Object*>*> array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x2c520a0, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GetEnumerator();

  static inline ::System::Dynamic::__ExpandoObject__ValueCollection* New_ctor(::System::Dynamic::ExpandoObject* expando);

  /// @brief Method Remove, addr 0x2c52078, size 0x28, virtual true, abstract: false, final true
  inline bool Remove(::System::Object* item);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2c52130, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Dynamic::ExpandoObject*& __cordl_internal_get__expando();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::ExpandoObject*> const& __cordl_internal_get__expando() const;

  constexpr int32_t const& __cordl_internal_get__expandoCount() const;

  constexpr int32_t& __cordl_internal_get__expandoCount();

  constexpr ::System::Dynamic::__ExpandoObject__ExpandoData*& __cordl_internal_get__expandoData();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::__ExpandoObject__ExpandoData*> const& __cordl_internal_get__expandoData() const;

  constexpr int32_t const& __cordl_internal_get__expandoVersion() const;

  constexpr int32_t& __cordl_internal_get__expandoVersion();

  constexpr void __cordl_internal_set__expando(::System::Dynamic::ExpandoObject* value);

  constexpr void __cordl_internal_set__expandoCount(int32_t value);

  constexpr void __cordl_internal_set__expandoData(::System::Dynamic::__ExpandoObject__ExpandoData* value);

  constexpr void __cordl_internal_set__expandoVersion(int32_t value);

  /// @brief Method .ctor, addr 0x2c51a84, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::System::Dynamic::ExpandoObject* expando);

  /// @brief Method get_Count, addr 0x2c52058, size 0x18, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x2c52070, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Object*>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::Object*>* i___System__Collections__Generic__ICollection_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Object*>* i___System__Collections__Generic__IEnumerable_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpandoObject__ValueCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__ValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExpandoObject__ValueCollection(__ExpandoObject__ValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__ValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExpandoObject__ValueCollection(__ExpandoObject__ValueCollection const&) = delete;

  /// @brief Field _expando, offset: 0x10, size: 0x8, def value: None
  ::System::Dynamic::ExpandoObject* ____expando;

  /// @brief Field _expandoVersion, offset: 0x18, size: 0x4, def value: None
  int32_t ____expandoVersion;

  /// @brief Field _expandoCount, offset: 0x1c, size: 0x4, def value: None
  int32_t ____expandoCount;

  /// @brief Field _expandoData, offset: 0x20, size: 0x8, def value: None
  ::System::Dynamic::__ExpandoObject__ExpandoData* ____expandoData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::__ExpandoObject__ValueCollection, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Dynamic::__ExpandoObject__ValueCollection, ____expando) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::__ExpandoObject__ValueCollection, ____expandoVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::__ExpandoObject__ValueCollection, ____expandoCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::__ExpandoObject__ValueCollection, ____expandoData) == 0x20, "Offset mismatch!");

} // namespace System::Dynamic
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ExpandoObject::MetaExpando::<>c__DisplayClass3_0*
class CORDL_TYPE __ExpandoObject__MetaExpando____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field args, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_args, put = __cordl_internal_set_args))::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args;

  /// @brief Field binder, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_binder, put = __cordl_internal_set_binder))::System::Dynamic::InvokeMemberBinder* binder;

  static inline ::GlobalNamespace::__ExpandoObject__MetaExpando____c__DisplayClass3_0* New_ctor();

  /// @brief Method <BindInvokeMember>b__0, addr 0x2c53804, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* _BindInvokeMember_b__0(::System::Dynamic::DynamicMetaObject* value);

  constexpr ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> const& __cordl_internal_get_args() const;

  constexpr ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*>& __cordl_internal_get_args();

  constexpr ::System::Dynamic::InvokeMemberBinder*& __cordl_internal_get_binder();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::InvokeMemberBinder*> const& __cordl_internal_get_binder() const;

  constexpr void __cordl_internal_set_args(::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> value);

  constexpr void __cordl_internal_set_binder(::System::Dynamic::InvokeMemberBinder* value);

  /// @brief Method .ctor, addr 0x2c52f04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpandoObject__MetaExpando____c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__MetaExpando____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExpandoObject__MetaExpando____c__DisplayClass3_0(__ExpandoObject__MetaExpando____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__MetaExpando____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExpandoObject__MetaExpando____c__DisplayClass3_0(__ExpandoObject__MetaExpando____c__DisplayClass3_0 const&) = delete;

  /// @brief Field binder, offset: 0x10, size: 0x8, def value: None
  ::System::Dynamic::InvokeMemberBinder* ___binder;

  /// @brief Field args, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> ___args;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ExpandoObject__MetaExpando____c__DisplayClass3_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__MetaExpando____c__DisplayClass3_0, ___binder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__MetaExpando____c__DisplayClass3_0, ___args) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetDynamicMemberNames>d__6
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ExpandoObject::MetaExpando::<GetDynamicMemberNames>d__6*
class CORDL_TYPE __ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_String__get_Current))::StringW System_Collections_Generic_IEnumerator_System_String__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::StringW __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::System::Dynamic::__ExpandoObject__MetaExpando* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <expandoData>5__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__expandoData_5__2, put = __cordl_internal_set__expandoData_5__2))::System::Dynamic::__ExpandoObject__ExpandoData* _expandoData_5__2;

  /// @brief Field <i>5__4, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__4, put = __cordl_internal_set__i_5__4)) int32_t _i_5__4;

  /// @brief Field <klass>5__3, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__klass_5__3, put = __cordl_internal_set__klass_5__3))::System::Dynamic::ExpandoClass* _klass_5__3;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2c53834, size 0x13c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator, addr 0x2c539c0, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current, addr 0x2c53970, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2c53a64, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2c53978, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2c539b8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2c53830, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::StringW const& __cordl_internal_get___2__current() const;

  constexpr ::StringW& __cordl_internal_get___2__current();

  constexpr ::System::Dynamic::__ExpandoObject__MetaExpando*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::__ExpandoObject__MetaExpando*> const& __cordl_internal_get___4__this() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Dynamic::__ExpandoObject__ExpandoData*& __cordl_internal_get__expandoData_5__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::__ExpandoObject__ExpandoData*> const& __cordl_internal_get__expandoData_5__2() const;

  constexpr int32_t const& __cordl_internal_get__i_5__4() const;

  constexpr int32_t& __cordl_internal_get__i_5__4();

  constexpr ::System::Dynamic::ExpandoClass*& __cordl_internal_get__klass_5__3();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::ExpandoClass*> const& __cordl_internal_get__klass_5__3() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::StringW value);

  constexpr void __cordl_internal_set___4__this(::System::Dynamic::__ExpandoObject__MetaExpando* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__expandoData_5__2(::System::Dynamic::__ExpandoObject__ExpandoData* value);

  constexpr void __cordl_internal_set__i_5__4(int32_t value);

  constexpr void __cordl_internal_set__klass_5__3(::System::Dynamic::ExpandoClass* value);

  /// @brief Method .ctor, addr 0x2c536d8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6(__ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6(__ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::StringW _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Dynamic::__ExpandoObject__MetaExpando* _____4__this;

  /// @brief Field <expandoData>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Dynamic::__ExpandoObject__ExpandoData* ____expandoData_5__2;

  /// @brief Field <klass>5__3, offset: 0x38, size: 0x8, def value: None
  ::System::Dynamic::ExpandoClass* ____klass_5__3;

  /// @brief Field <i>5__4, offset: 0x40, size: 0x4, def value: None
  int32_t ____i_5__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6, ____expandoData_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6, ____klass_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6, ____i_5__4) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MetaExpando
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::ExpandoObject::MetaExpando*
class CORDL_TYPE __ExpandoObject__MetaExpando : public ::System::Dynamic::DynamicMetaObject {
public:
  // Declarations
  using _GetDynamicMemberNames_d__6 = ::GlobalNamespace::__ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6;

  using __c__DisplayClass3_0 = ::GlobalNamespace::__ExpandoObject__MetaExpando____c__DisplayClass3_0;

  __declspec(property(get = get_Value))::System::Dynamic::ExpandoObject* Value;

  /// @brief Method AddDynamicTestAndDefer, addr 0x2c52a70, size 0x2b8, virtual false, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* AddDynamicTestAndDefer(::System::Dynamic::DynamicMetaObjectBinder* binder, ::System::Dynamic::ExpandoClass* klass,
                                                                      ::System::Dynamic::ExpandoClass* originalClass, ::System::Dynamic::DynamicMetaObject* succeeds);

  /// @brief Method BindDeleteMember, addr 0x2c533a8, size 0x2b8, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* BindDeleteMember(::System::Dynamic::DeleteMemberBinder* binder);

  /// @brief Method BindGetMember, addr 0x2c52d28, size 0x98, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* BindGetMember(::System::Dynamic::GetMemberBinder* binder);

  /// @brief Method BindGetOrInvokeMember, addr 0x2c52354, size 0x5d0, virtual false, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* BindGetOrInvokeMember(::System::Dynamic::DynamicMetaObjectBinder* binder, ::StringW name, bool ignoreCase,
                                                                     ::System::Dynamic::DynamicMetaObject* fallback,
                                                                     ::System::Func_2<::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*>* fallbackInvoke);

  /// @brief Method BindInvokeMember, addr 0x2c52dd0, size 0x134, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* BindInvokeMember(::System::Dynamic::InvokeMemberBinder* binder,
                                                                ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args);

  /// @brief Method BindSetMember, addr 0x2c52f1c, size 0x3dc, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* BindSetMember(::System::Dynamic::SetMemberBinder* binder, ::System::Dynamic::DynamicMetaObject* value);

  /// @brief Method GetClassEnsureIndex, addr 0x2c532f8, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Dynamic::ExpandoClass* GetClassEnsureIndex(::StringW name, bool caseInsensitive, ::System::Dynamic::ExpandoObject* obj, ByRef<::System::Dynamic::ExpandoClass*> klass,
                                                              ByRef<int32_t> index);

  /// @brief Method GetDynamicMemberNames, addr 0x2c53660, size 0x78, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetDynamicMemberNames();

  /// @brief Method GetLimitedSelf, addr 0x2c52988, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetLimitedSelf();

  /// @brief Method GetRestrictions, addr 0x2c5370c, size 0x58, virtual false, abstract: false, final false
  inline ::System::Dynamic::BindingRestrictions* GetRestrictions();

  static inline ::System::Dynamic::__ExpandoObject__MetaExpando* New_ctor(::System::Linq::Expressions::Expression* expression, ::System::Dynamic::ExpandoObject* value);

  /// @brief Method .ctor, addr 0x2c522ac, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* expression, ::System::Dynamic::ExpandoObject* value);

  /// @brief Method get_Value, addr 0x2c52924, size 0x64, virtual false, abstract: false, final false
  inline ::System::Dynamic::ExpandoObject* get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpandoObject__MetaExpando();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__MetaExpando", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExpandoObject__MetaExpando(__ExpandoObject__MetaExpando&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__MetaExpando", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExpandoObject__MetaExpando(__ExpandoObject__MetaExpando const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::__ExpandoObject__MetaExpando, 0x28>, "Size mismatch!");

} // namespace System::Dynamic
// Type: ::ExpandoData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::ExpandoObject::ExpandoData*
class CORDL_TYPE __ExpandoObject__ExpandoData : public ::System::Object {
public:
  // Declarations
  /// @brief Field Class, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Class, put = __cordl_internal_set_Class))::System::Dynamic::ExpandoClass* Class;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::Dynamic::__ExpandoObject__ExpandoData* Empty;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field _dataArray, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dataArray, put = __cordl_internal_set__dataArray))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _dataArray;

  /// @brief Field _version, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Method GetAlignedSize, addr 0x2c53d94, size 0xc, virtual false, abstract: false, final false
  static inline int32_t GetAlignedSize(int32_t len);

  static inline ::System::Dynamic::__ExpandoObject__ExpandoData* New_ctor();

  static inline ::System::Dynamic::__ExpandoObject__ExpandoData* New_ctor(::System::Dynamic::ExpandoClass* klass, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> data, int32_t version);

  /// @brief Method UpdateClass, addr 0x2c53bfc, size 0x198, virtual false, abstract: false, final false
  inline ::System::Dynamic::__ExpandoObject__ExpandoData* UpdateClass(::System::Dynamic::ExpandoClass* newClass);

  constexpr ::System::Dynamic::ExpandoClass*& __cordl_internal_get_Class();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::ExpandoClass*> const& __cordl_internal_get_Class() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__dataArray() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__dataArray();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set_Class(::System::Dynamic::ExpandoClass* value);

  constexpr void __cordl_internal_set__dataArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x2c53afc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2c53bc0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Dynamic::ExpandoClass* klass, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> data, int32_t version);

  static inline ::System::Dynamic::__ExpandoObject__ExpandoData* getStaticF_Empty();

  /// @brief Method get_Item, addr 0x2c51a04, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x2c53ae0, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_Version, addr 0x2c53ad8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

  static inline void setStaticF_Empty(::System::Dynamic::__ExpandoObject__ExpandoData* value);

  /// @brief Method set_Item, addr 0x2c53a68, size 0x70, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpandoObject__ExpandoData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__ExpandoData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExpandoObject__ExpandoData(__ExpandoObject__ExpandoData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject__ExpandoData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExpandoObject__ExpandoData(__ExpandoObject__ExpandoData const&) = delete;

  /// @brief Field Class, offset: 0x10, size: 0x8, def value: None
  ::System::Dynamic::ExpandoClass* ___Class;

  /// @brief Field _dataArray, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____dataArray;

  /// @brief Field _version, offset: 0x20, size: 0x4, def value: None
  int32_t ____version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::__ExpandoObject__ExpandoData, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Dynamic::__ExpandoObject__ExpandoData, ___Class) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::__ExpandoObject__ExpandoData, ____dataArray) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::__ExpandoObject__ExpandoData, ____version) == 0x20, "Offset mismatch!");

} // namespace System::Dynamic
// Type: ::<GetExpandoEnumerator>d__51
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::ExpandoObject::<GetExpandoEnumerator>d__51*
class CORDL_TYPE __ExpandoObject___GetExpandoEnumerator_d__51 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current))::System::Collections::Generic::KeyValuePair_2<
      ::StringW, ::System::Object*> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::System::Dynamic::ExpandoObject* __4__this;

  /// @brief Field <i>5__2, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  /// @brief Field data, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::System::Dynamic::__ExpandoObject__ExpandoData* data;

  /// @brief Field version, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2c53e2c, size 0x1a4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Dynamic::__ExpandoObject___GetExpandoEnumerator_d__51* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current, addr 0x2c53fd0, size 0xc, virtual true, abstract: false,
  /// final true
  inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>
  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2c53fdc, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2c5401c, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2c53e28, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>& __cordl_internal_get___2__current();

  constexpr ::System::Dynamic::ExpandoObject*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::ExpandoObject*> const& __cordl_internal_get___4__this() const;

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr ::System::Dynamic::__ExpandoObject__ExpandoData*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::__ExpandoObject__ExpandoData*> const& __cordl_internal_get_data() const;

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> value);

  constexpr void __cordl_internal_set___4__this(::System::Dynamic::ExpandoObject* value);

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  constexpr void __cordl_internal_set_data(::System::Dynamic::__ExpandoObject__ExpandoData* value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x2c53e00, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*
  i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___System__Object___() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpandoObject___GetExpandoEnumerator_d__51();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject___GetExpandoEnumerator_d__51", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExpandoObject___GetExpandoEnumerator_d__51(__ExpandoObject___GetExpandoEnumerator_d__51&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExpandoObject___GetExpandoEnumerator_d__51", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExpandoObject___GetExpandoEnumerator_d__51(__ExpandoObject___GetExpandoEnumerator_d__51 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> _____2__current;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Dynamic::ExpandoObject* _____4__this;

  /// @brief Field version, offset: 0x30, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field data, offset: 0x38, size: 0x8, def value: None
  ::System::Dynamic::__ExpandoObject__ExpandoData* ___data;

  /// @brief Field <i>5__2, offset: 0x40, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::__ExpandoObject___GetExpandoEnumerator_d__51, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Dynamic::__ExpandoObject___GetExpandoEnumerator_d__51, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::__ExpandoObject___GetExpandoEnumerator_d__51, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::__ExpandoObject___GetExpandoEnumerator_d__51, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::__ExpandoObject___GetExpandoEnumerator_d__51, ___version) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::__ExpandoObject___GetExpandoEnumerator_d__51, ___data) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::__ExpandoObject___GetExpandoEnumerator_d__51, ____i_5__2) == 0x40, "Offset mismatch!");

} // namespace System::Dynamic
// Type: System.Dynamic::ExpandoObject
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::System.Dynamic::ExpandoObject*
class CORDL_TYPE ExpandoObject : public ::System::Object {
public:
  // Declarations
  using ExpandoData = ::System::Dynamic::__ExpandoObject__ExpandoData;

  using KeyCollection = ::System::Dynamic::__ExpandoObject__KeyCollection;

  using KeyCollectionDebugView = ::System::Dynamic::__ExpandoObject__KeyCollectionDebugView;

  using MetaExpando = ::System::Dynamic::__ExpandoObject__MetaExpando;

  using ValueCollection = ::System::Dynamic::__ExpandoObject__ValueCollection;

  using ValueCollectionDebugView = ::System::Dynamic::__ExpandoObject__ValueCollectionDebugView;

  using _GetExpandoEnumerator_d__51 = ::System::Dynamic::__ExpandoObject___GetExpandoEnumerator_d__51;

  __declspec(property(get = get_Class))::System::Dynamic::ExpandoClass* Class;

  /// @brief Field LockObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_LockObject, put = __cordl_internal_set_LockObject))::System::Object* LockObject;

  __declspec(property(get = System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Count)) int32_t
      System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___Count;

  __declspec(property(
      get =
          System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_IsReadOnly)) bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___IsReadOnly;

  __declspec(property(get = System_Collections_Generic_IDictionary_System_String_System_Object__get_Item,
                      put = System_Collections_Generic_IDictionary_System_String_System_Object__set_Item))::System::Object* System_Collections_Generic_IDictionary_System_String_System_Object__Item[];

  __declspec(property(get = System_Collections_Generic_IDictionary_System_String_System_Object__get_Keys))::System::Collections::Generic::ICollection_1<
      ::StringW>* System_Collections_Generic_IDictionary_System_String_System_Object__Keys;

  __declspec(property(get = System_Collections_Generic_IDictionary_System_String_System_Object__get_Values))::System::Collections::Generic::ICollection_1<
      ::System::Object*>* System_Collections_Generic_IDictionary_System_String_System_Object__Values;

  /// @brief Field Uninitialized, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Uninitialized, put = setStaticF_Uninitialized))::System::Object* Uninitialized;

  /// @brief Field _count, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Field _data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data))::System::Dynamic::__ExpandoObject__ExpandoData* _data;

  /// @brief Field _propertyChanged, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyChanged, put = __cordl_internal_set__propertyChanged))::System::ComponentModel::PropertyChangedEventHandler* _propertyChanged;

  /// @brief Field s_expandoCheckVersion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_expandoCheckVersion, put = setStaticF_s_expandoCheckVersion))::System::Reflection::MethodInfo* s_expandoCheckVersion;

  /// @brief Field s_expandoPromoteClass, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_expandoPromoteClass, put = setStaticF_s_expandoPromoteClass))::System::Reflection::MethodInfo* s_expandoPromoteClass;

  /// @brief Field s_expandoTryDeleteValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_expandoTryDeleteValue, put = setStaticF_s_expandoTryDeleteValue))::System::Reflection::MethodInfo* s_expandoTryDeleteValue;

  /// @brief Field s_expandoTryGetValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_expandoTryGetValue, put = setStaticF_s_expandoTryGetValue))::System::Reflection::MethodInfo* s_expandoTryGetValue;

  /// @brief Field s_expandoTrySetValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_expandoTrySetValue, put = setStaticF_s_expandoTrySetValue))::System::Reflection::MethodInfo* s_expandoTrySetValue;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>"
  constexpr operator ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::System::Dynamic::IDynamicMetaObjectProvider"
  constexpr operator ::System::Dynamic::IDynamicMetaObjectProvider*() noexcept;

  /// @brief Method ExpandoContainsKey, addr 0x2c4f4e4, size 0x2c, virtual false, abstract: false, final false
  inline bool ExpandoContainsKey(::StringW key);

  /// @brief Method GetExpandoEnumerator, addr 0x2c5010c, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*
  GetExpandoEnumerator(::System::Dynamic::__ExpandoObject__ExpandoData* data, int32_t version);

  /// @brief Method IsDeletedMember, addr 0x2c4f1f4, size 0xa8, virtual false, abstract: false, final false
  inline bool IsDeletedMember(int32_t index);

  static inline ::System::Dynamic::ExpandoObject* New_ctor();

  /// @brief Method PromoteClass, addr 0x2c4be00, size 0x164, virtual false, abstract: false, final false
  inline void PromoteClass(::System::Object* oldClass, ::System::Object* newClass);

  /// @brief Method PromoteClassCore, addr 0x2c4f3a4, size 0x38, virtual false, abstract: false, final false
  inline ::System::Dynamic::__ExpandoObject__ExpandoData* PromoteClassCore(::System::Dynamic::ExpandoClass* oldClass, ::System::Dynamic::ExpandoClass* newClass);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.Add, addr 0x2c4f948, size 0x60, virtual true, abstract: false, final
  /// true
  inline void
  System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___Add(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> item);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.Clear, addr 0x2c4f9a8, size 0x228, virtual true, abstract: false, final
  /// true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___Clear();

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.Contains, addr 0x2c4fbd0, size 0x94, virtual true, abstract: false,
  /// final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___Contains(
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> item);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.CopyTo, addr 0x2c4fc64, size 0x420, virtual true, abstract: false,
  /// final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___CopyTo(
      ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>, ::Array<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*> array,
      int32_t arrayIndex);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.Remove, addr 0x2c50084, size 0x6c, virtual true, abstract: false, final
  /// true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___Remove(
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> item);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Count, addr 0x2c4f938, size 0x8, virtual true, abstract: false,
  /// final true
  inline int32_t System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Count();

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_IsReadOnly, addr 0x2c4f940, size 0x8, virtual true, abstract:
  /// false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_IsReadOnly();

  /// @brief Method System.Collections.Generic.IDictionary<System.String,System.Object>.Add, addr 0x2c4f7a8, size 0x4, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IDictionary_System_String_System_Object__Add(::StringW key, ::System::Object* value);

  /// @brief Method System.Collections.Generic.IDictionary<System.String,System.Object>.ContainsKey, addr 0x2c4f7ac, size 0xd4, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_IDictionary_System_String_System_Object__ContainsKey(::StringW key);

  /// @brief Method System.Collections.Generic.IDictionary<System.String,System.Object>.Remove, addr 0x2c4f880, size 0xa0, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_IDictionary_System_String_System_Object__Remove(::StringW key);

  /// @brief Method System.Collections.Generic.IDictionary<System.String,System.Object>.TryGetValue, addr 0x2c4f920, size 0x18, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_IDictionary_System_String_System_Object__TryGetValue(::StringW key, ByRef<::System::Object*> value);

  /// @brief Method System.Collections.Generic.IDictionary<System.String,System.Object>.get_Item, addr 0x2c4f6c8, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IDictionary_System_String_System_Object__get_Item(::StringW key);

  /// @brief Method System.Collections.Generic.IDictionary<System.String,System.Object>.get_Keys, addr 0x2c4f510, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<::StringW>* System_Collections_Generic_IDictionary_System_String_System_Object__get_Keys();

  /// @brief Method System.Collections.Generic.IDictionary<System.String,System.Object>.get_Values, addr 0x2c4f664, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<::System::Object*>* System_Collections_Generic_IDictionary_System_String_System_Object__get_Values();

  /// @brief Method System.Collections.Generic.IDictionary<System.String,System.Object>.set_Item, addr 0x2c4f72c, size 0x7c, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IDictionary_System_String_System_Object__set_Item(::StringW key, ::System::Object* value);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator, addr 0x2c500f0, size 0x1c, virtual true, abstract:
  /// false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*
  System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_Object___GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2c5018c, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Dynamic.IDynamicMetaObjectProvider.GetMetaObject, addr 0x2c4f3dc, size 0x74, virtual true, abstract: false, final true
  inline ::System::Dynamic::DynamicMetaObject* System_Dynamic_IDynamicMetaObjectProvider_GetMetaObject(::System::Linq::Expressions::Expression* parameter);

  /// @brief Method TryAddMember, addr 0x2c4f450, size 0x7c, virtual false, abstract: false, final false
  inline void TryAddMember(::StringW key, ::System::Object* value);

  /// @brief Method TryDeleteValue, addr 0x2c4ba98, size 0x314, virtual false, abstract: false, final false
  inline bool TryDeleteValue(::System::Object* indexClass, int32_t index, ::StringW name, bool ignoreCase, ::System::Object* deleteValue);

  /// @brief Method TryGetValue, addr 0x2c4b514, size 0x128, virtual false, abstract: false, final false
  inline bool TryGetValue(::System::Object* indexClass, int32_t index, ::StringW name, bool ignoreCase, ByRef<::System::Object*> value);

  /// @brief Method TryGetValueForKey, addr 0x2c4f4cc, size 0x18, virtual false, abstract: false, final false
  inline bool TryGetValueForKey(::StringW key, ByRef<::System::Object*> value);

  /// @brief Method TrySetValue, addr 0x2c4b664, size 0x39c, virtual false, abstract: false, final false
  inline void TrySetValue(::System::Object* indexClass, int32_t index, ::System::Object* value, ::StringW name, bool ignoreCase, bool add);

  constexpr ::System::Object*& __cordl_internal_get_LockObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_LockObject() const;

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr ::System::Dynamic::__ExpandoObject__ExpandoData*& __cordl_internal_get__data();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::__ExpandoObject__ExpandoData*> const& __cordl_internal_get__data() const;

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get__propertyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get__propertyChanged() const;

  constexpr void __cordl_internal_set_LockObject(::System::Object* value);

  constexpr void __cordl_internal_set__count(int32_t value);

  constexpr void __cordl_internal_set__data(::System::Dynamic::__ExpandoObject__ExpandoData* value);

  constexpr void __cordl_internal_set__propertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method .ctor, addr 0x2c4f304, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Object* getStaticF_Uninitialized();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_expandoCheckVersion();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_expandoPromoteClass();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_expandoTryDeleteValue();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_expandoTryGetValue();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_expandoTrySetValue();

  /// @brief Method get_Class, addr 0x2c4bdd4, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Dynamic::ExpandoClass* get_Class();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*
  i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW___System__Object___() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>"
  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* i___System__Collections__Generic__IDictionary_2___StringW___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___System__Object___() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::System::Dynamic::IDynamicMetaObjectProvider"
  constexpr ::System::Dynamic::IDynamicMetaObjectProvider* i___System__Dynamic__IDynamicMetaObjectProvider() noexcept;

  static inline void setStaticF_Uninitialized(::System::Object* value);

  static inline void setStaticF_s_expandoCheckVersion(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_expandoPromoteClass(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_expandoTryDeleteValue(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_expandoTryGetValue(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_expandoTrySetValue(::System::Reflection::MethodInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpandoObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpandoObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpandoObject(ExpandoObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpandoObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpandoObject(ExpandoObject const&) = delete;

  /// @brief Field LockObject, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___LockObject;

  /// @brief Field _data, offset: 0x18, size: 0x8, def value: None
  ::System::Dynamic::__ExpandoObject__ExpandoData* ____data;

  /// @brief Field _count, offset: 0x20, size: 0x4, def value: None
  int32_t ____count;

  /// @brief Field _propertyChanged, offset: 0x28, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ____propertyChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::ExpandoObject, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Dynamic::ExpandoObject, ___LockObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::ExpandoObject, ____data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::ExpandoObject, ____count) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::ExpandoObject, ____propertyChanged) == 0x28, "Offset mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::GlobalNamespace::__ExpandoObject__KeyCollection___GetEnumerator_d__15);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ExpandoObject__KeyCollection___GetEnumerator_d__15*, "System.Dynamic", "ExpandoObject/KeyCollection/<GetEnumerator>d__15");
NEED_NO_BOX(::GlobalNamespace::__ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ExpandoObject__MetaExpando___GetDynamicMemberNames_d__6*, "System.Dynamic", "ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6");
NEED_NO_BOX(::GlobalNamespace::__ExpandoObject__MetaExpando____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ExpandoObject__MetaExpando____c__DisplayClass3_0*, "System.Dynamic", "ExpandoObject/MetaExpando/<>c__DisplayClass3_0");
NEED_NO_BOX(::GlobalNamespace::__ExpandoObject__ValueCollection___GetEnumerator_d__15);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ExpandoObject__ValueCollection___GetEnumerator_d__15*, "System.Dynamic", "ExpandoObject/ValueCollection/<GetEnumerator>d__15");
NEED_NO_BOX(::System::Dynamic::ExpandoObject);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::ExpandoObject*, "System.Dynamic", "ExpandoObject");
NEED_NO_BOX(::System::Dynamic::__ExpandoObject__ExpandoData);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::__ExpandoObject__ExpandoData*, "System.Dynamic", "ExpandoObject/ExpandoData");
NEED_NO_BOX(::System::Dynamic::__ExpandoObject__KeyCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::__ExpandoObject__KeyCollection*, "System.Dynamic", "ExpandoObject/KeyCollection");
NEED_NO_BOX(::System::Dynamic::__ExpandoObject__KeyCollectionDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::__ExpandoObject__KeyCollectionDebugView*, "System.Dynamic", "ExpandoObject/KeyCollectionDebugView");
NEED_NO_BOX(::System::Dynamic::__ExpandoObject__MetaExpando);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::__ExpandoObject__MetaExpando*, "System.Dynamic", "ExpandoObject/MetaExpando");
NEED_NO_BOX(::System::Dynamic::__ExpandoObject__ValueCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::__ExpandoObject__ValueCollection*, "System.Dynamic", "ExpandoObject/ValueCollection");
NEED_NO_BOX(::System::Dynamic::__ExpandoObject__ValueCollectionDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::__ExpandoObject__ValueCollectionDebugView*, "System.Dynamic", "ExpandoObject/ValueCollectionDebugView");
NEED_NO_BOX(::System::Dynamic::__ExpandoObject___GetExpandoEnumerator_d__51);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::__ExpandoObject___GetExpandoEnumerator_d__51*, "System.Dynamic", "ExpandoObject/<GetExpandoEnumerator>d__51");
