#pragma once
// IWYU pragma private; include "BeatSaber/Init/GameVersionProvider.hpp"
#include "BeatSaber/Init/zzzz__GameVersion_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Init/zzzz__GameVersionProvider_def.hpp"
#include "BeatSaber/Init/zzzz__GameVersion_def.hpp"
//  Writing Method size for method: ::BeatSaber::Init::GameVersionProvider.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BeatSaber::Init::GameVersionProvider::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x35440c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::GameVersionProvider*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersionProvider.GetContentVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Init::GameVersion_Content (*)()>(&::BeatSaber::Init::GameVersionProvider::GetContentVersion)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x354410c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::GameVersionProvider*>(), { "GetContentVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersionProvider.GetBuildId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)()>(&::BeatSaber::Init::GameVersionProvider::GetBuildId)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3544214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::GameVersionProvider*>(), { "GetBuildId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersionProvider.GetBuildTimeGameVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Init::GameVersion* (*)()>(&::BeatSaber::Init::GameVersionProvider::GetBuildTimeGameVersion)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x3541094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::GameVersionProvider*>(), { "GetBuildTimeGameVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersionProvider.GetVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Init::GameVersion* (::BeatSaber::Init::GameVersionProvider::*)()>(&::BeatSaber::Init::GameVersionProvider::GetVersion)> {
  constexpr static std::size_t size = 0x7d8;
  constexpr static std::size_t addrs = 0x35442ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::GameVersionProvider*>(), { "GetVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersionProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Init::GameVersionProvider::*)()>(&::BeatSaber::Init::GameVersionProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3544a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::GameVersionProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BeatSaber::Init::GameVersionProvider::setStaticF__contentVersion(::System::Nullable_1<::BeatSaber::Init::GameVersion_Content> value) {
  ::cordl_internals::setStaticField<::System::Nullable_1<::BeatSaber::Init::GameVersion_Content>, "_contentVersion", ::BeatSaber::Init::GameVersionProvider*>(
      std::forward<::System::Nullable_1<::BeatSaber::Init::GameVersion_Content>>(value));
}
inline ::System::Nullable_1<::BeatSaber::Init::GameVersion_Content> BeatSaber::Init::GameVersionProvider::getStaticF__contentVersion() {
  return ::cordl_internals::getStaticField<::System::Nullable_1<::BeatSaber::Init::GameVersion_Content>, "_contentVersion", ::BeatSaber::Init::GameVersionProvider*>();
}
inline void BeatSaber::Init::GameVersionProvider::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::GameVersionProvider*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::BeatSaber::Init::GameVersion_Content BeatSaber::Init::GameVersionProvider::GetContentVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::GameVersionProvider*>(), { "GetContentVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::GameVersion_Content>(nullptr, ___internal_method);
}
inline uint64_t BeatSaber::Init::GameVersionProvider::GetBuildId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::GameVersionProvider*>(), { "GetBuildId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method);
}
inline ::BeatSaber::Init::GameVersion* BeatSaber::Init::GameVersionProvider::GetBuildTimeGameVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::GameVersionProvider*>(), { "GetBuildTimeGameVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::GameVersion*>(nullptr, ___internal_method);
}
inline ::BeatSaber::Init::GameVersion* BeatSaber::Init::GameVersionProvider::GetVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::GameVersionProvider*>(), { "GetVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::GameVersion*>(this, ___internal_method);
}
inline void BeatSaber::Init::GameVersionProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::GameVersionProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Init::GameVersionProvider* BeatSaber::Init::GameVersionProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Init::GameVersionProvider*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::GameVersionProvider::GameVersionProvider() {}
