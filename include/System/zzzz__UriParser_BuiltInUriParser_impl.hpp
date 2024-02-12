#pragma once
#include "System/zzzz__UriParser_impl.hpp"
#include "System/zzzz__UriParser_BuiltInUriParser_def.hpp"
#include "System/zzzz__UriSyntaxFlags_def.hpp"
//  Writing Method size for method: ::System::__UriParser__BuiltInUriParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__UriParser__BuiltInUriParser::*)(::StringW, int32_t, ::System::UriSyntaxFlags)>(
    &::System::__UriParser__BuiltInUriParser::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2950380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__UriParser__BuiltInUriParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get() })));
    return ___internal_method;
  }
};
inline ::System::__UriParser__BuiltInUriParser* System::__UriParser__BuiltInUriParser::New_ctor(::StringW lwrCaseScheme, int32_t defaultPort, ::System::UriSyntaxFlags syntaxFlags) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::__UriParser__BuiltInUriParser*>(lwrCaseScheme, defaultPort, syntaxFlags));
}
inline void System::__UriParser__BuiltInUriParser::_ctor(::StringW lwrCaseScheme, int32_t defaultPort, ::System::UriSyntaxFlags syntaxFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__UriParser__BuiltInUriParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lwrCaseScheme, defaultPort, syntaxFlags);
}
// Ctor Parameters []
constexpr ::System::__UriParser__BuiltInUriParser::__UriParser__BuiltInUriParser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
