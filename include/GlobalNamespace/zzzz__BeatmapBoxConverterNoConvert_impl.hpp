#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapBoxConverterNoConvert.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapBoxConverterNoConvert::*)(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>*, int32_t, int32_t)>(&::GlobalNamespace::BeatmapBoxConverterNoConvert::ConvertBoxEventGroupId)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3631194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapBoxConverterNoConvert*>::get(), "ConvertBoxEventGroupId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapBoxConverterNoConvert.ConvertRotationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightRotationBaseData* (
    ::GlobalNamespace::BeatmapBoxConverterNoConvert::*)(float_t, ::BeatmapSaveDataVersion4::LightRotationEvent, ::BeatmapSaveDataVersion4::LightRotationEventBox)>(
    &::GlobalNamespace::BeatmapBoxConverterNoConvert::ConvertRotationEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x363125c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapBoxConverterNoConvert*>::get(), "ConvertRotationEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightRotationEvent>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightRotationEventBox>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapBoxConverterNoConvert._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapBoxConverterNoConvert::*)()>(
    &::GlobalNamespace::BeatmapBoxConverterNoConvert::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36312f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapBoxConverterNoConvert*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapBoxConverterNoConvert::ConvertBoxEventGroupId(::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>* output, int32_t groupId,
                                                                                  int32_t boxEventType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapBoxConverterNoConvert*>::get(), "ConvertBoxEventGroupId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, groupId, boxEventType);
}
inline ::GlobalNamespace::LightRotationBaseData* GlobalNamespace::BeatmapBoxConverterNoConvert::ConvertRotationEvent(float_t beat, ::BeatmapSaveDataVersion4::LightRotationEvent lightRotationEvent,
                                                                                                                     ::BeatmapSaveDataVersion4::LightRotationEventBox eventBox) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapBoxConverterNoConvert*>::get(), "ConvertRotationEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightRotationEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightRotationEventBox>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightRotationBaseData*, false>(this, ___internal_method, beat, lightRotationEvent, eventBox);
}
inline void GlobalNamespace::BeatmapBoxConverterNoConvert::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapBoxConverterNoConvert*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapBoxConverterNoConvert* GlobalNamespace::BeatmapBoxConverterNoConvert::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapBoxConverterNoConvert*>());
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
