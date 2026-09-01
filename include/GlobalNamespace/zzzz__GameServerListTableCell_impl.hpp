#pragma once
// IWYU pragma private; include "GlobalNamespace\GameServerListTableCell.hpp"
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "GlobalNamespace/zzzz__GameServerListTableCell_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServerListTableCell.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerListTableCell::*)(::GlobalNamespace::INetworkPlayer*)>(
    &::GlobalNamespace::GameServerListTableCell::SetData)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x5a019a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerListTableCell*>(), { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerListTableCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerListTableCell::*)()>(&::GlobalNamespace::GameServerListTableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a01dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerListTableCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& GlobalNamespace::GameServerListTableCell::__cordl_internal_get__serverName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverName;
}
constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& GlobalNamespace::GameServerListTableCell::__cordl_internal_get__serverName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverName;
}
constexpr void GlobalNamespace::GameServerListTableCell::__cordl_internal_set__serverName(::UnityW<::HMUI::CurvedTextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serverName = value;
}
constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& GlobalNamespace::GameServerListTableCell::__cordl_internal_get__difficultiesText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultiesText;
}
constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& GlobalNamespace::GameServerListTableCell::__cordl_internal_get__difficultiesText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultiesText;
}
constexpr void GlobalNamespace::GameServerListTableCell::__cordl_internal_set__difficultiesText(::UnityW<::HMUI::CurvedTextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficultiesText = value;
}
constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& GlobalNamespace::GameServerListTableCell::__cordl_internal_get__musicPackText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicPackText;
}
constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& GlobalNamespace::GameServerListTableCell::__cordl_internal_get__musicPackText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicPackText;
}
constexpr void GlobalNamespace::GameServerListTableCell::__cordl_internal_set__musicPackText(::UnityW<::HMUI::CurvedTextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____musicPackText = value;
}
constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& GlobalNamespace::GameServerListTableCell::__cordl_internal_get__playerCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerCount;
}
constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& GlobalNamespace::GameServerListTableCell::__cordl_internal_get__playerCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerCount;
}
constexpr void GlobalNamespace::GameServerListTableCell::__cordl_internal_set__playerCount(::UnityW<::HMUI::CurvedTextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerCount = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GameServerListTableCell::__cordl_internal_get__passwordProtected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passwordProtected;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GameServerListTableCell::__cordl_internal_get__passwordProtected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passwordProtected;
}
constexpr void GlobalNamespace::GameServerListTableCell::__cordl_internal_set__passwordProtected(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____passwordProtected = value;
}
constexpr ::GlobalNamespace::SongPackMasksModel*& GlobalNamespace::GameServerListTableCell::__cordl_internal_get__songPackMasksModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr ::GlobalNamespace::SongPackMasksModel* const& GlobalNamespace::GameServerListTableCell::__cordl_internal_get__songPackMasksModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr void GlobalNamespace::GameServerListTableCell::__cordl_internal_set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songPackMasksModel = value;
}
inline void GlobalNamespace::GameServerListTableCell::SetData(::GlobalNamespace::INetworkPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerListTableCell*>(), { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::GameServerListTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerListTableCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameServerListTableCell* GlobalNamespace::GameServerListTableCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameServerListTableCell*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerListTableCell::GameServerListTableCell() {}
