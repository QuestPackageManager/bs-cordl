#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDataAddTestSlidersTransform.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataAddTestSlidersTransform_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataAddTestSlidersTransform.CreateTransformedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*)>(
    &::GlobalNamespace::BeatmapDataAddTestSlidersTransform::CreateTransformedData)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x3704c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAddTestSlidersTransform*>(),
                                                                                           { "CreateTransformedData", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataAddTestSlidersTransform.FindNextSameColorTypeNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::NoteData* (*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapDataItem*>*, int32_t, ::GlobalNamespace::ColorType)>(
        &::GlobalNamespace::BeatmapDataAddTestSlidersTransform::FindNextSameColorTypeNote)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x37053d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAddTestSlidersTransform*>(),
                                                                                           { "FindNextSameColorTypeNote",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapDataItem*>*>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataAddTestSlidersTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataAddTestSlidersTransform::*)()>(&::GlobalNamespace::BeatmapDataAddTestSlidersTransform::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37055d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAddTestSlidersTransform*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::BeatmapDataAddTestSlidersTransform::CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAddTestSlidersTransform*>(),
                                                                                         { "CreateTransformedData", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*>(nullptr, ___internal_method, beatmapData);
}
inline ::GlobalNamespace::NoteData*
GlobalNamespace::BeatmapDataAddTestSlidersTransform::FindNextSameColorTypeNote(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapDataItem*>* beatmapDataItems,
                                                                               int32_t startIndex, ::GlobalNamespace::ColorType colorType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAddTestSlidersTransform*>(),
                                                                                         { "FindNextSameColorTypeNote",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapDataItem*>*>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*>(nullptr, ___internal_method, beatmapDataItems, startIndex, colorType);
}
inline void GlobalNamespace::BeatmapDataAddTestSlidersTransform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataAddTestSlidersTransform*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataAddTestSlidersTransform* GlobalNamespace::BeatmapDataAddTestSlidersTransform::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataAddTestSlidersTransform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataAddTestSlidersTransform::BeatmapDataAddTestSlidersTransform() {}
