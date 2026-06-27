#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/FeatureConfiguration.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_Hardcoded_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_RemoteWithDependency_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_Remote_def.hpp"
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureConfiguration._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::FeatureConfiguration::*)()>(&::BeatSaber::FeatureFlags::FeatureConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31f5bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureConfiguration*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void BeatSaber::FeatureFlags::FeatureConfiguration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureConfiguration*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::FeatureFlags::FeatureConfiguration* BeatSaber::FeatureFlags::FeatureConfiguration::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::FeatureFlags::FeatureConfiguration*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::FeatureFlags::FeatureConfiguration::FeatureConfiguration()   {
}
