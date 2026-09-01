#pragma once
// IWYU pragma private; include "BeatSaber\AvatarCore\IOptionalAvatarDataProvider.hpp"
#include "BeatSaber/AvatarCore/zzzz__IOptionalAvatarDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarDisplayContext_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider.get_currentData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>* (
    ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider::*)()>(&::BeatSaber::AvatarCore::IOptionalAvatarDataProvider::get_currentData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider.get_playbackDelayMs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::BeatSaber::AvatarCore::IOptionalAvatarDataProvider::*)()>(
    &::BeatSaber::AvatarCore::IOptionalAvatarDataProvider::get_playbackDelayMs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider.add_dataDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::IOptionalAvatarDataProvider::*)(::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>*)>(
    &::BeatSaber::AvatarCore::IOptionalAvatarDataProvider::add_dataDidChangeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider.remove_dataDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::IOptionalAvatarDataProvider::*)(::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>*)>(
    &::BeatSaber::AvatarCore::IOptionalAvatarDataProvider::remove_dataDidChangeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider.SetDisplayContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::IOptionalAvatarDataProvider::*)(::BeatSaber::AvatarCore::AvatarDisplayContext)>(
    &::BeatSaber::AvatarCore::IOptionalAvatarDataProvider::SetDisplayContext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(), 4 }));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>* BeatSaber::AvatarCore::IOptionalAvatarDataProvider::get_currentData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*>(this, ___internal_method);
}
inline int64_t BeatSaber::AvatarCore::IOptionalAvatarDataProvider::get_playbackDelayMs() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::IOptionalAvatarDataProvider::add_dataDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::IOptionalAvatarDataProvider::remove_dataDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::IOptionalAvatarDataProvider::SetDisplayContext(::BeatSaber::AvatarCore::AvatarDisplayContext avatarDisplayContext) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarDisplayContext);
}
