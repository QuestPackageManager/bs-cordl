#pragma once
// IWYU pragma private; include "GlobalNamespace/SR.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SR_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SR.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::SR::GetString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f57bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SR*>(), { "GetString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SR.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::SR::Format)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f57bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SR*>(), { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SR.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Object*)>(&::GlobalNamespace::SR::Format)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f57c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SR*>(), { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SR.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Object*, ::System::Object*)>(&::GlobalNamespace::SR::Format)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f57cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SR*>(), { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SR.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*)>(&::GlobalNamespace::SR::Format)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f57da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SR*>(),
                            { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::SR::GetString(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SR*>(), { "GetString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline ::StringW GlobalNamespace::SR::Format(::StringW resourceFormat, /* [ParamArray] */ ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SR*>(), { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, resourceFormat, args);
}
inline ::StringW GlobalNamespace::SR::Format(::StringW resourceFormat, ::System::Object* p1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SR*>(), { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, resourceFormat, p1);
}
inline ::StringW GlobalNamespace::SR::Format(::StringW resourceFormat, ::System::Object* p1, ::System::Object* p2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SR*>(), { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, resourceFormat, p1, p2);
}
inline ::StringW GlobalNamespace::SR::Format(::StringW resourceFormat, ::System::Object* p1, ::System::Object* p2, ::System::Object* p3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SR*>(),
                          { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, resourceFormat, p1, p2, p3);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SR::SR() {}
