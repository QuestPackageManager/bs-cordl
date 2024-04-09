#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackError_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackState_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackError_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPackState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Android::AndroidAssetPackState::*)(
    ::StringW, ::UnityEngine::Android::AndroidAssetPackStatus, ::UnityEngine::Android::AndroidAssetPackError)>(&::UnityEngine::Android::AndroidAssetPackState::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x31b7e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPackState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::AndroidAssetPackStatus>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::AndroidAssetPackError>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Android::AndroidAssetPackState::__cordl_internal_get__name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Android::AndroidAssetPackState::__cordl_internal_get__name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackState::__cordl_internal_set__name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Android::AndroidAssetPackStatus& UnityEngine::Android::AndroidAssetPackState::__cordl_internal_get__status_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status_k__BackingField;
}
constexpr ::UnityEngine::Android::AndroidAssetPackStatus const& UnityEngine::Android::AndroidAssetPackState::__cordl_internal_get__status_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackState::__cordl_internal_set__status_k__BackingField(::UnityEngine::Android::AndroidAssetPackStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____status_k__BackingField = value;
}
constexpr ::UnityEngine::Android::AndroidAssetPackError& UnityEngine::Android::AndroidAssetPackState::__cordl_internal_get__error_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____error_k__BackingField;
}
constexpr ::UnityEngine::Android::AndroidAssetPackError const& UnityEngine::Android::AndroidAssetPackState::__cordl_internal_get__error_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____error_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackState::__cordl_internal_set__error_k__BackingField(::UnityEngine::Android::AndroidAssetPackError value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____error_k__BackingField = value;
}
inline ::UnityEngine::Android::AndroidAssetPackState* UnityEngine::Android::AndroidAssetPackState::New_ctor(::StringW name, ::UnityEngine::Android::AndroidAssetPackStatus status,
                                                                                                            ::UnityEngine::Android::AndroidAssetPackError error) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Android::AndroidAssetPackState*>(name, status, error));
}
inline void UnityEngine::Android::AndroidAssetPackState::_ctor(::StringW name, ::UnityEngine::Android::AndroidAssetPackStatus status, ::UnityEngine::Android::AndroidAssetPackError error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPackState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::AndroidAssetPackStatus>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::AndroidAssetPackError>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, status, error);
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidAssetPackState::AndroidAssetPackState() {}
