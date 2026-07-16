#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerResultsPyramidView.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsPyramidView_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerOffsetPositionByLocalPlayerPosition_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsPyramidViewAvatar_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidView.get_resultAvatarDirectors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::GameObject>> (::GlobalNamespace::MultiplayerResultsPyramidView::*)()>(
    &::GlobalNamespace::MultiplayerResultsPyramidView::get_resultAvatarDirectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dd840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsPyramidView*>(), { "get_resultAvatarDirectors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidView.get_badgeTimelines
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::GameObject>> (::GlobalNamespace::MultiplayerResultsPyramidView::*)()>(
    &::GlobalNamespace::MultiplayerResultsPyramidView::get_badgeTimelines)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dd848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsPyramidView*>(), { "get_badgeTimelines", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidView.PrespawnAvatars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerResultsPyramidView::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(&::GlobalNamespace::MultiplayerResultsPyramidView::PrespawnAvatars)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x59dbbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsPyramidView*>(),
                                                { "PrespawnAvatars", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidView.SetupResults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerResultsPyramidView::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(
    &::GlobalNamespace::MultiplayerResultsPyramidView::SetupResults)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x59db598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsPyramidView*>(),
                                                             { "SetupResults",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>(),
                                                                 ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerResultsPyramidView::*)()>(&::GlobalNamespace::MultiplayerResultsPyramidView::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59de284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsPyramidView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition>& GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__multiplayerOffsetByLocalPlayerPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerOffsetByLocalPlayerPosition;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition> const&
GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__multiplayerOffsetByLocalPlayerPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerOffsetByLocalPlayerPosition;
}
constexpr void
GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_set__multiplayerOffsetByLocalPlayerPosition(::UnityW<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerOffsetByLocalPlayerPosition = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__spawnPoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnPoints;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__spawnPoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnPoints;
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_set__spawnPoints(::ArrayW<::UnityW<::UnityEngine::Transform>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnPoints = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__spawnPointsParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnPointsParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__spawnPointsParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnPointsParent;
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_set__spawnPointsParent(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnPointsParent = value;
}
constexpr float_t& GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__evenCountOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evenCountOffset;
}
constexpr float_t const& GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__evenCountOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evenCountOffset;
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_set__evenCountOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____evenCountOffset = value;
}
constexpr ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar_Factory*& GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__avatarsFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarsFactory;
}
constexpr ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar_Factory* const& GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__avatarsFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarsFactory;
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_set__avatarsFactory(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar_Factory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarsFactory = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar>>*&
GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__avatarsDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarsDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar>>* const&
GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__avatarsDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarsDictionary;
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_set__avatarsDictionary(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarsDictionary = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__resultAvatarDirectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultAvatarDirectors;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__resultAvatarDirectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultAvatarDirectors;
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_set__resultAvatarDirectors(::ArrayW<::UnityW<::UnityEngine::GameObject>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resultAvatarDirectors = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__badgeTimelines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badgeTimelines;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__badgeTimelines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badgeTimelines;
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_set__badgeTimelines(::ArrayW<::UnityW<::UnityEngine::GameObject>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____badgeTimelines = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar>& GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__anyResultsAvatar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anyResultsAvatar;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar> const& GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_get__anyResultsAvatar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anyResultsAvatar;
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__cordl_internal_set__anyResultsAvatar(::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____anyResultsAvatar = value;
}
inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> GlobalNamespace::MultiplayerResultsPyramidView::get_resultAvatarDirectors() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsPyramidView*>(), { "get_resultAvatarDirectors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::GameObject>>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> GlobalNamespace::MultiplayerResultsPyramidView::get_badgeTimelines() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsPyramidView*>(), { "get_badgeTimelines", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::GameObject>>>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerResultsPyramidView::PrespawnAvatars(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* activePlayers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsPyramidView*>(),
                                              { "PrespawnAvatars", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activePlayers);
}
inline void GlobalNamespace::MultiplayerResultsPyramidView::SetupResults(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                         ::UnityEngine::Transform* badgeStartTransform, ::UnityEngine::Transform* badgeMidTransform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsPyramidView*>(),
                                                           { "SetupResults",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>(),
                                                               ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultsData, badgeStartTransform, badgeMidTransform);
}
inline void GlobalNamespace::MultiplayerResultsPyramidView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsPyramidView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerResultsPyramidView* GlobalNamespace::MultiplayerResultsPyramidView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerResultsPyramidView*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerResultsPyramidView::MultiplayerResultsPyramidView() {}
