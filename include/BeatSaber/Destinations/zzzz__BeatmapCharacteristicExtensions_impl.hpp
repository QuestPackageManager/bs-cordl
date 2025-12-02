#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/BeatmapCharacteristicExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__BeatmapCharacteristicExtensions_def.hpp"
#include "BeatSaber/Destinations/zzzz__BeatmapCharacteristic_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::BeatmapCharacteristicExtensions.ToSerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::BeatSaber::Destinations::BeatmapCharacteristic)>(
    &::BeatSaber::Destinations::BeatmapCharacteristicExtensions::ToSerializedName)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3181600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::BeatmapCharacteristicExtensions*>::get(), "ToSerializedName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::BeatmapCharacteristic>::get() })));
    return ___internal_method;
  }
};
inline ::StringW BeatSaber::Destinations::BeatmapCharacteristicExtensions::ToSerializedName(::BeatSaber::Destinations::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::BeatmapCharacteristicExtensions*>::get(), "ToSerializedName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::BeatmapCharacteristic>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, characteristic);
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::BeatmapCharacteristicExtensions::BeatmapCharacteristicExtensions() {}
