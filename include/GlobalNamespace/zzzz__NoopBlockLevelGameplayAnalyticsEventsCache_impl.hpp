#pragma once
// IWYU pragma private; include "GlobalNamespace/NoopBlockLevelGameplayAnalyticsEventsCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NoopBlockLevelGameplayAnalyticsEventsCache_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__IBlockLevelGameplayAnalyticsEventsCache_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache.AddGoodCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::*)(
    float_t, float_t, ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteData_GameplayType, ::System::Nullable_1<int32_t>, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>)>(
    &::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::AddGoodCut)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59edab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*>(),
                            { "AddGoodCut",
                              {},
                              { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<::GlobalNamespace::NoteData_GameplayType>(),
                                ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache.AddBadCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::*)(
    float_t, ::GlobalNamespace::NoteCutInfo_FailReason, ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteData_GameplayType, ::System::Nullable_1<int32_t>,
    ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>)>(&::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::AddBadCut)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59edabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*>(),
                                                             { "AddBadCut",
                                                               {},
                                                               { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteCutInfo_FailReason>(), ::i2c::type_of<::GlobalNamespace::ColorType>(),
                                                                 ::i2c::type_of<::GlobalNamespace::NoteData_GameplayType>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(),
                                                                 ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache.AddBlockMiss
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::*)(
    float_t, ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteData_GameplayType, ::System::Nullable_1<int32_t>, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>)>(
    &::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::AddBlockMiss)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59edac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*>(),
                                                             { "AddBlockMiss",
                                                               {},
                                                               { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<::GlobalNamespace::NoteData_GameplayType>(),
                                                                 ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache.AddBombCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::*)(float_t)>(
    &::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::AddBombCut)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59edac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*>(), { "AddBombCut", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache.AddObstacleHit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::*)(float_t, float_t)>(
    &::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::AddObstacleHit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59edac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*>(),
                                                                                           { "AddObstacleHit", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache.SerializeJSON
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::*)()>(
    &::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::SerializeJSON)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59edacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*>(), { "SerializeJSON", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache.IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::*)()>(
    &::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::IsEmpty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59edad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*>(), { "IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::*)()>(
    &::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59edadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::AddGoodCut(float_t beat, float_t score, ::GlobalNamespace::ColorType colorType,
                                                                                    ::GlobalNamespace::NoteData_GameplayType gameplayType, ::System::Nullable_1<int32_t> lineIndex,
                                                                                    ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> lineLayer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*>(),
                          { "AddGoodCut",
                            {},
                            { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<::GlobalNamespace::NoteData_GameplayType>(),
                              ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, score, colorType, gameplayType, lineIndex, lineLayer);
}
inline void GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::AddBadCut(float_t beat, ::GlobalNamespace::NoteCutInfo_FailReason failReason, ::GlobalNamespace::ColorType colorType,
                                                                                   ::GlobalNamespace::NoteData_GameplayType gameplayType, ::System::Nullable_1<int32_t> lineIndex,
                                                                                   ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> lineLayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*>(),
                                                           { "AddBadCut",
                                                             {},
                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteCutInfo_FailReason>(), ::i2c::type_of<::GlobalNamespace::ColorType>(),
                                                               ::i2c::type_of<::GlobalNamespace::NoteData_GameplayType>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(),
                                                               ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, failReason, colorType, gameplayType, lineIndex, lineLayer);
}
inline void GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::AddBlockMiss(float_t beat, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteData_GameplayType gameplayType,
                                                                                      ::System::Nullable_1<int32_t> lineIndex, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> lineLayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*>(),
                                                           { "AddBlockMiss",
                                                             {},
                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<::GlobalNamespace::NoteData_GameplayType>(),
                                                               ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, colorType, gameplayType, lineIndex, lineLayer);
}
inline void GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::AddBombCut(float_t beat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*>(), { "AddBombCut", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat);
}
inline void GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::AddObstacleHit(float_t beat, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*>(),
                                                                                         { "AddObstacleHit", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, duration);
}
inline ::StringW GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::SerializeJSON() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*>(), { "SerializeJSON", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*>(), { "IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache* GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache"
constexpr GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::operator ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*() noexcept {
  return static_cast<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache"
constexpr ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*
GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::i___GlobalNamespace__IBlockLevelGameplayAnalyticsEventsCache() noexcept {
  return static_cast<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache::NoopBlockLevelGameplayAnalyticsEventsCache() {}
