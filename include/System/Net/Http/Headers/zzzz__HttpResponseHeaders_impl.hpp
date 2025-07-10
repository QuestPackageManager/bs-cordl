#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/HttpResponseHeaders.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HttpResponseHeaders_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::HttpResponseHeaders._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::Headers::HttpResponseHeaders::*)()>(
    &::System::Net::Http::Headers::HttpResponseHeaders::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x421a510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpResponseHeaders*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Net::Http::Headers::HttpResponseHeaders::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpResponseHeaders*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Http::Headers::HttpResponseHeaders* System::Net::Http::Headers::HttpResponseHeaders::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::Headers::HttpResponseHeaders*>());
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::HttpResponseHeaders::HttpResponseHeaders() {}
