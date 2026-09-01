#pragma once
// IWYU pragma private; include "System\Xml\CharEntityEncoderFallbackBuffer.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_impl.hpp"
#include "System/Xml/zzzz__CharEntityEncoderFallbackBuffer_def.hpp"
#include "System/Xml/zzzz__CharEntityEncoderFallback_def.hpp"
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallbackBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::CharEntityEncoderFallbackBuffer::*)(::System::Xml::CharEntityEncoderFallback*)>(
    &::System::Xml::CharEntityEncoderFallbackBuffer::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61acb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::CharEntityEncoderFallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallbackBuffer.Fallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::CharEntityEncoderFallbackBuffer::*)(char16_t, int32_t)>(&::System::Xml::CharEntityEncoderFallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x61acc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), { ::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallbackBuffer.Fallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::CharEntityEncoderFallbackBuffer::*)(char16_t, char16_t, int32_t)>(
    &::System::Xml::CharEntityEncoderFallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x61acdd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), { ::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallbackBuffer.GetNextChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Xml::CharEntityEncoderFallbackBuffer::*)()>(&::System::Xml::CharEntityEncoderFallbackBuffer::GetNextChar)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x61ad04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), { ::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallbackBuffer.MovePrevious
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::CharEntityEncoderFallbackBuffer::*)()>(&::System::Xml::CharEntityEncoderFallbackBuffer::MovePrevious)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61ad0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), { ::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallbackBuffer.get_Remaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::CharEntityEncoderFallbackBuffer::*)()>(&::System::Xml::CharEntityEncoderFallbackBuffer::get_Remaining)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x61ad0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), { ::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallbackBuffer.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::CharEntityEncoderFallbackBuffer::*)()>(&::System::Xml::CharEntityEncoderFallbackBuffer::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61ad104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), { ::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallbackBuffer.SurrogateCharToUtf32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::CharEntityEncoderFallbackBuffer::*)(char16_t, char16_t)>(
    &::System::Xml::CharEntityEncoderFallbackBuffer::SurrogateCharToUtf32)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61ad030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(),
                                                                                           { "SurrogateCharToUtf32", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::CharEntityEncoderFallback*& System::Xml::CharEntityEncoderFallbackBuffer::__cordl_internal_get_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr ::System::Xml::CharEntityEncoderFallback* const& System::Xml::CharEntityEncoderFallbackBuffer::__cordl_internal_get_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr void System::Xml::CharEntityEncoderFallbackBuffer::__cordl_internal_set_parent(::System::Xml::CharEntityEncoderFallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parent = value;
}
constexpr ::StringW& System::Xml::CharEntityEncoderFallbackBuffer::__cordl_internal_get_charEntity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charEntity;
}
constexpr ::StringW const& System::Xml::CharEntityEncoderFallbackBuffer::__cordl_internal_get_charEntity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charEntity;
}
constexpr void System::Xml::CharEntityEncoderFallbackBuffer::__cordl_internal_set_charEntity(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___charEntity = value;
}
constexpr int32_t& System::Xml::CharEntityEncoderFallbackBuffer::__cordl_internal_get_charEntityIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charEntityIndex;
}
constexpr int32_t const& System::Xml::CharEntityEncoderFallbackBuffer::__cordl_internal_get_charEntityIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charEntityIndex;
}
constexpr void System::Xml::CharEntityEncoderFallbackBuffer::__cordl_internal_set_charEntityIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___charEntityIndex = value;
}
inline void System::Xml::CharEntityEncoderFallbackBuffer::_ctor(::System::Xml::CharEntityEncoderFallback* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::CharEntityEncoderFallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline bool System::Xml::CharEntityEncoderFallbackBuffer::Fallback(char16_t charUnknown, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, charUnknown, index);
}
inline bool System::Xml::CharEntityEncoderFallbackBuffer::Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, charUnknownHigh, charUnknownLow, index);
}
inline char16_t System::Xml::CharEntityEncoderFallbackBuffer::GetNextChar() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline bool System::Xml::CharEntityEncoderFallbackBuffer::MovePrevious() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::CharEntityEncoderFallbackBuffer::get_Remaining() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::CharEntityEncoderFallbackBuffer::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Xml::CharEntityEncoderFallbackBuffer::SurrogateCharToUtf32(char16_t highSurrogate, char16_t lowSurrogate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::CharEntityEncoderFallbackBuffer*>(),
                                                                                         { "SurrogateCharToUtf32", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, highSurrogate, lowSurrogate);
}
inline ::System::Xml::CharEntityEncoderFallbackBuffer* System::Xml::CharEntityEncoderFallbackBuffer::New_ctor(::System::Xml::CharEntityEncoderFallback* parent) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::CharEntityEncoderFallbackBuffer*>(parent));
}
// Ctor Parameters []
constexpr ::System::Xml::CharEntityEncoderFallbackBuffer::CharEntityEncoderFallbackBuffer() {}
