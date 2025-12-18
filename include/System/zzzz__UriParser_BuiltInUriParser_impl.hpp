#pragma once
// IWYU pragma private; include "System/UriParser_BuiltInUriParser.hpp"
#include "System/zzzz__UriParser_impl.hpp"
#include "System/zzzz__UriParser_BuiltInUriParser_def.hpp"
#include "System/zzzz__UriSyntaxFlags_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UriParser_BuiltInUriParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UriParser_BuiltInUriParser::*)(::StringW, int32_t, ::System::UriSyntaxFlags)>(
    &::GlobalNamespace::UriParser_BuiltInUriParser::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61c40f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UriParser_BuiltInUriParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UriParser_BuiltInUriParser::_ctor(::StringW lwrCaseScheme, int32_t defaultPort, ::System::UriSyntaxFlags syntaxFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UriParser_BuiltInUriParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lwrCaseScheme, defaultPort, syntaxFlags);
}
inline ::GlobalNamespace::UriParser_BuiltInUriParser* GlobalNamespace::UriParser_BuiltInUriParser::New_ctor(::StringW lwrCaseScheme, int32_t defaultPort, ::System::UriSyntaxFlags syntaxFlags) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::UriParser_BuiltInUriParser*>(lwrCaseScheme, defaultPort, syntaxFlags));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UriParser_BuiltInUriParser::UriParser_BuiltInUriParser() {}
