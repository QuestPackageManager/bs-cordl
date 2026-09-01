#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapLineData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLineData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapLineData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLineData.get_beatmapObjectsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapObjectData*>* (::GlobalNamespace::BeatmapLineData::*)()>(
    &::GlobalNamespace::BeatmapLineData::get_beatmapObjectsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325c528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLineData*>(), { "get_beatmapObjectsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLineData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLineData::*)(int32_t)>(&::GlobalNamespace::BeatmapLineData::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x325c530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLineData*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLineData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLineData::*)(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*)>(
    &::GlobalNamespace::BeatmapLineData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325c5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLineData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLineData.AddBeatmapObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLineData::*)(::GlobalNamespace::BeatmapObjectData*)>(
    &::GlobalNamespace::BeatmapLineData::AddBeatmapObjectData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x325c5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLineData*>(), { "AddBeatmapObjectData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectData*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*& GlobalNamespace::BeatmapLineData::__cordl_internal_get__beatmapObjectsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectsData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>* const& GlobalNamespace::BeatmapLineData::__cordl_internal_get__beatmapObjectsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectsData;
}
constexpr void GlobalNamespace::BeatmapLineData::__cordl_internal_set__beatmapObjectsData(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectsData = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapObjectData*>* GlobalNamespace::BeatmapLineData::get_beatmapObjectsData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLineData*>(), { "get_beatmapObjectsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapObjectData*>*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLineData::_ctor(int32_t initialCapacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLineData*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialCapacity);
}
inline void GlobalNamespace::BeatmapLineData::_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>* beatmapObjectData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLineData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapObjectData);
}
inline void GlobalNamespace::BeatmapLineData::AddBeatmapObjectData(::GlobalNamespace::BeatmapObjectData* beatmapObjectData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLineData*>(), { "AddBeatmapObjectData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapObjectData);
}
inline ::GlobalNamespace::BeatmapLineData* GlobalNamespace::BeatmapLineData::New_ctor(int32_t initialCapacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLineData*>(initialCapacity));
}
inline ::GlobalNamespace::BeatmapLineData* GlobalNamespace::BeatmapLineData::New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>* beatmapObjectData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLineData*>(beatmapObjectData));
}
/// @brief Convert operator to "::GlobalNamespace::IReadonlyBeatmapLineData"
constexpr GlobalNamespace::BeatmapLineData::operator ::GlobalNamespace::IReadonlyBeatmapLineData*() noexcept {
  return static_cast<::GlobalNamespace::IReadonlyBeatmapLineData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IReadonlyBeatmapLineData"
constexpr ::GlobalNamespace::IReadonlyBeatmapLineData* GlobalNamespace::BeatmapLineData::i___GlobalNamespace__IReadonlyBeatmapLineData() noexcept {
  return static_cast<::GlobalNamespace::IReadonlyBeatmapLineData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLineData::BeatmapLineData() {}
