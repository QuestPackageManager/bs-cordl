#pragma once
#include "UnityEngine/Timeline/zzzz__Marker_impl.hpp"
#include "UnityEngine/zzzz__PropertyName_impl.hpp"
#include "GlobalNamespace/zzzz__TimelinePauseMarker_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimelinePauseMarker.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PropertyName (::GlobalNamespace::TimelinePauseMarker::*)()>(
    &::GlobalNamespace::TimelinePauseMarker::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fa2d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseMarker*>::get(), "get_id",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimelinePauseMarker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TimelinePauseMarker::*)()>(&::GlobalNamespace::TimelinePauseMarker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fa2d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseMarker*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Playables::INotification"
constexpr GlobalNamespace::TimelinePauseMarker::operator ::UnityEngine::Playables::INotification*() noexcept {
  return static_cast<::UnityEngine::Playables::INotification*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::PropertyName& GlobalNamespace::TimelinePauseMarker::__get__id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr ::UnityEngine::PropertyName const& GlobalNamespace::TimelinePauseMarker::__get__id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr void GlobalNamespace::TimelinePauseMarker::__set__id_k__BackingField(::UnityEngine::PropertyName value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id_k__BackingField = value;
}
inline ::UnityEngine::PropertyName GlobalNamespace::TimelinePauseMarker::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseMarker*>::get(), "get_id",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PropertyName, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TimelinePauseMarker* GlobalNamespace::TimelinePauseMarker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TimelinePauseMarker*>());
}
inline void GlobalNamespace::TimelinePauseMarker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseMarker*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimelinePauseMarker::TimelinePauseMarker() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
