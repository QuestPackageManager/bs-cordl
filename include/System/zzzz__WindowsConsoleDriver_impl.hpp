#pragma once
// IWYU pragma private; include "System/WindowsConsoleDriver.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__WindowsConsoleDriver_def.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
#include "System/zzzz__ConsoleScreenBufferInfo_def.hpp"
#include "System/zzzz__Handles_def.hpp"
#include "System/zzzz__IConsoleDriver_def.hpp"
#include "System/zzzz__InputRecord_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::WindowsConsoleDriver._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::WindowsConsoleDriver::*)()>(&::System::WindowsConsoleDriver::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c9eea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WindowsConsoleDriver*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.ReadKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ConsoleKeyInfo (::System::WindowsConsoleDriver::*)(bool)>(&::System::WindowsConsoleDriver::ReadKey)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5c9f00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WindowsConsoleDriver*>(), { "ReadKey", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.IsModifierKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int16_t)>(&::System::WindowsConsoleDriver::IsModifierKey)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c9f254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WindowsConsoleDriver*>(), { "IsModifierKey", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.GetStdHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Handles)>(&::System::WindowsConsoleDriver::GetStdHandle)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c9eef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WindowsConsoleDriver*>(), { "GetStdHandle", {}, { ::i2c::type_of<::System::Handles>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.GetConsoleScreenBufferInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::System::ConsoleScreenBufferInfo>)>(&::System::WindowsConsoleDriver::GetConsoleScreenBufferInfo)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c9ef78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WindowsConsoleDriver*>(),
                                                { "GetConsoleScreenBufferInfo", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::ConsoleScreenBufferInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.ReadConsoleInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::System::InputRecord>, int32_t, ::by_ref<int32_t>)>(&::System::WindowsConsoleDriver::ReadConsoleInput)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c9f14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::WindowsConsoleDriver*>(),
            { "ReadConsoleInput", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::InputRecord>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& System::WindowsConsoleDriver::__cordl_internal_get_inputHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputHandle;
}
constexpr ::System::IntPtr const& System::WindowsConsoleDriver::__cordl_internal_get_inputHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputHandle;
}
constexpr void System::WindowsConsoleDriver::__cordl_internal_set_inputHandle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputHandle = value;
}
constexpr ::System::IntPtr& System::WindowsConsoleDriver::__cordl_internal_get_outputHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputHandle;
}
constexpr ::System::IntPtr const& System::WindowsConsoleDriver::__cordl_internal_get_outputHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputHandle;
}
constexpr void System::WindowsConsoleDriver::__cordl_internal_set_outputHandle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outputHandle = value;
}
constexpr int16_t& System::WindowsConsoleDriver::__cordl_internal_get_defaultAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultAttribute;
}
constexpr int16_t const& System::WindowsConsoleDriver::__cordl_internal_get_defaultAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultAttribute;
}
constexpr void System::WindowsConsoleDriver::__cordl_internal_set_defaultAttribute(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultAttribute = value;
}
inline void System::WindowsConsoleDriver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WindowsConsoleDriver*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ConsoleKeyInfo System::WindowsConsoleDriver::ReadKey(bool intercept) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WindowsConsoleDriver*>(), { "ReadKey", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo>(this, ___internal_method, intercept);
}
inline bool System::WindowsConsoleDriver::IsModifierKey(int16_t virtualKeyCode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WindowsConsoleDriver*>(), { "IsModifierKey", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualKeyCode);
}
inline ::System::IntPtr System::WindowsConsoleDriver::GetStdHandle(::System::Handles handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WindowsConsoleDriver*>(), { "GetStdHandle", {}, { ::i2c::type_of<::System::Handles>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
inline bool System::WindowsConsoleDriver::GetConsoleScreenBufferInfo(::System::IntPtr handle, ::by_ref<::System::ConsoleScreenBufferInfo> info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WindowsConsoleDriver*>(),
                                              { "GetConsoleScreenBufferInfo", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::ConsoleScreenBufferInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, info);
}
inline bool System::WindowsConsoleDriver::ReadConsoleInput(::System::IntPtr handle, ::by_ref<::System::InputRecord> record, int32_t length, ::by_ref<int32_t> nread) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::WindowsConsoleDriver*>(),
          { "ReadConsoleInput", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::InputRecord>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, record, length, nread);
}
inline ::System::WindowsConsoleDriver* System::WindowsConsoleDriver::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::WindowsConsoleDriver*>());
}
/// @brief Convert operator to "::System::IConsoleDriver"
constexpr System::WindowsConsoleDriver::operator ::System::IConsoleDriver*() noexcept {
  return static_cast<::System::IConsoleDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IConsoleDriver"
constexpr ::System::IConsoleDriver* System::WindowsConsoleDriver::i___System__IConsoleDriver() noexcept {
  return static_cast<::System::IConsoleDriver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::WindowsConsoleDriver::WindowsConsoleDriver() {}
