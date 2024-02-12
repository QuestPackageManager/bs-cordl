#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineAsset_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackMediaType_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TrackMediaType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackMediaType::*)(::UnityEngine::Timeline::__TimelineAsset__MediaType)>(
    &::UnityEngine::Timeline::TrackMediaType::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c6b1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackMediaType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineAsset__MediaType>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Timeline::__TimelineAsset__MediaType& UnityEngine::Timeline::TrackMediaType::__cordl_internal_get_m_MediaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MediaType;
}
constexpr ::UnityEngine::Timeline::__TimelineAsset__MediaType const& UnityEngine::Timeline::TrackMediaType::__cordl_internal_get_m_MediaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MediaType;
}
constexpr void UnityEngine::Timeline::TrackMediaType::__cordl_internal_set_m_MediaType(::UnityEngine::Timeline::__TimelineAsset__MediaType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MediaType = value;
}
inline ::UnityEngine::Timeline::TrackMediaType* UnityEngine::Timeline::TrackMediaType::New_ctor(::UnityEngine::Timeline::__TimelineAsset__MediaType mt) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Timeline::TrackMediaType*>(mt));
}
inline void UnityEngine::Timeline::TrackMediaType::_ctor(::UnityEngine::Timeline::__TimelineAsset__MediaType mt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackMediaType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineAsset__MediaType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mt);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TrackMediaType::TrackMediaType() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
