#pragma once
// IWYU pragma private; include "System/Net/Http/HttpUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/zzzz__HttpUtilities_def.hpp"
//  Writing Method size for method: ::System::Net::Http::HttpUtilities.IsSupportedSecureScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Net::Http::HttpUtilities::IsSupportedSecureScheme)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4217064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpUtilities*>::get(), "IsSupportedSecureScheme",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpUtilities.IsSecureWebSocketScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Net::Http::HttpUtilities::IsSecureWebSocketScheme)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x42170d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpUtilities*>::get(), "IsSecureWebSocketScheme",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline bool System::Net::Http::HttpUtilities::IsSupportedSecureScheme(::StringW scheme) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpUtilities*>::get(), "IsSupportedSecureScheme",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, scheme);
}
inline bool System::Net::Http::HttpUtilities::IsSecureWebSocketScheme(::StringW scheme) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpUtilities*>::get(), "IsSecureWebSocketScheme",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, scheme);
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpUtilities::HttpUtilities() {}
