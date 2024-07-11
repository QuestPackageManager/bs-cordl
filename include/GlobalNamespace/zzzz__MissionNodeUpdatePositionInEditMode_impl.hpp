#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionNodeUpdatePositionInEditMode.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionNodeUpdatePositionInEditMode_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeConnection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionNodeUpdatePositionInEditMode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionNodeUpdatePositionInEditMode::*)()>(
    &::GlobalNamespace::MissionNodeUpdatePositionInEditMode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2656a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodeUpdatePositionInEditMode*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionNodeConnection>& GlobalNamespace::MissionNodeUpdatePositionInEditMode::__cordl_internal_get__missionNodeConnection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodeConnection;
}
constexpr ::UnityW<::GlobalNamespace::MissionNodeConnection> const& GlobalNamespace::MissionNodeUpdatePositionInEditMode::__cordl_internal_get__missionNodeConnection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodeConnection;
}
constexpr void GlobalNamespace::MissionNodeUpdatePositionInEditMode::__cordl_internal_set__missionNodeConnection(::UnityW<::GlobalNamespace::MissionNodeConnection> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionNodeConnection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MissionNodeUpdatePositionInEditMode* GlobalNamespace::MissionNodeUpdatePositionInEditMode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionNodeUpdatePositionInEditMode*>());
}
inline void GlobalNamespace::MissionNodeUpdatePositionInEditMode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodeUpdatePositionInEditMode*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionNodeUpdatePositionInEditMode::MissionNodeUpdatePositionInEditMode() {}
