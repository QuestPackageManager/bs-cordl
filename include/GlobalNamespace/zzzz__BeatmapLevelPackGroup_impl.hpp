#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapLevelPackGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackGroup_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPackGroup.get_groupName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelPackGroup::*)()>(&::GlobalNamespace::BeatmapLevelPackGroup::get_groupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3731668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPackGroup*>(), { "get_groupName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPackGroup.get_beatmapLevelPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* (::GlobalNamespace::BeatmapLevelPackGroup::*)()>(
    &::GlobalNamespace::BeatmapLevelPackGroup::get_beatmapLevelPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3731670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPackGroup*>(), { "get_beatmapLevelPacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPackGroup.set_beatmapLevelPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelPackGroup::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*)>(
    &::GlobalNamespace::BeatmapLevelPackGroup::set_beatmapLevelPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3731678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPackGroup*>(),
                                                { "set_beatmapLevelPacks", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPackGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelPackGroup::*)(
    ::StringW, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*)>(&::GlobalNamespace::BeatmapLevelPackGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3731680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPackGroup*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPackGroup.UpdateBeatmapLevelPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelPackGroup::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*)>(
    &::GlobalNamespace::BeatmapLevelPackGroup::UpdateBeatmapLevelPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3731688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPackGroup*>(),
                                                { "UpdateBeatmapLevelPacks", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BeatmapLevelPackGroup::__cordl_internal_get__groupName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupName_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelPackGroup::__cordl_internal_get__groupName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupName_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapLevelPackGroup::__cordl_internal_set__groupName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupName_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*& GlobalNamespace::BeatmapLevelPackGroup::__cordl_internal_get__beatmapLevelPacks_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPacks_k__BackingField;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* const&
GlobalNamespace::BeatmapLevelPackGroup::__cordl_internal_get__beatmapLevelPacks_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPacks_k__BackingField;
}
constexpr void
GlobalNamespace::BeatmapLevelPackGroup::__cordl_internal_set__beatmapLevelPacks_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelPacks_k__BackingField = value;
}
inline ::StringW GlobalNamespace::BeatmapLevelPackGroup::get_groupName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPackGroup*>(), { "get_groupName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* GlobalNamespace::BeatmapLevelPackGroup::get_beatmapLevelPacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPackGroup*>(), { "get_beatmapLevelPacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelPackGroup::set_beatmapLevelPacks(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPackGroup*>(),
                                              { "set_beatmapLevelPacks", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapLevelPackGroup::_ctor(::StringW groupName, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* collections) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPackGroup*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupName, collections);
}
inline void GlobalNamespace::BeatmapLevelPackGroup::UpdateBeatmapLevelPacks(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* beatmapLevelPacks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPackGroup*>(),
                                              { "UpdateBeatmapLevelPacks", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevelPacks);
}
inline ::GlobalNamespace::BeatmapLevelPackGroup* GlobalNamespace::BeatmapLevelPackGroup::New_ctor(::StringW groupName,
                                                                                                  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* collections) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelPackGroup*>(groupName, collections));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelPackGroup::BeatmapLevelPackGroup() {}
