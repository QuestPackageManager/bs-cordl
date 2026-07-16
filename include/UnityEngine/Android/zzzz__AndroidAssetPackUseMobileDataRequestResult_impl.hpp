#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidAssetPackUseMobileDataRequestResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackUseMobileDataRequestResult_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::*)(bool)>(
    &::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a2da1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
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
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allowed);
}
inline ::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult* UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::New_ctor(bool allowed) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>(allowed));
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::AndroidAssetPackUseMobileDataRequestResult() {}
