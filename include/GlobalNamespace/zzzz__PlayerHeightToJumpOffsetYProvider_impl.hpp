#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayerHeightToJumpOffsetYProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightToJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightDetector_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider.get_jumpOffsetY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)()>(&::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::get_jumpOffsetY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ed5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>(), { "get_jumpOffsetY", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)()>(&::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::Initialize)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x59ed5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)()>(&::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::Dispose)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x59ed780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider.HandlePlayerHeightDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)(float_t)>(
    &::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::HandlePlayerHeightDidChange)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x59ed744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>(), { "HandlePlayerHeightDidChange", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider.JumpOffsetYForPlayerHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::JumpOffsetYForPlayerHeight)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59ed70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>(), { "JumpOffsetYForPlayerHeight", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)()>(&::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ed890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector>& GlobalNamespace::PlayerHeightToJumpOffsetYProvider::__cordl_internal_get__playerHeightDetector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightDetector;
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector> const& GlobalNamespace::PlayerHeightToJumpOffsetYProvider::__cordl_internal_get__playerHeightDetector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightDetector;
}
constexpr void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::__cordl_internal_set__playerHeightDetector(::UnityW<::GlobalNamespace::PlayerHeightDetector> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerHeightDetector = value;
}
constexpr float_t& GlobalNamespace::PlayerHeightToJumpOffsetYProvider::__cordl_internal_get__jumpOffsetY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetY;
}
constexpr float_t const& GlobalNamespace::PlayerHeightToJumpOffsetYProvider::__cordl_internal_get__jumpOffsetY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetY;
}
constexpr void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::__cordl_internal_set__jumpOffsetY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpOffsetY = value;
}
inline float_t GlobalNamespace::PlayerHeightToJumpOffsetYProvider::get_jumpOffsetY() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>(), { "get_jumpOffsetY", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::HandlePlayerHeightDidChange(float_t playerHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>(), { "HandlePlayerHeightDidChange", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerHeight);
}
inline float_t GlobalNamespace::PlayerHeightToJumpOffsetYProvider::JumpOffsetYForPlayerHeight(float_t playerHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>(), { "JumpOffsetYForPlayerHeight", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, playerHeight);
}
inline void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider* GlobalNamespace::PlayerHeightToJumpOffsetYProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>());
}
/// @brief Convert operator to "::GlobalNamespace::IJumpOffsetYProvider"
constexpr GlobalNamespace::PlayerHeightToJumpOffsetYProvider::operator ::GlobalNamespace::IJumpOffsetYProvider*() noexcept {
  return static_cast<::GlobalNamespace::IJumpOffsetYProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IJumpOffsetYProvider"
constexpr ::GlobalNamespace::IJumpOffsetYProvider* GlobalNamespace::PlayerHeightToJumpOffsetYProvider::i___GlobalNamespace__IJumpOffsetYProvider() noexcept {
  return static_cast<::GlobalNamespace::IJumpOffsetYProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::PlayerHeightToJumpOffsetYProvider::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* GlobalNamespace::PlayerHeightToJumpOffsetYProvider::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::PlayerHeightToJumpOffsetYProvider::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::PlayerHeightToJumpOffsetYProvider::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::PlayerHeightToJumpOffsetYProvider() {}
