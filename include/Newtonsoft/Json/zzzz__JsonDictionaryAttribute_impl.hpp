#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonDictionaryAttribute.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonDictionaryAttribute_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonDictionaryAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonDictionaryAttribute::*)()>(&::Newtonsoft::Json::JsonDictionaryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e7b96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonDictionaryAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonDictionaryAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonDictionaryAttribute::*)(::StringW)>(
    &::Newtonsoft::Json::JsonDictionaryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3e7b974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonDictionaryAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonDictionaryAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonDictionaryAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonDictionaryAttribute::_ctor(::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonDictionaryAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline ::Newtonsoft::Json::JsonDictionaryAttribute* Newtonsoft::Json::JsonDictionaryAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::JsonDictionaryAttribute*>());
}
inline ::Newtonsoft::Json::JsonDictionaryAttribute* Newtonsoft::Json::JsonDictionaryAttribute::New_ctor(::StringW id) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::JsonDictionaryAttribute*>(id));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonDictionaryAttribute::JsonDictionaryAttribute() {}
