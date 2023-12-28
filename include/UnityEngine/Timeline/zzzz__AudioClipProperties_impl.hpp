#pragma once
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AudioClipProperties_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::AudioClipProperties._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AudioClipProperties::*)()>(&::UnityEngine::Timeline::AudioClipProperties::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c61ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AudioClipProperties*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Timeline::AudioClipProperties::__get_volume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr float_t const& UnityEngine::Timeline::AudioClipProperties::__get_volume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr void UnityEngine::Timeline::AudioClipProperties::__set_volume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___volume = value;
}
inline ::UnityEngine::Timeline::AudioClipProperties* UnityEngine::Timeline::AudioClipProperties::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::AudioClipProperties*>());
}
inline void UnityEngine::Timeline::AudioClipProperties::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AudioClipProperties*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AudioClipProperties::AudioClipProperties() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
