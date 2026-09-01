#pragma once
// IWYU pragma private; include "Oculus\Platform\UserOptions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__UserOptions_def.hpp"
#include "Oculus/Platform/zzzz__ServiceProvider_def.hpp"
#include "Oculus/Platform/zzzz__TimeWindow_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::UserOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::UserOptions::*)()>(&::Oculus::Platform::UserOptions::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5deb98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::UserOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::UserOptions.SetMaxUsers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::UserOptions::*)(uint32_t)>(&::Oculus::Platform::UserOptions::SetMaxUsers)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dec194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::UserOptions*>(), { "SetMaxUsers", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::UserOptions.AddServiceProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::UserOptions::*)(::Oculus::Platform::ServiceProvider)>(&::Oculus::Platform::UserOptions::AddServiceProvider)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5deb9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::UserOptions*>(), { "AddServiceProvider", {}, { ::i2c::type_of<::Oculus::Platform::ServiceProvider>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::UserOptions.ClearServiceProviders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::UserOptions::*)()>(&::Oculus::Platform::UserOptions::ClearServiceProviders)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dec200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::UserOptions*>(), { "ClearServiceProviders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::UserOptions.SetTimeWindow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::UserOptions::*)(::Oculus::Platform::TimeWindow)>(&::Oculus::Platform::UserOptions::SetTimeWindow)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dec25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::UserOptions*>(), { "SetTimeWindow", {}, { ::i2c::type_of<::Oculus::Platform::TimeWindow>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::UserOptions.op_Explicit___System__IntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Oculus::Platform::UserOptions*)>(&::Oculus::Platform::UserOptions::op_Explicit___System__IntPtr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5de2be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::UserOptions*>(), { "op_Explicit", {}, { ::i2c::type_of<::Oculus::Platform::UserOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::UserOptions.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::UserOptions::*)()>(&::Oculus::Platform::UserOptions::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5dec2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::UserOptions*>(), { ::i2c::class_of<::Oculus::Platform::UserOptions*>(), 1 }));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Oculus::Platform::UserOptions::__cordl_internal_get_Handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr ::System::IntPtr const& Oculus::Platform::UserOptions::__cordl_internal_get_Handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr void Oculus::Platform::UserOptions::__cordl_internal_set_Handle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Handle = value;
}
inline void Oculus::Platform::UserOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::UserOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::UserOptions::SetMaxUsers(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::UserOptions*>(), { "SetMaxUsers", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::UserOptions::AddServiceProvider(::Oculus::Platform::ServiceProvider value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::UserOptions*>(), { "AddServiceProvider", {}, { ::i2c::type_of<::Oculus::Platform::ServiceProvider>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::UserOptions::ClearServiceProviders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::UserOptions*>(), { "ClearServiceProviders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::UserOptions::SetTimeWindow(::Oculus::Platform::TimeWindow value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::UserOptions*>(), { "SetTimeWindow", {}, { ::i2c::type_of<::Oculus::Platform::TimeWindow>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IntPtr Oculus::Platform::UserOptions::op_Explicit___System__IntPtr(::Oculus::Platform::UserOptions* options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::UserOptions*>(), { "op_Explicit", {}, { ::i2c::type_of<::Oculus::Platform::UserOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, options);
}
inline void Oculus::Platform::UserOptions::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::UserOptions*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::UserOptions* Oculus::Platform::UserOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::UserOptions*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::UserOptions::UserOptions() {}
