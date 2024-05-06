#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractAttribute.get_IsReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::DataContractAttribute::*)()>(
    &::System::Runtime::Serialization::DataContractAttribute::get_IsReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d877e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataContractAttribute*>::get(),
                                                                               "get_IsReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& System::Runtime::Serialization::DataContractAttribute::__cordl_internal_get_isReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReference;
}
constexpr bool const& System::Runtime::Serialization::DataContractAttribute::__cordl_internal_get_isReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReference;
}
constexpr void System::Runtime::Serialization::DataContractAttribute::__cordl_internal_set_isReference(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isReference = value;
}
inline bool System::Runtime::Serialization::DataContractAttribute::get_IsReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataContractAttribute*>::get(),
                                                                             "get_IsReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::DataContractAttribute::DataContractAttribute() {}
