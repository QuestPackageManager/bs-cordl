#pragma once
#include "UnityEngine/Scripting/zzzz__PreserveAttribute_impl.hpp"
#include "UnityEngine/zzzz__RuntimeInitializeLoadType_impl.hpp"
#include "UnityEngine/zzzz__RuntimeInitializeOnLoadMethodAttribute_def.hpp"
#include "UnityEngine/zzzz__RuntimeInitializeLoadType_def.hpp"
//  Writing Method size for method: ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::*)()>(
    &::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ccdb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::*)(::UnityEngine::RuntimeInitializeLoadType)>(
    &::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ccdbac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimeInitializeLoadType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute.set_loadType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::*)(::UnityEngine::RuntimeInitializeLoadType)>(
    &::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::set_loadType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ccdba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>::get(), "set_loadType", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimeInitializeLoadType>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::RuntimeInitializeLoadType& UnityEngine::RuntimeInitializeOnLoadMethodAttribute::__get_m_LoadType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LoadType;
}
constexpr ::UnityEngine::RuntimeInitializeLoadType const& UnityEngine::RuntimeInitializeOnLoadMethodAttribute::__get_m_LoadType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LoadType;
}
constexpr void UnityEngine::RuntimeInitializeOnLoadMethodAttribute::__set_m_LoadType(::UnityEngine::RuntimeInitializeLoadType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_LoadType = value;
}
inline ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute* UnityEngine::RuntimeInitializeOnLoadMethodAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>());
}
inline void UnityEngine::RuntimeInitializeOnLoadMethodAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute* UnityEngine::RuntimeInitializeOnLoadMethodAttribute::New_ctor(::UnityEngine::RuntimeInitializeLoadType loadType) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>(loadType));
}
inline void UnityEngine::RuntimeInitializeOnLoadMethodAttribute::_ctor(::UnityEngine::RuntimeInitializeLoadType loadType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimeInitializeLoadType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadType);
}
inline void UnityEngine::RuntimeInitializeOnLoadMethodAttribute::set_loadType(::UnityEngine::RuntimeInitializeLoadType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>::get(), "set_loadType", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimeInitializeLoadType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::RuntimeInitializeOnLoadMethodAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
