#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDirectComposition.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDirectComposition_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRDirectComposition._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRDirectComposition::*)()>(&::GlobalNamespace::OVRDirectComposition::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f98854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDirectComposition*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRDirectComposition::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDirectComposition*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRDirectComposition* GlobalNamespace::OVRDirectComposition::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRDirectComposition*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDirectComposition::OVRDirectComposition() {}
