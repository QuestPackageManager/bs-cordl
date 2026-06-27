#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/FeatureConfiguration_Hardcoded.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_impl.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_Hardcoded_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FeatureConfiguration_Hardcoded._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FeatureConfiguration_Hardcoded::*)(bool)>(&::GlobalNamespace::FeatureConfiguration_Hardcoded::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31f5bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FeatureConfiguration_Hardcoded*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::FeatureConfiguration_Hardcoded::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr bool const& GlobalNamespace::FeatureConfiguration_Hardcoded::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void GlobalNamespace::FeatureConfiguration_Hardcoded::__cordl_internal_set_value(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
inline void GlobalNamespace::FeatureConfiguration_Hardcoded::_ctor(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FeatureConfiguration_Hardcoded*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::FeatureConfiguration_Hardcoded* GlobalNamespace::FeatureConfiguration_Hardcoded::New_ctor(bool  value)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FeatureConfiguration_Hardcoded*>(value));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FeatureConfiguration_Hardcoded::FeatureConfiguration_Hardcoded()   {
}
