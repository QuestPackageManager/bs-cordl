#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionNodeUpdatePositionInEditMode_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeConnection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionNodeUpdatePositionInEditMode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionNodeUpdatePositionInEditMode::*)()>(
    &::GlobalNamespace::MissionNodeUpdatePositionInEditMode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a1d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodeUpdatePositionInEditMode*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MissionNodeConnection*& GlobalNamespace::MissionNodeUpdatePositionInEditMode::__get__missionNodeConnection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodeConnection;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodeConnection*> const& GlobalNamespace::MissionNodeUpdatePositionInEditMode::__get__missionNodeConnection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodeConnection;
}
constexpr void GlobalNamespace::MissionNodeUpdatePositionInEditMode::__set__missionNodeConnection(::GlobalNamespace::MissionNodeConnection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionNodeConnection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MissionNodeUpdatePositionInEditMode* GlobalNamespace::MissionNodeUpdatePositionInEditMode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionNodeUpdatePositionInEditMode*>());
}
inline void GlobalNamespace::MissionNodeUpdatePositionInEditMode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodeUpdatePositionInEditMode*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionNodeUpdatePositionInEditMode::MissionNodeUpdatePositionInEditMode() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
