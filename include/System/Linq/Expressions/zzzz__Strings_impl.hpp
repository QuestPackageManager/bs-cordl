#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/zzzz__Strings_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Strings.ExtensionNodeMustOverrideProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*)>(&::System::Linq::Expressions::Strings::ExtensionNodeMustOverrideProperty)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x28184f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Strings*>::get(), "ExtensionNodeMustOverrideProperty",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline ::StringW System::Linq::Expressions::Strings::ExtensionNodeMustOverrideProperty(::System::Object* p0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Strings*>::get(), "ExtensionNodeMustOverrideProperty",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, p0);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Strings::Strings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
