#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidAssetPackUseMobileDataRequestResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackUseMobileDataRequestResult_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::*)(bool)>(
    &::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x484f704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::__cordl_internal_get__allowed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowed_k__BackingField;
}
constexpr bool const& UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::__cordl_internal_get__allowed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowed_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::__cordl_internal_set__allowed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowed_k__BackingField = value;
}
inline void UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::_ctor(bool allowed) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allowed);
}
inline ::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult* UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::New_ctor(bool allowed) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>(allowed));
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::AndroidAssetPackUseMobileDataRequestResult() {}
