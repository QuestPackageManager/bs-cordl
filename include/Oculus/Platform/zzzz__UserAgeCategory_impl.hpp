#pragma once
// IWYU pragma private; include "Oculus/Platform/UserAgeCategory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__UserAgeCategory_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserAccountAgeCategory_def.hpp"
#include "Oculus/Platform/zzzz__AppAgeCategory_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::UserAgeCategory.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserAccountAgeCategory*>* (*)()>(
    &::Oculus::Platform::UserAgeCategory::Get)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2af5df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserAgeCategory*>::get(), "Get",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::UserAgeCategory.Report
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(::Oculus::Platform::AppAgeCategory)>(&::Oculus::Platform::UserAgeCategory::Report)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2af5f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserAgeCategory*>::get(), "Report", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::AppAgeCategory>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserAccountAgeCategory*>* Oculus::Platform::UserAgeCategory::Get() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserAgeCategory*>::get(), "Get",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request* Oculus::Platform::UserAgeCategory::Report(::Oculus::Platform::AppAgeCategory age_category) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserAgeCategory*>::get(), "Report", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::AppAgeCategory>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*, false>(nullptr, ___internal_method, age_category);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::UserAgeCategory::UserAgeCategory() {}
