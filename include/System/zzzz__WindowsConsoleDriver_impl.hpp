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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::WindowsConsoleDriver::*)()>(&::System::WindowsConsoleDriver::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3de42cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.ReadKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ConsoleKeyInfo (::System::WindowsConsoleDriver::*)(bool)>(&::System::WindowsConsoleDriver::ReadKey)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3de4438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "ReadKey", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.IsModifierKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int16_t)>(&::System::WindowsConsoleDriver::IsModifierKey)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3de4678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "IsModifierKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.GetStdHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::Handles)>(&::System::WindowsConsoleDriver::GetStdHandle)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3de4320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "GetStdHandle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Handles>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.GetConsoleScreenBufferInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ByRef<::System::ConsoleScreenBufferInfo>)>(
    &::System::WindowsConsoleDriver::GetConsoleScreenBufferInfo)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3de43a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "GetConsoleScreenBufferInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ConsoleScreenBufferInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.ReadConsoleInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ByRef<::System::InputRecord>, int32_t, ByRef<int32_t>)>(
    &::System::WindowsConsoleDriver::ReadConsoleInput)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3de4570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "ReadConsoleInput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::InputRecord>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IConsoleDriver"
constexpr System::WindowsConsoleDriver::operator ::System::IConsoleDriver*() noexcept {
  return static_cast<::System::IConsoleDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IConsoleDriver"
constexpr ::System::IConsoleDriver* System::WindowsConsoleDriver::i___System__IConsoleDriver() noexcept {
  return static_cast<::System::IConsoleDriver*>(static_cast<void*>(this));
}
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
inline ::System::WindowsConsoleDriver* System::WindowsConsoleDriver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::WindowsConsoleDriver*>());
}
inline void System::WindowsConsoleDriver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ConsoleKeyInfo System::WindowsConsoleDriver::ReadKey(bool intercept) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "ReadKey", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo, false>(this, ___internal_method, intercept);
}
inline bool System::WindowsConsoleDriver::IsModifierKey(int16_t virtualKeyCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "IsModifierKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualKeyCode);
}
inline ::System::IntPtr System::WindowsConsoleDriver::GetStdHandle(::System::Handles handle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "GetStdHandle", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Handles>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, handle);
}
inline bool System::WindowsConsoleDriver::GetConsoleScreenBufferInfo(::System::IntPtr handle, ByRef<::System::ConsoleScreenBufferInfo> info) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "GetConsoleScreenBufferInfo", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ConsoleScreenBufferInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle, info);
}
inline bool System::WindowsConsoleDriver::ReadConsoleInput(::System::IntPtr handle, ByRef<::System::InputRecord> record, int32_t length, ByRef<int32_t> nread) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "ReadConsoleInput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::InputRecord>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle, record, length, nread);
}
// Ctor Parameters []
constexpr ::System::WindowsConsoleDriver::WindowsConsoleDriver() {}
