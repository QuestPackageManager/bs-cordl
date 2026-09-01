#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapSaveDataHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapSaveDataHelpers_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapSaveDataHelpers_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData.get_v
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData::*)()>(
    &::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData::get_v)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x375430c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData*>(), { "get_v", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData::*)()>(
    &::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3754588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr ::StringW const& GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData::__cordl_internal_set__version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData::__cordl_internal_set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
inline ::StringW GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData::get_v() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData*>(), { "get_v", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData* GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapSaveDataHelpers_VersionSerializedData::BeatmapSaveDataHelpers_VersionSerializedData() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0::*)()>(
    &::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3754454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0._GetVersionAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0::*)()>(
    &::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0::_GetVersionAsync_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x375458c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0*>(), { "<GetVersionAsync>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::StringW const& GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0::__cordl_internal_set_data(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Version* GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0::_GetVersionAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0*>(), { "<GetVersionAsync>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0* GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapSaveDataHelpers___c__DisplayClass6_0::BeatmapSaveDataHelpers___c__DisplayClass6_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapSaveDataHelpers.GetVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (*)(::StringW)>(&::GlobalNamespace::BeatmapSaveDataHelpers::GetVersion)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x3753fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapSaveDataHelpers*>(), { "GetVersion", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapSaveDataHelpers.GetVersionAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Version*>* (*)(::StringW)>(&::GlobalNamespace::BeatmapSaveDataHelpers::GetVersionAsync)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x375432c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapSaveDataHelpers*>(), { "GetVersionAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapSaveDataHelpers::setStaticF_noVersion(::System::Version* value) {
  ::cordl_internals::setStaticField<::System::Version*, "noVersion", ::GlobalNamespace::BeatmapSaveDataHelpers*>(std::forward<::System::Version*>(value));
}
inline ::System::Version* GlobalNamespace::BeatmapSaveDataHelpers::getStaticF_noVersion() {
  return ::cordl_internals::getStaticField<::System::Version*, "noVersion", ::GlobalNamespace::BeatmapSaveDataHelpers*>();
}
inline void GlobalNamespace::BeatmapSaveDataHelpers::setStaticF_version2(::System::Version* value) {
  ::cordl_internals::setStaticField<::System::Version*, "version2", ::GlobalNamespace::BeatmapSaveDataHelpers*>(std::forward<::System::Version*>(value));
}
inline ::System::Version* GlobalNamespace::BeatmapSaveDataHelpers::getStaticF_version2() {
  return ::cordl_internals::getStaticField<::System::Version*, "version2", ::GlobalNamespace::BeatmapSaveDataHelpers*>();
}
inline void GlobalNamespace::BeatmapSaveDataHelpers::setStaticF_version3(::System::Version* value) {
  ::cordl_internals::setStaticField<::System::Version*, "version3", ::GlobalNamespace::BeatmapSaveDataHelpers*>(std::forward<::System::Version*>(value));
}
inline ::System::Version* GlobalNamespace::BeatmapSaveDataHelpers::getStaticF_version3() {
  return ::cordl_internals::getStaticField<::System::Version*, "version3", ::GlobalNamespace::BeatmapSaveDataHelpers*>();
}
inline void GlobalNamespace::BeatmapSaveDataHelpers::setStaticF_version4(::System::Version* value) {
  ::cordl_internals::setStaticField<::System::Version*, "version4", ::GlobalNamespace::BeatmapSaveDataHelpers*>(std::forward<::System::Version*>(value));
}
inline ::System::Version* GlobalNamespace::BeatmapSaveDataHelpers::getStaticF_version4() {
  return ::cordl_internals::getStaticField<::System::Version*, "version4", ::GlobalNamespace::BeatmapSaveDataHelpers*>();
}
inline ::System::Version* GlobalNamespace::BeatmapSaveDataHelpers::GetVersion(::StringW data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapSaveDataHelpers*>(), { "GetVersion", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(nullptr, ___internal_method, data);
}
inline ::System::Threading::Tasks::Task_1<::System::Version*>* GlobalNamespace::BeatmapSaveDataHelpers::GetVersionAsync(::StringW data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapSaveDataHelpers*>(), { "GetVersionAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Version*>*>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapSaveDataHelpers::BeatmapSaveDataHelpers() {}
