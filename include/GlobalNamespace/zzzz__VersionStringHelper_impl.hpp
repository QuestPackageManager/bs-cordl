#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VersionStringHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VersionStringHelper.GetMajorVersionNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::VersionStringHelper::GetMajorVersionNumber)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1f9376c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VersionStringHelper*>::get(), "GetMajorVersionNumber",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::VersionStringHelper::GetMajorVersionNumber(::StringW versionString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VersionStringHelper*>::get(), "GetMajorVersionNumber",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, versionString);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VersionStringHelper::VersionStringHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
