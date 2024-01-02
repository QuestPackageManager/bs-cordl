#pragma once
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_impl.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapParameterAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapParameterAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapParameterAttribute::*)()>(
    &::System::Runtime::Remoting::Metadata::SoapParameterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a5f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapParameterAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Runtime::Remoting::Metadata::SoapParameterAttribute* System::Runtime::Remoting::Metadata::SoapParameterAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Metadata::SoapParameterAttribute*>());
}
inline void System::Runtime::Remoting::Metadata::SoapParameterAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapParameterAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Metadata::SoapParameterAttribute::SoapParameterAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
