#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeaderboardPanelController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeaderboardPanelItem_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelController::*)()>(
    &::GlobalNamespace::MultiplayerLeaderboardPanelController::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23c1940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController*>::get(),
                                                                               "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelController::*)()>(
    &::GlobalNamespace::MultiplayerLeaderboardPanelController::Update)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x23c19cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController*>::get(),
                                                                               "Update", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelController::*)()>(
    &::GlobalNamespace::MultiplayerLeaderboardPanelController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c1ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*, ::Array<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>*>&
GlobalNamespace::MultiplayerLeaderboardPanelController::__get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
constexpr ::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*, ::Array<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>*> const&
GlobalNamespace::MultiplayerLeaderboardPanelController::__get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelController::__set__items(
    ::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*, ::Array<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerScoreProvider*& GlobalNamespace::MultiplayerLeaderboardPanelController::__get__scoreProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> const& GlobalNamespace::MultiplayerLeaderboardPanelController::__get__scoreProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelController::__set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerLeaderboardPanelController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController*>::get(),
                                                                             "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLeaderboardPanelController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController*>::get(),
                                                                             "Update", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLeaderboardPanelController* GlobalNamespace::MultiplayerLeaderboardPanelController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLeaderboardPanelController*>());
}
inline void GlobalNamespace::MultiplayerLeaderboardPanelController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLeaderboardPanelController::MultiplayerLeaderboardPanelController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
