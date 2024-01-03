#pragma once
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ResetLocalLeaderboardOnKey_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResetLocalLeaderboardOnKey.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetLocalLeaderboardOnKey::*)()>(&::GlobalNamespace::ResetLocalLeaderboardOnKey::Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2373554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetLocalLeaderboardOnKey*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResetLocalLeaderboardOnKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetLocalLeaderboardOnKey::*)()>(&::GlobalNamespace::ResetLocalLeaderboardOnKey::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2373594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetLocalLeaderboardOnKey*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LocalLeaderboardsModel*& GlobalNamespace::ResetLocalLeaderboardOnKey::__get__localLeaderboardsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localLeaderboardsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalLeaderboardsModel*> const& GlobalNamespace::ResetLocalLeaderboardOnKey::__get__localLeaderboardsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localLeaderboardsModel;
}
constexpr void GlobalNamespace::ResetLocalLeaderboardOnKey::__set__localLeaderboardsModel(::GlobalNamespace::LocalLeaderboardsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localLeaderboardsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::KeyCode& GlobalNamespace::ResetLocalLeaderboardOnKey::__get__keyCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyCode;
}
constexpr ::UnityEngine::KeyCode const& GlobalNamespace::ResetLocalLeaderboardOnKey::__get__keyCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyCode;
}
constexpr void GlobalNamespace::ResetLocalLeaderboardOnKey::__set__keyCode(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyCode = value;
}
constexpr ::GlobalNamespace::ISaveData*& GlobalNamespace::ResetLocalLeaderboardOnKey::__get__saveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& GlobalNamespace::ResetLocalLeaderboardOnKey::__get__saveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveData;
}
constexpr void GlobalNamespace::ResetLocalLeaderboardOnKey::__set__saveData(::GlobalNamespace::ISaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saveData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ResetLocalLeaderboardOnKey::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetLocalLeaderboardOnKey*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ResetLocalLeaderboardOnKey* GlobalNamespace::ResetLocalLeaderboardOnKey::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ResetLocalLeaderboardOnKey*>());
}
inline void GlobalNamespace::ResetLocalLeaderboardOnKey::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetLocalLeaderboardOnKey*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResetLocalLeaderboardOnKey::ResetLocalLeaderboardOnKey() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
