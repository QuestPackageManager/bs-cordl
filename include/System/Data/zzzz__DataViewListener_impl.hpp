#pragma once
// IWYU pragma private; include "System\Data\DataViewListener.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__DataViewListener_def.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedType_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__DataView_def.hpp"
#include "System/Data/zzzz__Index_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
//  Writing Method size for method: ::System::Data::DataViewListener._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewListener::*)(::System::Data::DataView*)>(&::System::Data::DataViewListener::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6031728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataView*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewListener.ChildRelationCollectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewListener::*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataViewListener::ChildRelationCollectionChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x603515c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(),
                                         { "ChildRelationCollectionChanged", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewListener.ParentRelationCollectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewListener::*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataViewListener::ParentRelationCollectionChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6035234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(),
                                         { "ParentRelationCollectionChanged", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewListener.ColumnCollectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewListener::*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataViewListener::ColumnCollectionChanged)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x60352f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(),
                                                { "ColumnCollectionChanged", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewListener.MaintainDataView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewListener::*)(::System::ComponentModel::ListChangedType, ::System::Data::DataRow*, bool)>(
    &::System::Data::DataViewListener::MaintainDataView)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x60353c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(),
                            { "MaintainDataView", {}, { ::i2c::type_of<::System::ComponentModel::ListChangedType>(), ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewListener.IndexListChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewListener::*)(::System::ComponentModel::ListChangedEventArgs*)>(
    &::System::Data::DataViewListener::IndexListChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x60354a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { "IndexListChanged", {}, { ::i2c::type_of<::System::ComponentModel::ListChangedEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewListener.RegisterMetaDataEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewListener::*)(::System::Data::DataTable*)>(&::System::Data::DataViewListener::RegisterMetaDataEvents)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x60317b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { "RegisterMetaDataEvents", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewListener.UnregisterMetaDataEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewListener::*)()>(&::System::Data::DataViewListener::UnregisterMetaDataEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6032498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { "UnregisterMetaDataEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewListener.UnregisterMetaDataEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewListener::*)(bool)>(&::System::Data::DataViewListener::UnregisterMetaDataEvents)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x6035798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { "UnregisterMetaDataEvents", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewListener.RegisterListChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewListener::*)(::System::Data::Index*)>(&::System::Data::DataViewListener::RegisterListChangedEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6034930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { "RegisterListChangedEvent", {}, { ::i2c::type_of<::System::Data::Index*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewListener.UnregisterListChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewListener::*)()>(&::System::Data::DataViewListener::UnregisterListChangedEvent)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6034838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { "UnregisterListChangedEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewListener.CleanUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewListener::*)(bool)>(&::System::Data::DataViewListener::CleanUp)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x603521c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { "CleanUp", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewListener.RegisterListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewListener::*)(::System::Data::DataTable*)>(&::System::Data::DataViewListener::RegisterListener)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x6035560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { "RegisterListener", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::WeakReference*& System::Data::DataViewListener::__cordl_internal_get__dvWeak() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dvWeak;
}
constexpr ::System::WeakReference* const& System::Data::DataViewListener::__cordl_internal_get__dvWeak() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dvWeak;
}
constexpr void System::Data::DataViewListener::__cordl_internal_set__dvWeak(::System::WeakReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dvWeak = value;
}
constexpr ::System::Data::DataTable*& System::Data::DataViewListener::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::DataViewListener::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::DataViewListener::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____table = value;
}
constexpr ::System::Data::Index*& System::Data::DataViewListener::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr ::System::Data::Index* const& System::Data::DataViewListener::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::Data::DataViewListener::__cordl_internal_set__index(::System::Data::Index* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
constexpr int32_t& System::Data::DataViewListener::__cordl_internal_get__objectID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr int32_t const& System::Data::DataViewListener::__cordl_internal_get__objectID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr void System::Data::DataViewListener::__cordl_internal_set__objectID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectID = value;
}
inline void System::Data::DataViewListener::_ctor(::System::Data::DataView* dv) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataView*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dv);
}
inline void System::Data::DataViewListener::ChildRelationCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(),
                                       { "ChildRelationCollectionChanged", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void System::Data::DataViewListener::ParentRelationCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(),
                                       { "ParentRelationCollectionChanged", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void System::Data::DataViewListener::ColumnCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(),
                                              { "ColumnCollectionChanged", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void System::Data::DataViewListener::MaintainDataView(::System::ComponentModel::ListChangedType changedType, ::System::Data::DataRow* row, bool trackAddRemove) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(),
                          { "MaintainDataView", {}, { ::i2c::type_of<::System::ComponentModel::ListChangedType>(), ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changedType, row, trackAddRemove);
}
inline void System::Data::DataViewListener::IndexListChanged(::System::ComponentModel::ListChangedEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { "IndexListChanged", {}, { ::i2c::type_of<::System::ComponentModel::ListChangedEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Data::DataViewListener::RegisterMetaDataEvents(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { "RegisterMetaDataEvents", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void System::Data::DataViewListener::UnregisterMetaDataEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { "UnregisterMetaDataEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataViewListener::UnregisterMetaDataEvents(bool updateListeners) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { "UnregisterMetaDataEvents", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateListeners);
}
inline void System::Data::DataViewListener::RegisterListChangedEvent(::System::Data::Index* index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { "RegisterListChangedEvent", {}, { ::i2c::type_of<::System::Data::Index*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void System::Data::DataViewListener::UnregisterListChangedEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { "UnregisterListChangedEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataViewListener::CleanUp(bool updateListeners) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { "CleanUp", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateListeners);
}
inline void System::Data::DataViewListener::RegisterListener(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewListener*>(), { "RegisterListener", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline ::System::Data::DataViewListener* System::Data::DataViewListener::New_ctor(::System::Data::DataView* dv) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataViewListener*>(dv));
}
// Ctor Parameters []
constexpr ::System::Data::DataViewListener::DataViewListener() {}
