#pragma once
// IWYU pragma private; include "UnityEngine/RuntimeInitializeOnLoadMethodAttribute.hpp"
#include "UnityEngine/Scripting/zzzz__PreserveAttribute_impl.hpp"
#include "UnityEngine/zzzz__RuntimeInitializeLoadType_impl.hpp"
#include "UnityEngine/zzzz__RuntimeInitializeOnLoadMethodAttribute_def.hpp"
#include "UnityEngine/zzzz__RuntimeInitializeLoadType_def.hpp"
//  Writing Method size for method: ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::*)()>(
    &::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x34350d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::*)(::UnityEngine::RuntimeInitializeLoadType)>(
    &::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x34350f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimeInitializeLoadType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute.set_loadType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::*)(::UnityEngine::RuntimeInitializeLoadType)>(
    &::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::set_loadType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34350ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>::get(), "set_loadType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimeInitializeLoadType>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::RuntimeInitializeLoadType& UnityEngine::RuntimeInitializeOnLoadMethodAttribute::__cordl_internal_get_m_LoadType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadType;
}
constexpr ::UnityEngine::RuntimeInitializeLoadType const& UnityEngine::RuntimeInitializeOnLoadMethodAttribute::__cordl_internal_get_m_LoadType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadType;
}
constexpr void UnityEngine::RuntimeInitializeOnLoadMethodAttribute::__cordl_internal_set_m_LoadType(::UnityEngine::RuntimeInitializeLoadType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LoadType = value;
}
inline ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute* UnityEngine::RuntimeInitializeOnLoadMethodAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>());
}
inline void UnityEngine::RuntimeInitializeOnLoadMethodAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute* UnityEngine::RuntimeInitializeOnLoadMethodAttribute::New_ctor(::UnityEngine::RuntimeInitializeLoadType loadType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>(loadType));
}
inline void UnityEngine::RuntimeInitializeOnLoadMethodAttribute::_ctor(::UnityEngine::RuntimeInitializeLoadType loadType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimeInitializeLoadType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadType);
}
inline void UnityEngine::RuntimeInitializeOnLoadMethodAttribute::set_loadType(::UnityEngine::RuntimeInitializeLoadType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*>::get(), "set_loadType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimeInitializeLoadType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::RuntimeInitializeOnLoadMethodAttribute() {}
