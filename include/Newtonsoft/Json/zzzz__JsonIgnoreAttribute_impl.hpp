#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonIgnoreAttribute_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonIgnoreAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonIgnoreAttribute::*)()>(&::Newtonsoft::Json::JsonIgnoreAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x279be98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonIgnoreAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Newtonsoft::Json::JsonIgnoreAttribute* Newtonsoft::Json::JsonIgnoreAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::JsonIgnoreAttribute*>());
}
inline void Newtonsoft::Json::JsonIgnoreAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonIgnoreAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonIgnoreAttribute::JsonIgnoreAttribute() {}
