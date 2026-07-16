#pragma once
// IWYU pragma private; include "GlobalNamespace/UtcTimeProvider.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UtcTimeProvider_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UtcTimeProvider.GetTimeMs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::UtcTimeProvider::*)()>(&::GlobalNamespace::UtcTimeProvider::GetTimeMs)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x333ff28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UtcTimeProvider*>(), { "GetTimeMs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UtcTimeProvider.GetTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::UtcTimeProvider::*)()>(&::GlobalNamespace::UtcTimeProvider::GetTicks)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3338e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UtcTimeProvider*>(), { "GetTicks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UtcTimeProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UtcTimeProvider::*)()>(&::GlobalNamespace::UtcTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x333ff54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UtcTimeProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UtcTimeProvider::setStaticF__epoch(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "_epoch", ::GlobalNamespace::UtcTimeProvider*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime GlobalNamespace::UtcTimeProvider::getStaticF__epoch() {
  return ::cordl_internals::getStaticField<::System::DateTime, "_epoch", ::GlobalNamespace::UtcTimeProvider*>();
}
inline void GlobalNamespace::UtcTimeProvider::setStaticF_instance(::GlobalNamespace::UtcTimeProvider* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::UtcTimeProvider*, "instance", ::GlobalNamespace::UtcTimeProvider*>(std::forward<::GlobalNamespace::UtcTimeProvider*>(value));
}
inline ::GlobalNamespace::UtcTimeProvider* GlobalNamespace::UtcTimeProvider::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::UtcTimeProvider*, "instance", ::GlobalNamespace::UtcTimeProvider*>();
}
inline int64_t GlobalNamespace::UtcTimeProvider::GetTimeMs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UtcTimeProvider*>(), { "GetTimeMs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t GlobalNamespace::UtcTimeProvider::GetTicks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UtcTimeProvider*>(), { "GetTicks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::UtcTimeProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UtcTimeProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UtcTimeProvider* GlobalNamespace::UtcTimeProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UtcTimeProvider*>());
}
/// @brief Convert operator to "::BGNet::Core::ITimeProvider"
constexpr GlobalNamespace::UtcTimeProvider::operator ::BGNet::Core::ITimeProvider*() noexcept {
  return static_cast<::BGNet::Core::ITimeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGNet::Core::ITimeProvider"
constexpr ::BGNet::Core::ITimeProvider* GlobalNamespace::UtcTimeProvider::i___BGNet__Core__ITimeProvider() noexcept {
  return static_cast<::BGNet::Core::ITimeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UtcTimeProvider::UtcTimeProvider() {}
