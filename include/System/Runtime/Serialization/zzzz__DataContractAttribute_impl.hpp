#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractAttribute.get_IsReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::DataContractAttribute::*)()>(
    &::System::Runtime::Serialization::DataContractAttribute::get_IsReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284d5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataContractAttribute*>::get(),
                                                                               "get_IsReference", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& System::Runtime::Serialization::DataContractAttribute::__get_isReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isReference;
}
constexpr bool const& System::Runtime::Serialization::DataContractAttribute::__get_isReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isReference;
}
constexpr void System::Runtime::Serialization::DataContractAttribute::__set_isReference(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___isReference = value;
}
inline bool System::Runtime::Serialization::DataContractAttribute::get_IsReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataContractAttribute*>::get(),
                                                                             "get_IsReference", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::DataContractAttribute::DataContractAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
