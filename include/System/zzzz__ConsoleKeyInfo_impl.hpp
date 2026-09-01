#pragma once
// IWYU pragma private; include "System\ConsoleKeyInfo.hpp"
#include "System/zzzz__ConsoleKey_impl.hpp"
#include "System/zzzz__ConsoleModifiers_impl.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
#include "System/zzzz__ConsoleKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ConsoleKeyInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ConsoleKeyInfo::*)(char16_t, ::System::ConsoleKey, bool, bool, bool)>(&::System::ConsoleKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c685f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ConsoleKeyInfo>(),
                            { ".ctor", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::ConsoleKey>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleKeyInfo.get_KeyChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::ConsoleKeyInfo::*)()>(&::System::ConsoleKeyInfo::get_KeyChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c68684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleKeyInfo>(), { "get_KeyChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleKeyInfo.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ConsoleKey (::System::ConsoleKeyInfo::*)()>(&::System::ConsoleKeyInfo::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6868c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleKeyInfo>(), { "get_Key", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleKeyInfo.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ConsoleKeyInfo::*)(::System::Object*)>(&::System::ConsoleKeyInfo::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c68694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ConsoleKeyInfo>(), { ::i2c::class_of<::System::ConsoleKeyInfo>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleKeyInfo.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ConsoleKeyInfo::*)(::System::ConsoleKeyInfo)>(&::System::ConsoleKeyInfo::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c68730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleKeyInfo>(), { "Equals", {}, { ::i2c::type_of<::System::ConsoleKeyInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleKeyInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ConsoleKeyInfo::*)()>(&::System::ConsoleKeyInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c68764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ConsoleKeyInfo>(), { ::i2c::class_of<::System::ConsoleKeyInfo>(), 2 }));
    return ___internal_method;
  }
};
inline void System::ConsoleKeyInfo::_ctor(char16_t keyChar, ::System::ConsoleKey key, bool shift, bool alt, bool control) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ConsoleKeyInfo>(),
                          { ".ctor", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::ConsoleKey>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keyChar, key, shift, alt, control);
}
inline char16_t System::ConsoleKeyInfo::get_KeyChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleKeyInfo>(), { "get_KeyChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method);
}
inline ::System::ConsoleKey System::ConsoleKeyInfo::get_Key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleKeyInfo>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ConsoleKey>(*this, ___internal_method);
}
inline bool System::ConsoleKeyInfo::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ConsoleKeyInfo>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool System::ConsoleKeyInfo::Equals(::System::ConsoleKeyInfo obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleKeyInfo>(), { "Equals", {}, { ::i2c::type_of<::System::ConsoleKeyInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t System::ConsoleKeyInfo::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ConsoleKeyInfo>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_keyChar", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_key", ty: "::System::ConsoleKey", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_mods", ty: "::System::ConsoleModifiers", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ConsoleKeyInfo::ConsoleKeyInfo(char16_t _keyChar, ::System::ConsoleKey _key, ::System::ConsoleModifiers _mods) noexcept {
  this->_keyChar = _keyChar;
  this->_key = _key;
  this->_mods = _mods;
}
// Ctor Parameters []
constexpr ::System::ConsoleKeyInfo::ConsoleKeyInfo() {}
