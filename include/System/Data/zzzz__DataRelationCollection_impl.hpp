#pragma once
#include "System/Data/zzzz__InternalDataCollectionBase_impl.hpp"
#include "System/Data/zzzz__DataRelationCollection_def.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeEventHandler_def.hpp"
#include "System/Data/zzzz__DataRelationCollection_DataSetRelationCollection_def.hpp"
#include "System/Data/zzzz__DataRelationCollection_DataTableRelationCollection_def.hpp"
#include "System/Data/zzzz__DataRelation_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
//  Writing Method size for method: ::System::Data::DataRelationCollection.get_ObjectID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataRelationCollection::*)()>(&::System::Data::DataRelationCollection::get_ObjectID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ca371c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "get_ObjectID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRelation* (::System::Data::DataRelationCollection::*)(int32_t)>(
    &::System::Data::DataRelationCollection::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRelation* (::System::Data::DataRelationCollection::*)(::StringW)>(
    &::System::Data::DataRelationCollection::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRelationCollection::*)(::System::Data::DataRelation*)>(
    &::System::Data::DataRelationCollection::Add)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x2ca3724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.AddCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRelationCollection::*)(::System::Data::DataRelation*)>(
    &::System::Data::DataRelationCollection::AddCore)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x2ca39bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.add_CollectionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRelationCollection::*)(::System::ComponentModel::CollectionChangeEventHandler*)>(
    &::System::Data::DataRelationCollection::add_CollectionChanged)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2ca3c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "add_CollectionChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.remove_CollectionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRelationCollection::*)(::System::ComponentModel::CollectionChangeEventHandler*)>(
    &::System::Data::DataRelationCollection::remove_CollectionChanged)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2ca3d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "remove_CollectionChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.AssignName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::DataRelationCollection::*)()>(&::System::Data::DataRelationCollection::AssignName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ca3e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "AssignName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRelationCollection::*)()>(&::System::Data::DataRelationCollection::Clear)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2ca3f38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataRelationCollection::*)(::StringW)>(&::System::Data::DataRelationCollection::Contains)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ca4174;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.InternalIndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataRelationCollection::*)(::StringW)>(
    &::System::Data::DataRelationCollection::InternalIndexOf)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2ca418c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "InternalIndexOf", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.GetDataSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataSet* (::System::Data::DataRelationCollection::*)()>(
    &::System::Data::DataRelationCollection::GetDataSet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.MakeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::DataRelationCollection::*)(int32_t)>(&::System::Data::DataRelationCollection::MakeName)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2ca3e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "MakeName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.OnCollectionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRelationCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataRelationCollection::OnCollectionChanged)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2ca430c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.OnCollectionChanging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRelationCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataRelationCollection::OnCollectionChanging)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2ca43dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.RegisterName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRelationCollection::*)(::StringW)>(&::System::Data::DataRelationCollection::RegisterName)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2ca44ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "RegisterName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRelationCollection::*)(::System::Data::DataRelation*)>(
    &::System::Data::DataRelationCollection::Remove)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2ca4670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.RemoveAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRelationCollection::*)(int32_t)>(&::System::Data::DataRelationCollection::RemoveAt)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2ca4834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "RemoveAt", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.RemoveCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRelationCollection::*)(::System::Data::DataRelation*)>(
    &::System::Data::DataRelationCollection::RemoveCore)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2ca48a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.UnregisterName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRelationCollection::*)(::StringW)>(
    &::System::Data::DataRelationCollection::UnregisterName)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2ca4a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "UnregisterName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRelationCollection::*)()>(&::System::Data::DataRelationCollection::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2ca4bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataRelation*& System::Data::DataRelationCollection::__cordl_internal_get__inTransition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inTransition;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataRelation*> const& System::Data::DataRelationCollection::__cordl_internal_get__inTransition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inTransition;
}
constexpr void System::Data::DataRelationCollection::__cordl_internal_set__inTransition(::System::Data::DataRelation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inTransition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Data::DataRelationCollection::__cordl_internal_get__defaultNameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultNameIndex;
}
constexpr int32_t const& System::Data::DataRelationCollection::__cordl_internal_get__defaultNameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultNameIndex;
}
constexpr void System::Data::DataRelationCollection::__cordl_internal_set__defaultNameIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultNameIndex = value;
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler*& System::Data::DataRelationCollection::__cordl_internal_get__onCollectionChangedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCollectionChangedDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::CollectionChangeEventHandler*> const&
System::Data::DataRelationCollection::__cordl_internal_get__onCollectionChangedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCollectionChangedDelegate;
}
constexpr void System::Data::DataRelationCollection::__cordl_internal_set__onCollectionChangedDelegate(::System::ComponentModel::CollectionChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onCollectionChangedDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler*& System::Data::DataRelationCollection::__cordl_internal_get__onCollectionChangingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCollectionChangingDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::CollectionChangeEventHandler*> const&
System::Data::DataRelationCollection::__cordl_internal_get__onCollectionChangingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCollectionChangingDelegate;
}
constexpr void System::Data::DataRelationCollection::__cordl_internal_set__onCollectionChangingDelegate(::System::ComponentModel::CollectionChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onCollectionChangingDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Data::DataRelationCollection::__cordl_internal_get__objectID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr int32_t const& System::Data::DataRelationCollection::__cordl_internal_get__objectID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr void System::Data::DataRelationCollection::__cordl_internal_set__objectID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectID = value;
}
inline void System::Data::DataRelationCollection::setStaticF_s_objectTypeCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_objectTypeCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Data::DataRelationCollection::getStaticF_s_objectTypeCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_objectTypeCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get>();
}
inline int32_t System::Data::DataRelationCollection::get_ObjectID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "get_ObjectID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Data::DataRelation* System::Data::DataRelationCollection::get_Item(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRelation*, false>(this, ___internal_method, index);
}
inline ::System::Data::DataRelation* System::Data::DataRelationCollection::get_Item(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRelation*, false>(this, ___internal_method, name);
}
inline void System::Data::DataRelationCollection::Add(::System::Data::DataRelation* relation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, relation);
}
inline void System::Data::DataRelationCollection::AddCore(::System::Data::DataRelation* relation) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, relation);
}
inline void System::Data::DataRelationCollection::add_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "add_CollectionChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Data::DataRelationCollection::remove_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "remove_CollectionChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Data::DataRelationCollection::AssignName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "AssignName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Data::DataRelationCollection::Clear() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Data::DataRelationCollection::Contains(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline int32_t System::Data::DataRelationCollection::InternalIndexOf(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "InternalIndexOf", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name);
}
inline ::System::Data::DataSet* System::Data::DataRelationCollection::GetDataSet() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataSet*, false>(this, ___internal_method);
}
inline ::StringW System::Data::DataRelationCollection::MakeName(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "MakeName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, index);
}
inline void System::Data::DataRelationCollection::OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ccevent);
}
inline void System::Data::DataRelationCollection::OnCollectionChanging(::System::ComponentModel::CollectionChangeEventArgs* ccevent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ccevent);
}
inline void System::Data::DataRelationCollection::RegisterName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "RegisterName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void System::Data::DataRelationCollection::Remove(::System::Data::DataRelation* relation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, relation);
}
inline void System::Data::DataRelationCollection::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "RemoveAt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void System::Data::DataRelationCollection::RemoveCore(::System::Data::DataRelation* relation) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, relation);
}
inline void System::Data::DataRelationCollection::UnregisterName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), "UnregisterName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::System::Data::DataRelationCollection* System::Data::DataRelationCollection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::DataRelationCollection*>());
}
inline void System::Data::DataRelationCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRelationCollection*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Data::DataRelationCollection::DataRelationCollection() {}
