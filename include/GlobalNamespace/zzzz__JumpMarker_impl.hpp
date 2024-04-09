#pragma once
#include "UnityEngine/Timeline/zzzz__Marker_impl.hpp"
#include "UnityEngine/zzzz__PropertyName_impl.hpp"
#include "GlobalNamespace/zzzz__JumpMarker_def.hpp"
#include "GlobalNamespace/zzzz__JumpDestinationMarker_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JumpMarker.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PropertyName (::GlobalNamespace::JumpMarker::*)()>(&::GlobalNamespace::JumpMarker::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d8018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker*>::get(), "get_id",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JumpMarker.get_jumpDestination
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::JumpDestinationMarker> (::GlobalNamespace::JumpMarker::*)()>(
    &::GlobalNamespace::JumpMarker::get_jumpDestination)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d8020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker*>::get(), "get_jumpDestination",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JumpMarker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::JumpMarker::*)()>(&::GlobalNamespace::JumpMarker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d8028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Playables::INotification"
constexpr GlobalNamespace::JumpMarker::operator ::UnityEngine::Playables::INotification*() noexcept {
  return static_cast<::UnityEngine::Playables::INotification*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Playables::INotification"
constexpr ::UnityEngine::Playables::INotification* GlobalNamespace::JumpMarker::i___UnityEngine__Playables__INotification() noexcept {
  return static_cast<::UnityEngine::Playables::INotification*>(static_cast<void*>(this));
}
constexpr ::UnityW<::GlobalNamespace::JumpDestinationMarker>& GlobalNamespace::JumpMarker::__cordl_internal_get__destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destination;
}
constexpr ::UnityW<::GlobalNamespace::JumpDestinationMarker> const& GlobalNamespace::JumpMarker::__cordl_internal_get__destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destination;
}
constexpr void GlobalNamespace::JumpMarker::__cordl_internal_set__destination(::UnityW<::GlobalNamespace::JumpDestinationMarker> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____destination)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::PropertyName& GlobalNamespace::JumpMarker::__cordl_internal_get__id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr ::UnityEngine::PropertyName const& GlobalNamespace::JumpMarker::__cordl_internal_get__id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr void GlobalNamespace::JumpMarker::__cordl_internal_set__id_k__BackingField(::UnityEngine::PropertyName value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id_k__BackingField = value;
}
inline ::UnityEngine::PropertyName GlobalNamespace::JumpMarker::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker*>::get(), "get_id",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PropertyName, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::JumpDestinationMarker> GlobalNamespace::JumpMarker::get_jumpDestination() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker*>::get(), "get_jumpDestination",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::JumpDestinationMarker>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::JumpMarker* GlobalNamespace::JumpMarker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::JumpMarker*>());
}
inline void GlobalNamespace::JumpMarker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JumpMarker::JumpMarker() {}
