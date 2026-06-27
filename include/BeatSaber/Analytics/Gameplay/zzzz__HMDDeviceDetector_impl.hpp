#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/HMDDeviceDetector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__HMDDeviceDetector_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::HMDDeviceDetector.DetectHMDPlatform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::BeatSaber::Analytics::Gameplay::HMDDeviceDetector::DetectHMDPlatform)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x31cf714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*>::get(),
                        "DetectHMDPlatform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::StringW BeatSaber::Analytics::Gameplay::HMDDeviceDetector::DetectHMDPlatform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*>::get(),
                        "DetectHMDPlatform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::HMDDeviceDetector::HMDDeviceDetector()   {
}
