#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/OnErrorAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__OnErrorAttribute_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::OnErrorAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::OnErrorAttribute::*)()>(
    &::Newtonsoft::Json::Serialization::OnErrorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5babb00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::OnErrorAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::OnErrorAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::OnErrorAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::OnErrorAttribute* Newtonsoft::Json::Serialization::OnErrorAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::OnErrorAttribute*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::OnErrorAttribute::OnErrorAttribute() {}
