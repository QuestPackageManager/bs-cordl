#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapBoxConverterNoConvert.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapBoxConverterNoConvert_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightRotationEventBox_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightRotationEvent_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapBoxConverter_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBaseData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapBoxConverterNoConvert.ConvertBoxEventGroupId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapBoxConverterNoConvert::*)(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>*, int32_t, int32_t)>(&::GlobalNamespace::BeatmapBoxConverterNoConvert::ConvertBoxEventGroupId)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x372ff48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapBoxConverterNoConvert*>(),
                            { "ConvertBoxEventGroupId",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapBoxConverterNoConvert.ConvertRotationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LightRotationBaseData* (
    ::GlobalNamespace::BeatmapBoxConverterNoConvert::*)(float_t, ::BeatmapSaveDataVersion4::LightRotationEvent, ::BeatmapSaveDataVersion4::LightRotationEventBox)>(
    &::GlobalNamespace::BeatmapBoxConverterNoConvert::ConvertRotationEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3730010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapBoxConverterNoConvert*>(),
                            { "ConvertRotationEvent",
                              {},
                              { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataVersion4::LightRotationEvent>(), ::i2c::type_of<::BeatmapSaveDataVersion4::LightRotationEventBox>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapBoxConverterNoConvert._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapBoxConverterNoConvert::*)()>(&::GlobalNamespace::BeatmapBoxConverterNoConvert::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37300ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapBoxConverterNoConvert*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapBoxConverterNoConvert::ConvertBoxEventGroupId(::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>* output, int32_t groupId,
                                                                                  int32_t boxEventType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapBoxConverterNoConvert*>(),
                          { "ConvertBoxEventGroupId",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, groupId, boxEventType);
}
inline ::GlobalNamespace::LightRotationBaseData* GlobalNamespace::BeatmapBoxConverterNoConvert::ConvertRotationEvent(float_t beat, ::BeatmapSaveDataVersion4::LightRotationEvent lightRotationEvent,
                                                                                                                     ::BeatmapSaveDataVersion4::LightRotationEventBox eventBox) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapBoxConverterNoConvert*>(),
                          { "ConvertRotationEvent",
                            {},
                            { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataVersion4::LightRotationEvent>(), ::i2c::type_of<::BeatmapSaveDataVersion4::LightRotationEventBox>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightRotationBaseData*>(this, ___internal_method, beat, lightRotationEvent, eventBox);
}
inline void GlobalNamespace::BeatmapBoxConverterNoConvert::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapBoxConverterNoConvert*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapBoxConverterNoConvert* GlobalNamespace::BeatmapBoxConverterNoConvert::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapBoxConverterNoConvert*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBeatmapBoxConverter"
constexpr GlobalNamespace::BeatmapBoxConverterNoConvert::operator ::GlobalNamespace::IBeatmapBoxConverter*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapBoxConverter*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapBoxConverter"
constexpr ::GlobalNamespace::IBeatmapBoxConverter* GlobalNamespace::BeatmapBoxConverterNoConvert::i___GlobalNamespace__IBeatmapBoxConverter() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapBoxConverter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapBoxConverterNoConvert::BeatmapBoxConverterNoConvert() {}
