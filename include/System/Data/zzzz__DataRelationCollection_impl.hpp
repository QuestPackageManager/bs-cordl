#pragma once
// IWYU pragma private; include "System\Data\DataRelationCollection.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataRelationCollection::*)()>(&::System::Data::DataRelationCollection::get_ObjectID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6027d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "get_ObjectID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRelation* (::System::Data::DataRelationCollection::*)(int32_t)>(&::System::Data::DataRelationCollection::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRelation* (::System::Data::DataRelationCollection::*)(::StringW)>(&::System::Data::DataRelationCollection::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRelationCollection::*)(::System::Data::DataRelation*)>(&::System::Data::DataRelationCollection::Add)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6027d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.AddCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRelationCollection::*)(::System::Data::DataRelation*)>(&::System::Data::DataRelationCollection::AddCore)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x6027f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.add_CollectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRelationCollection::*)(::System::ComponentModel::CollectionChangeEventHandler*)>(
    &::System::Data::DataRelationCollection::add_CollectionChanged)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x60281f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(),
                                                             { "add_CollectionChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.remove_CollectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRelationCollection::*)(::System::ComponentModel::CollectionChangeEventHandler*)>(
    &::System::Data::DataRelationCollection::remove_CollectionChanged)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x60282f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(),
                                                             { "remove_CollectionChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.AssignName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataRelationCollection::*)()>(&::System::Data::DataRelationCollection::AssignName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6028400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "AssignName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRelationCollection::*)()>(&::System::Data::DataRelationCollection::Clear)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x60284f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataRelationCollection::*)(::StringW)>(&::System::Data::DataRelationCollection::Contains)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6028724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.InternalIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataRelationCollection::*)(::StringW)>(&::System::Data::DataRelationCollection::InternalIndexOf)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x602873c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "InternalIndexOf", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.GetDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataSet* (::System::Data::DataRelationCollection::*)()>(&::System::Data::DataRelationCollection::GetDataSet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.MakeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataRelationCollection::*)(int32_t)>(&::System::Data::DataRelationCollection::MakeName)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6028424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "MakeName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.OnCollectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRelationCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataRelationCollection::OnCollectionChanged)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x60288b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.OnCollectionChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRelationCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataRelationCollection::OnCollectionChanging)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x60289a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.RegisterName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRelationCollection::*)(::StringW)>(&::System::Data::DataRelationCollection::RegisterName)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6028a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "RegisterName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRelationCollection::*)(::System::Data::DataRelation*)>(&::System::Data::DataRelationCollection::Remove)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6028c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "Remove", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.RemoveAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRelationCollection::*)(int32_t)>(&::System::Data::DataRelationCollection::RemoveAt)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6028e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.RemoveCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRelationCollection::*)(::System::Data::DataRelation*)>(&::System::Data::DataRelationCollection::RemoveCore)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x6028e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection.UnregisterName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRelationCollection::*)(::StringW)>(&::System::Data::DataRelationCollection::UnregisterName)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6029044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "UnregisterName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRelationCollection::*)()>(&::System::Data::DataRelationCollection::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6029178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataRelation*& System::Data::DataRelationCollection::__cordl_internal_get__inTransition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inTransition;
}
constexpr ::System::Data::DataRelation* const& System::Data::DataRelationCollection::__cordl_internal_get__inTransition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inTransition;
}
constexpr void System::Data::DataRelationCollection::__cordl_internal_set__inTransition(::System::Data::DataRelation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inTransition = value;
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
constexpr ::System::ComponentModel::CollectionChangeEventHandler* const& System::Data::DataRelationCollection::__cordl_internal_get__onCollectionChangedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCollectionChangedDelegate;
}
constexpr void System::Data::DataRelationCollection::__cordl_internal_set__onCollectionChangedDelegate(::System::ComponentModel::CollectionChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onCollectionChangedDelegate = value;
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler*& System::Data::DataRelationCollection::__cordl_internal_get__onCollectionChangingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCollectionChangingDelegate;
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler* const& System::Data::DataRelationCollection::__cordl_internal_get__onCollectionChangingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCollectionChangingDelegate;
}
constexpr void System::Data::DataRelationCollection::__cordl_internal_set__onCollectionChangingDelegate(::System::ComponentModel::CollectionChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onCollectionChangingDelegate = value;
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
  ::cordl_internals::setStaticField<int32_t, "s_objectTypeCount", ::System::Data::DataRelationCollection*>(std::forward<int32_t>(value));
}
inline int32_t System::Data::DataRelationCollection::getStaticF_s_objectTypeCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_objectTypeCount", ::System::Data::DataRelationCollection*>();
}
inline int32_t System::Data::DataRelationCollection::get_ObjectID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "get_ObjectID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Data::DataRelation* System::Data::DataRelationCollection::get_Item(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRelation*>(this, ___internal_method, index);
}
inline ::System::Data::DataRelation* System::Data::DataRelationCollection::get_Item(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRelation*>(this, ___internal_method, name);
}
inline void System::Data::DataRelationCollection::Add(::System::Data::DataRelation* relation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relation);
}
inline void System::Data::DataRelationCollection::AddCore(::System::Data::DataRelation* relation) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relation);
}
inline void System::Data::DataRelationCollection::add_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "add_CollectionChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataRelationCollection::remove_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(),
                                                           { "remove_CollectionChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Data::DataRelationCollection::AssignName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "AssignName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataRelationCollection::Clear() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::DataRelationCollection::Contains(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline int32_t System::Data::DataRelationCollection::InternalIndexOf(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "InternalIndexOf", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline ::System::Data::DataSet* System::Data::DataRelationCollection::GetDataSet() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataSet*>(this, ___internal_method);
}
inline ::StringW System::Data::DataRelationCollection::MakeName(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "MakeName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline void System::Data::DataRelationCollection::OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ccevent);
}
inline void System::Data::DataRelationCollection::OnCollectionChanging(::System::ComponentModel::CollectionChangeEventArgs* ccevent) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ccevent);
}
inline void System::Data::DataRelationCollection::RegisterName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "RegisterName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Data::DataRelationCollection::Remove(::System::Data::DataRelation* relation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "Remove", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relation);
}
inline void System::Data::DataRelationCollection::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void System::Data::DataRelationCollection::RemoveCore(::System::Data::DataRelation* relation) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationCollection*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relation);
}
inline void System::Data::DataRelationCollection::UnregisterName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { "UnregisterName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Data::DataRelationCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::DataRelationCollection* System::Data::DataRelationCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataRelationCollection*>());
}
// Ctor Parameters []
constexpr ::System::Data::DataRelationCollection::DataRelationCollection() {}
