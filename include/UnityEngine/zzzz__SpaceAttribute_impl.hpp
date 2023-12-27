#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__SpaceAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::SpaceAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpaceAttribute::*)()>(&::UnityEngine::SpaceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2ccc148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpaceAttribute*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpaceAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpaceAttribute::*)(float_t)>(&::UnityEngine::SpaceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ccc168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpaceAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::SpaceAttribute::__get_height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___height;
}
constexpr float_t const& UnityEngine::SpaceAttribute::__get_height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___height;
}
constexpr void UnityEngine::SpaceAttribute::__set_height(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___height = value;
}
inline ::UnityEngine::SpaceAttribute* UnityEngine::SpaceAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::SpaceAttribute*>());
}
inline void UnityEngine::SpaceAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpaceAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::SpaceAttribute* UnityEngine::SpaceAttribute::New_ctor(float_t height) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::SpaceAttribute*>(height));
}
inline void UnityEngine::SpaceAttribute::_ctor(float_t height) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpaceAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, height);
}
// Ctor Parameters []
constexpr ::UnityEngine::SpaceAttribute::SpaceAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
