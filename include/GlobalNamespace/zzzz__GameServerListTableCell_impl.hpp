#pragma once
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "GlobalNamespace/zzzz__GameServerListTableCell_def.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServerListTableCell.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerListTableCell::*)(::GlobalNamespace::INetworkPlayer*)>(
    &::GlobalNamespace::GameServerListTableCell::SetData)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x2278f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListTableCell*>::get(), "SetData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerListTableCell._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerListTableCell::*)()>(&::GlobalNamespace::GameServerListTableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2279304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListTableCell*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HMUI::CurvedTextMeshPro*& GlobalNamespace::GameServerListTableCell::__get__serverName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____serverName;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> const& GlobalNamespace::GameServerListTableCell::__get__serverName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____serverName;
}
constexpr void GlobalNamespace::GameServerListTableCell::__set__serverName(::HMUI::CurvedTextMeshPro* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serverName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::CurvedTextMeshPro*& GlobalNamespace::GameServerListTableCell::__get__difficultiesText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____difficultiesText;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> const& GlobalNamespace::GameServerListTableCell::__get__difficultiesText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____difficultiesText;
}
constexpr void GlobalNamespace::GameServerListTableCell::__set__difficultiesText(::HMUI::CurvedTextMeshPro* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultiesText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::CurvedTextMeshPro*& GlobalNamespace::GameServerListTableCell::__get__musicPackText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____musicPackText;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> const& GlobalNamespace::GameServerListTableCell::__get__musicPackText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____musicPackText;
}
constexpr void GlobalNamespace::GameServerListTableCell::__set__musicPackText(::HMUI::CurvedTextMeshPro* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____musicPackText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::CurvedTextMeshPro*& GlobalNamespace::GameServerListTableCell::__get__playerCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerCount;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> const& GlobalNamespace::GameServerListTableCell::__get__playerCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerCount;
}
constexpr void GlobalNamespace::GameServerListTableCell::__set__playerCount(::HMUI::CurvedTextMeshPro* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerCount)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::GameServerListTableCell::__get__passwordProtected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____passwordProtected;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::GameServerListTableCell::__get__passwordProtected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____passwordProtected;
}
constexpr void GlobalNamespace::GameServerListTableCell::__set__passwordProtected(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____passwordProtected)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SongPackMasksModel*& GlobalNamespace::GameServerListTableCell::__get__songPackMasksModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songPackMasksModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModel*> const& GlobalNamespace::GameServerListTableCell::__get__songPackMasksModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songPackMasksModel;
}
constexpr void GlobalNamespace::GameServerListTableCell::__set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackMasksModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameServerListTableCell::SetData(::GlobalNamespace::INetworkPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListTableCell*>::get(), "SetData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline ::GlobalNamespace::GameServerListTableCell* GlobalNamespace::GameServerListTableCell::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameServerListTableCell*>());
}
inline void GlobalNamespace::GameServerListTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListTableCell*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerListTableCell::GameServerListTableCell() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
