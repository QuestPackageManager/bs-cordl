#pragma once
// IWYU pragma private; include "GlobalNamespace\IBlockLevelGameplayAnalyticsEventsCache.hpp"
#include "GlobalNamespace/zzzz__IBlockLevelGameplayAnalyticsEventsCache_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache.AddGoodCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::*)(
    float_t, float_t, ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteData_GameplayType, ::System::Nullable_1<int32_t>, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>)>(
    &::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::AddGoodCut)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache.AddBadCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::*)(
    float_t, ::GlobalNamespace::NoteCutInfo_FailReason, ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteData_GameplayType, ::System::Nullable_1<int32_t>,
    ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>)>(&::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::AddBadCut)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache.AddBlockMiss
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::*)(
    float_t, ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteData_GameplayType, ::System::Nullable_1<int32_t>, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>)>(
    &::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::AddBlockMiss)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache.AddBombCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::*)(float_t)>(
    &::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::AddBombCut)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache.AddObstacleHit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::*)(float_t, float_t)>(
    &::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::AddObstacleHit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache.SerializeJSON
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::*)()>(
    &::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::SerializeJSON)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache.IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::*)()>(&::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::IsEmpty)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(), 6 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::AddGoodCut(float_t beat, float_t score, ::GlobalNamespace::ColorType colorType,
                                                                                 ::GlobalNamespace::NoteData_GameplayType gameplayType, ::System::Nullable_1<int32_t> lineIndex,
                                                                                 ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> lineLayer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, score, colorType, gameplayType, lineIndex, lineLayer);
}
inline void GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::AddBadCut(float_t beat, ::GlobalNamespace::NoteCutInfo_FailReason failReason, ::GlobalNamespace::ColorType colorType,
                                                                                ::GlobalNamespace::NoteData_GameplayType gameplayType, ::System::Nullable_1<int32_t> lineIndex,
                                                                                ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> lineLayer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, failReason, colorType, gameplayType, lineIndex, lineLayer);
}
inline void GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::AddBlockMiss(float_t beat, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteData_GameplayType gameplayType,
                                                                                   ::System::Nullable_1<int32_t> lineIndex, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> lineLayer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, colorType, gameplayType, lineIndex, lineLayer);
}
inline void GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::AddBombCut(float_t beat) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat);
}
inline void GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::AddObstacleHit(float_t beat, float_t duration) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, duration);
}
inline ::StringW GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::SerializeJSON() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache::IsEmpty() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
