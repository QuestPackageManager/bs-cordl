#pragma once
// IWYU pragma private; include "System/Collections/Concurrent/CDSCollectionETWBCLProvider.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventSource_impl.hpp"
#include "System/Collections/Concurrent/zzzz__CDSCollectionETWBCLProvider_def.hpp"
//  Writing Method size for method: ::System::Collections::Concurrent::CDSCollectionETWBCLProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Concurrent::CDSCollectionETWBCLProvider::*)()>(
    &::System::Collections::Concurrent::CDSCollectionETWBCLProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63f3dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Concurrent::CDSCollectionETWBCLProvider.ConcurrentBag_TryTakeSteals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Concurrent::CDSCollectionETWBCLProvider::*)()>(
    &::System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentBag_TryTakeSteals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63f3df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>(), { "ConcurrentBag_TryTakeSteals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Concurrent::CDSCollectionETWBCLProvider.ConcurrentBag_TryPeekSteals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Concurrent::CDSCollectionETWBCLProvider::*)()>(
    &::System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentBag_TryPeekSteals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63f3df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>(), { "ConcurrentBag_TryPeekSteals", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Collections::Concurrent::CDSCollectionETWBCLProvider::setStaticF_Log(::System::Collections::Concurrent::CDSCollectionETWBCLProvider* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*, "Log", ::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>(
      std::forward<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>(value));
}
inline ::System::Collections::Concurrent::CDSCollectionETWBCLProvider* System::Collections::Concurrent::CDSCollectionETWBCLProvider::getStaticF_Log() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*, "Log", ::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>();
}
inline void System::Collections::Concurrent::CDSCollectionETWBCLProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentBag_TryTakeSteals() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>(), { "ConcurrentBag_TryTakeSteals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentBag_TryPeekSteals() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>(), { "ConcurrentBag_TryPeekSteals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Concurrent::CDSCollectionETWBCLProvider* System::Collections::Concurrent::CDSCollectionETWBCLProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>());
}
// Ctor Parameters []
constexpr ::System::Collections::Concurrent::CDSCollectionETWBCLProvider::CDSCollectionETWBCLProvider() {}
