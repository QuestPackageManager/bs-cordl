#pragma once
// IWYU pragma private; include "GlobalNamespace/TestAnalyticsModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TestAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberSessionEventType_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__TestAnalyticsModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestAnalyticsModel___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestAnalyticsModel___c::*)()>(&::GlobalNamespace::TestAnalyticsModel___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3256918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestAnalyticsModel___c._LogEvent_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TestAnalyticsModel___c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>)>(
    &::GlobalNamespace::TestAnalyticsModel___c::_LogEvent_b__3_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x325691c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel___c*>(),
                                                             { "<LogEvent>b__3_0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TestAnalyticsModel___c::setStaticF___9(::GlobalNamespace::TestAnalyticsModel___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::TestAnalyticsModel___c*, "<>9", ::GlobalNamespace::TestAnalyticsModel___c*>(std::forward<::GlobalNamespace::TestAnalyticsModel___c*>(value));
}
inline ::GlobalNamespace::TestAnalyticsModel___c* GlobalNamespace::TestAnalyticsModel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::TestAnalyticsModel___c*, "<>9", ::GlobalNamespace::TestAnalyticsModel___c*>();
}
inline void GlobalNamespace::TestAnalyticsModel___c::setStaticF___9__3_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>*, "<>9__3_0", ::GlobalNamespace::TestAnalyticsModel___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* GlobalNamespace::TestAnalyticsModel___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>*, "<>9__3_0",
                                           ::GlobalNamespace::TestAnalyticsModel___c*>();
}
inline void GlobalNamespace::TestAnalyticsModel___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::TestAnalyticsModel___c::_LogEvent_b__3_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> kvp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel___c*>(),
                                                           { "<LogEvent>b__3_0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, kvp);
}
inline ::GlobalNamespace::TestAnalyticsModel___c* GlobalNamespace::TestAnalyticsModel___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TestAnalyticsModel___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestAnalyticsModel___c::TestAnalyticsModel___c() {}
//  Writing Method size for method: ::GlobalNamespace::TestAnalyticsModel.get_supportsOpenDataPrivacyPage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TestAnalyticsModel::*)()>(&::GlobalNamespace::TestAnalyticsModel::get_supportsOpenDataPrivacyPage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3255fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(), { "get_supportsOpenDataPrivacyPage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestAnalyticsModel.OpenDataPrivacyPage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestAnalyticsModel::*)()>(&::GlobalNamespace::TestAnalyticsModel::OpenDataPrivacyPage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3255fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(), { "OpenDataPrivacyPage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestAnalyticsModel.LogEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::TestAnalyticsModel::LogEvent)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x3255fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(),
                                                { "LogEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestAnalyticsModel.LogEditAvatarEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::TestAnalyticsModel::LogEditAvatarEvent)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x325617c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(),
                                                { "LogEditAvatarEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestAnalyticsModel.LogSessionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestAnalyticsModel::*)(::GlobalNamespace::BeatSaberSessionEventType, int32_t)>(
    &::GlobalNamespace::TestAnalyticsModel::LogSessionEvent)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x3256288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(),
                                                             { "LogSessionEvent", {}, { ::i2c::type_of<::GlobalNamespace::BeatSaberSessionEventType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestAnalyticsModel.LogClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::TestAnalyticsModel::LogClick)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x325659c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(),
                                                { "LogClick", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestAnalyticsModel.LogImpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::TestAnalyticsModel::LogImpression)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x32566a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(),
                                                { "LogImpression", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestAnalyticsModel.LogExposure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::TestAnalyticsModel::LogExposure)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x32567b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(),
                                                { "LogExposure", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestAnalyticsModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestAnalyticsModel::*)()>(&::GlobalNamespace::TestAnalyticsModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32568c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::TestAnalyticsModel::get_supportsOpenDataPrivacyPage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(), { "get_supportsOpenDataPrivacyPage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TestAnalyticsModel::OpenDataPrivacyPage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(), { "OpenDataPrivacyPage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TestAnalyticsModel::LogEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(),
                                              { "LogEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType, eventData);
}
inline void GlobalNamespace::TestAnalyticsModel::LogEditAvatarEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* avatarEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(),
                                              { "LogEditAvatarEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType, avatarEventData);
}
inline void GlobalNamespace::TestAnalyticsModel::LogSessionEvent(::GlobalNamespace::BeatSaberSessionEventType eventType, int32_t _) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(),
                                                           { "LogSessionEvent", {}, { ::i2c::type_of<::GlobalNamespace::BeatSaberSessionEventType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType, _);
}
inline void GlobalNamespace::TestAnalyticsModel::LogClick(::StringW clickType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* clickData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(),
                                              { "LogClick", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clickType, clickData);
}
inline void GlobalNamespace::TestAnalyticsModel::LogImpression(::StringW impressionType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* impressionData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(),
                                              { "LogImpression", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, impressionType, impressionData);
}
inline void GlobalNamespace::TestAnalyticsModel::LogExposure(::StringW exposureType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* exposureData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(),
                                              { "LogExposure", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exposureType, exposureData);
}
inline void GlobalNamespace::TestAnalyticsModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestAnalyticsModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TestAnalyticsModel* GlobalNamespace::TestAnalyticsModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TestAnalyticsModel*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAnalyticsModel"
constexpr GlobalNamespace::TestAnalyticsModel::operator ::GlobalNamespace::IAnalyticsModel*() noexcept {
  return static_cast<::GlobalNamespace::IAnalyticsModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAnalyticsModel"
constexpr ::GlobalNamespace::IAnalyticsModel* GlobalNamespace::TestAnalyticsModel::i___GlobalNamespace__IAnalyticsModel() noexcept {
  return static_cast<::GlobalNamespace::IAnalyticsModel*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestAnalyticsModel::TestAnalyticsModel() {}
