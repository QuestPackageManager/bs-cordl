#pragma once
#include "UnityEngine/Timeline/zzzz__Marker_impl.hpp"
#include "UnityEngine/zzzz__PropertyName_impl.hpp"
#include "GlobalNamespace/zzzz__JumpMarker_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "GlobalNamespace/zzzz__JumpDestinationMarker_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JumpMarker.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PropertyName (::GlobalNamespace::JumpMarker::*)()>(&::GlobalNamespace::JumpMarker::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f5ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker*>::get(), "get_id",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JumpMarker.get_jumpDestination
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::JumpDestinationMarker* (::GlobalNamespace::JumpMarker::*)()>(
    &::GlobalNamespace::JumpMarker::get_jumpDestination)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f5bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker*>::get(), "get_jumpDestination",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JumpMarker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::JumpMarker::*)()>(&::GlobalNamespace::JumpMarker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f5bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Playables::INotification"
constexpr GlobalNamespace::JumpMarker::operator ::UnityEngine::Playables::INotification*() noexcept {
  return static_cast<::UnityEngine::Playables::INotification*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::JumpDestinationMarker*& GlobalNamespace::JumpMarker::__get__destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____destination;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::JumpDestinationMarker*> const& GlobalNamespace::JumpMarker::__get__destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____destination;
}
constexpr void GlobalNamespace::JumpMarker::__set__destination(::GlobalNamespace::JumpDestinationMarker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____destination)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::PropertyName& GlobalNamespace::JumpMarker::__get__id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____id_k__BackingField;
}
constexpr ::UnityEngine::PropertyName const& GlobalNamespace::JumpMarker::__get__id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____id_k__BackingField;
}
constexpr void GlobalNamespace::JumpMarker::__set__id_k__BackingField(::UnityEngine::PropertyName value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____id_k__BackingField = value;
}
inline ::UnityEngine::PropertyName GlobalNamespace::JumpMarker::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker*>::get(), "get_id",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PropertyName, false>(this, ___internal_method);
}
inline ::GlobalNamespace::JumpDestinationMarker* GlobalNamespace::JumpMarker::get_jumpDestination() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker*>::get(), "get_jumpDestination",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JumpDestinationMarker*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::JumpMarker* GlobalNamespace::JumpMarker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::JumpMarker*>());
}
inline void GlobalNamespace::JumpMarker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JumpMarker::JumpMarker() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
