#pragma once
// IWYU pragma private; include "Oculus/Platform/NetSyncOptions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__NetSyncOptions_def.hpp"
#include "Oculus/Platform/zzzz__NetSyncVoipStreamMode_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::NetSyncOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::NetSyncOptions::*)()>(&::Oculus::Platform::NetSyncOptions::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ddb8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::NetSyncOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::NetSyncOptions.SetVoipGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::NetSyncOptions::*)(::StringW)>(&::Oculus::Platform::NetSyncOptions::SetVoipGroup)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ddb904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::NetSyncOptions*>(), { "SetVoipGroup", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::NetSyncOptions.SetVoipStreamDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::NetSyncOptions::*)(::Oculus::Platform::NetSyncVoipStreamMode)>(
    &::Oculus::Platform::NetSyncOptions::SetVoipStreamDefault)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ddb970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Oculus::Platform::NetSyncOptions*>(), { "SetVoipStreamDefault", {}, { ::i2c::type_of<::Oculus::Platform::NetSyncVoipStreamMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::NetSyncOptions.SetZoneId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::NetSyncOptions::*)(::StringW)>(&::Oculus::Platform::NetSyncOptions::SetZoneId)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ddb9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::NetSyncOptions*>(), { "SetZoneId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::NetSyncOptions.op_Explicit___System__IntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Oculus::Platform::NetSyncOptions*)>(&::Oculus::Platform::NetSyncOptions::op_Explicit___System__IntPtr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ddba48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::NetSyncOptions*>(), { "op_Explicit", {}, { ::i2c::type_of<::Oculus::Platform::NetSyncOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::NetSyncOptions.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::NetSyncOptions::*)()>(&::Oculus::Platform::NetSyncOptions::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ddba54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::NetSyncOptions*>(), { ::i2c::class_of<::Oculus::Platform::NetSyncOptions*>(), 1 }));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Oculus::Platform::NetSyncOptions::__cordl_internal_get_Handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr ::System::IntPtr const& Oculus::Platform::NetSyncOptions::__cordl_internal_get_Handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr void Oculus::Platform::NetSyncOptions::__cordl_internal_set_Handle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Handle = value;
}
inline void Oculus::Platform::NetSyncOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::NetSyncOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::NetSyncOptions::SetVoipGroup(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::NetSyncOptions*>(), { "SetVoipGroup", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::NetSyncOptions::SetVoipStreamDefault(::Oculus::Platform::NetSyncVoipStreamMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::NetSyncOptions*>(), { "SetVoipStreamDefault", {}, { ::i2c::type_of<::Oculus::Platform::NetSyncVoipStreamMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::NetSyncOptions::SetZoneId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::NetSyncOptions*>(), { "SetZoneId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IntPtr Oculus::Platform::NetSyncOptions::op_Explicit___System__IntPtr(::Oculus::Platform::NetSyncOptions* options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::NetSyncOptions*>(), { "op_Explicit", {}, { ::i2c::type_of<::Oculus::Platform::NetSyncOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, options);
}
inline void Oculus::Platform::NetSyncOptions::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::NetSyncOptions*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::NetSyncOptions* Oculus::Platform::NetSyncOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::NetSyncOptions*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::NetSyncOptions::NetSyncOptions() {}
