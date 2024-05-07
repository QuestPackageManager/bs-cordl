#pragma once
// IWYU pragma private; include "GlobalNamespace/TimelinePauseMarker.hpp"
#include "UnityEngine/Timeline/zzzz__Marker_impl.hpp"
#include "UnityEngine/zzzz__PropertyName_impl.hpp"
#include "GlobalNamespace/zzzz__TimelinePauseMarker_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimelinePauseMarker.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PropertyName (::GlobalNamespace::TimelinePauseMarker::*)()>(
    &::GlobalNamespace::TimelinePauseMarker::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24d7d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseMarker*>::get(), "get_id",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimelinePauseMarker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TimelinePauseMarker::*)()>(&::GlobalNamespace::TimelinePauseMarker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24d7d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseMarker*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Playables::INotification"
constexpr GlobalNamespace::TimelinePauseMarker::operator ::UnityEngine::Playables::INotification*() noexcept {
  return static_cast<::UnityEngine::Playables::INotification*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Playables::INotification"
constexpr ::UnityEngine::Playables::INotification* GlobalNamespace::TimelinePauseMarker::i___UnityEngine__Playables__INotification() noexcept {
  return static_cast<::UnityEngine::Playables::INotification*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::PropertyName& GlobalNamespace::TimelinePauseMarker::__cordl_internal_get__id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr ::UnityEngine::PropertyName const& GlobalNamespace::TimelinePauseMarker::__cordl_internal_get__id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr void GlobalNamespace::TimelinePauseMarker::__cordl_internal_set__id_k__BackingField(::UnityEngine::PropertyName value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id_k__BackingField = value;
}
inline ::UnityEngine::PropertyName GlobalNamespace::TimelinePauseMarker::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseMarker*>::get(), "get_id",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PropertyName, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TimelinePauseMarker* GlobalNamespace::TimelinePauseMarker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TimelinePauseMarker*>());
}
inline void GlobalNamespace::TimelinePauseMarker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseMarker*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimelinePauseMarker::TimelinePauseMarker() {}
