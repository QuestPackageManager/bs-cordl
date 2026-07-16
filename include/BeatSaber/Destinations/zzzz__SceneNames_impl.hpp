#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/SceneNames.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__SceneNames_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::SceneNames.ShouldDisableRootObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::BeatSaber::Destinations::SceneNames::ShouldDisableRootObjects)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3280b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::SceneNames*>(), { "ShouldDisableRootObjects", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Destinations::SceneNames::setStaticF_kAllSceneNames(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, "kAllSceneNames", ::BeatSaber::Destinations::SceneNames*>(
      std::forward<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* BeatSaber::Destinations::SceneNames::getStaticF_kAllSceneNames() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, "kAllSceneNames", ::BeatSaber::Destinations::SceneNames*>();
}
inline void BeatSaber::Destinations::SceneNames::setStaticF_kScenesThatShouldDisableRootObjects(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "kScenesThatShouldDisableRootObjects", ::BeatSaber::Destinations::SceneNames*>(
      std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* BeatSaber::Destinations::SceneNames::getStaticF_kScenesThatShouldDisableRootObjects() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "kScenesThatShouldDisableRootObjects", ::BeatSaber::Destinations::SceneNames*>();
}
inline bool BeatSaber::Destinations::SceneNames::ShouldDisableRootObjects(::StringW sceneName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::SceneNames*>(), { "ShouldDisableRootObjects", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sceneName);
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::SceneNames::SceneNames() {}
