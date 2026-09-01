#pragma once
// IWYU pragma private; include "GlobalNamespace\NoAnalyticsModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NoAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberSessionEventType_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoAnalyticsModel.get_supportsOpenDataPrivacyPage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NoAnalyticsModel::*)()>(&::GlobalNamespace::NoAnalyticsModel::get_supportsOpenDataPrivacyPage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3256568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(), { "get_supportsOpenDataPrivacyPage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoAnalyticsModel.OpenDataPrivacyPage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoAnalyticsModel::*)()>(&::GlobalNamespace::NoAnalyticsModel::OpenDataPrivacyPage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3256570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(), { "OpenDataPrivacyPage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoAnalyticsModel.LogEditAvatarEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::NoAnalyticsModel::LogEditAvatarEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3256574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(),
                                                { "LogEditAvatarEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoAnalyticsModel.LogSessionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoAnalyticsModel::*)(::GlobalNamespace::BeatSaberSessionEventType, int32_t)>(
    &::GlobalNamespace::NoAnalyticsModel::LogSessionEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3256578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(),
                                                             { "LogSessionEvent", {}, { ::i2c::type_of<::GlobalNamespace::BeatSaberSessionEventType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoAnalyticsModel.LogEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::NoAnalyticsModel::LogEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x325657c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(),
                                                { "LogEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoAnalyticsModel.LogClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::NoAnalyticsModel::LogClick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3256580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(),
                                                { "LogClick", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoAnalyticsModel.LogImpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::NoAnalyticsModel::LogImpression)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3256584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(),
                                                { "LogImpression", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoAnalyticsModel.LogExposure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::NoAnalyticsModel::LogExposure)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3256588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(),
                                                { "LogExposure", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoAnalyticsModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoAnalyticsModel::*)()>(&::GlobalNamespace::NoAnalyticsModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x325658c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::NoAnalyticsModel::get_supportsOpenDataPrivacyPage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(), { "get_supportsOpenDataPrivacyPage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NoAnalyticsModel::OpenDataPrivacyPage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(), { "OpenDataPrivacyPage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoAnalyticsModel::LogEditAvatarEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(),
                                              { "LogEditAvatarEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType, eventData);
}
inline void GlobalNamespace::NoAnalyticsModel::LogSessionEvent(::GlobalNamespace::BeatSaberSessionEventType eventType, int32_t _) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(),
                                                           { "LogSessionEvent", {}, { ::i2c::type_of<::GlobalNamespace::BeatSaberSessionEventType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType, _);
}
inline void GlobalNamespace::NoAnalyticsModel::LogEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(),
                                              { "LogEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType, eventData);
}
inline void GlobalNamespace::NoAnalyticsModel::LogClick(::StringW clickType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* clickData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(),
                                              { "LogClick", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clickType, clickData);
}
inline void GlobalNamespace::NoAnalyticsModel::LogImpression(::StringW impressionType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* impressionData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(),
                                              { "LogImpression", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, impressionType, impressionData);
}
inline void GlobalNamespace::NoAnalyticsModel::LogExposure(::StringW exposureType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* exposureData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(),
                                              { "LogExposure", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exposureType, exposureData);
}
inline void GlobalNamespace::NoAnalyticsModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoAnalyticsModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoAnalyticsModel* GlobalNamespace::NoAnalyticsModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoAnalyticsModel*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAnalyticsModel"
constexpr GlobalNamespace::NoAnalyticsModel::operator ::GlobalNamespace::IAnalyticsModel*() noexcept {
  return static_cast<::GlobalNamespace::IAnalyticsModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAnalyticsModel"
constexpr ::GlobalNamespace::IAnalyticsModel* GlobalNamespace::NoAnalyticsModel::i___GlobalNamespace__IAnalyticsModel() noexcept {
  return static_cast<::GlobalNamespace::IAnalyticsModel*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoAnalyticsModel::NoAnalyticsModel() {}
