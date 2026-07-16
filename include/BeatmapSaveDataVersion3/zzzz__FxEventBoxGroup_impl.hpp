#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/FxEventBoxGroup.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBoxGroup_1_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FxEventType_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FxEventBoxGroup_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FxEventBox_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FxEventType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FxEventBoxGroup.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataVersion3::FxEventType (::BeatmapSaveDataVersion3::FxEventBoxGroup::*)()>(
    &::BeatmapSaveDataVersion3::FxEventBoxGroup::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375a148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventBoxGroup*>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FxEventBoxGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::FxEventBoxGroup::*)(
    float_t, int32_t, ::BeatmapSaveDataVersion3::FxEventType, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBox*>*)>(&::BeatmapSaveDataVersion3::FxEventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x375a150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventBoxGroup*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::BeatmapSaveDataVersion3::FxEventType>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBox*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion3::FxEventType& BeatmapSaveDataVersion3::FxEventBoxGroup::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::BeatmapSaveDataVersion3::FxEventType const& BeatmapSaveDataVersion3::FxEventBoxGroup::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void BeatmapSaveDataVersion3::FxEventBoxGroup::__cordl_internal_set_t(::BeatmapSaveDataVersion3::FxEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
inline ::BeatmapSaveDataVersion3::FxEventType BeatmapSaveDataVersion3::FxEventBoxGroup::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventBoxGroup*>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::FxEventType>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::FxEventBoxGroup::_ctor(float_t beat, int32_t groupId, ::BeatmapSaveDataVersion3::FxEventType type,
                                                            ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBox*>* eventBoxes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FxEventBoxGroup*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::BeatmapSaveDataVersion3::FxEventType>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBox*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, groupId, type, eventBoxes);
}
inline ::BeatmapSaveDataVersion3::FxEventBoxGroup* BeatmapSaveDataVersion3::FxEventBoxGroup::New_ctor(float_t beat, int32_t groupId, ::BeatmapSaveDataVersion3::FxEventType type,
                                                                                                      ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FxEventBox*>* eventBoxes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::FxEventBoxGroup*>(beat, groupId, type, eventBoxes));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::FxEventBoxGroup::FxEventBoxGroup() {}
