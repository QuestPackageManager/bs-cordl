#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Serialization/zzzz__OnSerializedAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::OnSerializedAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::OnSerializedAttribute::*)()>(
    &::System::Runtime::Serialization::OnSerializedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24bded8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::OnSerializedAttribute*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Runtime::Serialization::OnSerializedAttribute* System::Runtime::Serialization::OnSerializedAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::OnSerializedAttribute*>());
}
inline void System::Runtime::Serialization::OnSerializedAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::OnSerializedAttribute*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::OnSerializedAttribute::OnSerializedAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
