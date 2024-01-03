#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__WindowsConsoleDriver_def.hpp"
#include "System/zzzz__Handles_def.hpp"
#include "System/zzzz__ConsoleScreenBufferInfo_def.hpp"
#include "System/zzzz__IConsoleDriver_def.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
#include "System/zzzz__InputRecord_def.hpp"
//  Writing Method size for method: ::System::WindowsConsoleDriver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::WindowsConsoleDriver::*)()>(&::System::WindowsConsoleDriver::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2609554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.ReadKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ConsoleKeyInfo (::System::WindowsConsoleDriver::*)(bool)>(&::System::WindowsConsoleDriver::ReadKey)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x26096c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "ReadKey", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.IsModifierKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int16_t)>(&::System::WindowsConsoleDriver::IsModifierKey)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2609908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "IsModifierKey", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.GetStdHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::System::Handles)>(&::System::WindowsConsoleDriver::GetStdHandle)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x26095a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "GetStdHandle", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Handles>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.GetConsoleScreenBufferInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(void*, ByRef<::System::ConsoleScreenBufferInfo>)>(
    &::System::WindowsConsoleDriver::GetConsoleScreenBufferInfo)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x260962c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "GetConsoleScreenBufferInfo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ConsoleScreenBufferInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.ReadConsoleInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(void*, ByRef<::System::InputRecord>, int32_t, ByRef<int32_t>)>(
    &::System::WindowsConsoleDriver::ReadConsoleInput)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2609800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "ReadConsoleInput", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::InputRecord>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IConsoleDriver"
constexpr System::WindowsConsoleDriver::operator ::System::IConsoleDriver*() noexcept {
  return static_cast<::System::IConsoleDriver*>(static_cast<void*>(this));
}
constexpr void*& System::WindowsConsoleDriver::__get_inputHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputHandle;
}
constexpr void* const& System::WindowsConsoleDriver::__get_inputHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputHandle;
}
constexpr void System::WindowsConsoleDriver::__set_inputHandle(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputHandle = value;
}
constexpr void*& System::WindowsConsoleDriver::__get_outputHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputHandle;
}
constexpr void* const& System::WindowsConsoleDriver::__get_outputHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputHandle;
}
constexpr void System::WindowsConsoleDriver::__set_outputHandle(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outputHandle = value;
}
constexpr int16_t& System::WindowsConsoleDriver::__get_defaultAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultAttribute;
}
constexpr int16_t const& System::WindowsConsoleDriver::__get_defaultAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultAttribute;
}
constexpr void System::WindowsConsoleDriver::__set_defaultAttribute(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultAttribute = value;
}
inline ::System::WindowsConsoleDriver* System::WindowsConsoleDriver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::WindowsConsoleDriver*>());
}
inline void System::WindowsConsoleDriver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ConsoleKeyInfo System::WindowsConsoleDriver::ReadKey(bool intercept) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "ReadKey", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo, false>(this, ___internal_method, intercept);
}
inline bool System::WindowsConsoleDriver::IsModifierKey(int16_t virtualKeyCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "IsModifierKey", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualKeyCode);
}
inline void* System::WindowsConsoleDriver::GetStdHandle(::System::Handles handle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "GetStdHandle", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Handles>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, handle);
}
inline bool System::WindowsConsoleDriver::GetConsoleScreenBufferInfo(void* handle, ByRef<::System::ConsoleScreenBufferInfo> info) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "GetConsoleScreenBufferInfo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ConsoleScreenBufferInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle, info);
}
inline bool System::WindowsConsoleDriver::ReadConsoleInput(void* handle, ByRef<::System::InputRecord> record, int32_t length, ByRef<int32_t> nread) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WindowsConsoleDriver*>::get(), "ReadConsoleInput", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::InputRecord>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle, record, length, nread);
}
// Ctor Parameters []
constexpr ::System::WindowsConsoleDriver::WindowsConsoleDriver() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
