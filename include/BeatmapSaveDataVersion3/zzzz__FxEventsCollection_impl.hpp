#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/FxEventsCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FxEventsCollection_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FloatFxEventBaseData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__IntFxEventBaseData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FxEventsCollection.get_intEventsList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>* (
    ::BeatmapSaveDataVersion3::FxEventsCollection::*)()>(&::BeatmapSaveDataVersion3::FxEventsCollection::get_intEventsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375a1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventsCollection*>(), { "get_intEventsList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FxEventsCollection.get_floatEventsList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>* (
    ::BeatmapSaveDataVersion3::FxEventsCollection::*)()>(&::BeatmapSaveDataVersion3::FxEventsCollection::get_floatEventsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375a1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventsCollection*>(), { "get_floatEventsList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FxEventsCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::FxEventsCollection::*)()>(&::BeatmapSaveDataVersion3::FxEventsCollection::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x375a1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventsCollection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FxEventsCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::FxEventsCollection::*)(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>*)>(
    &::BeatmapSaveDataVersion3::FxEventsCollection::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x375a294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventsCollection*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FxEventsCollection.AddEventAndGetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion3::FxEventsCollection::*)(::BeatmapSaveDataVersion3::FloatFxEventBaseData*)>(
    &::BeatmapSaveDataVersion3::FxEventsCollection::AddEventAndGetIndex)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x375a35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventsCollection*>(),
                                                                                           { "AddEventAndGetIndex", {}, { ::i2c::type_of<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FxEventsCollection.AddEventAndGetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion3::FxEventsCollection::*)(::BeatmapSaveDataVersion3::IntFxEventBaseData*)>(
    &::BeatmapSaveDataVersion3::FxEventsCollection::AddEventAndGetIndex)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x375a42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventsCollection*>(),
                                                                                           { "AddEventAndGetIndex", {}, { ::i2c::type_of<::BeatmapSaveDataVersion3::IntFxEventBaseData*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>*& BeatmapSaveDataVersion3::FxEventsCollection::__cordl_internal_get__il() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____il;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>* const& BeatmapSaveDataVersion3::FxEventsCollection::__cordl_internal_get__il() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____il;
}
constexpr void BeatmapSaveDataVersion3::FxEventsCollection::__cordl_internal_set__il(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____il = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>*& BeatmapSaveDataVersion3::FxEventsCollection::__cordl_internal_get__fl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fl;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>* const& BeatmapSaveDataVersion3::FxEventsCollection::__cordl_internal_get__fl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fl;
}
constexpr void BeatmapSaveDataVersion3::FxEventsCollection::__cordl_internal_set__fl(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fl = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>* BeatmapSaveDataVersion3::FxEventsCollection::get_intEventsList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventsCollection*>(), { "get_intEventsList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>* BeatmapSaveDataVersion3::FxEventsCollection::get_floatEventsList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventsCollection*>(), { "get_floatEventsList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>*>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::FxEventsCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventsCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::FxEventsCollection::_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>* intFxEventBaseData,
                                                               ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>* floatFxEventBaseData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventsCollection*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, intFxEventBaseData, floatFxEventBaseData);
}
inline int32_t BeatmapSaveDataVersion3::FxEventsCollection::AddEventAndGetIndex(::BeatmapSaveDataVersion3::FloatFxEventBaseData* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventsCollection*>(),
                                                                                         { "AddEventAndGetIndex", {}, { ::i2c::type_of<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, e);
}
inline int32_t BeatmapSaveDataVersion3::FxEventsCollection::AddEventAndGetIndex(::BeatmapSaveDataVersion3::IntFxEventBaseData* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventsCollection*>(),
                                                                                         { "AddEventAndGetIndex", {}, { ::i2c::type_of<::BeatmapSaveDataVersion3::IntFxEventBaseData*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, e);
}
inline ::BeatmapSaveDataVersion3::FxEventsCollection* BeatmapSaveDataVersion3::FxEventsCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::FxEventsCollection*>());
}
inline ::BeatmapSaveDataVersion3::FxEventsCollection*
BeatmapSaveDataVersion3::FxEventsCollection::New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>* intFxEventBaseData,
                                                      ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>* floatFxEventBaseData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::FxEventsCollection*>(intFxEventBaseData, floatFxEventBaseData));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::FxEventsCollection::FxEventsCollection() {}
