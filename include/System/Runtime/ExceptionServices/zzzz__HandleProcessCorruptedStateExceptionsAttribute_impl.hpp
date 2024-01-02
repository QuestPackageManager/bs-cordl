#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/ExceptionServices/zzzz__HandleProcessCorruptedStateExceptionsAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute::*)()>(
    &::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24da588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute* System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute*>());
}
inline void System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute::HandleProcessCorruptedStateExceptionsAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
