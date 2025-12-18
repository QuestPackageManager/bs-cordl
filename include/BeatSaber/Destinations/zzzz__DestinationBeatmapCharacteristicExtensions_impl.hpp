#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/DestinationBeatmapCharacteristicExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationBeatmapCharacteristicExtensions_def.hpp"
#include "BeatSaber/Destinations/zzzz__BeatmapCharacteristic_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions.ToSerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::BeatSaber::Destinations::BeatmapCharacteristic)>(
    &::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions::ToSerializedName)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x31b12f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions*>::get(), "ToSerializedName",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::BeatmapCharacteristic>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions.FromSerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Destinations::BeatmapCharacteristic (*)(::StringW)>(
    &::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions::FromSerializedName)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x31b1424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions*>::get(), "FromSerializedName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::StringW BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions::ToSerializedName(::BeatSaber::Destinations::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions*>::get(), "ToSerializedName",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::BeatmapCharacteristic>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, characteristic);
}
inline ::BeatSaber::Destinations::BeatmapCharacteristic BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions::FromSerializedName(::StringW serializedName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions*>::get(), "FromSerializedName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Destinations::BeatmapCharacteristic, false>(nullptr, ___internal_method, serializedName);
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::DestinationBeatmapCharacteristicExtensions::DestinationBeatmapCharacteristicExtensions() {}
