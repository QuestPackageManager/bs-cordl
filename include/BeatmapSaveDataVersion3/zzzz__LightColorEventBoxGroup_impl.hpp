#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/LightColorEventBoxGroup.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBoxGroup_1_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightColorEventBoxGroup_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightColorEventBox_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorEventBoxGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::LightColorEventBoxGroup::*)(
    float_t, int32_t, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBox*>*)>(&::BeatmapSaveDataVersion3::LightColorEventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x375a4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>(),
            { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBox*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorEventBoxGroup.CopyWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataVersion3::LightColorEventBoxGroup* (
    ::BeatmapSaveDataVersion3::LightColorEventBoxGroup::*)(::System::Nullable_1<float_t>, ::System::Nullable_1<int32_t>)>(&::BeatmapSaveDataVersion3::LightColorEventBoxGroup::CopyWith)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x375a564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>(),
                                                             { "CopyWith", {}, { ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
    return ___internal_method;
  }
};
inline void BeatmapSaveDataVersion3::LightColorEventBoxGroup::_ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBox*>* eventBoxes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>(),
          { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBox*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, groupId, eventBoxes);
}
inline ::BeatmapSaveDataVersion3::LightColorEventBoxGroup* BeatmapSaveDataVersion3::LightColorEventBoxGroup::CopyWith(::System::Nullable_1<float_t> newBeat, ::System::Nullable_1<int32_t> newGroupId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>(),
                                                           { "CopyWith", {}, { ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>(this, ___internal_method, newBeat, newGroupId);
}
inline ::BeatmapSaveDataVersion3::LightColorEventBoxGroup*
BeatmapSaveDataVersion3::LightColorEventBoxGroup::New_ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBox*>* eventBoxes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>(beat, groupId, eventBoxes));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::LightColorEventBoxGroup::LightColorEventBoxGroup() {}
