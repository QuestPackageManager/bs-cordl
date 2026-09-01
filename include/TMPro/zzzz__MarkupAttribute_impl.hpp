#pragma once
// IWYU pragma private; include "TMPro\MarkupAttribute.hpp"
#include "TMPro/zzzz__MarkupAttribute_def.hpp"
//  Writing Method size for method: ::TMPro::MarkupAttribute.get_NameHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TMPro::MarkupAttribute::*)()>(&::TMPro::MarkupAttribute::get_NameHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a6a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkupAttribute>(), { "get_NameHashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkupAttribute.set_NameHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MarkupAttribute::*)(int32_t)>(&::TMPro::MarkupAttribute::set_NameHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a6aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkupAttribute>(), { "set_NameHashCode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkupAttribute.get_ValueHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TMPro::MarkupAttribute::*)()>(&::TMPro::MarkupAttribute::get_ValueHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a6aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkupAttribute>(), { "get_ValueHashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkupAttribute.set_ValueHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MarkupAttribute::*)(int32_t)>(&::TMPro::MarkupAttribute::set_ValueHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a6ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkupAttribute>(), { "set_ValueHashCode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkupAttribute.get_ValueStartIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TMPro::MarkupAttribute::*)()>(&::TMPro::MarkupAttribute::get_ValueStartIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a6abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkupAttribute>(), { "get_ValueStartIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkupAttribute.set_ValueStartIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MarkupAttribute::*)(int32_t)>(&::TMPro::MarkupAttribute::set_ValueStartIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a6ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkupAttribute>(), { "set_ValueStartIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkupAttribute.get_ValueLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TMPro::MarkupAttribute::*)()>(&::TMPro::MarkupAttribute::get_ValueLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a6acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkupAttribute>(), { "get_ValueLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkupAttribute.set_ValueLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MarkupAttribute::*)(int32_t)>(&::TMPro::MarkupAttribute::set_ValueLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a6ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkupAttribute>(), { "set_ValueLength", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t TMPro::MarkupAttribute::get_NameHashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkupAttribute>(), { "get_NameHashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void TMPro::MarkupAttribute::set_NameHashCode(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkupAttribute>(), { "set_NameHashCode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t TMPro::MarkupAttribute::get_ValueHashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkupAttribute>(), { "get_ValueHashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void TMPro::MarkupAttribute::set_ValueHashCode(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkupAttribute>(), { "set_ValueHashCode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t TMPro::MarkupAttribute::get_ValueStartIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkupAttribute>(), { "get_ValueStartIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void TMPro::MarkupAttribute::set_ValueStartIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkupAttribute>(), { "set_ValueStartIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t TMPro::MarkupAttribute::get_ValueLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkupAttribute>(), { "get_ValueLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void TMPro::MarkupAttribute::set_ValueLength(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkupAttribute>(), { "set_ValueLength", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_NameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ValueHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_ValueStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ValueLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::MarkupAttribute::MarkupAttribute(int32_t m_NameHashCode, int32_t m_ValueHashCode, int32_t m_ValueStartIndex, int32_t m_ValueLength) noexcept {
  this->m_NameHashCode = m_NameHashCode;
  this->m_ValueHashCode = m_ValueHashCode;
  this->m_ValueStartIndex = m_ValueStartIndex;
  this->m_ValueLength = m_ValueLength;
}
// Ctor Parameters []
constexpr ::TMPro::MarkupAttribute::MarkupAttribute() {}
