#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JContainer)
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json::Linq {
template <typename T> struct JEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections {
class IList;
}
namespace System {
class Array;
}
namespace Newtonsoft::Json::Linq {
class JsonMergeSettings;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::ComponentModel {
struct ListSortDirection;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class ListChangedEventHandler;
}
namespace System {
class Object;
}
namespace System::ComponentModel {
class ListChangedEventArgs;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class ITypedList;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::ComponentModel {
class AddingNewEventHandler;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::ComponentModel {
class AddingNewEventArgs;
}
namespace System::Collections {
class ICollection;
}
namespace Newtonsoft::Json::Linq {
class __JContainer___GetDescendants_d__29;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System::ComponentModel {
class IBindingList;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JContainer;
}
namespace Newtonsoft::Json::Linq {
class __JContainer___GetDescendants_d__29;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JContainer);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__29);
// Type: ::<GetDescendants>d__29
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11987))
// CS Name: ::JContainer::<GetDescendants>d__29*
class CORDL_TYPE __JContainer___GetDescendants_d__29 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field self, offset 0x24, size 0x1
  __declspec(property(get = __get_self, put = __set_self)) bool self;

  /// @brief Field <>3__self, offset 0x25, size 0x1
  __declspec(property(get = __get___3__self, put = __set___3__self)) bool __3__self;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Newtonsoft::Json::Linq::JContainer* __4__this;

  /// @brief Field <o>5__1, offset 0x30, size 0x8
  __declspec(property(get = __get__o_5__1, put = __set__o_5__1))::Newtonsoft::Json::Linq::JToken* _o_5__1;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x40, size 0x8
  __declspec(property(get = __get___7__wrap2, put = __set___7__wrap2))::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current))::Newtonsoft::Json::Linq::
      JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __get___2__current() const;

  constexpr void __set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr bool& __get_self();

  constexpr bool const& __get_self() const;

  constexpr void __set_self(bool value);

  constexpr bool& __get___3__self();

  constexpr bool const& __get___3__self() const;

  constexpr void __set___3__self(bool value);

  constexpr ::Newtonsoft::Json::Linq::JContainer*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JContainer*> const& __get___4__this() const;

  constexpr void __set___4__this(::Newtonsoft::Json::Linq::JContainer* value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __get__o_5__1();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __get__o_5__1() const;

  constexpr void __set__o_5__1(::Newtonsoft::Json::Linq::JToken* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __get___7__wrap2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*> const& __get___7__wrap2() const;

  constexpr void __set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  static inline ::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__29* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x26949bc, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x26976c0, size 0xbc, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x269777c, size 0x4c0, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1, addr 0x2697cec, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x2697c3c, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x2697d9c, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2697da4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2697de4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x2697dec, size 0xa8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2697e94, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__JContainer___GetDescendants_d__29", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JContainer___GetDescendants_d__29(__JContainer___GetDescendants_d__29&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JContainer___GetDescendants_d__29", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JContainer___GetDescendants_d__29(__JContainer___GetDescendants_d__29 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JContainer___GetDescendants_d__29();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field self, offset: 0x24, size: 0x1, def value: None
  bool ___self;

  /// @brief Field <>3__self, offset: 0x25, size: 0x1, def value: None
  bool _____3__self;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JContainer* _____4__this;

  /// @brief Field <o>5__1, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____o_5__1;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__29, 0x48>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__29, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__29, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__29, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__29, ___self) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__29, _____3__self) == 0x25, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__29, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__29, ____o_5__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__29, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__29, _____7__wrap2) == 0x40, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
// Type: Newtonsoft.Json.Linq::JContainer
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12002))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11988))
// CS Name: ::Newtonsoft.Json.Linq::JContainer*
class CORDL_TYPE JContainer : public ::Newtonsoft::Json::Linq::JToken {
public:
  // Declarations
  using _GetDescendants_d__29 = ::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__29;

  /// @brief Field _listChanged, offset 0x30, size 0x8
  __declspec(property(get = __get__listChanged, put = __set__listChanged))::System::ComponentModel::ListChangedEventHandler* _listChanged;

  /// @brief Field _addingNew, offset 0x38, size 0x8
  __declspec(property(get = __get__addingNew, put = __set__addingNew))::System::ComponentModel::AddingNewEventHandler* _addingNew;

  /// @brief Field _syncRoot, offset 0x40, size 0x8
  __declspec(property(get = __get__syncRoot, put = __set__syncRoot))::System::Object* _syncRoot;

  /// @brief Field _busy, offset 0x48, size 0x1
  __declspec(property(get = __get__busy, put = __set__busy)) bool _busy;

  __declspec(property(get = get_ChildrenTokens))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* ChildrenTokens;

  __declspec(property(get = get_HasValues)) bool HasValues;

  __declspec(property(get = get_First))::Newtonsoft::Json::Linq::JToken* First;

  __declspec(property(get = get_Last))::Newtonsoft::Json::Linq::JToken* Last;

  __declspec(
      property(get = System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item,
               put = System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item))::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Item[];

  __declspec(property(get = System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly)) bool System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_IList_get_IsReadOnly)) bool System_Collections_IList_IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item))::System::Object* System_Collections_IList_Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_ComponentModel_IBindingList_get_AllowEdit)) bool System_ComponentModel_IBindingList_AllowEdit;

  __declspec(property(get = System_ComponentModel_IBindingList_get_AllowNew)) bool System_ComponentModel_IBindingList_AllowNew;

  __declspec(property(get = System_ComponentModel_IBindingList_get_AllowRemove)) bool System_ComponentModel_IBindingList_AllowRemove;

  __declspec(property(get = System_ComponentModel_IBindingList_get_IsSorted)) bool System_ComponentModel_IBindingList_IsSorted;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SortDirection))::System::ComponentModel::ListSortDirection System_ComponentModel_IBindingList_SortDirection;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SortProperty))::System::ComponentModel::PropertyDescriptor* System_ComponentModel_IBindingList_SortProperty;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SupportsChangeNotification)) bool System_ComponentModel_IBindingList_SupportsChangeNotification;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SupportsSearching)) bool System_ComponentModel_IBindingList_SupportsSearching;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SupportsSorting)) bool System_ComponentModel_IBindingList_SupportsSorting;

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::ITypedList"
  constexpr operator ::System::ComponentModel::ITypedList*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::IBindingList"
  constexpr operator ::System::ComponentModel::IBindingList*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  constexpr ::System::ComponentModel::ListChangedEventHandler*& __get__listChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ListChangedEventHandler*> const& __get__listChanged() const;

  constexpr void __set__listChanged(::System::ComponentModel::ListChangedEventHandler* value);

  constexpr ::System::ComponentModel::AddingNewEventHandler*& __get__addingNew();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::AddingNewEventHandler*> const& __get__addingNew() const;

  constexpr void __set__addingNew(::System::ComponentModel::AddingNewEventHandler* value);

  constexpr ::System::Object*& __get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__syncRoot() const;

  constexpr void __set__syncRoot(::System::Object* value);

  constexpr bool& __get__busy();

  constexpr bool const& __get__busy() const;

  constexpr void __set__busy(bool value);

  /// @brief Method add_ListChanged, addr 0x2693e10, size 0x80, virtual true, abstract: false, final true
  inline void add_ListChanged(::System::ComponentModel::ListChangedEventHandler* value);

  /// @brief Method remove_ListChanged, addr 0x2693e90, size 0x80, virtual true, abstract: false, final true
  inline void remove_ListChanged(::System::ComponentModel::ListChangedEventHandler* value);

  /// @brief Method add_AddingNew, addr 0x2693f10, size 0x80, virtual false, abstract: false, final false
  inline void add_AddingNew(::System::ComponentModel::AddingNewEventHandler* value);

  /// @brief Method remove_AddingNew, addr 0x2693f90, size 0x80, virtual false, abstract: false, final false
  inline void remove_AddingNew(::System::ComponentModel::AddingNewEventHandler* value);

  /// @brief Method get_ChildrenTokens, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens();

  static inline ::Newtonsoft::Json::Linq::JContainer* New_ctor();

  /// @brief Method .ctor, addr 0x2692720, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Linq::JContainer* New_ctor(::Newtonsoft::Json::Linq::JContainer* other);

  /// @brief Method .ctor, addr 0x2692810, size 0x318, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JContainer* other);

  /// @brief Method CheckReentrancy, addr 0x26943b8, size 0xb0, virtual false, abstract: false, final false
  inline void CheckReentrancy();

  /// @brief Method CreateChildrenCollection, addr 0x2694468, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* CreateChildrenCollection();

  /// @brief Method OnAddingNew, addr 0x26944d8, size 0x28, virtual true, abstract: false, final false
  inline void OnAddingNew(::System::ComponentModel::AddingNewEventArgs* e);

  /// @brief Method OnListChanged, addr 0x2694500, size 0x88, virtual true, abstract: false, final false
  inline void OnListChanged(::System::ComponentModel::ListChangedEventArgs* e);

  /// @brief Method get_HasValues, addr 0x2694588, size 0xc0, virtual true, abstract: false, final false
  inline bool get_HasValues();

  /// @brief Method ContentsEqual, addr 0x2692d6c, size 0x2b8, virtual false, abstract: false, final false
  inline bool ContentsEqual(::Newtonsoft::Json::Linq::JContainer* container);

  /// @brief Method get_First, addr 0x2694648, size 0x13c, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_First();

  /// @brief Method get_Last, addr 0x2694784, size 0x13c, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Last();

  /// @brief Method Children, addr 0x26948c0, size 0x74, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> Children();

  /// @brief Method Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* Values();

  /// @brief Method Descendants, addr 0x2694934, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Descendants();

  /// @brief Method DescendantsAndSelf, addr 0x26949b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* DescendantsAndSelf();

  /// @brief Method GetDescendants, addr 0x269493c, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* GetDescendants(bool self);

  /// @brief Method IsMultiContent, addr 0x2694a00, size 0xe4, virtual false, abstract: false, final false
  inline bool IsMultiContent(::System::Object* content);

  /// @brief Method EnsureParentToken, addr 0x2694ae4, size 0x98, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* EnsureParentToken(::Newtonsoft::Json::Linq::JToken* item, bool skipParentCheck);

  /// @brief Method IndexOfItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method InsertItem, addr 0x2694b94, size 0x3a4, virtual true, abstract: false, final false
  inline void InsertItem(int32_t index, ::Newtonsoft::Json::Linq::JToken* item, bool skipParentCheck);

  /// @brief Method RemoveItemAt, addr 0x2694f38, size 0x408, virtual true, abstract: false, final false
  inline void RemoveItemAt(int32_t index);

  /// @brief Method RemoveItem, addr 0x2695340, size 0x48, virtual true, abstract: false, final false
  inline bool RemoveItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method GetItem, addr 0x2695388, size 0xbc, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* GetItem(int32_t index);

  /// @brief Method SetItem, addr 0x2695444, size 0x464, virtual true, abstract: false, final false
  inline void SetItem(int32_t index, ::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method ClearItems, addr 0x2695970, size 0x3d0, virtual true, abstract: false, final false
  inline void ClearItems();

  /// @brief Method ReplaceItem, addr 0x2695d40, size 0x64, virtual true, abstract: false, final false
  inline void ReplaceItem(::Newtonsoft::Json::Linq::JToken* existing, ::Newtonsoft::Json::Linq::JToken* replacement);

  /// @brief Method ContainsItem, addr 0x2695da4, size 0x24, virtual true, abstract: false, final false
  inline bool ContainsItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method CopyItemsTo, addr 0x2695dc8, size 0x440, virtual true, abstract: false, final false
  inline void CopyItemsTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method IsTokenUnchanged, addr 0x26958a8, size 0xc8, virtual false, abstract: false, final false
  static inline bool IsTokenUnchanged(::Newtonsoft::Json::Linq::JToken* currentValue, ::Newtonsoft::Json::Linq::JToken* newValue);

  /// @brief Method ValidateToken, addr 0x26962bc, size 0x128, virtual true, abstract: false, final false
  inline void ValidateToken(::Newtonsoft::Json::Linq::JToken* o, ::Newtonsoft::Json::Linq::JToken* existing);

  /// @brief Method Add, addr 0x26963e4, size 0xcc, virtual true, abstract: false, final false
  inline void Add(::System::Object* content);

  /// @brief Method AddAndSkipParentCheck, addr 0x26964b0, size 0xcc, virtual false, abstract: false, final false
  inline void AddAndSkipParentCheck(::Newtonsoft::Json::Linq::JToken* token);

  /// @brief Method AddFirst, addr 0x269657c, size 0x10, virtual false, abstract: false, final false
  inline void AddFirst(::System::Object* content);

  /// @brief Method AddInternal, addr 0x2694018, size 0x3a0, virtual false, abstract: false, final false
  inline void AddInternal(int32_t index, ::System::Object* content, bool skipParentCheck);

  /// @brief Method CreateFromContent, addr 0x269658c, size 0xac, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* CreateFromContent(::System::Object* content);

  /// @brief Method CreateWriter, addr 0x2696638, size 0x60, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonWriter* CreateWriter();

  /// @brief Method ReplaceAll, addr 0x2696728, size 0x44, virtual false, abstract: false, final false
  inline void ReplaceAll(::System::Object* content);

  /// @brief Method RemoveAll, addr 0x269676c, size 0x10, virtual false, abstract: false, final false
  inline void RemoveAll();

  /// @brief Method MergeItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void MergeItem(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings);

  /// @brief Method Merge, addr 0x269677c, size 0x80, virtual false, abstract: false, final false
  inline void Merge(::System::Object* content);

  /// @brief Method Merge, addr 0x26967fc, size 0x10, virtual false, abstract: false, final false
  inline void Merge(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings);

  /// @brief Method ReadTokenFrom, addr 0x2693cb4, size 0x15c, virtual false, abstract: false, final false
  inline void ReadTokenFrom(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* options);

  /// @brief Method ReadContentFrom, addr 0x269680c, size 0x4a4, virtual false, abstract: false, final false
  inline void ReadContentFrom(::Newtonsoft::Json::JsonReader* r, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method ContentsHashCode, addr 0x2693610, size 0x304, virtual false, abstract: false, final false
  inline int32_t ContentsHashCode();

  /// @brief Method System.ComponentModel.ITypedList.GetListName, addr 0x2696ea8, size 0x48, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ITypedList_GetListName(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> listAccessors);

  /// @brief Method System.ComponentModel.ITypedList.GetItemProperties, addr 0x2696ef0, size 0xc8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection*
  System_ComponentModel_ITypedList_GetItemProperties(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> listAccessors);

  /// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.IndexOf, addr 0x2696fb8, size 0x10, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__IndexOf(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.Insert, addr 0x2696fc8, size 0x14, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Insert(int32_t index, ::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.RemoveAt, addr 0x2696fdc, size 0x10, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__RemoveAt(int32_t index);

  /// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.get_Item, addr 0x2696fec, size 0x10, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item(int32_t index);

  /// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.set_Item, addr 0x2696ffc, size 0x10, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item(int32_t index, ::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Add, addr 0x269700c, size 0x10, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Add(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Clear, addr 0x269701c, size 0x10, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Clear();

  /// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Contains, addr 0x269702c, size 0x10, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Contains(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.CopyTo, addr 0x269703c, size 0x10, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*, ::Array<::Newtonsoft::Json::Linq::JToken*>*> array,
                                                                                         int32_t arrayIndex);

  /// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.get_IsReadOnly, addr 0x269704c, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly();

  /// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Remove, addr 0x2697054, size 0x10, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Remove(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method EnsureValue, addr 0x2697064, size 0xc0, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* EnsureValue(::System::Object* value);

  /// @brief Method System.Collections.IList.Add, addr 0x2697124, size 0x38, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Clear, addr 0x269715c, size 0x10, virtual true, abstract: false, final true
  inline void System_Collections_IList_Clear();

  /// @brief Method System.Collections.IList.Contains, addr 0x269716c, size 0x28, virtual true, abstract: false, final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf, addr 0x2697194, size 0x28, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert, addr 0x26971bc, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x26971fc, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x2697204, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsReadOnly();

  /// @brief Method System.Collections.IList.Remove, addr 0x269720c, size 0x28, virtual true, abstract: false, final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.RemoveAt, addr 0x2697234, size 0x10, virtual true, abstract: false, final true
  inline void System_Collections_IList_RemoveAt(int32_t index);

  /// @brief Method System.Collections.IList.get_Item, addr 0x2697244, size 0x10, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item, addr 0x2697254, size 0x3c, virtual true, abstract: false, final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x2697290, size 0x10, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method get_Count, addr 0x2696208, size 0xb4, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x26972a0, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x26972a8, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.ComponentModel.IBindingList.AddIndex, addr 0x2697324, size 0x4, virtual true, abstract: false, final true
  inline void System_ComponentModel_IBindingList_AddIndex(::System::ComponentModel::PropertyDescriptor* property);

  /// @brief Method System.ComponentModel.IBindingList.AddNew, addr 0x2697328, size 0x1c8, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_IBindingList_AddNew();

  /// @brief Method System.ComponentModel.IBindingList.get_AllowEdit, addr 0x26974f0, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_AllowEdit();

  /// @brief Method System.ComponentModel.IBindingList.get_AllowNew, addr 0x26974f8, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_AllowNew();

  /// @brief Method System.ComponentModel.IBindingList.get_AllowRemove, addr 0x2697500, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_AllowRemove();

  /// @brief Method System.ComponentModel.IBindingList.ApplySort, addr 0x2697508, size 0x40, virtual true, abstract: false, final true
  inline void System_ComponentModel_IBindingList_ApplySort(::System::ComponentModel::PropertyDescriptor* property, ::System::ComponentModel::ListSortDirection direction);

  /// @brief Method System.ComponentModel.IBindingList.Find, addr 0x2697548, size 0x40, virtual true, abstract: false, final true
  inline int32_t System_ComponentModel_IBindingList_Find(::System::ComponentModel::PropertyDescriptor* property, ::System::Object* key);

  /// @brief Method System.ComponentModel.IBindingList.get_IsSorted, addr 0x2697588, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_IsSorted();

  /// @brief Method System.ComponentModel.IBindingList.RemoveIndex, addr 0x2697590, size 0x4, virtual true, abstract: false, final true
  inline void System_ComponentModel_IBindingList_RemoveIndex(::System::ComponentModel::PropertyDescriptor* property);

  /// @brief Method System.ComponentModel.IBindingList.RemoveSort, addr 0x2697594, size 0x40, virtual true, abstract: false, final true
  inline void System_ComponentModel_IBindingList_RemoveSort();

  /// @brief Method System.ComponentModel.IBindingList.get_SortDirection, addr 0x26975d4, size 0x8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::ListSortDirection System_ComponentModel_IBindingList_get_SortDirection();

  /// @brief Method System.ComponentModel.IBindingList.get_SortProperty, addr 0x26975dc, size 0x8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_IBindingList_get_SortProperty();

  /// @brief Method System.ComponentModel.IBindingList.get_SupportsChangeNotification, addr 0x26975e4, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_SupportsChangeNotification();

  /// @brief Method System.ComponentModel.IBindingList.get_SupportsSearching, addr 0x26975ec, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_SupportsSearching();

  /// @brief Method System.ComponentModel.IBindingList.get_SupportsSorting, addr 0x26975f4, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_SupportsSorting();

  /// @brief Method MergeEnumerableContent, addr 0x26918b8, size 0xdd8, virtual false, abstract: false, final false
  static inline void MergeEnumerableContent(::Newtonsoft::Json::Linq::JContainer* target, ::System::Collections::IEnumerable* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings);

  // Ctor Parameters [CppParam { name: "", ty: "JContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JContainer(JContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JContainer(JContainer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JContainer();

public:
  /// @brief Field _listChanged, offset: 0x30, size: 0x8, def value: None
  ::System::ComponentModel::ListChangedEventHandler* ____listChanged;

  /// @brief Field _addingNew, offset: 0x38, size: 0x8, def value: None
  ::System::ComponentModel::AddingNewEventHandler* ____addingNew;

  /// @brief Field _syncRoot, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  /// @brief Field _busy, offset: 0x48, size: 0x1, def value: None
  bool ____busy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JContainer, 0x50>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____listChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____addingNew) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____syncRoot) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____busy) == 0x48, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JContainer);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JContainer*, "Newtonsoft.Json.Linq", "JContainer");
NEED_NO_BOX(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__29);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__29*, "Newtonsoft.Json.Linq", "JContainer/<GetDescendants>d__29");
