#pragma once
// IWYU pragma private; include "System/ConsoleCancelEventArgs.hpp"
#include "System/zzzz__ConsoleSpecialKey_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/zzzz__ConsoleCancelEventArgs_def.hpp"
#include "System/zzzz__ConsoleSpecialKey_def.hpp"
//  Writing Method size for method: ::System::ConsoleCancelEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ConsoleCancelEventArgs::*)(::System::ConsoleSpecialKey)>(&::System::ConsoleCancelEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c66320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleCancelEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::ConsoleSpecialKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleCancelEventArgs.get_Cancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ConsoleCancelEventArgs::*)()>(&::System::ConsoleCancelEventArgs::get_Cancel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c66384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleCancelEventArgs*>(), { "get_Cancel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleCancelEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ConsoleCancelEventArgs::*)()>(&::System::ConsoleCancelEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c6638c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleCancelEventArgs*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::ConsoleSpecialKey& System::ConsoleCancelEventArgs::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::System::ConsoleSpecialKey const& System::ConsoleCancelEventArgs::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void System::ConsoleCancelEventArgs::__cordl_internal_set__type(::System::ConsoleSpecialKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr bool& System::ConsoleCancelEventArgs::__cordl_internal_get__Cancel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Cancel_k__BackingField;
}
constexpr bool const& System::ConsoleCancelEventArgs::__cordl_internal_get__Cancel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Cancel_k__BackingField;
}
constexpr void System::ConsoleCancelEventArgs::__cordl_internal_set__Cancel_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Cancel_k__BackingField = value;
}
inline void System::ConsoleCancelEventArgs::_ctor(::System::ConsoleSpecialKey type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleCancelEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::ConsoleSpecialKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline bool System::ConsoleCancelEventArgs::get_Cancel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleCancelEventArgs*>(), { "get_Cancel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::ConsoleCancelEventArgs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleCancelEventArgs*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ConsoleCancelEventArgs* System::ConsoleCancelEventArgs::New_ctor(::System::ConsoleSpecialKey type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ConsoleCancelEventArgs*>(type));
}
inline ::System::ConsoleCancelEventArgs* System::ConsoleCancelEventArgs::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ConsoleCancelEventArgs*>());
}
// Ctor Parameters []
constexpr ::System::ConsoleCancelEventArgs::ConsoleCancelEventArgs() {}
