#pragma once
// IWYU pragma private; include "System\Threading\Volatile.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__Volatile_def.hpp"
#include "System/Threading/zzzz__Volatile_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "Value", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Volatile_VolatileBoolean::Volatile_VolatileBoolean(bool Value) noexcept {
  this->Value = Value;
}
// Ctor Parameters []
constexpr ::System::Threading::Volatile_VolatileBoolean::Volatile_VolatileBoolean() {}
// Ctor Parameters [CppParam { name: "Value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Volatile_VolatileInt32::Volatile_VolatileInt32(int32_t Value) noexcept {
  this->Value = Value;
}
// Ctor Parameters []
constexpr ::System::Threading::Volatile_VolatileInt32::Volatile_VolatileInt32() {}
// Ctor Parameters [CppParam { name: "Value", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Volatile_VolatileObject::Volatile_VolatileObject(::System::Object* Value) noexcept {
  this->Value = Value;
}
// Ctor Parameters []
constexpr ::System::Threading::Volatile_VolatileObject::Volatile_VolatileObject() {}
//  Writing Method size for method: ::System::Threading::Volatile.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<bool>)>(&::System::Threading::Volatile::Read)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cbb108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Volatile*>(), { "Read", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Volatile.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<bool>, bool)>(&::System::Threading::Volatile::Write)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cbb114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Volatile*>(), { "Write", {}, { ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Volatile.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<int32_t>)>(&::System::Threading::Volatile::Read)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cbb120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Volatile*>(), { "Read", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Volatile.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, int32_t)>(&::System::Threading::Volatile::Write)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cbb12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Volatile*>(), { "Write", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Volatile.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::by_ref<int64_t>)>(&::System::Threading::Volatile::Read)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cbb138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Volatile*>(), { "Read", {}, { ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Volatile.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int64_t>, int64_t)>(&::System::Threading::Volatile::Write)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cbb144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Volatile*>(), { "Write", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
inline bool System::Threading::Volatile::Read(::by_ref<bool> location) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Volatile*>(), { "Read", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, location);
}
inline void System::Threading::Volatile::Write(::by_ref<bool> location, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Volatile*>(), { "Write", {}, { ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, location, value);
}
inline int32_t System::Threading::Volatile::Read(::by_ref<int32_t> location) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Volatile*>(), { "Read", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, location);
}
inline void System::Threading::Volatile::Write(::by_ref<int32_t> location, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Volatile*>(), { "Write", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, location, value);
}
template <typename T> inline T System::Threading::Volatile::Read(::by_ref<T> location) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Volatile*>(), { "Read", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, location);
}
template <typename T> inline void System::Threading::Volatile::Write(::by_ref<T> location, T value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Volatile*>(), { "Write", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, location, value);
}
inline int64_t System::Threading::Volatile::Read(::by_ref<int64_t> location) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Volatile*>(), { "Read", {}, { ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, location);
}
inline void System::Threading::Volatile::Write(::by_ref<int64_t> location, int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Volatile*>(), { "Write", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, location, value);
}
// Ctor Parameters []
constexpr ::System::Threading::Volatile::Volatile() {}
