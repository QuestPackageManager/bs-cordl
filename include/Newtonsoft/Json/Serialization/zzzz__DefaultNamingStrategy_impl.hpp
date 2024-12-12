#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/DefaultNamingStrategy.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__NamingStrategy_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__DefaultNamingStrategy_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultNamingStrategy.ResolvePropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Serialization::DefaultNamingStrategy::*)(::StringW)>(
    &::Newtonsoft::Json::Serialization::DefaultNamingStrategy::ResolvePropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee23f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultNamingStrategy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultNamingStrategy*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultNamingStrategy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::DefaultNamingStrategy::*)()>(
    &::Newtonsoft::Json::Serialization::DefaultNamingStrategy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee23fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultNamingStrategy*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW Newtonsoft::Json::Serialization::DefaultNamingStrategy::ResolvePropertyName(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultNamingStrategy*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::Serialization::DefaultNamingStrategy::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultNamingStrategy*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::DefaultNamingStrategy* Newtonsoft::Json::Serialization::DefaultNamingStrategy::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::DefaultNamingStrategy*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::DefaultNamingStrategy::DefaultNamingStrategy() {}
