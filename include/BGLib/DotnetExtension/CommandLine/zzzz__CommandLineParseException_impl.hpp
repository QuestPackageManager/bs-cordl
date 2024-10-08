#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/CommandLine/CommandLineParseException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParseException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParseException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::DotnetExtension::CommandLine::CommandLineParseException::*)(::StringW, ::System::Exception*)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParseException::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2262110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParseException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
inline ::BGLib::DotnetExtension::CommandLine::CommandLineParseException* BGLib::DotnetExtension::CommandLine::CommandLineParseException::New_ctor(::StringW hint, ::System::Exception* innerException) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::DotnetExtension::CommandLine::CommandLineParseException*>(hint, innerException));
}
inline void BGLib::DotnetExtension::CommandLine::CommandLineParseException::_ctor(::StringW hint, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParseException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hint, innerException);
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParseException::CommandLineParseException() {}
