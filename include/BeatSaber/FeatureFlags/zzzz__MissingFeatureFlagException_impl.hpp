#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/MissingFeatureFlagException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "BeatSaber/FeatureFlags/zzzz__MissingFeatureFlagException_def.hpp"
//  Writing Method size for method: ::BeatSaber::FeatureFlags::MissingFeatureFlagException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::MissingFeatureFlagException::*)(::StringW)>(&::BeatSaber::FeatureFlags::MissingFeatureFlagException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x31f5b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::MissingFeatureFlagException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void BeatSaber::FeatureFlags::MissingFeatureFlagException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::MissingFeatureFlagException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::BeatSaber::FeatureFlags::MissingFeatureFlagException* BeatSaber::FeatureFlags::MissingFeatureFlagException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::FeatureFlags::MissingFeatureFlagException*>(message));
}
// Ctor Parameters []
constexpr ::BeatSaber::FeatureFlags::MissingFeatureFlagException::MissingFeatureFlagException()   {
}
