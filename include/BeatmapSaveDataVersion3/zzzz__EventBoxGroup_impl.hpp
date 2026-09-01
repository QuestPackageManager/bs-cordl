#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3\EventBoxGroup.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBoxGroup_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBox_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::EventBoxGroup.get_groupId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion3::EventBoxGroup::*)()>(&::BeatmapSaveDataVersion3::EventBoxGroup::get_groupId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375e8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::EventBoxGroup*>(), { "get_groupId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::EventBoxGroup.get_baseEventBoxes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::EventBox*>* (::BeatmapSaveDataVersion3::EventBoxGroup::*)()>(
    &::BeatmapSaveDataVersion3::EventBoxGroup::get_baseEventBoxes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::EventBoxGroup*>(), { ::i2c::class_of<::BeatmapSaveDataVersion3::EventBoxGroup*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::EventBoxGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::EventBoxGroup::*)(float_t, int32_t)>(&::BeatmapSaveDataVersion3::EventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x375e8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::EventBoxGroup*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatmapSaveDataVersion3::EventBoxGroup::__cordl_internal_get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr int32_t const& BeatmapSaveDataVersion3::EventBoxGroup::__cordl_internal_get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr void BeatmapSaveDataVersion3::EventBoxGroup::__cordl_internal_set_g(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___g = value;
}
inline int32_t BeatmapSaveDataVersion3::EventBoxGroup::get_groupId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::EventBoxGroup*>(), { "get_groupId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::EventBox*>* BeatmapSaveDataVersion3::EventBoxGroup::get_baseEventBoxes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatmapSaveDataVersion3::EventBoxGroup*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::EventBox*>*>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::EventBoxGroup::_ctor(float_t beat, int32_t groupId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::EventBoxGroup*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, groupId);
}
inline ::BeatmapSaveDataVersion3::EventBoxGroup* BeatmapSaveDataVersion3::EventBoxGroup::New_ctor(float_t beat, int32_t groupId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::EventBoxGroup*>(beat, groupId));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::EventBoxGroup::EventBoxGroup() {}
