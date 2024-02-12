#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__CreateAssetMenuAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::CreateAssetMenuAttribute.set_menuName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::CreateAssetMenuAttribute::*)(::StringW)>(
    &::UnityEngine::CreateAssetMenuAttribute::set_menuName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cd97c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CreateAssetMenuAttribute*>::get(), "set_menuName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CreateAssetMenuAttribute.set_fileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::CreateAssetMenuAttribute::*)(::StringW)>(
    &::UnityEngine::CreateAssetMenuAttribute::set_fileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cd97cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CreateAssetMenuAttribute*>::get(), "set_fileName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CreateAssetMenuAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::CreateAssetMenuAttribute::*)()>(&::UnityEngine::CreateAssetMenuAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cd97d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CreateAssetMenuAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::CreateAssetMenuAttribute::__cordl_internal_get__menuName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::CreateAssetMenuAttribute::__cordl_internal_get__menuName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuName_k__BackingField;
}
constexpr void UnityEngine::CreateAssetMenuAttribute::__cordl_internal_set__menuName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::CreateAssetMenuAttribute::__cordl_internal_get__fileName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::CreateAssetMenuAttribute::__cordl_internal_get__fileName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileName_k__BackingField;
}
constexpr void UnityEngine::CreateAssetMenuAttribute::__cordl_internal_set__fileName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fileName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::CreateAssetMenuAttribute::set_menuName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CreateAssetMenuAttribute*>::get(), "set_menuName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::CreateAssetMenuAttribute::set_fileName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CreateAssetMenuAttribute*>::get(), "set_fileName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::CreateAssetMenuAttribute* UnityEngine::CreateAssetMenuAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::CreateAssetMenuAttribute*>());
}
inline void UnityEngine::CreateAssetMenuAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CreateAssetMenuAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::CreateAssetMenuAttribute::CreateAssetMenuAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
