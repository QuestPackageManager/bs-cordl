#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/zzzz__Error_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Error.ExtensionNodeMustOverrideProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::System::Object*)>(
    &::System::Linq::Expressions::Error::ExtensionNodeMustOverrideProperty)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2698bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Error*>::get(), "ExtensionNodeMustOverrideProperty",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Linq::Expressions::Error::ExtensionNodeMustOverrideProperty(::System::Object* p0) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Error*>::get(), "ExtensionNodeMustOverrideProperty",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, p0);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Error::Error() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
