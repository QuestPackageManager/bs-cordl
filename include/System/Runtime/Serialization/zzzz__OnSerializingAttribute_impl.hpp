#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Serialization/zzzz__OnSerializingAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::OnSerializingAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::OnSerializingAttribute::*)()>(
    &::System::Runtime::Serialization::OnSerializingAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24bded0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::OnSerializingAttribute*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Runtime::Serialization::OnSerializingAttribute* System::Runtime::Serialization::OnSerializingAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::OnSerializingAttribute*>());
}
inline void System::Runtime::Serialization::OnSerializingAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::OnSerializingAttribute*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::OnSerializingAttribute::OnSerializingAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
