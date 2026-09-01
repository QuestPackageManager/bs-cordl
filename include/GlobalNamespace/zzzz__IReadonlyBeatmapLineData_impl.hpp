#pragma once
// IWYU pragma private; include "GlobalNamespace\IReadonlyBeatmapLineData.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapLineData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IReadonlyBeatmapLineData.get_beatmapObjectsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapObjectData*>* (::GlobalNamespace::IReadonlyBeatmapLineData::*)()>(
    &::GlobalNamespace::IReadonlyBeatmapLineData::get_beatmapObjectsData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IReadonlyBeatmapLineData*>(), { ::i2c::class_of<::GlobalNamespace::IReadonlyBeatmapLineData*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapObjectData*>* GlobalNamespace::IReadonlyBeatmapLineData::get_beatmapObjectsData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IReadonlyBeatmapLineData*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapObjectData*>*>(this, ___internal_method);
}
