#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexRunnerFactory_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexRunner_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexRunnerFactory.CreateInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexRunner* (::System::Text::RegularExpressions::RegexRunnerFactory::*)()>(
    &::System::Text::RegularExpressions::RegexRunnerFactory::CreateInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexRunnerFactory*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexRunnerFactory*>::get(), 4));
    return ___internal_method;
  }
};
inline ::System::Text::RegularExpressions::RegexRunner* System::Text::RegularExpressions::RegexRunnerFactory::CreateInstance() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexRunnerFactory*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexRunner*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexRunnerFactory::RegexRunnerFactory() {}
